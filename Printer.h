#pragma once

#include <array>
#include <concepts>
#include <deque>
#include <forward_list>
#include <iostream>
#include <list>
#include <utility>
#include <vector>

template <typename, template <typename ...> typename>
inline constexpr bool is_specialization = false;
template <template <typename ...> typename T, typename ... ARGS>
inline constexpr bool is_specialization<T<ARGS ...>, T> = true;

template <typename T>
concept isDeque = is_specialization<T, std::deque>;

template <typename T>
concept isForwardList = is_specialization<T, std::forward_list>;

template <typename T>
concept isList = is_specialization<T, std::list>;

template <typename T>
concept isVector = is_specialization<T, std::vector>;

static_assert(isVector<std::vector<int>> and !isList<std::vector<int>>);
static_assert(!isVector<std::list<int>> and isList<std::list<int>>);

template <typename TYPE, template<typename, size_t> typename T, size_t N>
inline constexpr bool is_specialization_array = false;

template <template<typename, size_t> typename T, typename TYPE, size_t N>
inline constexpr bool is_specialization_array<T<TYPE, N>, T, N> = true;

template <typename>
struct array_size;

template <typename T, size_t N>
struct array_size<std::array<T, N>>
{
    static const size_t value = N;
};

template <typename T>
concept isArray = is_specialization_array<T, std::array, array_size<T>::value>;


template <typename T>
requires isArray<T> or isDeque<T> or isForwardList<T> or isList<T> or isVector<T>
std::ostream& operator<<(std::ostream& os, T v)
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
