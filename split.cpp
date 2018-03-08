#include <algorithm> // find_if
#include <cctype> // isspace
#include <cstring> // strcpy
#include <string>

#include "split.h"
#include "String_list.h"

bool not_space(const char& c){
    return !isspace(c);
}

bool is_space(const char& c){
    return isspace(c);
}

void split (const std::string& s, String_list& container){
    typedef std::string::const_iterator iter;

    // iterator to denote the beginning of each word
    iter i = s.begin();
    while (i != s.end()){
        // skip all leading white spaces
        i = std::find_if(i, s.end(), not_space);

        // iterator to denote the end of each word, skipping until the next white space
        iter j = std::find_if(i, s.end(), is_space);

        // if we have found a word, make a string from that word, convert to a pointer to an array of chars, copy the chars over.
        // Makes a const char* to a char*
        if (i != s.end()){
            std::string str = std::string(i, j);
            char *ptr = new char[str.length() + 1];
            std::strcpy(ptr, str.c_str());
            container.push_back(ptr);
            delete[] ptr;
        }

        // advance i to start searching for the next word
        i = j;
    }
}
