#include <iostream>

void printArray(int arr[], int n);
void optionMenu();
#define MAX_SIZE 100 // Maximum size of the array

int main()
{
    
    int Choice = 0, size;
    int arr[MAX_SIZE];
    optionMenu();
    bool running = true;
    while(running)
    {
    std::cout << "Enter your choice exits if otherthan: ";
    std::cin >> Choice;
    
    
    

        switch (Choice) 
        {
        case 1:
        // get array 
            std:: cout << "Enter the size of the array: ";
            std:: cin >> size;
            for (int i = 0; i < size; i++) {
                std:: cout << "Enter the element " << i + 1 << ": ";
                std:: cin >> arr[i];
            }
        case 2:
            // print array
            printArray(arr, size);
            break;
        case 3:
            // Modify array from index
            int index, value;
            std:: cout << "Enter the index: ";
            std:: cin >> index;
            std:: cout << "Enter the value: ";
            std:: cin >> value;
            arr[index] = value;
            break;
        case 4:
            // search for an element
            int element;
            std:: cout << "Enter the element to search: ";
            std:: cin >> element;
            for (int i = 0; i < size; i++) {
                if (arr[i] == element) {
                    std:: cout << "Element found at index " << i << std:: endl;
                    break;
                }
            }
            break;
        case 5:
            // sort the array
            for (int i = 0; i < size - 1; i++) 
            { 
                for (int j = 0; j < size - i - 1; j++) 
                {
                    if (arr[j] > arr[j + 1]) // if the current element is greater than the next element
                    {
                        int temp = arr[j]; // swap using temporary variables
                        arr[j] = arr[j + 1]; 
                        arr[j + 1] = temp;
                    }
                }
            }
            break; 
        
        default: 
            running = false;
            break;
        }
    }
}

void printArray(int arr[], int n) 
{
    for (int i = 0; i < n; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

void optionMenu() 
{
    std:: cout << "1. Enter the array" << std:: endl;
    std:: cout << "2. Print the array" << std:: endl;
    std:: cout << "3. Modify the array" << std:: endl;
    std:: cout << "4. Search for an element" << std:: endl;
    std:: cout << "5. Sort the array" << std:: endl;
    std:: cout << "6. Exit" << std:: endl;
    std:: cout << "Enter your choice: ";
}

