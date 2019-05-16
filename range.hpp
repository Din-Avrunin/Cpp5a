#pragma once
#include <iostream>
#include <iterator>

using namespace std;
namespace itertools{

 template<typename T>
    class myRange{

    public:

        T first;
        T last;

    


    // public:

    myRange(T a,T b){

        first = a;
        last = b;
    }  
        

        
    
        class iterator{

        // bool operator!=(const iterator& rhs) const {
			// return m_pointer != rhs.m_pointer;
		// }

            public:

            T t; // t is data
			iterator(T other) :t(other) {}
            
                bool operator !=(myRange::iterator const second)const {
				return (this->t != second.t);
			    }  

                iterator& operator++(){
                    t++;
                    return *this;
                }
            
                T& operator*(){
                    return t;
                }

        }; // end of iterator

        iterator begin(){
             return first;
         }

        iterator end(){
            return last;
        }
	



    }; // end of myRange

    template <typename T>
	myRange<T> range(T begin, T end) {
		return myRange<T>(begin, end);
	}

} // end of namespace









// #include <iostream>

// namespace itertools{

//     template<typename T>
//     class iterator{

// struct EmptyIterable {
//     int* begin() const { return nullptr; }
//     int* end() const { return nullptr; }
// };
     
//     T iter;
//     iterator(T data):iter(data){}

//     iterator(const iterator&);
//     ~iterator();
//     iterator& operator=(const iterator&);
//     iterator& operator==(const iterator&);
//     // iterator& operator[](const iterator&);
//     iterator& operator!=(const iterator&);
//     iterator& operator++(); //prefix increment
//     iterator& operator*() const{
//         return this->iter;
//     }
    
// };


// }
