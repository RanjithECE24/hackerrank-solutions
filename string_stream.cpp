#include <sstream>
#include <vector>
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    std::string element;
    std::istringstream stream{str};
    while (std::getline(stream, element, ','))
        result.push_back(std::stoi(element));
    return result;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

