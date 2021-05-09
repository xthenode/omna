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
///   Date: 5/6/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPT_HPP

#include "xos/app/console/network/sockets/os/base/main.hpp"

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPT "accept-one"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTARG ""
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTUSE "Accept one connection"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTVAL_S "1::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTVAL_C '1'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPT "accept"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTARG "[1..n]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTUSE "Accept [n] connections"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTVAL_S "a::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTVAL_C 'a'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPT "relay-host"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTARG "[{ name | ddd.ddd.ddd.ddd }]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTUSE "Relay hostname or address"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTVAL_S "s::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTVAL_C 's'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPT "relay-port"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTARG "[{ 0..2^16-1 }]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTUSE "Relay port number"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTVAL_S "t::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTVAL_C 't'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTVAL_S \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTVAL_S \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTVAL_S \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTVAL_S \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_INFO_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_HOST_OPTION \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_PORT_OPTION \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTION \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTION \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_VERSION_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ARGS 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace server {

/// class main_optt
template 
<class TExtends = console::network::sockets::os::base::maint<console::network::sockets::os::base::main_optt<> >, 
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
    main_optt(): sockets_run_(0) {
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

    /// ...sockets_run
    int (derives::*sockets_run_)(int argc, char_t** argv, char_t** env);
    virtual int sockets_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((sockets_run_)) {
            err = (this->*sockets_run_)(argc, argv, env);
        } else {
            err = extends::sockets_run(argc, argv, env);
        }
        return err;
    }

    /// ...accept_run
    virtual int accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_accept(argc, argv, env);
        return err;
    }
    virtual int before_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_accept_run(argc, argv, env))) {
            int err2 = 0;
            err = accept_run(argc, argv, env);
            if ((err2 = after_accept_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_accept_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_set_sockets_run(argc, argv, env))) {
            sockets_run_ = &derives::accept_run;
        }
        return err;
    }
    virtual int before_set_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_accept_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_accept_run(argc, argv, env))) {
            int err2 = 0;
            err = set_accept_run(argc, argv, env);
            if ((err2 = after_set_accept_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...accept_one_run
    virtual int accept_one_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        set_accept_one();
        err = all_accept(argc, argv, env);
        set_accept_one(false);
        return err;
    }
    virtual int before_accept_one_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_accept_one_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_accept_one_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_accept_one_run(argc, argv, env))) {
            int err2 = 0;
            err = accept_one_run(argc, argv, env);
            if ((err2 = after_accept_one_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int set_accept_one_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_set_sockets_run(argc, argv, env))) {
            sockets_run_ = &derives::accept_one_run;
        }
        return err;
    }
    virtual int before_set_accept_one_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_accept_one_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_accept_one_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_accept_one_run(argc, argv, env))) {
            int err2 = 0;
            err = set_accept_one_run(argc, argv, env);
            if ((err2 = after_set_accept_one_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...accept
    virtual int accept(int argc, char_t** argv, char_t**env) {
        int err = 0;
        err = this->usage(argc, argv, env);
        return err;
    }
    virtual int before_accept(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_accept(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_accept(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_accept(argc, argv, env))) {
            int err2 = 0;
            err = accept(argc, argv, env);
            if ((err2 = after_accept(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...option...
    virtual int on_accept_once_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = set_accept_one_run(argc, argv, env);
        return err;
    }
    virtual const char_t* accept_once_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_ONE_OPTARG;
        return chars;
    }
    virtual int on_accept_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = set_accept_run(argc, argv, env);
        return err;
    }
    virtual const char_t* accept_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTARG;
        return chars;
    }
    virtual int on_relay_host_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = this->set_relay_host_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* relay_host_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTARG;
        return chars;
    }
    virtual int on_relay_port_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = this->set_relay_port_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* relay_port_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTARG;
        return chars;
    }
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
            chars = accept_once_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ACCEPT_OPTVAL_C:
            chars = accept_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_HOST_OPTVAL_C:
            chars = relay_host_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_RELAY_PORT_OPTVAL_C:
            chars = relay_port_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// ...accept_...
    virtual bool& set_accept_one(bool to = true) {
        bool& accept_one = this->accept_one();
        accept_one = to;
        return accept_one;
    }
    virtual bool& accept_one() const {
        static bool accept_one = false;
        return accept_one;
    }
    virtual bool& set_accept_done(bool to = true) {
        bool& accept_done = this->accept_done();
        accept_done = to;
        return accept_done;
    }
    virtual bool& accept_done() const {
        static bool accept_done = false;
        return accept_done;
    }
    virtual bool& set_accept_restart(bool to = true) {
        bool& accept_restart = this->accept_restart();
        accept_restart = to;
        return accept_restart;
    }
    virtual bool& accept_restart() const {
        static bool accept_restart = false;
        return accept_restart;
    }

    /// ...ep
    xos::network::sockets::endpoint& (derives::*accept_ep_)() const;
    virtual xos::network::sockets::endpoint& accept_ep() const {
        if ((this->accept_ep_)) {
            return (this->*accept_ep_)();
        }
        return this->default_accept_ep();
    }
    virtual xos::network::sockets::endpoint& default_accept_ep() const {
        return this->accept_ip_v4_ep();
    }
    virtual xos::network::sockets::endpoint& accept_ip_v4_ep() const {
        return this->ip_v4_ep();
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::endpoint& accept_ip_v6_ep() const {
        return this->ip_v6_ep();
    }
#endif /// !defined(WINSOCK_1)

    /// ...tp
    xos::network::sockets::transport& (derives::*accept_tp_)() const;
    virtual xos::network::sockets::transport& accept_tp() const {
        if ((this->accept_tp_)) {
            return (this->*accept_tp_)();
        }
        return this->default_accept_tp();
    }
    virtual xos::network::sockets::transport& default_accept_tp() const {
        return this->accept_ip_v4_tcp_tp();
    }
    virtual xos::network::sockets::transport& accept_ip_v4_tcp_tp() const {
        return this->ip_v4_tcp_tp();
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::transport& accept_ip_v6_tcp_tp() const {
        return this->ip_v6_tcp_tp();
    }
#endif /// !defined(WINSOCK_1)

    /// ...ep
    xos::network::sockets::endpoint& (derives::*relay_ep_)() const;
    virtual xos::network::sockets::endpoint& relay_ep() const {
        if ((this->relay_ep_)) {
            return (this->*relay_ep_)();
        }
        return this->default_relay_ep();
    }
    virtual xos::network::sockets::endpoint& default_relay_ep() const {
        return this->relay_ip_v4_ep();
    }
    virtual xos::network::sockets::endpoint& relay_ip_v4_ep() const {
        return this->ip_v4_ep();
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::endpoint& relay_ip_v6_ep() const {
        return this->ip_v6_ep();
    }
#endif /// !defined(WINSOCK_1)

    /// ...tp
    xos::network::sockets::transport& (derives::*relay_tp_)() const;
    virtual xos::network::sockets::transport& relay_tp() const {
        if ((this->relay_tp_)) {
            return (this->*relay_tp_)();
        }
        return this->default_relay_tp();
    }
    virtual xos::network::sockets::transport& default_relay_tp() const {
        return this->relay_ip_v4_tcp_tp();
    }
    virtual xos::network::sockets::transport& relay_ip_v4_tcp_tp() const {
        return this->ip_v4_tcp_tp();
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::transport& relay_ip_v6_tcp_tp() const {
        return this->ip_v6_tcp_tp();
    }
#endif /// !defined(WINSOCK_1)

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace server
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_SERVER_MAIN_OPT_HPP
