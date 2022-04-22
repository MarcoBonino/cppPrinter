#include <iostream>
#include <string>
#include <vector>
#include "Printer.h"

int main(int argc, const char * argv[])
{
    std::cout << "Hello, World!\n";
    std::vector<std::vector<std::string>> v1{{"first", "second", "third"}, {"a string", "another"}, {}, {"abc"}};
    std::cout << v1 << std::endl;
    return 0;
}
