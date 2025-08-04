#ifndef HEADER_HPP
#define HEADER_HPP
#include <iostream>
#include <string>
class Student {
private:
    std::string name;
    int rollno;

public:
    std::string major;
    Student(std::string initial_name, int initial_rollno, std::string initial_major);
    ~Student();
    void set_student_details(std::string new_name, int new_rollno);
    std::string get_student_details() const;
    std::string get_name() const;
    int get_rollno() const;
};
Student::Student(std::string initial_name, int initial_rollno, std::string initial_major){
    name = initial_name;
    rollno = initial_rollno;
    major = initial_major;
}
Student::~Student() {
    // Optional clean-up
}
void Student::set_student_details(std::string new_name, int new_rollno){
    name = new_name;
    rollno = new_rollno;
}
std::string Student:: get_student_details() const{
    std::string returnValue = "Name: "+name+",Roll: "+std::to_string(rollno);
    return returnValue;
}
std::string Student:: get_name() const{
    return name;
}
int Student::get_rollno() const{
    return rollno;
}
int main() {
    Student s("Dilshan", 101, "CSE");

    std::cout << s.get_student_details() << std::endl;

    s.set_student_details("Ravi", 202);
    std::cout << s.get_student_details() << std::endl;

    std::cout << "Name: " << s.get_name() << std::endl;
    std::cout << "Roll No: " << s.get_rollno() << std::endl;

    return 0;
}
#endif

