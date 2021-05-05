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
#   File: libomna.pro
#
# Author: $author$
#   Date: 4/29/2021
#
# QtCreator .pro file for omna library libomna
########################################################################
include(../../../../../../build/QtCreator/omna.pri)
include(../../../../../build/QtCreator/omna.pri)
include(../../../../QtCreator/omna.pri)
include(../../omna.pri)
include(../../../../QtCreator/lib/libomna/libomna.pri)

TARGET = $${libomna_TARGET}
TEMPLATE = $${libomna_TEMPLATE}
CONFIG += $${libomna_CONFIG}

########################################################################
# INCLUDEPATH
#
INCLUDEPATH += \
$${libomna_INCLUDEPATH} \

# DEFINES
# 
DEFINES += \
$${libomna_DEFINES} \

########################################################################
# OBJECTIVE_HEADERS
#
OBJECTIVE_HEADERS += \
$${libomna_OBJECTIVE_HEADERS} \

# OBJECTIVE_SOURCES
#
OBJECTIVE_SOURCES += \
$${libomna_OBJECTIVE_SOURCES} \

########################################################################
# HEADERS
#
HEADERS += \
$${libomna_HEADERS} \
$${libomna_OBJECTIVE_HEADERS} \

# SOURCES
#
SOURCES += \
$${libomna_SOURCES} \

########################################################################


