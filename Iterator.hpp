#include <iostream>

namespace itertools{

    template<typename T>
    class iterator{

struct EmptyIterable {
    int* begin() const { return nullptr; }
    int* end() const { return nullptr; }
};
     
    T iter;
    iterator(T data):iter(data){}

    iterator(const iterator&);
    ~iterator();
    iterator& operator=(const iterator&);
    iterator& operator==(const iterator&);
    // iterator& operator[](const iterator&);
    iterator& operator!=(const iterator&);
    iterator& operator++(); //prefix increment
    iterator& operator*() const{
        return this->iter;
    }
    
};


}
