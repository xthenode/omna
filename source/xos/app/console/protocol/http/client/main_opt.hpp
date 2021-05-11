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
///   Date: 5/10/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPT_HPP

#include "xos/app/console/main.hpp"
#include "xos/app/console/protocol/http/base/main.hpp"
#include "xos/app/console/protocol/xttp/client/main.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPT "request"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTARG "[file]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTUSE "Send http request [file]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTVAL_S "r::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTVAL_C 'r'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPT "get"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTARG "[{ GET | POST | ...}]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTUSE "GET http request method"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTVAL_S "g::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTVAL_C 'g'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPT "post"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTARG "[{ GET | POST | ...}]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTUSE "POST http request method"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTVAL_S "t::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTVAL_C 't'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPT "method"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTARG "[{ GET | POST | ...}]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTUSE "Http request method"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTVAL_S "m::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTVAL_C 'm'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPT "resource"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTARG "[{ / | ...}]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTUSE "Http request resource"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTVAL_S "e::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTVAL_C 'e'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTION \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_ARGV 0,

#if !defined(XOS_PROTOCOL_HTTP_MAIN_REQUEST_OPTVAL_S)
#define XOS_PROTOCOL_HTTP_MAIN_REQUEST_OPTVAL_S \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTVAL_S
#endif /// !defined(XOS_PROTOCOL_HTTP_MAIN_REQUEST_OPTVAL_S)

#if !defined(XOS_PROTOCOL_HTTP_MAIN_REQUEST_OPTION)
#define XOS_PROTOCOL_HTTP_MAIN_REQUEST_OPTION \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTION
#endif /// !defined(XOS_PROTOCOL_HTTP_MAIN_REQUEST_OPTION)

#if !defined(XOS_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND)
#define XOS_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND
#endif /// !defined(XOS_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS_EXTEND)

#if !defined(XOS_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND)
#define XOS_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND
#endif /// !defined(XOS_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS_EXTEND)

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace http {
namespace client {

/// class main_optt
template 
<class TExtends = console::protocol::xttp::client::maint<console::protocol::xttp::client::main_optt
 <console::protocol::http::base::maint<console::protocol::http::base::main_optt<> > > >, 
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

    typedef xos::protocol::http::content::media::type::name content_type_t;
    typedef xos::protocol::http::content::media::type::which_t content_type_which_t;
    typedef xos::protocol::http::message::header::content::type content_type_header_t;
    typedef xos::protocol::http::message::header::content::length content_length_header_t;
    typedef xos::protocol::http::message::body::content content_t;

    typedef xos::protocol::http::request::method::name request_method_t;
    typedef xos::protocol::http::request::resource::identifier request_resource_t;
    typedef xos::protocol::http::request::line request_line_t;
    typedef xos::protocol::http::request::message request_t;

    /// ...option...
    virtual int on_request_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
        } else {
        }
        err = this->all_set_request_run(argc, argv, env);
        return err;
    }
    virtual const char_t* request_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTARG;
        return chars;
    }
    virtual int on_method_get_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = this->all_set_method(optarg, argc, argv, env);
        } else {
            err = this->all_set_method_get(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* method_get_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTARG;
        return chars;
    }
    virtual int on_method_post_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = this->all_set_method(optarg, argc, argv, env);
        } else {
            err = this->all_set_method_post(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* method_post_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTARG;
        return chars;
    }
    virtual int on_method_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = this->all_set_method(optarg, argc, argv, env);
        } else {
            err = this->all_set_method_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* method_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTARG;
        return chars;
    }
    virtual int on_resource_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        if ((optarg) && (optarg[0])) {
            err = this->all_set_parameter(optarg, argc, argv, env);
        } else {
            err = this->all_set_parameter_run(argc, argv, env);
        }
        return err;
    }
    virtual const char_t* resource_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTVAL_C:
            err = this->on_request_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTVAL_C:
            err = this->on_method_get_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTVAL_C:
            err = this->on_method_post_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTVAL_C:
            err = this->on_method_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTVAL_C:
            err = this->on_resource_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_REQUEST_OPTVAL_C:
            chars = this->request_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_GET_OPTVAL_C:
            chars = this->method_get_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_POST_OPTVAL_C:
            chars = this->method_post_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_METHOD_OPTVAL_C:
            chars = this->method_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_RESOURCE_OPTVAL_C:
            chars = this->resource_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace client
} /// namespace http
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HTTP_CLIENT_MAIN_OPT_HPP
