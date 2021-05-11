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
///   Date: 5/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/network/sockets/os/base/main.hpp"

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPT "connect"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTARG "[host][:port]"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTUSE "Connect"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTVAL_S "c::"
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTVAL_C 'c'
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTION \
   {XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTVAL_S \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTION \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_BASE_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_ARGS 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace client {

/// class main_optt
template 
<class TExtends = console::network::sockets::os::base::maint<console::network::sockets::os::base::main_optt< > >, 
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
    main_optt(): sockets_run_(0), connect_ep_(0), connect_tp_(0) {
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

    /// ...connect_run
    virtual int connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        err = all_connect(argc, argv, env);
        return err;
    }
    virtual int before_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_connect_run(argc, argv, env))) {
            int err2 = 0;
            err = connect_run(argc, argv, env);
            if ((err2 = after_connect_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    virtual int unset_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        sockets_run_ = 0;
        err = this->unset_sockets_run(argc, argv, env);
        return err;
    }
    virtual int set_connect_run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = this->all_set_sockets_run(argc, argv, env))) {
            sockets_run_ = &derives::connect_run;
        }
        return err;
    }
    virtual int before_set_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_connect_run(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_set_connect_run(argc, argv, env))) {
            int err2 = 0;
            err = set_connect_run(argc, argv, env);
            if ((err2 = after_set_connect_run(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...connect
    virtual int connect(int argc, char_t** argv, char_t**env) {
        int err = 0;
        return err;
    }
    virtual int before_connect(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_connect(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_connect(int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_connect(argc, argv, env))) {
            int err2 = 0;
            err = connect(argc, argv, env);
            if ((err2 = after_connect(argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...option...
    virtual int on_connect_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
            err = this->all_set_connect_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* connect_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTUSE;
        optarg = XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTVAL_C:
            err = this->on_connect_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_CONNECT_OPTVAL_C:
            chars = connect_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

    /// ...ep
    xos::network::sockets::endpoint& (derives::*connect_ep_)() const;
    virtual xos::network::sockets::endpoint& connect_ep() const {
        if ((this->connect_ep_)) {
            return (this->*connect_ep_)();
        }
        return this->default_connect_ep();
    }
    virtual xos::network::sockets::endpoint& default_connect_ep() const {
        return this->connect_ip_v4_ep();
    }
    virtual xos::network::sockets::endpoint& connect_ip_v4_ep() const {
        return this->ip_v4_ep();
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::endpoint& connect_ip_v6_ep() const {
        return this->ip_v6_ep();
    }
#endif /// !defined(WINSOCK_1)

    /// ...tp
    xos::network::sockets::transport& (derives::*connect_tp_)() const;
    virtual xos::network::sockets::transport& connect_tp() const {
        if ((this->connect_tp_)) {
            return (this->*connect_tp_)();
        }
        return this->default_connect_tp();
    }
    virtual xos::network::sockets::transport& default_connect_tp() const {
        return this->connect_ip_v4_tcp_tp();
    }
    virtual xos::network::sockets::transport& connect_ip_v4_tcp_tp() const {
        return this->ip_v4_tcp_tp();
    }
#if !defined(WINSOCK_1)
    virtual xos::network::sockets::transport& connect_ip_v6_tcp_tp() const {
        return this->ip_v6_tcp_tp();
    }
#endif /// !defined(WINSOCK_1)

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace client
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_OPT_HPP
