#include <iostream>
#include <string>
#include <algorithm>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    std::cout << a.length() << " " << b.length() << std::endl;
    std::cout << (a+b) << std::endl;
    char const ch = a.front();
    a.at(0) = b.front();
    b.at(0) = ch;
    std::cout << a << " " << b << std::endl;
    return 0;
}

