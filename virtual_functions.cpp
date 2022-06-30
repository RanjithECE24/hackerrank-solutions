#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person {
    public:
        virtual void getdata() = 0;
        virtual void putdata() = 0;
        int age_;
        std::string name_;
};

class Professor : public Person {
    public:
        Professor() : publications_{0}, id_{0} {
            id_ = ++id;
        }

        void getdata() override {
            std::cin >> name_ >> age_ >> publications_;
        }

        void putdata() override {
            std::cout << name_ << " " << age_ << " "  << publications_ << " " << id_ << std::endl;
        }

    private:
        static int id;
        int publications_;
        int id_;
};

int Professor::id{0};

class Student : public Person {
    public:
        Student() : total_{0}, id_{0} {
            id_ = ++id;
        }

        void getdata() override {
            int mark;
            std::cin >> name_ >> age_;
            for(int counter = 0; counter < total_subjects; ++counter) {
                std::cin >> mark;
                total_ += mark;
                mark = 0;
            }
        }

        void putdata() override {
            std::cout << name_ << " " << age_ << " " << total_ << " " << id_ << std::endl;
        }

    private:
        int const total_subjects{6};
        static int id;
        int total_;
        int id_;
};

int Student::id{0};

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
