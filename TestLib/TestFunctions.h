#pragma once

#include <iostream>

namespace tl {

void        TestFunction();
inline void TestFunction2()
{
    std::cout << "Creating jSON...\n";
    nlohmann::json json;
    json["hello"] = "123";
    std::cout << json << std::endl;
    int t = 34;
    int a = 53;
};

} // namespace tl
