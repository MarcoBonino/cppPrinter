#pragma once

#include <iostream>
#include <utility>
#include <vector>

template <typename T>
std::ostream& operator<<(std::ostream& os, std::vector<T> v)
{
    os << "[";
    if (!v.empty())
    {
        auto it = v.begin();
        os << *it;
        for (++it; it != v.end(); ++it)
            os << ", " << *it;
    }
    return os << "]";
}

template <typename T1, typename T2>
std::ostream& operator<<(std::ostream& os, std::pair<T1, T2> p)
{
    return os << "{" << p.first << ", " << p.second << "}";
}
