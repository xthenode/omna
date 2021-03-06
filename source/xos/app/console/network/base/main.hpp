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
///   Date: 5/6/2021
///////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_NETWORK_BASE_MAIN_HPP

#include "xos/app/console/network/base/main_opt.hpp"

#define XOS_APP_CONSOLE_NETWORK_DEFAULT_CONTENT "Hello\r\n"
#define XOS_APP_CONSOLE_NETWORK_DEFAULT_CONTENT_LENGTH "7"
#define XOS_APP_CONSOLE_NETWORK_DEFAULT_CONTENT_TYPE "text/plain"

#define XOS_APP_CONSOLE_NETWORK_DEFAULT_HEADERS \
    "Content-Type:" XOS_APP_CONSOLE_NETWORK_DEFAULT_CONTENT_TYPE "\r\n" \
    "Content-Length:" XOS_APP_CONSOLE_NETWORK_DEFAULT_CONTENT_LENGTH "\r\n" \

#define XOS_APP_CONSOLE_NETWORK_DEFAULT_REQUEST "GET / HTTP/1.0\r\n" \
    XOS_APP_CONSOLE_NETWORK_DEFAULT_HEADERS "\r\n" \
    XOS_APP_CONSOLE_NETWORK_DEFAULT_CONTENT \

#define XOS_APP_CONSOLE_NETWORK_DEFAULT_RESPONSE "HTTP/1.0 200 OK\r\n" \
    XOS_APP_CONSOLE_NETWORK_DEFAULT_HEADERS "\r\n" \
    XOS_APP_CONSOLE_NETWORK_DEFAULT_CONTENT \

namespace xos {
namespace app {
namespace console {
namespace network {
namespace base {

/// class maint
template 
<class TExtends = console::network::base::main_optt<>, 
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

    /// default request / response
    virtual string_t& default_request() const {
        static string_t request(XOS_APP_CONSOLE_NETWORK_DEFAULT_REQUEST);
        return request;
    }
    virtual string_t& default_response() const {
        static string_t response(XOS_APP_CONSOLE_NETWORK_DEFAULT_RESPONSE);
        return response;
    }

protected:
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace network
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_NETWORK_BASE_MAIN_HPP
