// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping/proto/map_builder_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping/proto/map_builder_options.pb.h"

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

namespace cartographer {
namespace mapping {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* MapBuilderOptions_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MapBuilderOptions_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto() {
  protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cartographer/mapping/proto/map_builder_options.proto");
  GOOGLE_CHECK(file != NULL);
  MapBuilderOptions_descriptor_ = file->message_type(0);
  static const int MapBuilderOptions_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapBuilderOptions, use_trajectory_builder_2d_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapBuilderOptions, use_trajectory_builder_3d_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapBuilderOptions, num_background_threads_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapBuilderOptions, sparse_pose_graph_options_),
  };
  MapBuilderOptions_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MapBuilderOptions_descriptor_,
      MapBuilderOptions::default_instance_,
      MapBuilderOptions_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapBuilderOptions, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MapBuilderOptions, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MapBuilderOptions));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MapBuilderOptions_descriptor_, &MapBuilderOptions::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto() {
  delete MapBuilderOptions::default_instance_;
  delete MapBuilderOptions_reflection_;
}

void protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::cartographer::mapping::proto::protobuf_AddDesc_cartographer_2fmapping_2fproto_2fsparse_5fpose_5fgraph_5foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n4cartographer/mapping/proto/map_builder"
    "_options.proto\022\032cartographer.mapping.pro"
    "to\032:cartographer/mapping/proto/sparse_po"
    "se_graph_options.proto\"\320\001\n\021MapBuilderOpt"
    "ions\022!\n\031use_trajectory_builder_2d\030\001 \001(\010\022"
    "!\n\031use_trajectory_builder_3d\030\002 \001(\010\022\036\n\026nu"
    "m_background_threads\030\003 \001(\005\022U\n\031sparse_pos"
    "e_graph_options\030\004 \001(\01322.cartographer.map"
    "ping.proto.SparsePoseGraphOptions", 353);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping/proto/map_builder_options.proto", &protobuf_RegisterTypes);
  MapBuilderOptions::default_instance_ = new MapBuilderOptions();
  MapBuilderOptions::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto {
  StaticDescriptorInitializer_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto() {
    protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();
  }
} static_descriptor_initializer_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MapBuilderOptions::kUseTrajectoryBuilder2DFieldNumber;
const int MapBuilderOptions::kUseTrajectoryBuilder3DFieldNumber;
const int MapBuilderOptions::kNumBackgroundThreadsFieldNumber;
const int MapBuilderOptions::kSparsePoseGraphOptionsFieldNumber;
#endif  // !_MSC_VER

MapBuilderOptions::MapBuilderOptions()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void MapBuilderOptions::InitAsDefaultInstance() {
  sparse_pose_graph_options_ = const_cast< ::cartographer::mapping::proto::SparsePoseGraphOptions*>(&::cartographer::mapping::proto::SparsePoseGraphOptions::default_instance());
}

MapBuilderOptions::MapBuilderOptions(const MapBuilderOptions& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void MapBuilderOptions::SharedCtor() {
  _cached_size_ = 0;
  use_trajectory_builder_2d_ = false;
  use_trajectory_builder_3d_ = false;
  num_background_threads_ = 0;
  sparse_pose_graph_options_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MapBuilderOptions::~MapBuilderOptions() {
  SharedDtor();
}

void MapBuilderOptions::SharedDtor() {
  if (this != default_instance_) {
    delete sparse_pose_graph_options_;
  }
}

void MapBuilderOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MapBuilderOptions::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MapBuilderOptions_descriptor_;
}

const MapBuilderOptions& MapBuilderOptions::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cartographer_2fmapping_2fproto_2fmap_5fbuilder_5foptions_2eproto();
  return *default_instance_;
}

MapBuilderOptions* MapBuilderOptions::default_instance_ = NULL;

MapBuilderOptions* MapBuilderOptions::New() const {
  return new MapBuilderOptions;
}

