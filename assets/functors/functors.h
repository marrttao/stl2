#ifndef FUNCTORS
#define FUNCTORS

#include <vector>
#include <algorithm>
#include <functional>

template<typename T>
class Min {
public:
    T operator () (const std::vector<T>& vector) {
        return *std::min_element(vector.begin(), vector.end());
    }
};

template<typename T>
class Max {
public:
    T operator () (const std::vector<T>& vector) {
        return *std::max_element(vector.begin(), vector.end());
    }
};

template<typename T>
class SortDown {
public:
    std::vector<T> operator () (std::vector<T> vector) {
        std::sort(vector.begin(), vector.end(), std::greater<T>());
        return vector;
    }
};

template<typename T>
class SortUp {
public:
    std::vector<T> operator () (std::vector<T> vector) {
        std::sort(vector.begin(), vector.end(), std::less<T>());
        return vector;
    }
};

template<typename T>
class ResizeOnConst {
public:
    std::vector<T> operator()(std::vector<T> vector, const T& increment) {
        for (auto& elem : vector) {
            elem += increment;
        }
        return vector;
    }
};

template<typename T>
class NegativeResizeConst {
public:
    std::vector<T> operator()(std::vector<T> vector, const T& decrement) {
        for (auto& elem : vector) {
            elem -= decrement;
        }
        return vector;
    }
};

template<typename T>
class DeleteIf {
public:
    std::vector<T> operator () (std::vector<T> vector, bool(*condition)(T)) {
        vector.erase(std::remove_if(vector.begin(), vector.end(), condition), vector.end());
        return vector;
    }
};

#endif // !FUNCTORS
