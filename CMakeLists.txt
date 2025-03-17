cmake_minimum_required(VERSION 3.5)
project(raytracing)


set(CMAKE_CXX_STANDARD 11)
add_executable(raytracing main.cpp
        headers/vec3.h
        headers/color.h
        headers/ray.h
        headers/vec3.h
        headers/hittable.h
        headers/sphere.h
        headers/hittable_list.h
        headers/rtweekend.h
        headers/interval.h
        headers/camera.h
        headers/material.h
        headers/aabb.h
        headers/bvh.h
        headers/texture.h
        headers/rtw_stb_image.h
        headers/perlin.h
        headers/quad.h
        headers/constant_medium.h
        headers/camera2.h
)
 