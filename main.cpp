/*

Exercise 10-4
Write a class that implements a list that holds strings

Exercise 10-5
Write a bidirectional iterator for your String_list class.

Exercise 10-6
Test the class by rewriting the split function to put its output into a String_list

*/

#include <iostream>

#include "String_list.h"
#include "split.h"

int main(int argc, char **argv)
{
    // initialize an object of my class String_list
    String_list myStringList1;

    // store arguments into my object
    for (size_t i = 1; i < argc; ++i)
        myStringList1.push_back(argv[i]);

    // print the results
    for (size_t i = 0; i < myStringList1.size(); ++i)
        std::cout << myStringList1.access(i) << std::endl;

    // accessing bidirectional iterator
    std::cout << std::endl << std::endl;
    std::cout << *myStringList1.begin() << std::endl;
    std::cout << *myStringList1.begin()++ << std::endl;
    std::cout << *(myStringList1.end() - 1) << std::endl;


    // obtain a line using getline, pass it to split function
    std::cout << std::endl << std::endl << "Write a line to split: ";
    std::string s;
    String_list myStringList2;
    while(getline(std::cin, s))
        split(s, myStringList2)

    // print results
    for (size_t i = 0; i < myStringList2.size(); ++i)
        std::cout << myStringList2.access(i) << std::endl;

    return 0;
}
