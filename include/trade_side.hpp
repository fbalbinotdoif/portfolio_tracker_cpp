#pragma once
#include <string_view>

namespace portfolio {

    enum class TradeSide {
        BUY,
        SELL
    };

    [[nodiscard]] inline std::string_view to_string(const TradeSide& side){
        switch (side) {
            case portfolio::TradeSide::BUY:
                return "BUY";
            case portfolio::TradeSide::SELL:
                return "SELL";
            default:
                return "";
        }
    }
}
