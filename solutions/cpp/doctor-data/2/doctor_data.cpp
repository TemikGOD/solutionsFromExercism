#include "doctor_data.h"

heaven::Vessel::Vessel(const std::string& _pilot, const int _generation, star_map::System _system) : 
                pilot{_pilot}, generation{_generation}, current_system{_system} {}

heaven::Vessel heaven::Vessel::replicate(const std::string& _pilot) {
    return Vessel{_pilot, this->generation + 1, this->current_system};
}

void heaven::Vessel::make_buster() {
    ++busters;
}

bool heaven::Vessel::shoot_buster() {
    if (busters) {
        --busters;
        return true;
    } else {
        return false;
    }
}

std::string heaven::get_older_bob(const Vessel& first, const Vessel& second) {
    if (first.generation < second.generation) {
        return first.pilot;
    } else {
        return second.pilot;
    }
}

bool heaven::in_the_same_system(const Vessel& first, const Vessel& second) {
    if (first.current_system == second.current_system) {
        return true;
    } else {
        return false;
    }
}