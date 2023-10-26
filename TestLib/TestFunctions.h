#pragma once

#include "nlohmann/json.hpp"
#include <iostream>

namespace tl {

void        TestFunction();
inline void TestFunction2()
{
    std::cout << "Creating jSON...\n";
    nlohmann::json json;
    json["hello"] = "123";
    std::cout << json << std::endl;
};

} // namespace tl
