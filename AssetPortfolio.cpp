#include "AssetPortfolio.h"

AssetPortfolio::AssetPortfolio() : size(0) {}

AssetPortfolio::AssetPortfolio(int size) : size(size) {}

int AssetPortfolio::get_num_assets() {
    return assets.size();
}

bool AssetPortfolio::has_asset(std::string product) {
    for (auto& asset : assets) {
        if (asset.get_product_type() == product) {
            return true;
        }
    }
    return false;
}

Asset* AssetPortfolio::get_assets() {
    return assets.data();
}

bool AssetPortfolio::add_asset(Asset new_asset) {
    if (assets.size() < size) {
        assets.push_back(new_asset);
        return true;
    }
    return false;
}

AssetPortfolio::~AssetPortfolio() {}