#include "date.hpp"
#include <iostream>
#include "trade_side.hpp"

int main() {
    portfolio::Date d1{10, 2, 2025};
    portfolio::Date d2{20, 3, 2026};

    // operator< is overloaded for portfolio::Date in date.hpp. - This is not the built in < — it compares dates chronologically.
    bool comparasion = d1 < d2;
    std::cout << "Comparasion to D1 and D2: " << comparasion << "\n";

    portfolio::TradeSide side = portfolio::TradeSide::BUY;
    std::cout << portfolio::to_string(side) << "\n";
    
    return 0;
}