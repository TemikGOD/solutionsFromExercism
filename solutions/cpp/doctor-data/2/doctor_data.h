#pragma once
#include <string>

namespace star_map {
    enum class System {
        Sol,
        AlphaCentauri,
        BetaHydri,
        DeltaEridani,
        EpsilonEridani,
        Omicron2Eridani
    };
}

namespace heaven {
    class Vessel {
    public:
        Vessel(const std::string& _pilot, const int _generation, star_map::System _system = star_map::System::Sol);

        Vessel replicate(const std::string& _pilot);
        void make_buster();
        bool shoot_buster();
        
        std::string pilot{};
        int generation{};
        star_map::System current_system{};
        int busters{};
    };

    std::string get_older_bob(const Vessel& first, const Vessel& second);
    bool in_the_same_system(const Vessel& first, const Vessel& second);
}


