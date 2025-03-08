cmake_minimum_required(VERSION 3.5)
project(raytracing)


set(CMAKE_CXX_STANDARD 11)
add_executable(raytracing main.cpp
        vec3.h
        Color.h
        ray.h
        vec3.h
        hittable.h
        sphere.h
        hittable_list.h
        rtweekend.h
        interval.h
        camera.h
        material.h)
