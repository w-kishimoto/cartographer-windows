// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace cartographer {
namespace mapping_2d {
namespace scan_matching {
namespace proto {
class CeresScanMatcherOptionsDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<CeresScanMatcherOptions> {
} _CeresScanMatcherOptions_default_instance_;

namespace protobuf_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTableField
    const TableStruct::entries[] = {
  {0, 0, 0, ::google::protobuf::internal::kInvalidMask, 0, 0},
};

PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::AuxillaryParseTableField
    const TableStruct::aux[] = {
  ::google::protobuf::internal::AuxillaryParseTableField(),
};
PROTOBUF_CONSTEXPR_VAR ::google::protobuf::internal::ParseTable const
    TableStruct::schema[] = {
  { NULL, NULL, 0, -1, -1, false },
};

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, occupied_space_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, translation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, rotation_weight_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CeresScanMatcherOptions, ceres_solver_options_),
  1,
  2,
  3,
  0,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 9, sizeof(CeresScanMatcherOptions)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_CeresScanMatcherOptions_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _CeresScanMatcherOptions_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  ::cartographer::common::proto::protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto::InitDefaults();
  _CeresScanMatcherOptions_default_instance_.DefaultConstruct();
  _CeresScanMatcherOptions_default_instance_.get_mutable()->ceres_solver_options_ = const_cast< ::cartographer::common::proto::CeresSolverOptions*>(
      ::cartographer::common::proto::CeresSolverOptions::internal_default_instance());
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\nLcartographer/mapping_2d/scan_matching/"
      "proto/ceres_scan_matcher_options.proto\022+"
      "cartographer.mapping_2d.scan_matching.pr"
      "oto\0324cartographer/common/proto/ceres_sol"
      "ver_options.proto\"\272\001\n\027CeresScanMatcherOp"
      "tions\022\035\n\025occupied_space_weight\030\001 \001(\001\022\032\n\022"
      "translation_weight\030\002 \001(\001\022\027\n\017rotation_wei"
      "ght\030\003 \001(\001\022K\n\024ceres_solver_options\030\t \001(\0132"
      "-.cartographer.common.proto.CeresSolverO"
      "ptions"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 366);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cartographer/mapping_2d/scan_matching/proto/ceres_scan_matcher_options.proto", &protobuf_RegisterTypes);
  ::cartographer::common::proto::protobuf_cartographer_2fcommon_2fproto_2fceres_5fsolver_5foptions_2eproto::AddDescriptors();
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int CeresScanMatcherOptions::kOccupiedSpaceWeightFieldNumber;
const int CeresScanMatcherOptions::kTranslationWeightFieldNumber;
const int CeresScanMatcherOptions::kRotationWeightFieldNumber;
const int CeresScanMatcherOptions::kCeresSolverOptionsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

CeresScanMatcherOptions::CeresScanMatcherOptions()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
}
CeresScanMatcherOptions::CeresScanMatcherOptions(const CeresScanMatcherOptions& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_ceres_solver_options()) {
    ceres_solver_options_ = new ::cartographer::common::proto::CeresSolverOptions(*from.ceres_solver_options_);
  } else {
    ceres_solver_options_ = NULL;
  }
  ::memcpy(&occupied_space_weight_, &from.occupied_space_weight_,
    static_cast<size_t>(reinterpret_cast<char*>(&rotation_weight_) -
    reinterpret_cast<char*>(&occupied_space_weight_)) + sizeof(rotation_weight_));
  // @@protoc_insertion_point(copy_constructor:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
}

void CeresScanMatcherOptions::SharedCtor() {
  _cached_size_ = 0;
  ::memset(&ceres_solver_options_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&rotation_weight_) -
      reinterpret_cast<char*>(&ceres_solver_options_)) + sizeof(rotation_weight_));
}

CeresScanMatcherOptions::~CeresScanMatcherOptions() {
  // @@protoc_insertion_point(destructor:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  SharedDtor();
}

void CeresScanMatcherOptions::SharedDtor() {
  if (this != internal_default_instance()) {
    delete ceres_solver_options_;
  }
}

void CeresScanMatcherOptions::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CeresScanMatcherOptions::descriptor() {
  protobuf_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto::file_level_metadata[kIndexInFileMessages].descriptor;
}

const CeresScanMatcherOptions& CeresScanMatcherOptions::default_instance() {
  protobuf_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto::InitDefaults();
  return *internal_default_instance();
}

