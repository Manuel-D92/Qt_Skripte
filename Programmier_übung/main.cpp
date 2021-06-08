#include <mystring.h>

int main()
{
    MyString s("123456789");

    std::cout << "s printed with c_str() = " << s.c_str() << std::endl; // 123456789
    //long ss; // Variable class_variable_myString make from public to private in Class MyString (implicit conversion?)
    //ss = s.c_str();
    std::cout << "s printed with implicit conversion = " << s.class_variable_myString << std::endl; // 123456789

    std::cout << "s contains 345 = " << (s.contains("345") ? "true" : "false") << std::endl; // true
    std::cout << "s contains 1345 = " << (s.contains("1345") ? "true" : "false") << std::endl; // false

    std::cout << "Replace does not find string = " << s.replace("Hello", "00000") << std::endl; // 123456789
    std::cout << "345 replaced with 00000 = " << s.replace("345", "00000") << std::endl; // 12000006789

    return EXIT_SUCCESS;
}
