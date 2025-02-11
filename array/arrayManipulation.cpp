#include <iostream>

int main()
{
    // creates an array of 5 integers
    int array[5];

    //get array starting from 1 to 5
    for (int i = 0; i < 5; i++) 
    { 
        std::cout << "Enter the element " << i + 1 << ": ";
            // get the element from the user
        std::cin >> array[i];
            // store the element in the array
    }
    
    // print the array
    for (int i = 0; i < 5; i++)
    {
      std::cout << array[i] << " "; 
    }
}