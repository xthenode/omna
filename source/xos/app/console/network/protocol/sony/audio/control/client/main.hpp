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
///   Date: 5/3/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP

#include "xos/app/console/network/protocol/sony/audio/control/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace network {
namespace protocol {
namespace sony {
namespace audio {
namespace control {
namespace client {

/// class maint
template 
<class TExtends = console::network::protocol::sony::audio::control::client::main_opt, 
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

    typedef typename extends::json_boolean_t json_boolean_t;
    typedef typename extends::json_number_t json_number_t;
    typedef typename extends::json_string_t json_string_t;
    typedef typename extends::json_node_t json_node_t;
    typedef typename extends::json_array_t json_array_t;
    typedef typename extends::json_object_t json_object_t;

    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::content_type_which_t content_type_which_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;
    typedef typename extends::content_t content_t;

    typedef typename extends::request_method_t request_method_t;
    typedef typename extends::request_resource_t request_resource_t;
    typedef typename extends::request_line_t request_line_t;
    typedef typename extends::request_t request_t;
    typedef typename extends::response_t response_t;

    /// ...recv_response
    virtual int recv_response(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        xos::network::sockets::reader reader(cn);
        response_t &rs = this->response();
        int err = 0;
        err = recv_response(rs, reader, argc, argv, env);
        return err;
    }
    virtual int recv_response(response_t &rs, xos::network::sockets::reader& reader, int argc, char_t** argv, char_t**env) {
        char_t c = 0; ssize_t count = 0;
        int err = 0;
        if ((rs.read_with_content(count, c, reader))) {
            err = this->process_response(rs, argc, argv, env);
        }
        return err;
    }

    /// ...send_request
    virtual int send_request(xos::network::sockets::interface& cn, int argc, char_t** argv, char_t**env) {
        xos::network::sockets::writer writer(cn);
        request_t &rq = this->request();
        ssize_t amount = 0;
        int err = 0;
        err = this->all_write_request(amount, writer, rq, argc, argv, env);
        return err;
    }

    /// ...set_before_write_request_run
    virtual int set_before_write_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->set_connect_run(argc, argv, env);
        return err;
    }

    /// after_set_..._run
    virtual int after_set_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->unset_connect_run(argc, argv, env);
        return err;
    }
    virtual int after_set_content_run(int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->unset_connect_run(argc, argv, env);
        return err;
    }
    virtual int after_set_content_type_run(int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->unset_connect_run(argc, argv, env);
        return err;
    }
    virtual int after_set_method_run(int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->unset_connect_run(argc, argv, env);
        return err;
    }
    virtual int after_set_resource_run(int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->unset_connect_run(argc, argv, env);
        return err;
    }
    virtual int after_set_parameter_run(int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->unset_connect_run(argc, argv, env);
        return err;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace client
} /// namespace control
} /// namespace audio
} /// namespace sony
} /// namespace protocol
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_PROTOCOL_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP
