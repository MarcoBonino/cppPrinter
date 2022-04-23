#include <iostream>
#include "Printer.h"

int main(int argc, const char * argv[])
{
    std::cout << "Hello, World!\n";

    std::vector<std::vector<std::string>> v1{{"first", "second", "third"}, {"a string", "another"}, {}, {"abc"}};
    std::cout << "v1 = " << v1 << std::endl;

    std::pair<int, std::string> p1('d', "five");
    std::pair<double, std::vector<int>> p2(3.14, {-2, 3, 7, -6});
    std::cout << "p1 = " << p1 << std::endl;
    std::cout << "p2 = " << p2 << std::endl;

    std::array<std::string, 3> testArray{"first string from test array", "second", "third"};
    std::cout << "testArray = " << testArray << std::endl;

    std::list<double> myList{2.4, 1, 0, 8.8, 12.12345};
    std::cout << "myList = " << myList << std::endl;

    std::forward_list<int> fwList{0, 1, 2, 3, 4, 5, 6};
    std::cout << "fwList = " << fwList << std::endl;

    std::deque<int> dq(fwList.begin(), fwList.end());
    std::cout << "dq = " << dq << std::endl;

    std::map<std::string, int> myMap;
    myMap["key_1"] = 1;
    myMap["key_2"] = 10;
    myMap["key_3"] = 20;
    myMap["key_4"] = 30;
    std::cout << "myMap = " << myMap << std::endl;

    std::multimap<std::string, int> myMultiMap {{"key_1", 1}, {"key_2", 10}, {"key_2", 20}, {"key_2", 30}};
    std::cout << "myMultiMap = " << myMultiMap << std::endl;

    std::unordered_map<std::string, int> myUnorderedMap(myMap.begin(), myMap.end());
    std::cout << "myUnorderedMap = " << myUnorderedMap << std::endl;

    std::unordered_multimap<std::string, int> myUnorderedMultiMap(myMultiMap.begin(), myMultiMap.end());
    std::cout << "myUnorderedMultiMap = " << myUnorderedMultiMap << std::endl;

    return 0;
}
