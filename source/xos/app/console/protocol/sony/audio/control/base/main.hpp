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
#ifndef XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_BASE_MAIN_HPP
#define XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_BASE_MAIN_HPP

#include "xos/app/console/protocol/sony/audio/control/base/main_opt.hpp"
#include "xos/protocol/xttp/content/json/node.hpp"
#include "xos/protocol/xttp/content/json/array.hpp"
#include "xos/protocol/xttp/content/json/object.hpp"

namespace xos {
namespace app {
namespace console {
namespace protocol {
namespace sony {
namespace audio {
namespace control {
namespace base {

/// class maint
template 
<class TExtends = sony::audio::control::base::main_optt<>, 
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
    maint()
    : previous_path_("/sony/avContent"),
      previous_begin_("{\"method\": \"setPlayPreviousContent\", \"id\": 73, \"params\": [{\"output\": \""),
      previous_end_("\"}], \"version\": \"1.0\"}"),
      previous_params_(""),
      
      next_path_("/sony/avContent"),
      next_begin_("{\"method\": \"setPlayNextContent\", \"id\": 73, \"params\": [{\"output\": \""),
      next_end_("\"}], \"version\": \"1.0\"}"),
      next_params_(""),
      
      stop_path_("/sony/avContent"),
      stop_begin_("{\"method\": \"stopPlayingContent\", \"id\": 73, \"params\": [{\"output\": \""),
      stop_end_("\"}], \"version\": \"1.1\"}"),
      stop_params_(""),
      
      resume_path_("/sony/avContent"),
      resume_begin_("{\"method\": \"setPlayContent\", \"id\": 73, \"params\": [{\"output\": \"\", \"resume\": "),
      resume_end_("}], \"version\": \"1.2\"}"),
      resume_params_("true"),
      
      volume_level_(10), volume_value_(volume_level_), volume_param_("volume", volume_value_), 
      volume_object_(&volume_param_, null), volume_params_(&volume_object_, null),
      volume_path_("/sony/audio"),
      get_volume_begin_("{\"method\": \"getVolumeInformation\", \"id\": 73, \"params\": [{\"output\": \"\"}]"), 
      volume_begin_("{\"method\": \"setAudioVolume\", \"id\": 73, \"params\": "),
      volume_end_(", \"version\": \"1.1\"}"),
        
      power_status_on_("active"), power_status_off_("off"), power_status_(power_status_on_),
      power_value_(power_status_), power_param_("status", power_value_), 
      power_object_(&power_param_, null), power_params_(&power_object_, null),
      power_path_("/sony/system"),
      get_power_begin_("{\"method\": \"getPowerStatus\", \"id\": 73, \"params\": []"),
      power_begin_("{\"method\": \"setPowerStatus\", \"id\": 73, \"params\": "),
      power_end_(", \"version\": \"1.1\"}") {
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

    typedef xos::protocol::xttp::content::json::boolean json_boolean_t;
    typedef xos::protocol::xttp::content::json::number json_number_t;
    typedef xos::protocol::xttp::content::json::string json_string_t;
    typedef xos::protocol::xttp::content::json::node json_node_t;
    typedef xos::protocol::xttp::content::json::array json_array_t;
    typedef xos::protocol::xttp::content::json::object json_object_t;

    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::content_type_which_t content_type_which_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;
    typedef typename extends::content_t content_t;

    /// ...next...
    virtual string_t& set_previous() {
        previous_.assign(previous_begin_);
        previous_.append(previous_params_);
        previous_.append(previous_end_);
        return previous_;
    }
    virtual string_t& previous() const {
        return (string_t&)previous_;
    }
    virtual string_t& set_next() {
        next_.assign(next_begin_);
        next_.append(next_params_);
        next_.append(next_end_);
        return next_;
    }
    virtual string_t& next() const {
        return (string_t&)next_;
    }
    virtual string_t& set_stop() {
        stop_.assign(stop_begin_);
        stop_.append(stop_params_);
        stop_.append(stop_end_);
        return stop_;
    }
    virtual string_t& stop() const {
        return (string_t&)stop_;
    }
    virtual string_t& set_resume() {
        resume_.assign(resume_begin_);
        resume_.append(resume_params_);
        resume_.append(resume_end_);
        return resume_;
    }
    virtual string_t& resume() const {
        return (string_t&)resume_;
    }

    /// ...volume...
    virtual string_t& set_volume_level(unsigned to) {
        volume_level_ = to;
        volume_value_.set(unsigned_to_string(volume_level_));
        volume_param_.set(volume_value_);
        volume_object_.set(&volume_param_, null);
        volume_params_.set(&volume_object_, null);
        return volume_;
    }
    virtual string_t& set_volume() {
        volume_.assign(volume_begin_);
        volume_.append(volume_params_);
        volume_.append(volume_end_);
        return volume_;
    }
    virtual string_t& set_get_volume() {
        volume_.assign(get_volume_begin_);
        volume_.append(volume_end_);
        return volume_;
    }
    virtual string_t& volume() const {
        return (string_t&)volume_;
    }

    /// ...power...
    virtual string_t& set_power_status_on() {
        set_power_status(power_status_on_.chars());
        return power_;
    }
    virtual string_t& set_power_status_off() {
        set_power_status(power_status_off_.chars());
        return power_;
    }
    virtual string_t& set_power_status(const char_t* to) {
        power_status_.assign(to);
        power_value_.set(power_status_);
        power_param_.set(power_value_);
        power_object_.set(&power_param_, null);
        power_params_.set(&power_object_, null);
        return power_;
    }
    virtual string_t& set_power() {
        power_.assign(power_begin_);
        power_.append(power_params_);
        power_.append(power_end_);
        return power_;
    }
    virtual string_t& set_get_power() {
        power_.assign(get_power_begin_);
        power_.append(power_end_);
        return power_;
    }
    virtual string_t& power() const {
        return (string_t&)power_;
    }

protected:
    string_t previous_path_, previous_begin_, previous_end_, previous_params_, previous_;
    string_t next_path_, next_begin_, next_end_, next_params_, next_;
    string_t stop_path_, stop_begin_, stop_end_, stop_params_, stop_;
    string_t resume_path_, resume_begin_, resume_end_, resume_params_, resume_;

    unsigned volume_level_; json_node_t volume_value_, volume_param_;
    json_object_t volume_object_; json_array_t volume_params_;
    string_t volume_path_, get_volume_begin_, volume_begin_, volume_end_, volume_;
    
    string_t power_status_on_, power_status_off_, power_status_; 
    json_node_t power_value_, power_param_;
    json_object_t power_object_; json_array_t power_params_;
    string_t power_path_, get_power_begin_, power_begin_, power_end_, power_;
}; /// class maint
typedef maint<> main;

} /// namespace base
} /// namespace control
} /// namespace audio
} /// namespace sony
} /// namespace protocol
} /// namespace console
} /// namespace app
} /// namespace xos

#endif /// ndef XOS_APP_CONSOLE_PROTOCOL_SONY_AUDIO_CONTROL_BASE_MAIN_HPP
