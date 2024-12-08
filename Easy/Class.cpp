// QU : You have to create a class, named Student, representing the student's details, as mentioned above, and store the data of a student. Create setter and getter functions for each element; that is, the class should at least have following functions: get_age, set_age get_first_name, set_first_name get_last_name, set_last_name get_standard, set_standard .Also, you have to create another method to_string() which returns the string consisting of the above elements, separated by a comma(,). You can refer to stringstream for this.
#include <iostream>
#include <sstream>
#include<string>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student {
    private : 
        int age;
        string first_name;
        string last_name;
        int standard;
    public :
        void set_age(int age) {
            this -> age = age;
        }
        int get_age() {
            return age;
        }
        void set_first_name(string first_name) {
            this -> first_name = first_name;
        }
        string get_first_name() {
            return first_name;
        }
        void set_last_name(string last_name) {
            this -> last_name = last_name;
        }
        string get_last_name() {
            return last_name;
        }
        void set_standard(int standard) {
            this -> standard = standard;
        }
        int get_standard() {
            return standard;
        }
        
        string to_string() {
            return std :: to_string(age) + "," + first_name + "," + last_name + "," +std::to_string(standard) ;
        }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
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