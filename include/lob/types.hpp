#pragma once
#include <cstdint>
namespace lob {
    enum class Side : uint8_t { Bid = 0, Ask = 1 };
    using Price = int64_t;
    using Qty   = int32_t;
    using OrderId = uint64_t;

    struct Order {
        OrderId id{};
        Side side{};
        Price price{0};
        Qty qty{0};  // remaining quantity
    };
}