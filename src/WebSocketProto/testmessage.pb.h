// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: testmessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_testmessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_testmessage_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3011000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3011004 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_testmessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_testmessage_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_testmessage_2eproto;
class TestMessage;
class TestMessageDefaultTypeInternal;
extern TestMessageDefaultTypeInternal _TestMessage_default_instance_;
PROTOBUF_NAMESPACE_OPEN
template<> ::TestMessage* Arena::CreateMaybeMessage<::TestMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE

// ===================================================================

class TestMessage :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:TestMessage) */ {
 public:
  TestMessage();
  virtual ~TestMessage();

  TestMessage(const TestMessage& from);
  TestMessage(TestMessage&& from) noexcept
    : TestMessage() {
    *this = ::std::move(from);
  }

  inline TestMessage& operator=(const TestMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline TestMessage& operator=(TestMessage&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const TestMessage& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const TestMessage* internal_default_instance() {
    return reinterpret_cast<const TestMessage*>(
               &_TestMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TestMessage& a, TestMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(TestMessage* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline TestMessage* New() const final {
    return CreateMaybeMessage<TestMessage>(nullptr);
  }

  TestMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<TestMessage>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const TestMessage& from);
  void MergeFrom(const TestMessage& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(TestMessage* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "TestMessage";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_testmessage_2eproto);
    return ::descriptor_table_testmessage_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSomeTextFieldNumber = 1,
  };
  // string someText = 1;
  void clear_sometext();
  const std::string& sometext() const;
  void set_sometext(const std::string& value);
  void set_sometext(std::string&& value);
  void set_sometext(const char* value);
  void set_sometext(const char* value, size_t size);
  std::string* mutable_sometext();
  std::string* release_sometext();
  void set_allocated_sometext(std::string* sometext);
  private:
  const std::string& _internal_sometext() const;
  void _internal_set_sometext(const std::string& value);
  std::string* _internal_mutable_sometext();
  public:

  // @@protoc_insertion_point(class_scope:TestMessage)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr sometext_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_testmessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TestMessage

// string someText = 1;
inline void TestMessage::clear_sometext() {
  sometext_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& TestMessage::sometext() const {
  // @@protoc_insertion_point(field_get:TestMessage.someText)
  return _internal_sometext();
}
inline void TestMessage::set_sometext(const std::string& value) {
  _internal_set_sometext(value);
  // @@protoc_insertion_point(field_set:TestMessage.someText)
}
inline std::string* TestMessage::mutable_sometext() {
  // @@protoc_insertion_point(field_mutable:TestMessage.someText)
  return _internal_mutable_sometext();
}
inline const std::string& TestMessage::_internal_sometext() const {
  return sometext_.GetNoArena();
}
inline void TestMessage::_internal_set_sometext(const std::string& value) {
  
  sometext_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void TestMessage::set_sometext(std::string&& value) {
  
  sometext_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:TestMessage.someText)
}
inline void TestMessage::set_sometext(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  sometext_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:TestMessage.someText)
}
inline void TestMessage::set_sometext(const char* value, size_t size) {
  
  sometext_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:TestMessage.someText)
}
inline std::string* TestMessage::_internal_mutable_sometext() {
  
  return sometext_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* TestMessage::release_sometext() {
  // @@protoc_insertion_point(field_release:TestMessage.someText)
  
  return sometext_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void TestMessage::set_allocated_sometext(std::string* sometext) {
  if (sometext != nullptr) {
    
  } else {
    
  }
  sometext_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), sometext);
  // @@protoc_insertion_point(field_set_allocated:TestMessage.someText)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)


// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_testmessage_2eproto
