#include "mystring.h"

long MyString::c_str()
{
    // return the Class Variable from MyString Class
    long retu;
    retu =atof(class_variable_myString);
    return retu;
}

bool MyString::contains(const char *contains)
{
    // this class asks whether the input variable contains part of the class variable MyString
    bool te = false;
    if(strstr(class_variable_myString,contains))
    {
        te = true;
    }
    return te;
}

long long int MyString::replace(const char *replace_from, const char *replace_to)
{
    /*This class replaces part of a variable length contained in the
    class variable with a second, different variable.*/
    long long int return_value;

    if(contains(replace_from)==true) // Compare whether replace_from is present in the string class_variable_myString
    {
        // length of the variable class_variable_myString (123456789) and make a copy of replace_class_variable_myString
        size_t length_class_variable_myString = strlen(class_variable_myString);
        char replace_class_variable_myString[length_class_variable_myString];
        strcpy(replace_class_variable_myString,class_variable_myString);

        // length of the variable replace_to (00000) and make a copy of replace_to_char_string
        size_t length_replace_value_to_pointer = strlen(replace_to);
        char replace_to_char_string[length_replace_value_to_pointer];
        strcpy(replace_to_char_string,replace_to);

        // length of the variable replace_from (345) and make a copy of replace_from_char_string
        size_t length_replace_value_from_pointer = strlen(replace_from);
        char replace_from_char_string[length_replace_value_from_pointer];
        strcpy(replace_from_char_string,replace_from);

        // get the variable from where the string is identical;
        // Example-> x1=345 and x2=123456789 ->make x3=3456789; replace_value_from_pointer (3456789)
        char *replace_value_from_pointer;
        replace_value_from_pointer = strstr(replace_class_variable_myString,replace_from_char_string);

        // length of the variable replace_value_from_pointer (3456789) and make a copy of replace_value_from_char
        size_t length_replace_value_after_first_cut = strlen(replace_value_from_pointer);
        char replace_value_from_char[length_replace_value_after_first_cut];
        strcpy(replace_value_from_char,replace_value_from_pointer);

        // length and Variable from first Part Example(12) -> length_first_part =2 ;first_part =12
        int length_first_part = length_class_variable_myString-length_replace_value_after_first_cut;
        char first_part[length_first_part];
        strncpy(first_part,replace_class_variable_myString,length_first_part);

        // get the next number of replace; Example(3456789), replace_value=(345) cut=(6)
        // length from (first part =2) + (replace_value_from =3)-> Position(5)
        // Position(5) is in replace_class_variable_myString=(cut=6);   (Position 0-4)->(Value 12345),(Position 5)->(Value 6)
        char cut={replace_class_variable_myString[length_first_part+length_replace_value_from_pointer]}; //strlen(length_replace_from)
        char *replace_value_cut_pointer;
        replace_value_cut_pointer = strrchr(replace_class_variable_myString, cut);

        // length from out put value
        int out_length;
        out_length =length_class_variable_myString+length_replace_value_to_pointer-length_replace_value_from_pointer;

        // define the outputs; copy first part into the out_one Variable (12)->(12@\..)
        char out_one[out_length];
        char out_two[out_length];
        char out_three[out_length];
        strcpy(out_one,first_part);

        memmove(out_one+length_first_part,out_one+length_first_part+1,1);
        //delete @ from first_part example ->(12@\ to 12\)

        // add replace_value_cut_pointer(6789) to the replact_to value(00000) -> 000006789
        strcpy(out_two,replace_to);
        strcpy(out_three,replace_value_cut_pointer);
        strcat(out_two,out_three);

        // add out_two(000006789) to the first part (12) -> 12000006789
        strcat(out_one,out_two);

        // make a long long int out of a char*
        return_value = atof(out_one);
    }
    else
    {
        // hand over the Variable class_variable_myString
        return_value = atof(class_variable_myString);
    }
    return return_value;
}
