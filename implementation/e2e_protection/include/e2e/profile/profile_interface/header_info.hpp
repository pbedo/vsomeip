// *******************************************************************************************
// *                                                                                         *
// *     Valeo India Private Limited                                                         *
// *     CEEDEEYES IT PARK No. 63,                                                           *
// *     Phase 2 RAJIV GANDHI SALAI,                                                         *
// *     NAVALUR 600130 Chennai,                                                             *
// *     Tamil Nadu India                                                                    *
// *                                                                                         *
// *     All rights reserved. Distribution or duplication without previous written           *
// *     agreement of the owner is prohibited.                                               *
// *                                                                                         *
// *******************************************************************************************

// /file   header_info.hpp
//
// /brief  Interface to retrive header info
//

#ifndef VSOMEIP_V3_E2E_PROFILE_INTERFACE_HEADER_INFO_HPP
#define VSOMEIP_V3_E2E_PROFILE_INTERFACE_HEADER_INFO_HPP

#include <cstdint>
#include <vsomeip/primitive_types.hpp>

namespace vsomeip_v3 {
namespace e2e {
namespace profile_interface {


class profile_header_info {
public:
    virtual ~profile_header_info() {}
    virtual length_t get_e2e_header_offset() = 0;
    virtual length_t get_e2e_header_length() = 0;
    virtual bool should_remove_header() = 0;
};

} // namespace profile_interface
} // namespace e2e
} // namespace vsomeip_v3

#endif // VSOMEIP_V3_E2E_PROFILE_INTERFACE_HEADER_INFO_HPP
