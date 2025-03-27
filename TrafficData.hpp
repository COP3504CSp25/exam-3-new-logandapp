#pragma once

#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <sstream>

std::map<std::string, int> loadTrafficData(const std::string& filename) 
{
  std::map<std::string, int> out{};
  std::ifstream file{filename};
  if (!file) 
  {
    std::cout << -1 << std::endl;
    return out;  // Bad behavior but c'est la vie.
  }
  std::string line;
  while (std::getline(file, line))
  {
    std::istringstream line_ss{line};
    std::string code;
    std::string num_pass_str;
    int num_pass;

    std::getline(line_ss, code, ',');
    std::getline(line_ss, num_pass_str);
    num_pass = std::stoi(num_pass_str);
    out[code] = num_pass;
  }

  return out;
}

void updateTrafficData(const std::string& filename, std::map<std::string, int>& dataMap) 
{
  std::map<std::string, int> traffic_data = loadTrafficData(filename);
  for (const auto& [code, num_pass] : traffic_data) dataMap[code] = num_pass;
}