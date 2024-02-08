// Copyright (c) Andreas Fertig.
// SPDX-License-Identifier: MIT

#include <array>
#include <format>
#include <iostream>
#include <string_view>
#include <vector>

int main()
{
  std::vector<char> buffer{'H', 'e', 'l', 'l', 'o', ','};
  std::format_to(std::back_inserter(buffer), " {}", "World");

  for(const auto& c : buffer) { std::cout << c; }

  std::cout << '\n';
}