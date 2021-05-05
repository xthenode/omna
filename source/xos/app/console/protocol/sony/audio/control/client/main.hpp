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
///   Date: 5/2/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP

#include "xos/app/console/protocol/sony/audio/control/client/main_opt.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace sony {
namespace audio {
namespace control {
namespace client {

/// class maint
template 
<class TExtends = console::protocol::sony::audio::control::client::main_optt<>, 
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
    maint(): before_write_request_(0) {
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

    /// process_response
    virtual int process_response(response_t &rs, int argc, char_t** argv, char_t**env) {
        const char_t* chars = 0; size_t length = 0;
        int err = 0;
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

    /// ...write_request
    typedef int (derives::*before_write_request_t)(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env);
    before_write_request_t before_write_request_;
    virtual int before_write_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        if ((before_write_request_)) {
            err = (this->*before_write_request_)(amount, writer, request, argc, argv, env);
        } else {
            err = extends::before_write_request(amount, writer, request, argc, argv, env);
        }
        return err;
    }
    virtual int before_write_previous_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_previous();
        request.set_method(this->request_method_post());
        request.set_path(this->previous_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->previous_.length());
        request.set_content(this->previous_);
        return err;
    }
    virtual int before_write_next_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_next();
        request.set_method(this->request_method_post());
        request.set_path(this->next_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->next_.length());
        request.set_content(this->next_);
        return err;
    }
    virtual int before_write_stop_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_stop();
        request.set_method(this->request_method_post());
        request.set_path(this->stop_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->stop_.length());
        request.set_content(this->stop_);
        return err;
    }
    virtual int before_write_resume_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_resume();
        request.set_method(this->request_method_post());
        request.set_path(this->resume_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->resume_.length());
        request.set_content(this->resume_);
        return err;
    }
    virtual int before_write_volume_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_volume();
        request.set_method(this->request_method_post());
        request.set_path(this->volume_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->volume_.length());
        request.set_content(this->volume_);
        return err;
    }
    virtual int before_write_get_volume_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_get_volume();
        request.set_method(this->request_method_post());
        request.set_path(this->volume_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->volume_.length());
        request.set_content(this->volume_);
        return err;
    }
    virtual int before_write_power_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_power();
        request.set_method(this->request_method_post());
        request.set_path(this->power_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->power_.length());
        request.set_content(this->power_);
        return err;
    }
    virtual int before_write_get_power_request(ssize_t& amount, writer_t& writer, request_t& request, int argc, char_t** argv, char** env) {
        int err = 0;
        this->set_get_power();
        request.set_method(this->request_method_post());
        request.set_path(this->power_path_);
        request.set_content_type(this->content_type_json());
        request.set_content_length(this->power_.length());
        request.set_content(this->power_);
        return err;
    }
    virtual int set_before_write_request(before_write_request_t to, int argc, char_t** argv, char** env) {
        int err = 0;
        before_write_request_ = to;
        return err;
    }
    virtual int before_set_before_write_request(before_write_request_t to, int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_before_write_request(before_write_request_t to, int argc, char_t** argv, char** env) {
        int err = 0;
        err = all_set_before_write_request_run(argc, argv, env);
        return err;
    }
    virtual int all_set_before_write_request(before_write_request_t to, int argc, char_t** argv, char** env) {
        int err = 0, err2 = 0;
        if (!(err = before_set_before_write_request(to, argc, argv, env))) {
            err = set_before_write_request(to, argc, argv, env);
            if ((err2 = after_set_before_write_request(to, argc, argv, env))) {
                if (!err) err = err2;
            }
        }
        return err;
    }
    virtual int set_before_write_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        err = this->all_set_request_run(argc, argv, env);
        return err;
    }
    virtual int before_set_before_write_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int after_set_before_write_request_run(int argc, char_t** argv, char** env) {
        int err = 0;
        return err;
    }
    virtual int all_set_before_write_request_run(int argc, char_t** argv, char** env) {
        int err = 0, err2 = 0;
        if (!(err = before_set_before_write_request_run(argc, argv, env))) {
            err = set_before_write_request_run(argc, argv, env);
            if ((err2 = after_set_before_write_request_run(argc, argv, env))) {
                if (!err) err = err2;
            }
        }
        return err;
    }

    /// on...option...
    virtual int on_previous_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = all_set_before_write_request(&derives::before_write_previous_request, argc, argv, env);
        return err;
    }
    virtual int on_next_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = all_set_before_write_request(&derives::before_write_next_request, argc, argv, env);
        return err;
    }
    virtual int on_stop_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = all_set_before_write_request(&derives::before_write_stop_request, argc, argv, env);
        return err;
    }
    virtual int on_resume_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = all_set_before_write_request(&derives::before_write_resume_request, argc, argv, env);
        return err;
    }
    virtual int on_volume_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        const char_t* arg = 0;
        if ((arg = optarg) && (arg[0])) {
            this->set_volume_level(string_t(arg).to_unsigned());
            err = all_set_before_write_request(&derives::before_write_volume_request, argc, argv, env);
        } else {
            err = all_set_before_write_request(&derives::before_write_get_volume_request, argc, argv, env);
        }
        return err;
    }
    virtual int on_power_on_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_power_status_on();
        err = all_set_before_write_request(&derives::before_write_power_request, argc, argv, env);
        return err;
    }
    virtual int on_power_off_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        this->set_power_status_off();
        err = all_set_before_write_request(&derives::before_write_power_request, argc, argv, env);
        return err;
    }
    virtual int on_power_option
    (int optval, const char_t* optarg, const char_t* optname, 
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        const char_t* arg = 0;
        if ((arg = optarg) && (arg[0])) {
            this->set_power_status(arg);
            err = all_set_before_write_request(&derives::before_write_power_request, argc, argv, env);
        } else {
            err = all_set_before_write_request(&derives::before_write_get_power_request, argc, argv, env);
        }
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
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_CLIENT_MAIN_HPP
