// Generated by the protocol buffer compiler.  DO NOT EDIT!
// Author: Jumbo 
// source: login.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "login.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace Protocol {

namespace {

const ::google::protobuf::Descriptor* Login_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Login_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_login_2eproto() {
  protobuf_AddDesc_login_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "login.proto");
  GOOGLE_CHECK(file != NULL);
  Login_descriptor_ = file->message_type(0);
  static const int Login_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login, account_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login, passwd_),
  };
  Login_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      Login_descriptor_,
      Login::default_instance_,
      Login_offsets_,
      -1,
      -1,
      -1,
      sizeof(Login),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login, _internal_metadata_),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Login, _is_default_instance_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_login_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      Login_descriptor_, &Login::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_login_2eproto() {
  delete Login::default_instance_;
  delete Login_reflection_;
}

void protobuf_AddDesc_login_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\013login.proto\022\010Protocol\"(\n\005Login\022\017\n\007acco"
    "unt\030\001 \001(\t\022\016\n\006passwd\030\002 \001(\tb\006proto3", 73);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "login.proto", &protobuf_RegisterTypes);
  Login::default_instance_ = new Login();
  Login::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_login_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_login_2eproto {
  StaticDescriptorInitializer_login_2eproto() {
    protobuf_AddDesc_login_2eproto();
  }
} static_descriptor_initializer_login_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD;
static void MergeFromFail(int line) {
  GOOGLE_CHECK(false) << __FILE__ << ":" << line;
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int Login::kAccountFieldNumber;
const int Login::kPasswdFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

Login::Login()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:Protocol.Login)
}

void Login::InitAsDefaultInstance() {
  _is_default_instance_ = true;
}

Login::Login(const Login& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:Protocol.Login)
}

void Login::SharedCtor() {
    _is_default_instance_ = false;
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  account_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  passwd_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

Login::~Login() {
  // @@protoc_insertion_point(destructor:Protocol.Login)
  SharedDtor();
}

void Login::SharedDtor() {
  account_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  passwd_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void Login::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Login::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Login_descriptor_;
}

const Login& Login::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_login_2eproto();
  return *default_instance_;
}

Login* Login::default_instance_ = NULL;

Login* Login::New(::google::protobuf::Arena* arena) const {
  Login* n = new Login;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void Login::Clear() {
  account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  passwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

bool Login::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:Protocol.Login)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string account = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_account()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->account().data(), this->account().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Protocol.Login.account"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_passwd;
        break;
      }

      // optional string passwd = 2;
      case 2: {
        if (tag == 18) {
         parse_passwd:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_passwd()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->passwd().data(), this->passwd().length(),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "Protocol.Login.passwd"));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:Protocol.Login)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:Protocol.Login)
  return false;
#undef DO_
}

void Login::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:Protocol.Login)
  // optional string account = 1;
  if (this->account().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account().data(), this->account().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Protocol.Login.account");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->account(), output);
  }

  // optional string passwd = 2;
  if (this->passwd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->passwd().data(), this->passwd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Protocol.Login.passwd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->passwd(), output);
  }

  // @@protoc_insertion_point(serialize_end:Protocol.Login)
}

::google::protobuf::uint8* Login::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:Protocol.Login)
  // optional string account = 1;
  if (this->account().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->account().data(), this->account().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Protocol.Login.account");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->account(), target);
  }

  // optional string passwd = 2;
  if (this->passwd().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->passwd().data(), this->passwd().length(),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "Protocol.Login.passwd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->passwd(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:Protocol.Login)
  return target;
}

int Login::ByteSize() const {
  int total_size = 0;

  // optional string account = 1;
  if (this->account().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->account());
  }

  // optional string passwd = 2;
  if (this->passwd().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->passwd());
  }

  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void Login::MergeFrom(const ::google::protobuf::Message& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const Login* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const Login>(
          &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Login::MergeFrom(const Login& from) {
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  if (from.account().size() > 0) {

    account_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.account_);
  }
  if (from.passwd().size() > 0) {

    passwd_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.passwd_);
  }
}

void Login::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Login::CopyFrom(const Login& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Login::IsInitialized() const {

  return true;
}

void Login::Swap(Login* other) {
  if (other == this) return;
  InternalSwap(other);
}
void Login::InternalSwap(Login* other) {
  account_.Swap(&other->account_);
  passwd_.Swap(&other->passwd_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata Login::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Login_descriptor_;
  metadata.reflection = Login_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// Login

// optional string account = 1;
void Login::clear_account() {
  account_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Login::account() const {
  // @@protoc_insertion_point(field_get:Protocol.Login.account)
  return account_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Login::set_account(const ::std::string& value) {
  
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Protocol.Login.account)
}
 void Login::set_account(const char* value) {
  
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Protocol.Login.account)
}
 void Login::set_account(const char* value, size_t size) {
  
  account_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Protocol.Login.account)
}
 ::std::string* Login::mutable_account() {
  
  // @@protoc_insertion_point(field_mutable:Protocol.Login.account)
  return account_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Login::release_account() {
  
  return account_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Login::set_allocated_account(::std::string* account) {
  if (account != NULL) {
    
  } else {
    
  }
  account_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), account);
  // @@protoc_insertion_point(field_set_allocated:Protocol.Login.account)
}

// optional string passwd = 2;
void Login::clear_passwd() {
  passwd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 const ::std::string& Login::passwd() const {
  // @@protoc_insertion_point(field_get:Protocol.Login.passwd)
  return passwd_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Login::set_passwd(const ::std::string& value) {
  
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:Protocol.Login.passwd)
}
 void Login::set_passwd(const char* value) {
  
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:Protocol.Login.passwd)
}
 void Login::set_passwd(const char* value, size_t size) {
  
  passwd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:Protocol.Login.passwd)
}
 ::std::string* Login::mutable_passwd() {
  
  // @@protoc_insertion_point(field_mutable:Protocol.Login.passwd)
  return passwd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* Login::release_passwd() {
  
  return passwd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void Login::set_allocated_passwd(::std::string* passwd) {
  if (passwd != NULL) {
    
  } else {
    
  }
  passwd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), passwd);
  // @@protoc_insertion_point(field_set_allocated:Protocol.Login.passwd)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace Protocol

// @@protoc_insertion_point(global_scope)
