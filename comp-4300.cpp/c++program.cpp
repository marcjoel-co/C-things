#include <iostream>
// allows us to use standard c out
// that lets us print to the console 

int main (int argc, char *argv[]) {
    // argc is the count of arguments
    // argv is the array of arguments
    //
    // argv[0] is the name of the program similar to c
    // argv[1] is the first argument
    // argv[2] is the second argument
    // etc.
    std::cout << "Hello, World!" << std::endl;
    // std::cout is the standard output stream
    // << is the insertion operator
    // "Hello, World!" is the string to print
    // << std::endl is the end line operator
    return 0;
    // return 0 means the program ran successfully
}