/**
 * A demo program for cpp5a.
 * 
 */

#pragma once
#include <iostream>
using namespace std;
#include "range.hpp"
#include "chain.hpp"
#include "zip.hpp"
#include "product.hpp"
#include "powerset.hpp"
#include <string>
#include "badkan.hpp"       // do i need this?
#define COMMA ,

using namespace itertools;

int main() {

	badkan::TestCase testcase;
	int grade=0;
	int signal = setjmp(badkan::longjmp_buffer);
	if (signal == 0) {

		
		// tests: after we check the basic once, we no longer need to check them again in the more 
		//        complex functions as we assume they are built upon working examples 
		testcase.setname("test range")
		.CHECK_EQUAL(range(1,5), "1234") 
        .CHECK_THROWS(range(0,0))
		.CHECK_EQUAL(range(0,7), "0123456")
		.CHECK_EQUAL(range('a','e'),"abcd")
		.CHECK_EQUAL(range(1.1,5.1),"1.1 2.1 3.1 4.1")
		;

		// testcase.setname("test chain")                              // chain of:
		// .CHECK_EQUAL(chain(range(1,5),range(6,8)),"123467")         // range(int) - range(int)
		// .CHECK_EQUAL(chain(range(0,7),range('a','d')),"0123456abc") // range(int) - range(char)
		// .CHECK_EQUAL(chain(range('a','c'),range('d','e')),"abd")    // range(char) - range(char)
		// .CHECK_EQUAL(chain(range('e','g'),range(7,9)),"ef78") 		// range(char) - range(int)
		// .CHECK_EQUAL(chain(range(0,3),string("hi")),"012hi") 		// range(int) - string
		// .CHECK_EQUAL(chain(string("bar"),range(0,2)),"hi01") 		// string - range(int)
		// .CHECK_EQUAL(chain(range('a','c'),string("hai")),"abhai")	// range(char) - string
		// .CHECK_EQUAL(chain(string("bar"),range('c','d')),"barc")	// string - range(char)
		// .CHECK_EQUAL(chain(chain(string("bar"),range('c','d')),chain(range(1,5),range(6,8)),"barc123467") // chain(string - range(char)) - chain(range(int) - range(int))
		// ;

		// testcase.setname("test zip")
		// .CHECK_EQUAL(zip(range(1,4),string("din")),"1,d 2,i 3,n")
		// .CHECK_EQUAL(zip(string("din"),range(1,4)),"d,1 i,2 n,3")
		// .CHECK_EQUAL(zip(range(1,4),range('a','d')),"1,a 2,b 3,c")
		// .CHECK_EQUAL(zip(zip(range(2,5), string("wxy")),zip(string("bcd"),range(7,10))),"2,w,b,7 3,x,c,8 4,y,d,9")
		// ;

		// testcase.setname("test product")
		// .CHECK_EQUAL(product(range(2,5), string("bar")),"2,b  2,a  2,r  3,b  3,a  3,r  4,b  4,a  4,r")
		// .CHECK_EQUAL(product(zip(zip(range(2,5), string("wxy")),zip(string("bcd"),range(7,10)), string("a")),"2,a w,a b,a 7,a 3,a x,a c,a 8,a 4,a y,a d, 9,a")

		// testcase.setname("test powerset")
		// .CHECK_EQUAL(powerset(range(1,3)),"{}{1}{2}{1,2}")
		// .CHECK_EQUAL(powerset(range(1,4)),"{}{1}{2}{1,2}{3}{1,3}{2,3}{1,2,3}")
		// .CHECK_EQUAL(powerset(range(1,5)),"{}{1}{2}{1,2}{3}{1,3}{2,3}{1,2,3}{4}{1,4}{2,4}{3,4}{1,2,4}{1,3,4}{2,3,4}{1,2,3,4}")
		// .CHECK_EQUAL(powerset(chain(range('b','d'),range('w','y'))),"{}{b}{c}{b,c}{w}{b,w}{c,w}{b,c,y}{x}{b,x}{c,x}{b,c,x}{w,x}{b,w,x}{c,w,x}{b,c,w,x}")
		// ;

    	grade = testcase.grade();
		
	} else {
		testcase.print_signal(signal);
		grade = 0;
	}
	cout << "Your grade is: "  << grade << endl;
	return 0;
}