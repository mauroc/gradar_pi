##---------------------------------------------------------------------------
## Plagiarized by: Dave Cowell for WINDOWS
##
## Author:      bdbcat aka. dsr (Dave Register)
## Copyright:
## License:     wxWidgets License
##---------------------------------------------------------------------------

# define minimum cmake version
CMAKE_MINIMUM_REQUIRED(VERSION 2.6.2)

PROJECT(gradar_pi)

SET(PACKAGE_NAME gradar_pi)
SET(VERBOSE_NAME GRadar)
SET(TITLE_NAME GRadar)
SET(CPACK_PACKAGE_CONTACT "Dave Register")

SET(VERSION_MAJOR "1")
SET(VERSION_MINOR "5")

#SET(CMAKE_BUILD_TYPE Debug)

INCLUDE("cmake/PluginConfigure.cmake")

# For convenience we define the sources as a variable. You can add
# header files and cpp/c files and CMake will sort them out

SET(SRC_GRADAR
        src/gradar_pi.h
        src/gradar_pi.cpp
        src/gradardialog.cpp
        src/gradardialog.h
        src/GRadarUI.cpp
        src/GRadarUI.h
        src/georef.h
        src/georef.cpp

)
SET(SRC_NMEA0183
        src/nmea0183/LatLong.hpp
        src/nmea0183/latlong.cpp
        src/nmea0183/long.cpp
        src/nmea0183/nmea0183.cpp
        src/nmea0183/nmea0183.hpp
        src/nmea0183/Response.hpp
        src/nmea0183/response.cpp
        src/nmea0183/RMB.hpp
        src/nmea0183/rmb.cpp
        src/nmea0183/Sentence.hpp
        src/nmea0183/sentence.cpp
        src/nmea0183/talkerid.cpp
        src/nmea0183/RMC.HPP
        src/nmea0183/rmc.cpp
        src/nmea0183/hexvalue.cpp
        src/nmea0183/lat.cpp
        src/nmea0183/expid.cpp
        src/nmea0183/wpl.hpp
        src/nmea0183/wpl.cpp
        src/nmea0183/rte.hpp
        src/nmea0183/rte.cpp
        src/nmea0183/hdt.hpp
        src/nmea0183/hdt.cpp
        src/nmea0183/hdg.hpp
        src/nmea0183/hdg.cpp
        src/nmea0183/hdm.hpp
        src/nmea0183/hdm.cpp
        src/nmea0183/gll.hpp
        src/nmea0183/gll.cpp
        src/nmea0183/vtg.hpp
        src/nmea0183/vtg.cpp
        src/nmea0183/gga.hpp
        src/nmea0183/gga.cpp
        src/nmea0183/gsv.hpp
        src/nmea0183/gsv.cpp
        src/nmea0183/GPwpl.cpp
        src/nmea0183/GPwpl.hpp
        src/nmea0183/apb.cpp
        src/nmea0183/apb.hpp
        src/nmea0183/vhw.hpp
        src/nmea0183/vhw.cpp
)
INCLUDE_DIRECTORIES(src/nmea0183)

ADD_LIBRARY(${PACKAGE_NAME} SHARED ${SRC_GRADAR} ${SRC_NMEA0183})

INCLUDE("cmake/PluginInstall.cmake")
INCLUDE("cmake/PluginLocalization.cmake")
INCLUDE("cmake/PluginPackage.cmake")
