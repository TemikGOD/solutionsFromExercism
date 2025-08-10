#pragma once

namespace space_age {

    namespace constants {
        constexpr double mercury = 0.2408467;
        constexpr double venus = 0.61519726;
        constexpr double earth = 1.0;
        constexpr double mars = 1.8808158;
        constexpr double jupiter = 11.862615;
        constexpr double saturn = 29.447498;
        constexpr double uranus = 84.016846;
        constexpr double neptune = 164.79132;
        constexpr double seconds_in_earth_year = 31557600.0;
    }

    class space_age {
    public:
        space_age(long long seconds);
    
        long long seconds() const;
        double on_mercury() const;
        double on_venus() const;
        double on_earth() const;
        double on_mars() const;
        double on_jupiter() const;
        double on_saturn() const;
        double on_uranus() const;
        double on_neptune() const;        
    private:
        long long age_in_seconds{};
    };

}  // namespace space_age
