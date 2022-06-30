#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d) {
    int result = 0;
    result = a > b ? a : b;
    result = result > c ? result : c;
    result = result > d ? result : d;
    return result;
}

int main() {
    int a, b, c, d;
    std::cin >> a >> b >> c >> d;
    int ans = max_of_four(a, b, c, d);
    std::cout << ans << std::endl;    
    return 0;
}

