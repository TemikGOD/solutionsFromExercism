#pragma once
#include <vector>
#include <string>

namespace lasagna_master {

struct amount {
    int noodles;
    double sauce;
};

int preparationTime(const std::vector<std::string>& layers, const int time_per_layer=2);
amount quantities(const std::vector<std::string>& layers);
void addSecretIngredient(std::vector<std::string>& my_list, const std::vector<std::string>& other_list);
void addSecretIngredient(std::vector<std::string>& my_list, const std::string& ingredient);
std::vector<double> scaleRecipe(const std::vector<double>& recipe, const int portions);

}  // namespace lasagna_master
