#include <iostream>
#include <memory>

int main() {
    short int num_of_elements;
    std::cin >> num_of_elements;
    std::unique_ptr<unsigned short int[]> arr = std::make_unique<unsigned short int[]>(num_of_elements);
    for(short int counter = 0; counter < num_of_elements; ++counter)
        std::cin >> arr[counter];

    for(short int counter = (num_of_elements - 1); counter >=0; --counter)
        std::cout << arr[counter] << " ";

    return 0;
}