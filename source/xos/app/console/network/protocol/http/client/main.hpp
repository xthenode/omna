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
#ifndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CLIENT_MAIN_HPP

#include "xos/app/console/network/protocol/http/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace protocol {
namespace http {
namespace client {

/// class maint
template 
<class TExtends = main_opt, 
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

    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::content_type_which_t content_type_which_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;
    typedef typename extends::content_t content_t;

    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_resource_t request_resource_t;
    typedef typename extends::request_line_t request_line_t;
    typedef typename extends::request_t request_t;

    typedef typename extends::response_status_t response_status_t;
    typedef typename extends::response_reason_t response_reason_t;
    typedef typename extends::response_line_t response_line_t;
    typedef typename extends::response_t response_t;

    /// ...send_request
    virtual int send_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        request_t& request = this->request();
        err = all_send_request(cn, request, argc, argv, env);
        return err;
    }
    virtual int send_request(xos::network::sockets::interface& cn, request_t& request, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t count = 0;
        xos::network::sockets::writer writer(cn);
        request.write(count, writer);
        return err;
    }
    virtual int before_send_request(xos::network::sockets::interface& cn, request_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_send_request(xos::network::sockets::interface& cn, request_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_send_request(xos::network::sockets::interface& cn, request_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_send_request(cn, request, argc, argv, env))) {
            int err2 = 0;
            err = send_request(cn, request, argc, argv, env);
            if ((err2 = after_send_request(cn, request, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...recv_response
    virtual int recv_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_t& response = this->response();
        err = all_recv_response(response, cn, argc, argv, env);
        return err;
    }
    virtual int recv_response(response_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        char_t c = 0; 
        ssize_t count = 0;
        xos::network::sockets::reader reader(cn);
        if ((response.read_with_content(count, c, reader))) {
            err = all_process_response(response, reader, argc, argv, env);
        }
        return err;
    }
    virtual int before_recv_response(response_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_recv_response(response_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_recv_response(response_t& response, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_recv_response(response, cn, argc, argv, env))) {
            int err2 = 0;
            err = recv_response(response, cn, argc, argv, env);
            if ((err2 = after_recv_response(response, cn, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response
    virtual int process_response(response_t& response, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = process_response_default(response, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_response(response_t& response, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response(response_t& response, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response(response_t& response, reader_t& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        if (!(err = before_process_response(response, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response(response, reader, argc, argv, env);
            if ((err2 = after_process_response(response, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...process_response_default
    virtual int process_response_default(response_t &response, reader_t& reader, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0; 
        if ((chars = response.has_chars(length))) {
            this->out(chars, length);
            if ((chars = response.content_chars(length))) {
                this->out(chars, length);
            }
            this->outln();
            this->out_flush();
        }
        return err;
    }
    virtual int before_process_response_default(response_t& response, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_response_default(response_t& response, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_response_default(response_t& response, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_response_default(response, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_response_default(response, reader, argc, argv, env);
            if ((err2 = after_process_response_default(response, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace http
} /// namespace protocol
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_CLIENT_MAIN_HPP
