//
// Created by Ruben Glapa on 3/3/25.
//

#ifndef HITTABLE_H
#define HITTABLE_H

#include "ray.h"

class material;

class hit_record {
public:
    point3 p;
    vec3 normal;
    shared_ptr<material> mat;
    double t;
    hit_record(): t(0.0), front_face(false) {}
    bool front_face;

    void set_face_normal(const ray& r, const vec3& outward_normal) {
        front_face = dot(r.direction(), outward_normal) < 0;
        normal = front_face ? outward_normal : -outward_normal;
    }
};

class hittable {
protected:
    ~hittable() = default;

public:
    virtual bool hit(const ray& r, interval ray_t, hit_record& rec) const = 0;
};

#endif //HITTABLE_H
