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
#   File: omna.pri
#
# Author: $author$
#   Date: 4/29/2021
#
# QtCreator .pri file for omna executable omna
########################################################################

########################################################################
# omna

# omna_exe TARGET
#
omna_exe_TARGET = omna

# omna_exe INCLUDEPATH
#
omna_exe_INCLUDEPATH += \
$${omna_INCLUDEPATH} \

# omna_exe DEFINES
#
omna_exe_DEFINES += \
$${omna_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \
XOS_APP_CONSOLE_OMNA_MAIN_INSTANCE \

########################################################################
# omna_exe OBJECTIVE_HEADERS
#
#omna_exe_OBJECTIVE_HEADERS += \
#$${OMNA_SRC}/xos/app/console/omna/main.hh \

# omna_exe OBJECTIVE_SOURCES
#
#omna_exe_OBJECTIVE_SOURCES += \
#$${OMNA_SRC}/xos/app/console/omna/main.mm \

########################################################################
# omna_exe HEADERS
#
omna_exe_HEADERS += \
$${OMNA_SRC}/xos/app/console/omna/main_opt.hpp \
$${OMNA_SRC}/xos/app/console/omna/main.hpp \
\
$${NADIR_SRC}/xos/console/main_main.hpp \

# omna_exe SOURCES
#
omna_exe_SOURCES += \
$${OMNA_SRC}/xos/app/console/omna/main_opt.cpp \
$${OMNA_SRC}/xos/app/console/omna/main.cpp \
\
$${NADIR_SRC}/xos/console/main_main.cpp \

########################################################################
# omna_exe FRAMEWORKS
#
omna_exe_FRAMEWORKS += \
$${omna_FRAMEWORKS} \

# omna_exe LIBS
#
omna_exe_LIBS += \
$${omna_LIBS} \


