#include "space_age.h"

namespace space_age {

    space_age::space_age(long long seconds) : age_in_seconds{seconds} {}
    
    long long space_age::seconds() const {
        return age_in_seconds;
    }
    
    double space_age::on_mercury() const {
        return age_in_seconds / constants::seconds_in_earth_year / constants::mercury;
    }
    
    double space_age::on_venus() const {
        return age_in_seconds / constants::seconds_in_earth_year / constants::venus;
    }
    
    double space_age::on_earth() const {
        return age_in_seconds / constants::seconds_in_earth_year / constants::earth;
    }
    
    double space_age::on_mars() const {
        return age_in_seconds / constants::seconds_in_earth_year / constants::mars;
    }
    
    double space_age::on_jupiter() const {
        return age_in_seconds / constants::seconds_in_earth_year / constants::jupiter;
    }
    
    double space_age::on_saturn() const {
        return age_in_seconds / constants::seconds_in_earth_year / constants::saturn;
    }
    
    double space_age::on_uranus() const {
        return age_in_seconds / constants::seconds_in_earth_year / constants::uranus;
    }
    
    double space_age::on_neptune() const {
        return age_in_seconds / constants::seconds_in_earth_year / constants::neptune;
    }      

}  // namespace space_age
