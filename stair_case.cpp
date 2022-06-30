#include <iostream>

int main() {
    int n;
    std::cin >> n;
    for(int i = (n-1); i >= 0; --i) {
        for(int j = 0; j <= (n-1); ++j) 
            if(j >= i)
                std::cout << "#";
            else
                std::cout << " ";
        std::cout << "\n";
    }
    return 0;
}