#pragma once

#include <iostream>

namespace tl {

void        TestFunction();
inline void TestFunction2()
{
    std::cout << "Hello\n";
};

} // namespace tl