CeresScanMatcherOptions* CeresScanMatcherOptions::New(::google::protobuf::Arena* arena) const {
  CeresScanMatcherOptions* n = new CeresScanMatcherOptions;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void CeresScanMatcherOptions::Clear() {
// @@protoc_insertion_point(message_clear_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  if (has_ceres_solver_options()) {
    GOOGLE_DCHECK(ceres_solver_options_ != NULL);
    ceres_solver_options_->::cartographer::common::proto::CeresSolverOptions::Clear();
  }
  if (_has_bits_[0 / 32] & 14u) {
    ::memset(&occupied_space_weight_, 0, static_cast<size_t>(
        reinterpret_cast<char*>(&rotation_weight_) -
        reinterpret_cast<char*>(&occupied_space_weight_)) + sizeof(rotation_weight_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool CeresScanMatcherOptions::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional double occupied_space_weight = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(9u)) {
          set_has_occupied_space_weight();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &occupied_space_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double translation_weight = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(17u)) {
          set_has_translation_weight();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &translation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional double rotation_weight = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(25u)) {
          set_has_rotation_weight();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &rotation_weight_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
      case 9: {
        if (static_cast< ::google::protobuf::uint8>(tag) ==
            static_cast< ::google::protobuf::uint8>(74u)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_ceres_solver_options()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  return false;
#undef DO_
}

void CeresScanMatcherOptions::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double occupied_space_weight = 1;
  if (cached_has_bits & 0x00000002u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(1, this->occupied_space_weight(), output);
  }

  // optional double translation_weight = 2;
  if (cached_has_bits & 0x00000004u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->translation_weight(), output);
  }

  // optional double rotation_weight = 3;
  if (cached_has_bits & 0x00000008u) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(3, this->rotation_weight(), output);
  }

  // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
  if (cached_has_bits & 0x00000001u) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      9, *this->ceres_solver_options_, output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
}

::google::protobuf::uint8* CeresScanMatcherOptions::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = _has_bits_[0];
  // optional double occupied_space_weight = 1;
  if (cached_has_bits & 0x00000002u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(1, this->occupied_space_weight(), target);
  }

  // optional double translation_weight = 2;
  if (cached_has_bits & 0x00000004u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->translation_weight(), target);
  }

  // optional double rotation_weight = 3;
  if (cached_has_bits & 0x00000008u) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(3, this->rotation_weight(), target);
  }

  // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
  if (cached_has_bits & 0x00000001u) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        9, *this->ceres_solver_options_, deterministic, target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  return target;
}

size_t CeresScanMatcherOptions::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (_has_bits_[0 / 32] & 15u) {
    // optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
    if (has_ceres_solver_options()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          *this->ceres_solver_options_);
    }

    // optional double occupied_space_weight = 1;
    if (has_occupied_space_weight()) {
      total_size += 1 + 8;
    }

    // optional double translation_weight = 2;
    if (has_translation_weight()) {
      total_size += 1 + 8;
    }

    // optional double rotation_weight = 3;
    if (has_rotation_weight()) {
      total_size += 1 + 8;
    }

  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CeresScanMatcherOptions::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  GOOGLE_DCHECK_NE(&from, this);
  const CeresScanMatcherOptions* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const CeresScanMatcherOptions>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
    MergeFrom(*source);
  }
}

void CeresScanMatcherOptions::MergeFrom(const CeresScanMatcherOptions& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  cached_has_bits = from._has_bits_[0];
  if (cached_has_bits & 15u) {
    if (cached_has_bits & 0x00000001u) {
      mutable_ceres_solver_options()->::cartographer::common::proto::CeresSolverOptions::MergeFrom(from.ceres_solver_options());
    }
    if (cached_has_bits & 0x00000002u) {
      occupied_space_weight_ = from.occupied_space_weight_;
    }
    if (cached_has_bits & 0x00000004u) {
      translation_weight_ = from.translation_weight_;
    }
    if (cached_has_bits & 0x00000008u) {
      rotation_weight_ = from.rotation_weight_;
    }
    _has_bits_[0] |= cached_has_bits;
  }
}

