

#include "String_list.h"


String_list::String_list() : words(new char*), numOfElements(0) { };

void String_list::push_back (char *ptr){
    words[numOfElements] = ptr;
    ++numOfElements;
}

char* String_list::access (int n) const{
    // if (n < numOfElements)
    return words[n];
    // else throw error?
}

int String_list::size(){
    return numOfElements;
}
