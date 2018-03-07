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

int main(int argc, char **argv)
{
    // initialize an object of my class String_list
    String_list myObject;

    // store arguments into my object
    for (int i = 1; i < argc; ++i)
        myObject.push_back(argv[i]);

    // print the results
    for (int i = 0; i < myObject.size(); ++i)
        std::cout << myObject.access(i) << std::endl;

    return 0;
}
