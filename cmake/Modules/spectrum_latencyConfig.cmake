INCLUDE(FindPkgConfig)
PKG_CHECK_MODULES(PC_SPECTRUM_LATENCY spectrum_latency)

FIND_PATH(
    SPECTRUM_LATENCY_INCLUDE_DIRS
    NAMES spectrum_latency/api.h
    HINTS $ENV{SPECTRUM_LATENCY_DIR}/include
        ${PC_SPECTRUM_LATENCY_INCLUDEDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/include
          /usr/local/include
          /usr/include
)

FIND_LIBRARY(
    SPECTRUM_LATENCY_LIBRARIES
    NAMES gnuradio-spectrum_latency
    HINTS $ENV{SPECTRUM_LATENCY_DIR}/lib
        ${PC_SPECTRUM_LATENCY_LIBDIR}
    PATHS ${CMAKE_INSTALL_PREFIX}/lib
          ${CMAKE_INSTALL_PREFIX}/lib64
          /usr/local/lib
          /usr/local/lib64
          /usr/lib
          /usr/lib64
)

INCLUDE(FindPackageHandleStandardArgs)
FIND_PACKAGE_HANDLE_STANDARD_ARGS(SPECTRUM_LATENCY DEFAULT_MSG SPECTRUM_LATENCY_LIBRARIES SPECTRUM_LATENCY_INCLUDE_DIRS)
MARK_AS_ADVANCED(SPECTRUM_LATENCY_LIBRARIES SPECTRUM_LATENCY_INCLUDE_DIRS)

