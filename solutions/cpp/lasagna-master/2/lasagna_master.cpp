#include "lasagna_master.h"

namespace lasagna_master {

int preparationTime(const std::vector<std::string>& layers, const int time_per_layer) {
    return layers.size() * time_per_layer;
}

amount quantities(const std::vector<std::string>& layers) {
    amount result{};
    for (size_t i{}; i < layers.size(); ++i) {
        if (layers[i] == "noodles") {
            result.noodles += 50;
        } else if (layers[i] == "sauce") {
            result.sauce += 0.2;
        }
    }
    return result;
}

void addSecretIngredient(std::vector<std::string>& my_list, const std::vector<std::string>& other_list) {
    my_list.back() = other_list.back();
}

void addSecretIngredient(std::vector<std::string>& my_list, const std::string& ingredient) {
    my_list.back() = ingredient;
}

std::vector<double> scaleRecipe(const std::vector<double>& recipe, const int portions) {
    std::vector<double> result;
    result.reserve(recipe.size());
    for (auto elem : recipe) {
        result.emplace_back(elem * portions * 0.5);
    }
    return result;
}

}  // namespace lasagna_master
