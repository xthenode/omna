########################################################################
# Copyright (c) 1988-2021 $organization$
#
# This software is provided by the author and contributors ``as is''
# and any express or implied warranties, including, but not limited to,
# the implied warranties of merchantability and fitness for a particular
# purpose are disclaimed. In no event shall the author or contributors
# be liable for any direct, indirect, incidental, special, exemplary,
# or consequential damages (including, but not limited to, procurement
# of substitute goods or services; loss of use, data, or profits; or
# business interruption) however caused and on any theory of liability,
# whether in contract, strict liability, or tort (including negligence
# or otherwise) arising in any way out of the use of this software,
# even if advised of the possibility of such damage.
#
#   File: sony.pri
#
# Author: $author$
#   Date: 5/2/2021
#
# QtCreator .pri file for omna executable sony
########################################################################

########################################################################
# sony

# sony TARGET
#
sony_TARGET = sony

# sony INCLUDEPATH
#
sony_INCLUDEPATH += \
$${omna_INCLUDEPATH} \

# sony DEFINES
#
sony_DEFINES += \
$${omna_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_CLIENT_MAIN_INSTANCE \

########################################################################
# sony OBJECTIVE_HEADERS
#
#sony_OBJECTIVE_HEADERS += \
#$${OMNA_SRC}/xos/app/console/sony/main.hh \

# sony OBJECTIVE_SOURCES
#
#sony_OBJECTIVE_SOURCES += \
#$${OMNA_SRC}/xos/app/console/sony/main.mm \

########################################################################
# sony HEADERS
#
sony_HEADERS += \
$${OMNA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/http/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/protocol/http/client/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/http/client/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/sockets/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/sockets/os/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/sockets/os/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/sockets/client/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/sockets/client/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/http/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/http/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/http/client/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/http/client/main.hpp \
\
$${OMNA_SRC}/xos/app/console/protocol/sony/audio/control/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/sony/audio/control/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/protocol/sony/audio/control/client/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/sony/audio/control/client/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/client/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/client/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# sony SOURCES
#
sony_SOURCES += \
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/client/main_opt.cpp \
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/client/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# sony FRAMEWORKS
#
sony_FRAMEWORKS += \
$${omna_FRAMEWORKS} \

# sony LIBS
#
sony_LIBS += \
$${omna_LIBS} \