void CeresScanMatcherOptions::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CeresScanMatcherOptions::CopyFrom(const CeresScanMatcherOptions& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CeresScanMatcherOptions::IsInitialized() const {
  return true;
}

void CeresScanMatcherOptions::Swap(CeresScanMatcherOptions* other) {
  if (other == this) return;
  InternalSwap(other);
}
void CeresScanMatcherOptions::InternalSwap(CeresScanMatcherOptions* other) {
  std::swap(ceres_solver_options_, other->ceres_solver_options_);
  std::swap(occupied_space_weight_, other->occupied_space_weight_);
  std::swap(translation_weight_, other->translation_weight_);
  std::swap(rotation_weight_, other->rotation_weight_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata CeresScanMatcherOptions::GetMetadata() const {
  protobuf_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_cartographer_2fmapping_5f2d_2fscan_5fmatching_2fproto_2fceres_5fscan_5fmatcher_5foptions_2eproto::file_level_metadata[kIndexInFileMessages];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// CeresScanMatcherOptions

// optional double occupied_space_weight = 1;
bool CeresScanMatcherOptions::has_occupied_space_weight() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void CeresScanMatcherOptions::set_has_occupied_space_weight() {
  _has_bits_[0] |= 0x00000002u;
}
void CeresScanMatcherOptions::clear_has_occupied_space_weight() {
  _has_bits_[0] &= ~0x00000002u;
}
void CeresScanMatcherOptions::clear_occupied_space_weight() {
  occupied_space_weight_ = 0;
  clear_has_occupied_space_weight();
}
double CeresScanMatcherOptions::occupied_space_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.occupied_space_weight)
  return occupied_space_weight_;
}
void CeresScanMatcherOptions::set_occupied_space_weight(double value) {
  set_has_occupied_space_weight();
  occupied_space_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.occupied_space_weight)
}

// optional double translation_weight = 2;
bool CeresScanMatcherOptions::has_translation_weight() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void CeresScanMatcherOptions::set_has_translation_weight() {
  _has_bits_[0] |= 0x00000004u;
}
void CeresScanMatcherOptions::clear_has_translation_weight() {
  _has_bits_[0] &= ~0x00000004u;
}
void CeresScanMatcherOptions::clear_translation_weight() {
  translation_weight_ = 0;
  clear_has_translation_weight();
}
double CeresScanMatcherOptions::translation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.translation_weight)
  return translation_weight_;
}
void CeresScanMatcherOptions::set_translation_weight(double value) {
  set_has_translation_weight();
  translation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.translation_weight)
}

// optional double rotation_weight = 3;
bool CeresScanMatcherOptions::has_rotation_weight() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void CeresScanMatcherOptions::set_has_rotation_weight() {
  _has_bits_[0] |= 0x00000008u;
}
void CeresScanMatcherOptions::clear_has_rotation_weight() {
  _has_bits_[0] &= ~0x00000008u;
}
void CeresScanMatcherOptions::clear_rotation_weight() {
  rotation_weight_ = 0;
  clear_has_rotation_weight();
}
double CeresScanMatcherOptions::rotation_weight() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.rotation_weight)
  return rotation_weight_;
}
void CeresScanMatcherOptions::set_rotation_weight(double value) {
  set_has_rotation_weight();
  rotation_weight_ = value;
  // @@protoc_insertion_point(field_set:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.rotation_weight)
}

// optional .cartographer.common.proto.CeresSolverOptions ceres_solver_options = 9;
bool CeresScanMatcherOptions::has_ceres_solver_options() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void CeresScanMatcherOptions::set_has_ceres_solver_options() {
  _has_bits_[0] |= 0x00000001u;
}
void CeresScanMatcherOptions::clear_has_ceres_solver_options() {
  _has_bits_[0] &= ~0x00000001u;
}
void CeresScanMatcherOptions::clear_ceres_solver_options() {
  if (ceres_solver_options_ != NULL) ceres_solver_options_->::cartographer::common::proto::CeresSolverOptions::Clear();
  clear_has_ceres_solver_options();
}
const ::cartographer::common::proto::CeresSolverOptions& CeresScanMatcherOptions::ceres_solver_options() const {
  // @@protoc_insertion_point(field_get:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.ceres_solver_options)
  return ceres_solver_options_ != NULL ? *ceres_solver_options_
                         : *::cartographer::common::proto::CeresSolverOptions::internal_default_instance();
}
::cartographer::common::proto::CeresSolverOptions* CeresScanMatcherOptions::mutable_ceres_solver_options() {
  set_has_ceres_solver_options();
  if (ceres_solver_options_ == NULL) {
    ceres_solver_options_ = new ::cartographer::common::proto::CeresSolverOptions;
  }
  // @@protoc_insertion_point(field_mutable:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.ceres_solver_options)
  return ceres_solver_options_;
}
::cartographer::common::proto::CeresSolverOptions* CeresScanMatcherOptions::release_ceres_solver_options() {
  // @@protoc_insertion_point(field_release:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.ceres_solver_options)
  clear_has_ceres_solver_options();
  ::cartographer::common::proto::CeresSolverOptions* temp = ceres_solver_options_;
  ceres_solver_options_ = NULL;
  return temp;
}
void CeresScanMatcherOptions::set_allocated_ceres_solver_options(::cartographer::common::proto::CeresSolverOptions* ceres_solver_options) {
  delete ceres_solver_options_;
  ceres_solver_options_ = ceres_solver_options;
  if (ceres_solver_options) {
    set_has_ceres_solver_options();
  } else {
    clear_has_ceres_solver_options();
  }
  // @@protoc_insertion_point(field_set_allocated:cartographer.mapping_2d.scan_matching.proto.CeresScanMatcherOptions.ceres_solver_options)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace scan_matching
}  // namespace mapping_2d
}  // namespace cartographer

// @@protoc_insertion_point(global_scope)
