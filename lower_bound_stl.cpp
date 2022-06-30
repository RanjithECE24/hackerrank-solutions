#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;
    std::vector<std::uint64_t> vec(N);
    for(int counter = 0; counter < N; ++counter)
        std::cin >> vec[counter];
    int Q;
    std::uint64_t Y;
    std::cin >> Q;
    for(int counter = 0; counter < Q; ++counter) {
        std::cin >> Y;
        std::vector<std::uint64_t>::iterator low = std::lower_bound(vec.begin(), vec.end(), Y);
        if (vec[low - vec.begin()] == Y)
            std::cout << "Yes " << (low - vec.begin()+1) << std::endl;
        else
            std::cout << "No " << (low - vec.begin()+1) << std::endl;
    }
    return 0;
}