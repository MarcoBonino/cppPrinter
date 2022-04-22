#pragma once

#include <iostream>
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
