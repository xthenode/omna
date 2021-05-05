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
#   File: libomna.pri
#
# Author: $author$
#   Date: 4/29/2021
#
# QtCreator .pri file for omna library libomna
########################################################################

########################################################################
# libomna

# libomna TARGET
#
libomna_TARGET = omna
libomna_TEMPLATE = lib
libomna_CONFIG += staticlib

# libomna INCLUDEPATH
#
libomna_INCLUDEPATH += \
$${omna_INCLUDEPATH} \

# libomna DEFINES
#
libomna_DEFINES += \
$${omna_DEFINES} \
DEFAULT_LOGGING_LEVELS_ERROR \

########################################################################
# libomna OBJECTIVE_HEADERS
#
#libomna_OBJECTIVE_HEADERS += \
#$${OMNA_SRC}/xos/app/console/omna/main.hh \

# libomna OBJECTIVE_SOURCES
#
#libomna_OBJECTIVE_SOURCES += \
#$${OMNA_SRC}/xos/app/console/omna/main.mm \

########################################################################
# libomna HEADERS
#
libomna_HEADERS += \
$${OMNA_SRC}/xos/lib/omna/version.hpp \

# libomna SOURCES
#
libomna_SOURCES += \
$${OMNA_SRC}/xos/lib/omna/version.cpp \

########################################################################



