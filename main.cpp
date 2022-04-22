#include <iostream>
#include <string>
#include <utility>
#include <vector>
#include "Printer.h"

int main(int argc, const char * argv[])
{
    std::cout << "Hello, World!\n";

    std::vector<std::vector<std::string>> v1{{"first", "second", "third"}, {"a string", "another"}, {}, {"abc"}};
    std::cout << v1 << std::endl;

    std::pair<int, std::string> p1('d', "five");
    std::pair<double, std::vector<int>> p2(3.14, {-2, 3, 7, -6});
    std::cout << p1 << std::endl;
    std::cout << p2 << std::endl;
    return 0;
}
