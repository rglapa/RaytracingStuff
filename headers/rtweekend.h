//
// Created by Ruben Glapa on 3/3/25.
//

#ifndef RTWEEKEND_H
#define RTWEEKEND_H

#include <cmath>
#include <iostream>
#include <cstdlib>
#include <random>
#include <limits>
#include <memory>

using std::make_shared;
using std::shared_ptr;

constexpr double infinity = std::numeric_limits<double>::infinity();
const double pi = 3.14159265358979323846;

inline double degrees_to_radians(double degrees) {
    return degrees * pi / 180.0;
}

inline double random_double() {
    static std::uniform_real_distribution<double> distribution(0.0, 1.0);
    static std::mt19937 generator;
    return distribution(generator);
}

inline double random_double(double min, double max) {
    // Returns a random real in [min,max]
    return min + (max-min)*random_double();
}

inline int random_int(int min, int max) {
    // Returns a random integer in [min,max]
    return int(random_double(min, max+1));
}

#include "color.h"
#include "interval.h"
#include "ray.h"
#include "vec3.h"

#endif //RTWEEKEND_H
