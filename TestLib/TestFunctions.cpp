#include "pch.h"
#include "framework.h"
#include "TestFunctions.h"

#include "3rdLib/3rdFunctions.h"

#include <string>

void TestFunction()
{
    std::cout << "Hello, TestFunction!\n";
    std::cout << "Hello, 3rdLib - " + std::to_string(ThirdFunction()) + "!\n";
}
