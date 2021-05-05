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
///   Date: 4/30/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_MAIN_HPP

#include "xos/app/console/network/protocol/http/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace protocol {
namespace http {

/// class maint
template 
<class TExtends = network::protocol::http::main_optt<>, 
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

    typedef typename extends::headers_t headers_t;
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

    /// ...request
    virtual int before_send_request(xos::network::sockets::interface& cn, string_t& request, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        request_t& rq = this->request();
        
        if ((chars = rq.has_chars(length))) {
            request.assign(chars, length);
            if ((chars = rq.content_chars(length))) {
                request.append(chars, length);
            }
        }
        return err;
    }
    virtual int recv_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        request_t& rq = this->request();
        err = recv_request(rq, cn, argc, argv, env);
        return err;
    }
    virtual int recv_request(request_t& rq, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        xos::network::sockets::reader reader(cn);
        err = recv_request(rq, reader, argc, argv, env);
        return err;
    }
    virtual int recv_request(request_t& rq, xos::network::sockets::reader& reader, int argc, char_t** argv, char_t** env) {
        int err = 0;
        ssize_t count = 0;
        char_t c = 0; 
        if ((rq.read_with_content(count, c, reader))) {
            err = process_request(rq, reader, argc, argv, env);
        }
        return err;
    }
    virtual int process_request(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        switch (request.line().method().which()) {
        case xos::protocol::http::request::method::CONNECT:
            err = this->all_process_request_to_CONNECT(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::DELETE:
            err = this->all_process_request_to_DELETE(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::GET:
            err = this->all_process_request_to_GET(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::HEAD:
            err = this->all_process_request_to_HEAD(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::OPTIONS:
            err = this->all_process_request_to_OPTIONS(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::PATCH:
            err = this->all_process_request_to_PATCH(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::POST:
            err = this->all_process_request_to_POST(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::PUT:
            err = this->all_process_request_to_PUT(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::TRACE:
            err = this->all_process_request_to_TRACE(request, reader, argc, argv, env);
            break;

        case xos::protocol::http::request::method::restart:
            err = this->all_process_request_to_restart(request, reader, argc, argv, env);
            break;
        case xos::protocol::http::request::method::stop:
            err = this->all_process_request_to_stop(request, reader, argc, argv, env);
            break;

        case xos::protocol::http::request::method::unknown:
        default:
            err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
            break;
        } /// switch
        return err;
    }
    /// ...process_request_to_CONNECT
    virtual int process_request_to_CONNECT(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_CONNECT(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_CONNECT(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_CONNECT(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_CONNECT(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_CONNECT(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_CONNECT(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_DELETE
    virtual int process_request_to_DELETE(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_DELETE(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_DELETE(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_DELETE(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_DELETE(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_DELETE(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_DELETE(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_GET
    virtual int process_request_to_GET(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_GET(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_GET(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_GET(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_GET(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_GET(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_GET(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_HEAD
    virtual int process_request_to_HEAD(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_HEAD(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_HEAD(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_HEAD(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_HEAD(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_HEAD(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_HEAD(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_OPTIONS
    virtual int process_request_to_OPTIONS(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_OPTIONS(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_OPTIONS(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_OPTIONS(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_OPTIONS(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_OPTIONS(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_OPTIONS(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_PATCH
    virtual int process_request_to_PATCH(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_PATCH(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_PATCH(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_PATCH(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_PATCH(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_PATCH(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_PATCH(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_POST
    virtual int process_request_to_POST(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_POST(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_POST(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_POST(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_POST(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_POST(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_POST(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_PUT
    virtual int process_request_to_PUT(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_PUT(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_PUT(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_PUT(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_PUT(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_PUT(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_PUT(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_TRACE
    virtual int process_request_to_TRACE(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_TRACE(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_TRACE(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_TRACE(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_TRACE(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_TRACE(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_TRACE(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_restart
    virtual int process_request_to_restart(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_restart(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_restart(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_accept_restart();
        return err;
    }
    virtual int all_process_request_to_restart(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_restart(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_restart(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_restart(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_stop
    virtual int process_request_to_stop(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_to_unknown(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_stop(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_stop(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_accept_done();
        return err;
    }
    virtual int all_process_request_to_stop(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_stop(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_stop(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_stop(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_to_unknown
    virtual int process_request_to_unknown(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_process_request_default(request, reader, argc, argv, env);
        return err;
    }
    virtual int before_process_request_to_unknown(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_to_unknown(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_to_unknown(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_to_unknown(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_to_unknown(request, reader, argc, argv, env);
            if ((err2 = after_process_request_to_unknown(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }
    /// ...process_request_default
    virtual int process_request_default(request_t &rq, reader_t& reader, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0; 
        if ((chars = rq.has_chars(length))) {
            this->out(chars, length);
            if ((chars = rq.content_chars(length))) {
                this->out(chars, length);
            }
            this->outln();
            this->out_flush();
        }
        return err;
    }
    virtual int before_process_request_default(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_process_request_default(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_process_request_default(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        if (!(err = before_process_request_default(request, reader, argc, argv, env))) {
            int err2 = 0;
            err = process_request_default(request, reader, argc, argv, env);
            if ((err2 = after_process_request_default(request, reader, argc, argv, env))) {
                if (!(err)) err = err2;
            }
        }
        return err;
    }

    /// ...response
    virtual int recv_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        response_t &rs = this->response();
        err = recv_response(rs, cn, argc, argv, env);
        return err;
    }
    virtual int recv_response(response_t &rs, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        int err = 0;
        xos::network::sockets::reader reader(cn);
        err = recv_response(rs, reader, argc, argv, env);
        return err;
    }
    virtual int recv_response(response_t &rs, xos::network::sockets::reader& reader, int argc, char_t** argv, char_t**env) {
        int err = 0;
        ssize_t count = 0;
        char_t c = 0; 
        if ((rs.read_with_content(count, c, reader))) {
            err = process_response(rs, reader, argc, argv, env);
        }
        return err;
    }
    virtual int process_response(response_t &rs, xos::network::sockets::reader& reader, int argc, char_t** argv, char_t**env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0; 
        if ((chars = rs.has_chars(length))) {
            this->out(chars, length);
            if ((chars = rs.content_chars(length))) {
                this->out(chars, length);
            }
            this->outln();
            this->out_flush();
        }
        return err;
    }
    virtual int before_send_response(xos::network::sockets::interface& cn, string_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        response_t& rs = this->response();
        
        if ((chars = rs.has_chars(length))) {
            response.assign(chars, length);
            if ((chars = rs.content_chars(length))) {
                response.append(chars, length);
            }
        }
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace http
} /// namespace protocol
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_HTTP_MAIN_HPP
