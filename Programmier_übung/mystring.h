#ifndef MYSTRING_H
#define MYSTRING_H

#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <utility>


class MyString
{
private:
    //const char *class_variable_myString;
public:
    MyString(const char *);
    const char *class_variable_myString;
    long c_str();
    bool contains(const char *contains);
    long long int replace(const char *replace_from, const char *replace_to);

};

inline MyString::MyString(const char *s) {
    class_variable_myString = s;
}

#endif // MYSTRING_H
