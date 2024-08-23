#include "AssetPortfolio.h"
#include <iostream>

int main() {
    AssetPortfolio p1(2);
    std::cout << "Number of assets in default portfolio: " << p1.get_num_assets() << std::endl;

    Asset a1(1000, "Stock");
    Asset a2(2000, "Bond");
    Asset a3(3000, "Mutual Fund");

    std::cout << "Adding asset 1: " << (p1.add_asset(a1) ? "Success" : "Failure") << std::endl;
    std::cout << "Adding asset 2: " << (p1.add_asset(a2) ? "Success" : "Failure") << std::endl;
    std::cout << "Adding asset 3: " << (p1.add_asset(a3) ? "Success" : "Failure") << std::endl;

    std::cout << "Number of assets in portfolio: " << p1.get_num_assets() << std::endl;
    std::cout << "Has asset of type 'Stock': " << (p1.has_asset("Stock") ? "Yes" : "No") << std::endl;
    std::cout << "Has asset of type 'Mutual Fund': " << (p1.has_asset("Mutual Fund") ? "Yes" : "No") << std::endl;

    return 0;
}