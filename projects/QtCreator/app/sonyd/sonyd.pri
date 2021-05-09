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
#   File: sonyd.pri
#
# Author: $author$
#   Date: 5/5/2021
#
# QtCreator .pri file for omna executable sonyd
########################################################################

########################################################################
# sonyd

# sonyd TARGET
#
sonyd_TARGET = sonyd

# sonyd INCLUDEPATH
#
sonyd_INCLUDEPATH += \
$${omna_INCLUDEPATH} \

# sonyd DEFINES
#
sonyd_DEFINES += \
$${omna_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_INSTANCE \

########################################################################
# sonyd OBJECTIVE_HEADERS
#
#sonyd_OBJECTIVE_HEADERS += \
#$${OMNA_SRC}/xos/app/console/sonyd/main.hh \

# sonyd OBJECTIVE_SOURCES
#
#sonyd_OBJECTIVE_SOURCES += \
#$${OMNA_SRC}/xos/app/console/sonyd/main.mm \

########################################################################
# sonyd HEADERS
#
sonyd_HEADERS += \
$${OMNA_SRC}/xos/app/console/lib/rete/version/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/lib/rete/version/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/sockets/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/sockets/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/sockets/os/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/sockets/os/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/sockets/server/main.hpp \
\
$${OMNA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/http/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/protocol/http/server/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/http/server/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/http/server/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/http/server/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/server/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/server/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# sonyd SOURCES
#
sonyd_SOURCES += \
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/server/main_opt.cpp \
$${OMNA_SRC}/xos/app/console/network/protocol/sony/audio/control/server/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# sonyd FRAMEWORKS
#
sonyd_FRAMEWORKS += \
$${omna_FRAMEWORKS} \

# sonyd LIBS
#
sonyd_LIBS += \
$${omna_LIBS} \
