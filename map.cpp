#include <iostream>
#include <map>

int main() {
    int num_of_queries, type, y;
    std::string x;
    std::map<std::string, int> mp;
    std::cin >> num_of_queries;
    for(int counter = 0; counter < num_of_queries; ++counter) {
        std::cin >> type >> x;
        std::map<std::string, int>::iterator itr = mp.find(x);
        if(itr != mp.end()) {
            if(type == 1) {
                std::cin >> y;
                mp[x] += y;
            } else if(type == 2) {
                mp.erase(x);
            } else if(type == 3) {
                std::cout << mp[x] << std::endl;
            }
        } else {
            if(type == 1) {
                std::cin >> y;
                mp.insert(std::make_pair(x, y));
            } else if(type == 3) {
                std::cout << "0" << std::endl;
            }
        }
        x.clear();
        y = 0;
    }
    return 0;   
}


        /*
        switch(type) {
            case 1: {
                std::cin >> x >> y;
                std::map<std::string, int>::iterator itr = mp.find(x);
                if(itr != mp.end()) {
                    mp[x] += y;
                } else {
                    mp.insert(std::make_pair(x, y));
                }
            }
            break;
            case 2:
            case 3: {
                std::cin >> x;
                std::map<std::string, int>::iterator itr = mp.find(x);
                if(itr != mp.end()) {
                    if(type == 2) {
                        std:: cout << "erase" << std::endl;
                        mp.erase(x);
                    } else {
                        std:: cout << "print" << std::endl;
                        std::cout << mp[x] << std::endl;
                    }

                } else {
                    if(y == 3) {
                        std::cout << "0" << std::endl;
                    }
                }
            }
            break;
            default:
                break;
        }*/