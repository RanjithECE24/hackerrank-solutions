#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    public:
        void set_age(int age) {
            age_ = age;
        }

        void set_standard(int standard) {
            standard_ = standard;
        }

        void set_first_name(std::string const& first_name) {
            first_name_ = first_name;
        }

        void set_last_name(std::string const& last_name) {
            last_name_ = last_name;
        }

        int get_age() const {
            return age_;
        }

        int get_standard() const {
            return standard_;
        }

        std::string const& get_first_name() const {
            return first_name_;
        }

        std::string const& get_last_name() const {
            return last_name_;
        }
        
        std::string to_string() const {
            return std::string(std::to_string(age_) + ',' + first_name_ + ',' + last_name_ + ',' + std::to_string(standard_));
        }

    private:
        int age_, standard_;
        string first_name_, last_name_;
};

int main() {
        int age, standard;
        std::string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}

