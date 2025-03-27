#pragma once

#include <algorithm>
#include <map>
#include <string>
#include <vector>

float consultMax(const std::string& search_term, const std::map<std::string, std::vector<float>>& data) {
    auto loc = data.find(search_term);
    if (loc == data.end()) return -1;
    float max = -1;
    for (const float& x : loc->second)
    {
        max = x > max ? x : max;
    }
    return max;
}

std::map<std::string, float> returnMaxMap(const std::map<std::string, std::vector<float>>& in_map) {
    std::map<std::string, float> new_map;
    for (const auto& [key, values] : in_map) new_map[key] = consultMax(key, in_map);
    return new_map;
}