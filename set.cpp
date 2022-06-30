#include <iostream>
#include <set>

int main() {
    int num_of_queries, y, x;
    std::cin >> num_of_queries;
    std::set<int> s;
    for(int counter = 0; counter < num_of_queries; ++counter) {
        std::cin >> y >> x;
        switch(y) {
            case 1: {
                s.insert(x);
            }
            break;
            case 2:
            case 3: {
                std::set<int>::iterator itr = s.find(x);
                if(itr != s.end()) {
                    if(y == 3) {
                        std::cout << "Yes" << std::endl;
                    } else {
                        s.erase(*itr);
                    }
                } else {
                    if(y == 3) {
                        std::cout << "No" << std::endl;
                    }
                }
            }
            break;
            default:
                break;
        }
        x = y = 0;
    }
    return 0;
}