#ifndef GUARD_String_list_h
#define GUARD_String_list_h


#include <string>


class String_list{
public:
    String_list(); // default constructor
    void push_back(char*);
    char* access (int) const;
    int size();

private:
    char **words;
    int numOfElements;
};

#endif