void MapBuilderOptions::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    use_trajectory_builder_2d_ = false;
    use_trajectory_builder_3d_ = false;
    num_background_threads_ = 0;
    if (has_sparse_pose_graph_options()) {
      if (sparse_pose_graph_options_ != NULL) sparse_pose_graph_options_->::cartographer::mapping::proto::SparsePoseGraphOptions::Clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MapBuilderOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional bool use_trajectory_builder_2d = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_trajectory_builder_2d_)));
          set_has_use_trajectory_builder_2d();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_use_trajectory_builder_3d;
        break;
      }

      // optional bool use_trajectory_builder_3d = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_use_trajectory_builder_3d:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &use_trajectory_builder_3d_)));
          set_has_use_trajectory_builder_3d();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_num_background_threads;
        break;
      }

      // optional int32 num_background_threads = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_num_background_threads:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &num_background_threads_)));
          set_has_num_background_threads();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_sparse_pose_graph_options;
        break;
      }

      // optional .cartographer.mapping.proto.SparsePoseGraphOptions sparse_pose_graph_options = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_sparse_pose_graph_options:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_sparse_pose_graph_options()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void MapBuilderOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional bool use_trajectory_builder_2d = 1;
  if (has_use_trajectory_builder_2d()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(1, this->use_trajectory_builder_2d(), output);
  }

  // optional bool use_trajectory_builder_3d = 2;
  if (has_use_trajectory_builder_3d()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->use_trajectory_builder_3d(), output);
  }

  // optional int32 num_background_threads = 3;
  if (has_num_background_threads()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->num_background_threads(), output);
  }

  // optional .cartographer.mapping.proto.SparsePoseGraphOptions sparse_pose_graph_options = 4;
  if (has_sparse_pose_graph_options()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->sparse_pose_graph_options(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* MapBuilderOptions::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional bool use_trajectory_builder_2d = 1;
  if (has_use_trajectory_builder_2d()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(1, this->use_trajectory_builder_2d(), target);
  }

  // optional bool use_trajectory_builder_3d = 2;
  if (has_use_trajectory_builder_3d()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->use_trajectory_builder_3d(), target);
  }

  // optional int32 num_background_threads = 3;
  if (has_num_background_threads()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->num_background_threads(), target);
  }

  // optional .cartographer.mapping.proto.SparsePoseGraphOptions sparse_pose_graph_options = 4;
  if (has_sparse_pose_graph_options()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        4, this->sparse_pose_graph_options(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int MapBuilderOptions::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional bool use_trajectory_builder_2d = 1;
    if (has_use_trajectory_builder_2d()) {
      total_size += 1 + 1;
    }

    // optional bool use_trajectory_builder_3d = 2;
    if (has_use_trajectory_builder_3d()) {
      total_size += 1 + 1;
    }

    // optional int32 num_background_threads = 3;
    if (has_num_background_threads()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->num_background_threads());
    }

    // optional .cartographer.mapping.proto.SparsePoseGraphOptions sparse_pose_graph_options = 4;
    if (has_sparse_pose_graph_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->sparse_pose_graph_options());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MapBuilderOptions::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MapBuilderOptions* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MapBuilderOptions*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MapBuilderOptions::MergeFrom(const MapBuilderOptions& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_use_trajectory_builder_2d()) {
      set_use_trajectory_builder_2d(from.use_trajectory_builder_2d());
    }
    if (from.has_use_trajectory_builder_3d()) {
      set_use_trajectory_builder_3d(from.use_trajectory_builder_3d());
    }
    if (from.has_num_background_threads()) {
      set_num_background_threads(from.num_background_threads());
    }
    if (from.has_sparse_pose_graph_options()) {
      mutable_sparse_pose_graph_options()->::cartographer::mapping::proto::SparsePoseGraphOptions::MergeFrom(from.sparse_pose_graph_options());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MapBuilderOptions::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MapBuilderOptions::CopyFrom(const MapBuilderOptions& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MapBuilderOptions::IsInitialized() const {

  return true;
}

void MapBuilderOptions::Swap(MapBuilderOptions* other) {
  if (other != this) {
    std::swap(use_trajectory_builder_2d_, other->use_trajectory_builder_2d_);
    std::swap(use_trajectory_builder_3d_, other->use_trajectory_builder_3d_);
    std::swap(num_background_threads_, other->num_background_threads_);
    std::swap(sparse_pose_graph_options_, other->sparse_pose_graph_options_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MapBuilderOptions::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MapBuilderOptions_descriptor_;
  metadata.reflection = MapBuilderOptions_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace mapping
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)