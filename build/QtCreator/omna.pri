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
# Build specific QtCreator .pri file for omna
########################################################################
contains(BUILD_OS,Uname) {
UNAME = $$system(uname)

contains(UNAME,Darwin) {
BUILD_OS = macosx
} else {
contains(UNAME,Linux) {
BUILD_OS = linux
} else {
contains(UNAME,Windows) {
BUILD_OS = windows
} else {
BUILD_OS = os
} # contains(UNAME,Windows)
} # contains(UNAME,Linux)
} # contains(UNAME,Darwin)
} else {
contains(BUILD_OS,OMNA_OS) {
} else {
BUILD_OS = os
} # contains(BUILD_OS,OMNA_OS)
} # contains(BUILD_OS,Uname)

#BUILD_CPP_VERSION = 11

########################################################################
# rostra
#
# pkg-config --cflags --libs rostra
#

# build rostra INCLUDEPATH
#
build_rostra_INCLUDEPATH += \

# build rostra DEFINES
#
build_rostra_DEFINES += \

# build rostra FRAMEWORKS
#
build_rostra_FRAMEWORKS += \

# build rostra LIBS
#
build_rostra_LIBS += \

########################################################################
# nadir
#
# pkg-config --cflags --libs nadir
#

# build nadir INCLUDEPATH
#
build_nadir_INCLUDEPATH += \

# build nadir DEFINES
#
build_nadir_DEFINES += \

# build nadir FRAMEWORKS
#
build_nadir_FRAMEWORKS += \

# build nadir LIBS
#
build_nadir_LIBS += \

########################################################################
# fila
#
# pkg-config --cflags --libs fila
#

# build fila INCLUDEPATH
#
build_fila_INCLUDEPATH += \

# build fila DEFINES
#
build_fila_DEFINES += \

# build fila FRAMEWORKS
#
build_fila_FRAMEWORKS += \

# build fila LIBS
#
build_fila_LIBS += \

########################################################################
# crono
#
# pkg-config --cflags --libs crono
#

# build crono INCLUDEPATH
#
build_crono_INCLUDEPATH += \

# build crono DEFINES
#
build_crono_DEFINES += \

# build crono FRAMEWORKS
#
build_crono_FRAMEWORKS += \

# build crono LIBS
#
build_crono_LIBS += \

########################################################################
# cifra
#
# pkg-config --cflags --libs cifra
#

# build cifra INCLUDEPATH
#
build_cifra_INCLUDEPATH += \

# build cifra DEFINES
#
build_cifra_DEFINES += \

# build cifra FRAMEWORKS
#
build_cifra_FRAMEWORKS += \

# build cifra LIBS
#
build_cifra_LIBS += \

########################################################################
# rete
#
# pkg-config --cflags --libs rete
#

# build rete INCLUDEPATH
#
build_rete_INCLUDEPATH += \

# build rete DEFINES
#
build_rete_DEFINES += \

# build rete FRAMEWORKS
#
build_rete_FRAMEWORKS += \

# build rete LIBS
#
build_rete_LIBS += \

########################################################################
# stara
#
# pkg-config --cflags --libs stara
#

# build stara INCLUDEPATH
#
build_stara_INCLUDEPATH += \

# build stara DEFINES
#
build_stara_DEFINES += \

# build stara FRAMEWORKS
#
build_stara_FRAMEWORKS += \

# build stara LIBS
#
build_stara_LIBS += \

########################################################################
# talas
#
# pkg-config --cflags --libs talas
#

# build talas INCLUDEPATH
#
build_talas_INCLUDEPATH += \

# build talas DEFINES
#
build_talas_DEFINES += \

# build talas FRAMEWORKS
#
build_talas_FRAMEWORKS += \

# build talas LIBS
#
build_talas_LIBS += \

########################################################################
# versa
#
# pkg-config --cflags --libs versa
#

# build versa INCLUDEPATH
#
build_versa_INCLUDEPATH += \

# build versa DEFINES
#
build_versa_DEFINES += \

# build versa FRAMEWORKS
#
build_versa_FRAMEWORKS += \

# build versa LIBS
#
build_versa_LIBS += \

########################################################################
# omna

# build omna INCLUDEPATH
#
build_omna_INCLUDEPATH += \
$${build_versa_INCLUDEPATH} \
$${build_talas_INCLUDEPATH} \
$${build_stara_INCLUDEPATH} \
$${build_rete_INCLUDEPATH} \
$${build_cifra_INCLUDEPATH} \
$${build_crono_INCLUDEPATH} \
$${build_fila_INCLUDEPATH} \
$${build_nadir_INCLUDEPATH} \
$${build_rostra_INCLUDEPATH} \


# build omna DEFINES
#
build_omna_DEFINES += \
$${build_rostra_DEFINES} \
$${build_nadir_DEFINES} \
$${build_fila_DEFINES} \
$${build_crono_DEFINES} \
$${build_cifra_DEFINES} \
$${build_rete_DEFINES} \
$${build_stara_DEFINES} \
$${build_talas_DEFINES} \
$${build_versa_DEFINES} \


# build omna FRAMEWORKS
#
build_omna_FRAMEWORKS += \
$${build_versa_FRAMEWORKS} \
$${build_talas_FRAMEWORKS} \
$${build_stara_FRAMEWORKS} \
$${build_rete_FRAMEWORKS} \
$${build_cifra_FRAMEWORKS} \
$${build_crono_FRAMEWORKS} \
$${build_fila_FRAMEWORKS} \
$${build_nadir_FRAMEWORKS} \
$${build_rostra_FRAMEWORKS} \


# build omna LIBS
#
build_omna_LIBS += \
$${build_versa_LIBS} \
$${build_talas_LIBS} \
$${build_stara_LIBS} \
$${build_rete_LIBS} \
$${build_cifra_LIBS} \
$${build_crono_LIBS} \
$${build_fila_LIBS} \
$${build_nadir_LIBS} \
$${build_rostra_LIBS} \


