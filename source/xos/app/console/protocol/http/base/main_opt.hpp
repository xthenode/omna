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
///   Date: 5/5/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPT_HPP

#include "xos/app/console/main.hpp"
#include "xos/app/console/protocol/xttp/base/main.hpp"

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPT "content"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTARG "[string]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTUSE "Http message content"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTVAL_S "n::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTVAL_C 'n'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPT "content-type"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_REQUIRED MAIN_OPT_ARGUMENT_OPTIONAL
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_RESULT 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTARG "[string[/string]]"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTUSE "Http message content type"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_S "y::"
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C 'y'
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTION \
   {XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_REQUIRED, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTARG_RESULT, \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C}, \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTVAL_S \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_S \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTION \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTION \

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_MAIN_OPTIONS_CHARS

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_MAIN_OPTIONS_OPTIONS

#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_ARGS 0
#define XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_ARGV 0,

#if !defined(XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND)
#define XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND
#endif /// !defined(XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND)

#if !defined(XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND)
#define XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND
#endif /// !defined(XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND)

#if !defined(XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS)
#define XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS
#endif /// !defined(XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS)

#if !defined(XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS)
#define XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS \
    XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS
#endif /// !defined(XOS_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS)

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace http {
namespace base {

/// class main_optt
template 
<class TExtends = console::protocol::xttp::base::maint< >, 
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

    /// ...option...
    virtual int on_content_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = extends::on_content_option(optval, optarg, optname, optind, argc, argv, env);
        return err;
    }
    virtual const char_t* content_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTARG;
        return chars;
    }
    virtual int on_content_type_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        err = extends::on_content_type_option(optval, optarg, optname, optind, argc, argv, env);
        return err;
    }
    virtual const char_t* content_type_option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTUSE;
        optarg = XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTARG;
        return chars;
    }
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTVAL_C:
            err = this->on_content_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C:
            err = this->on_content_type_option(optval, optarg, optname, optind, argc, argv, env);
            break;
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_OPTVAL_C:
            chars = content_option_usage(optarg, longopt);
            break;
        case XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_CONTENT_TYPE_OPTVAL_C:
            chars = content_type_option_usage(optarg, longopt);
            break;
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }

    /// ...argument...
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }

protected:
}; /// class main_optt
typedef main_optt<> main_opt;

} /// namespace base
} /// namespace http
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_HTTP_BASE_MAIN_OPT_HPP
