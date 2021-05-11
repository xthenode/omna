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
#   File: httpd.pri
#
# Author: $author$
#   Date: 5/9/2021
#
# QtCreator .pri file for omna executable httpd
########################################################################

########################################################################
# httpd

# httpd TARGET
#
httpd_TARGET = httpd

# httpd INCLUDEPATH
#
httpd_INCLUDEPATH += \
$${omna_INCLUDEPATH} \

# httpd DEFINES
#
httpd_DEFINES += \
$${omna_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_SERVER_MAIN_INSTANCE \

########################################################################
# httpd OBJECTIVE_HEADERS
#
#httpd_OBJECTIVE_HEADERS += \
#$${OMNA_SRC}/xos/app/console/httpd/main.hh \

# httpd OBJECTIVE_SOURCES
#
#httpd_OBJECTIVE_SOURCES += \
#$${OMNA_SRC}/xos/app/console/httpd/main.mm \

########################################################################
# httpd HEADERS
#
httpd_HEADERS += \
$${OMNA_SRC}/xos/app/console/protocol/http/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/http/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/protocol/http/client/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/http/client/main.hpp \
\
$${OMNA_SRC}/xos/app/console/protocol/http/server/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/protocol/http/server/main.hpp \
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
$${OMNA_SRC}/xos/app/console/network/sockets/server/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/sockets/server/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/http/base/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/http/base/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/http/client/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/http/client/main.hpp \
\
$${OMNA_SRC}/xos/app/console/network/protocol/http/server/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/network/protocol/http/server/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# httpd SOURCES
#
httpd_SOURCES += \
$${OMNA_SRC}/xos/app/console/network/protocol/http/server/main_opt.cpp \
$${OMNA_SRC}/xos/app/console/network/protocol/http/server/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# httpd FRAMEWORKS
#
httpd_FRAMEWORKS += \
$${omna_FRAMEWORKS} \

# httpd LIBS
#
httpd_LIBS += \
$${omna_LIBS} \


