#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    return 0;
}

// iostream is the input/output stream library
// it contains the definitions of the cin and cout objects, which are used to input and output data
// although you can use cin and cout without the std:: prefix, it is good practice to use the std:: prefix

// talk about why you need :: and << and endl

// :: is the scope resolution operator
// you need the scope resolution operator to access the cout and endl from the std namespace

// << is the insertion operator
// you need the insertion operator to insert the text into the output stream

// endl is the end of line operator
// you need the end of line operator to end the line and go to the next line

// std is the standard library
// it contains many useful classes and functions, including cout and endl

// cout is the standard output stream
// you need the standard output stream to output the text to the console