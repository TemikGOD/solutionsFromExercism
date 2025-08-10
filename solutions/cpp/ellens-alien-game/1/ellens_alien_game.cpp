namespace targets {
    class Alien {
        int health{3};
    public:
        int x_coordinate{};
        int y_coordinate{};

        explicit Alien(const int x, const int y) : x_coordinate{x}, y_coordinate{y} {}

        int get_health() const {
            return health;
        }

        bool hit() {
            if (health) {
                --health;
            }
            return true;
        }

        bool is_alive() {
            if (health) {
                return true;
            } else {
                return false;
            }
        }

        bool teleport(const int x_new, const int y_new) {
            x_coordinate = x_new;
            y_coordinate = y_new;

            return true;
        }

        bool collision_detection(const Alien& other) const {
            if (this->x_coordinate == other.x_coordinate && this->y_coordinate == other.y_coordinate){
                return true;
            } else {
                return false;
            }
        }
    };
}  // namespace targets