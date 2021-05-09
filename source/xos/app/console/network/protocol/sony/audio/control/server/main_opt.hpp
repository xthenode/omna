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
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 5/8/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPT_HPP

#include "xos/app/console/network/protocol/sony/audio/control/base/main.hpp"
#include "xos/app/console/network/protocol/http/server/main.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_SOCKETS_PORT 10000
#define XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_SOCKETS_RELAY_PORT 10101

#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_ARGS 0
#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace network {
namespace protocol {
namespace sony {
namespace audio {
namespace control {
namespace server {

/// class main_optt
template 
<class TExtends = sony::audio::control::base::maint<sony::audio::control::base::main_optt
<console::network::protocol::http::server::maint<> > >, 
 class TImplements = typename TExtends::implements>

class exported main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    main_optt() {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::content_type_which_t content_type_which_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;
    typedef typename extends::content_t content_t;

    typedef typename extends::response_status_t response_status_t;
    typedef typename extends::response_reason_t response_reason_t;
    typedef typename extends::response_line_t response_line_t;
    typedef typename extends::response_t response_t;

    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_resource_t request_resource_t;
    typedef typename extends::request_line_t request_line_t;
    typedef typename extends::request_t request_t;

    /// ...option...
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTVAL_C:
            err = this->on_accept_once_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTVAL_C:
            err = this->on_accept_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTVAL_C:
            err = this->on_relay_host_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTVAL_C:
            err = this->on_relay_port_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTVAL_C:
            chars = this->accept_once_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTVAL_C:
            chars = this->accept_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTVAL_C:
            chars = this->relay_host_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTVAL_C:
            chars = this->relay_port_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// ...port
    virtual short& accept_port() const {
        short& port = this->port();
        return port;
    }
    virtual short& connect_port() const {
        short& port = this->port();
        return port;
    }
    virtual short& set_relay_port(short to) {
        short& port = this->relay_port();
        port = to;
        return port;
    }
    virtual short& relay_port() const {
        static short port = XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_SOCKETS_RELAY_PORT;
        return port;
    }
    virtual short& set_port(short to) {
        short& port = this->port();
        port = to;
        return port;
    }
    virtual short& port() const {
        static short port = XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_SOCKETS_PORT;
        return port;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace server
} /// namespace control
} /// namespace audio
} /// namespace sony
} /// namespace protocol
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_OPT_HPP
