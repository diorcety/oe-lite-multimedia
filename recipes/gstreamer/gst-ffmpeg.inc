LICENSE = "LGPL-2.1+ | GPL-2.0+"
HOMEPAGE = "http://www.gstreamer.net/"

DEPENDS += "libgstbase libz"

EXTRA_OECONF_ALTIVEC = "--disable-altivec"
EXTRA_OECONF_ALTIVEC:HOST_OS_linux-gnualtivec = ""

inherit gst-plugins autotools-autoreconf pkgconfig auto-package-libs

FILES_${PN} += "${libdir}/gstreamer-${LIBV}/*.so"
RDEPENDS_${PN} += "libz libgstbase"
FILES_${PN}-dev += "${libdir}/gstreamer-${LIBV}/*.la ${libdir}/gstreamer-${LIBV}/*.a"

PACKAGES += "${PN}-all"
RDEPENDS_${PN}-all = "${LIBS_AUTO_RPACKAGES}"
