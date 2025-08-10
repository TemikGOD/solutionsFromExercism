#include "speedywagon.h"

namespace speedywagon {

// Enter your code below:

// Please don't change the interface of the uv_light_heuristic function
int uv_light_heuristic(std::vector<int>* data_array) {
    double avg{};
    for (auto element : *data_array) {
        avg += element;
    }
    avg /= data_array->size();
    int uv_index{};
    for (auto element : *data_array) {
        if (element > avg) ++uv_index;
    }
    return uv_index;
}

bool connection_check(const pillar_men_sensor* sensor) {
    if (sensor) {
        return true;
    } else {
        return false;
    }
}

int activity_counter(const pillar_men_sensor* sensor_array_ptr, size_t size) {
    int counter{};
    for (size_t i{}; i < size; ++i) {
        counter += (sensor_array_ptr + i)->activity;
    }
    return counter;
}

bool alarm_control(const pillar_men_sensor* sensor) {
    if (!sensor || !sensor->activity) {
        return false;
    } else {
        return true;
    }
}

bool uv_alarm(pillar_men_sensor* sensor) {
    if (!sensor || uv_light_heuristic(&sensor->data) <= sensor->activity) {
        return false;
    } else {
        return true;
    }
}

}  // namespace speedywagon
