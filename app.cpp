#include<iostream>
#include<string>
#include<vector>
#include<limits>
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

void displayStudents(const vector<Student>& students){
    int n = students.size();
    if(n == 0){
        cout<<"No students found."<<endl;
    }

    for(int i =0; i<n; i++){
        cout<<"ID:"<<students[i].s_id<<" "<<"| "<<"NAME:"<<students[i].name<<" "<<"| "<<"DEPARTMENT:"<<students[i].department<<" "<<"| "<<"CGPI: "<<students[i].cgpa<<" "<<"| "<<"ADDRESS:"<<students[i].address<<endl;
    }
}

int searchStudent(const vector<Student>& students, int search_id){
    int n = students.size();
    for(int i=0; i<n; i++){
        if(search_id==students[i].s_id){
            return i;
        }
    }
    return -1;
}

int main(){
    vector<Student> students;
    displayStudents(students);
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
    cout<<"Your data is been added "<<students[0].s_id << " " <<students[0].name<<endl;

    displayStudents(students);
    int search_id;
    cout<<"Enter the Search ID of the student you want to search for:";
    while(!(cin>>search_id)){
        cout<<"Invaild input! enter a valid interger:";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
    }
    int result = searchStudent(students, search_id);
    if(result == -1){
        cout<<"No student found"<<endl;
    }
    else{
        cout<<"ID:"<<students[result].s_id<<" "<<"| "<<"NAME:"<<students[result].name<<" "<<"| "<<"DEPARTMENT:"<<students[result].department<<" "<<"| "<<"CGPI: "<<students[result].cgpa<<" "<<"| "<<"ADDRESS:"<<students[result].address<<endl;
    }
}
    

