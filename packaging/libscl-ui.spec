%define _optdir /opt
%define _appdir %{_optdir}/apps

Name:       libscl-ui
Summary:    A library for developing XML-based software keyboards
Version:    0.4.7
Release:    1
Group:      System Environment/Libraries
License:    Apache License, Version 2.0
Source0:    libscl-ui-%{version}.tar.gz
BuildRequires:  gettext-tools
BuildRequires:  cmake
BuildRequires:  pkgconfig(elementary)
BuildRequires:  pkgconfig(utilX)
BuildRequires:  pkgconfig(vconf)
BuildRequires:  pkgconfig(feedback)
BuildRequires:  pkgconfig(sensor)
BuildRequires:  pkgconfig(dlog)
BuildRequires:  pkgconfig(x11)
BuildRequires:  pkgconfig(libxml-2.0)
BuildRequires:  pkgconfig(tts)


%description
A library that helps developing S/W Keyboard

%package devel
Summary:    SCL header file
Group:      Development/Libraries
Requires:   %{name} = %{version}-%{release}

%description devel
A devel pacakge of libscl-ui library that helps developing S/W Keyboard

%prep
%setup -q


%build
export CFLAGS+=" -DTIZEN_DEBUG_ENABLE"
export CXXFLAGS+=" -DTIZEN_DEBUG_ENABLE"
export FFLAGS+=" -DTIZEN_DEBUG_ENABLE"

rm -rf CMakeFiles
rm -rf CMakeCache.txt
cmake . -DCMAKE_INSTALL_PREFIX=%{_prefix}
make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}
mkdir -p %{buildroot}/usr/share/license
cp LICENSE %{buildroot}/usr/share/license/%{name}

%make_install



%post

%postun

%files
%defattr(-,root,root,-)
%{_libdir}/libscl-ui.so
%{_datadir}/libscl-ui/metadata.xml
/usr/share/license/%{name}

%files devel
%defattr(-,root,root,-)
%{_includedir}/*
%{_libdir}/pkgconfig/libscl-ui.pc
%{_bindir}/xml2binary
