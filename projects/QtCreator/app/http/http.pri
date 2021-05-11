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
#   File: http.pri
#
# Author: $author$
#   Date: 4/29/2021
#
# QtCreator .pri file for omna executable http
########################################################################

########################################################################
# http

# http TARGET
#
http_TARGET = http

# http INCLUDEPATH
#
http_INCLUDEPATH += \
$${omna_INCLUDEPATH} \

# http DEFINES
#
http_DEFINES += \
$${omna_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CLIENT_MAIN_INSTANCE \

########################################################################
# http OBJECTIVE_HEADERS
#
#http_OBJECTIVE_HEADERS += \
#$${OMNA_SRC}/xos/app/console/http/main.hh \

# http OBJECTIVE_SOURCES
#
#http_OBJECTIVE_SOURCES += \
#$${OMNA_SRC}/xos/app/console/http/main.mm \

########################################################################
# http HEADERS
#
http_HEADERS += \
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
$${NADIR_SRC}/xos/console/main_main.hpp \

# http SOURCES
#
http_SOURCES += \
$${OMNA_SRC}/xos/app/console/network/protocol/http/client/main_opt.cpp \
$${OMNA_SRC}/xos/app/console/network/protocol/http/client/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# http FRAMEWORKS
#
http_FRAMEWORKS += \
$${omna_FRAMEWORKS} \

# http LIBS
#
http_LIBS += \
$${omna_LIBS} \


