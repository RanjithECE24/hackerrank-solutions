#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::vector<int> vec(N);
    for(int counter = 0; counter < N; ++counter)
        std::cin >> vec[counter];
    int x;
    std::cin >> x;
    vec.erase((vec.begin() + (x - 1)));
    int a, b;
    std::cin >> a >> b;
    vec.erase((vec.begin()+(a-1)), (vec.begin()+(b-1)));
    std::cout << vec.size() << std::endl;
    for(int const val : vec)
        std::cout << val << " ";
    return 0;
}