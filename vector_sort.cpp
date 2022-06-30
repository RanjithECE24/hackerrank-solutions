#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int num_of_elements;
    std::cin >> num_of_elements;
    std::vector<int> vec(num_of_elements);
    for(int counter = 0; counter < num_of_elements; ++counter)
        std::cin >> vec[counter];
    std::sort(vec.begin(), vec.end());
    for(const int val : vec)
        std::cout << val << " ";
    return 0;
}