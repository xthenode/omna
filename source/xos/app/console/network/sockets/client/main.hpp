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
///   File: main.hpp
///
/// Author: $author$
///   Date: 5/9/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_HPP

#include "xos/app/console/network/sockets/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace client {

/// class maint
template 
<class TExtends = console::network::sockets::client::main_optt< >, 
 class TImplements = typename TExtends::implements>

class exported maint: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef maint derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    /// constructor / destructor
    maint() {
    }
    virtual ~maint() {
    }
private:
    maint(const maint& copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    /// ...connect
    virtual int connect(int argc, char_t** argv, char_t**env) {
        const xos::network::sockets::sockstring_t& host = this->connect_host();
        const xos::network::sockets::sockport_t& port = this->connect_port();
        xos::network::sockets::endpoint& ep = this->connect_ep();
        xos::network::sockets::transport& tp = this->connect_tp();
        xos::network::sockets::interface &cn = this->connect_iface();
        int err = 0;

        if ((ep.attach(host, port))) {

            if ((cn.open(tp))) {
                
                if ((cn.connect(ep))) {
                    
                    this->all_connect(cn, argc, argv, env);
                }
                cn.close();
            }
            ep.detach();
        }
        return err;
    }

    /// ...connect
    virtual int connect(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        if (!(err = this->all_send_request(cn, argc, argv, env))) {
            err = this->all_recv_response(cn, argc, argv, env);
        }
        return err;
    }
    virtual int before_connect(xos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_connect(xos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_connect(xos::network::sockets::interface& cn, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_connect(cn, argc, argv, env))) {
            int err2 = 0;
            err = connect(cn, argc, argv, env);
            if ((err2 = after_connect(cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...send_request
    virtual int send_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        string_t& connect_request = this->connect_request();
        int err = 0;
        err = this->all_send_request(cn, connect_request, argc, argv, env);
        return err;
    }

    /// ...recv_response
    virtual int recv_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        string_t& connect_response = this->connect_response();
        int err = 0;
        err = this->all_recv_response(connect_response, cn, argc, argv, env);
        return err;
    }

    /// connect request / response
    virtual string_t& connect_request() const {
        static string_t request(this->default_request());
        return request;
    }
    virtual string_t& connect_response() const {
        static string_t response(this->default_response());
        return response;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace sockets
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_CLIENT_MAIN_HPP
