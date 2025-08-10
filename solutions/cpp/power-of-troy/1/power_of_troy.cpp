#include "power_of_troy.h"

namespace troy {
    void give_new_artifact(human& person, const std::string& artifact_name) {
        person.possession = std::make_unique<artifact>(artifact{artifact_name});
    }

    void exchange_artifacts(std::unique_ptr<artifact>& first, std::unique_ptr<artifact>& second) {
        std::swap(first, second);
    }

    void manifest_power(human& person, const std::string& power_name) {
        person.own_power = std::make_shared<power>(power{power_name});
    }

    void use_power(const human& caster, human& target) {
        target.influenced_by = caster.own_power;
    }

    int power_intensity(const human& person){
        return person.own_power.use_count();
    }
    
}  // namespace troy
