#include <iostream>
using namespace std;

// Write your Student class here
constexpr int subjects = 5;
class Student {
    public:
        void input() {
            for(unsigned char counter = 0; counter < subjects; ++counter)
                std::cin >> scores_[counter];
        }

        int calculateTotalScore() {
            int result = 0;
            for(unsigned char counter = 0; counter < subjects; ++counter)
                result += scores_[counter];
            return result;
        }

    private:
        int scores_[subjects];
};


int main() {
    int n; // number of students
    cin >> n;
    Student *s = new Student[n]; // an array of n students
    
    for(int i = 0; i < n; i++){
        s[i].input();
    }

    // calculate kristen's score
    int kristen_score = s[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0; 
    for(int i = 1; i < n; i++){
        int total = s[i].calculateTotalScore();
        if(total > kristen_score){
            count++;
        }
    }

    // print result
    cout << count;
    
    return 0;
}
