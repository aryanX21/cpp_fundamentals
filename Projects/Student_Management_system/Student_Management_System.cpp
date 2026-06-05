#include<iostream>
#include<string>
using namespace std;

class Student{

    public:
    string name,id;
    int age,roll;
    string Course, Branch, Specialization;

    void get_data(){

        cin.ignore();

        cout<<"Enter name: ";
        getline(cin,name);

        cout<<"Enter id: ";
        getline(cin,id);

        cout<<"Enter roll number: ";
        cin>>roll;

        cout<<"Enter age: ";
        cin>>age;        

        cin.ignore();
        
        cout<<"Enter Course: ";
        getline(cin,Course);

        cout<<"Enter Branch: ";
        getline(cin,Branch);

        cout<<"Enter Specialization: ";
        getline(cin,Specialization);
    }

    void display(){

        cout<<"Name: "<<name<<endl;
        cout<<"ID: "<<id<<endl;
        cout<<"Roll number: "<<roll<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Course: "<<Course<<endl;
        cout<<"Branch: "<<Branch<<endl;
        cout<<"Specialization: "<<Specialization<<endl;
    }
};


Student students[100];
int total_students = 0;


void add_student()
{
    int num;

    cin>>num;

    for(int i = 0; i < num; i++)
    {
        students[total_students].get_data();
        total_students++;
    }
}


void display_data(){

    cout<<"\n\n --- Students Data ---  \n\n";

    for(int i = 0; i < total_students; i++){
        students[i].display();
    }
}


int main(){

    cout<<"\n\n ----  Welcome to Student Management System  ----\n\n";

    cout<<"Choose from the below - \n\n";

    cout<<"1) Add Student\n";
    cout<<"2) Display Students\n";
    cout<<"3) Search Student\n";
    cout<<"4) Update Student\n";
    cout<<"5) Delete Student\n";
    cout<<"6) Save Data to File\n";
    cout<<"7) Load Data from File\n";

        
    int n;
    cout<<"\nEnter your Choice: ";
    cin>>n;

    switch(n){

        case 1: 
            add_student();
        break;

        case 2: 
            display_data();
        break;

        case 3: 
        break;

        case 4: 
        break;

        case 5: 
        break;

        case 6: 
        break;

        case 7: 
        break;

        default:
            cout<<"Invalid Option\n"; 
        }
  
}