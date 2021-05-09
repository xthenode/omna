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
///   Date: 5/8/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_HPP

#include "xos/app/console/network/protocol/sony/audio/control/server/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace protocol {
namespace sony {
namespace audio {
namespace control {
namespace server {

/// class maint
template 
<class TExtends = console::network::protocol::sony::audio::control::server::main_optt<>, 
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

    typedef typename extends::response_status_t response_status_t;
    typedef typename extends::response_reason_t response_reason_t;
    typedef typename extends::response_line_t response_line_t;
    typedef typename extends::response_t response_t;

    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_resource_t request_resource_t;
    typedef typename extends::request_line_t request_line_t;
    typedef typename extends::request_t request_t;

    /// ...send_response
    virtual int after_send_response(xos::network::sockets::interface& cn, response_t& response, int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_t& before_response = this->before_response();
        response.set(before_response);
        return err;
    }

    /// ...recv_request
    virtual int before_recv_request(request_t& request, xos::network::sockets::interface& cn, int argc, char_t** argv, char_t** env) {
        int err = 0;
        response_t& response = this->response();
        response_t& before_response = this->before_response();
        before_response.set(response);
        return err;
    }

    /// ...process_request...
    virtual int before_process_request(request_t& request, reader_t& reader, int argc, char_t** argv, char** env) {
        int err = 0;
        size_t length = 0;
        const char_t* chars = 0;
        if ((chars = request.content_chars(length))) {
            response_t& response = this->response();

            response.set_content(chars, length);
            response.set_content_length(length);
            if ((chars = request.content_type_chars(length))) {
                response.set_content_type(chars, length);
            }
        }
        return err;
    }

    virtual response_t& before_response() const {
        return (response_t&)before_response_;
    }

protected:
    response_t before_response_;
}; /// class maint
typedef maint<> main;

} /// namespace server
} /// namespace control
} /// namespace audio
} /// namespace sony
} /// namespace protocol
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_SERVER_MAIN_HPP
