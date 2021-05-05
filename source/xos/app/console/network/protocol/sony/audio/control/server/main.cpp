///////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2021 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main.cpp
///
/// Author: $author$
///   Date: 5/3/2021
///////////////////////////////////////////////////////////////////////
#include "xos/network/protocol/sony/audio/control/server/main.hpp"

#if !defined(XOS_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_INSTANCE)
///#define XOS_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_INSTANCE
#endif /// !defined(XOS_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_NSTANCE)

namespace xos {
namespace network {
namespace protocol {
namespace sony {
namespace audio {
namespace control {
namespace server {

/// class main
#if defined(XOS_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_INSTANCE)
static main the_main;
#endif /// defined(XOS_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_INSTANCE)

} /// namespace server
} /// namespace control
} /// namespace audio
} /// namespace sony
} /// namespace protocol
} /// namespace network
} /// namespace xos