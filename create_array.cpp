#include <stdarg.h>
#include <vector>
using namespace std;

template <typename return_type, typename data_type>
data_type* CreateArray(std::size_t size) {
    return new data_type[size];
}

template <typename return_type, typename data_type, typename... Args>
return_type CreateArray(std::size_t size, Args... args) {
    data_type** arr = new data_type*[size];
    for (size_t i = 0; i < size; ++i) {
        arr[i] = (data_type*) CreateArray<return_type, data_type>(args...);
    }
    return (return_type) arr;
}