#include "float_functions.hpp"
#include "vec_3f.hpp"

namespace simple_physics {
    struct force_3f {
        float mass;
        vec_3f acceleration;
    };
}