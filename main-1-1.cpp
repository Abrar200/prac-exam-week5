#include "Asset.h"
#include <iostream>

int main() {
    Asset a1;
    std::cout << "Default asset: " << a1.get_product_type() << ", " << a1.get_value() << std::endl;

    Asset a2(1000, "Stock");
    std::cout << "Custom asset: " << a2.get_product_type() << ", " << a2.get_value() << std::endl;

    return 0;
}