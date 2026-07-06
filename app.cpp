#include<iostream>
#include<string>
#include<vector>
using namespace std;
    struct Student
    {
        int s_id;
        string name;
        string department;
        double cgpa;
        string address;
    };

void addStudent(vector<Student>& students, Student newStudent){
    students.push_back(newStudent);
}

int main(){
    vector<Student> students;
    int s_id;
    cout<<"Enter your student ID:";
    cin>>s_id;
    cin.ignore();
    string name;
    cout<<"Enter your name:";
    getline(cin,name);
    string department;
    cout<<"Enter your department:";
    getline(cin,department);
    double cgpa;
    cout<<"Enter you current cgpa:";
    cin>>cgpa;
    cin.ignore();
    string address;
    cout<<"Enter your address:";
    getline(cin,address);

    Student newStudent;
    newStudent.s_id = s_id;
    newStudent.name = name;
    newStudent.department = department;
    newStudent.cgpa = cgpa;
    newStudent.address = address;

    addStudent(students,newStudent);
    cout<<"Your data is been added "<<students[0].s_id <<" "<<students[0].name<<endl;
}
    

