#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Student{

    public:
    string name,id;
    int age,roll;
    string Course, Branch, Specialization;

    void get_data(){

        cin.ignore();

        cout<<"\nEnter name: ";
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
    
    cout<<"\nEnter number of students: ";
    cin>>num;
    

    for(int i = 0; i < num; i++)
    {
        students[total_students].get_data();
        total_students++;
    }
}


void display_data(){

    cout<<"\n\n --- Students Data ---  \n\n";

    if(total_students == 0){
        cout<<"You have not added any Student's data"<<endl;
        return;
    }

    for(int i = 0; i < total_students; i++){
        cout<<"\n-------------------\n";
        students[i].display();
        cout<<"-------------------\n";
    }
}

void search(){

    int roll_no;
    cout<<"\nEnter the roll number of the Student: ";
    cin>>roll_no;

    bool found = false;

    for(int i = 0; i < total_students; i++){
        if(students[i].roll ==  roll_no){
            cout<<"\nStudent Found!\n"<<endl;
            cout<<"\n-------------------\n";
            students[i].display();
            cout<<"-------------------\n";
            found = true;
            break;
        }
    }

    if(!found){
       cout<<"\nStudent not found"<<endl;
    }
    
}

void update(){

    int roll_no;

    cout<<"\nEnter the Student's roll number you want to update: ";
    cin>>roll_no;

    bool found = false;

    for(int i = 0; i < total_students; i++){
        if(students[i].roll ==  roll_no){
            cout<<"\nUpdate the details"<<endl;
            students[i].get_data();
            found = true;
            break;
        }
    }

    if(!found){
       cout<<"\nStudent not found"<<endl;
    }
}

void del(){

    int roll_no;
    bool found = false;

    cout<<"\nEnter the Student's roll number you want to delete: ";
    cin>>roll_no;

    for(int i = 0; i < total_students; i++){

        if(students[i].roll == roll_no){

            for(int j = i; j < total_students - 1; j++){

                students[j] = students[j + 1];
            }

            total_students--;

            cout<<"\nStudent deleted successfully\n";

            found = true;
            break;
        }
    }

    if(!found){

        cout<<"\nStudent not found\n";
    }
}

void save_data(){

    ofstream fout("students.txt");

    for(int i = 0; i < total_students; i++){

        fout << students[i].name << endl;
        fout << students[i].id << endl;
        fout << students[i].roll << endl;
        fout << students[i].age << endl;
        fout << students[i].Course << endl;
        fout << students[i].Branch << endl;
        fout << students[i].Specialization << endl;
    }

    fout.close();

    cout<<"\nData saved successfully\n";
}

void load_data(){

    ifstream fin("students.txt");

    if(!fin){

        cout<<"\nNo saved data found\n";
        return;
    }

    total_students = 0;

    while(getline(fin, students[total_students].name)){

        getline(fin, students[total_students].id);

        fin >> students[total_students].roll;
        fin >> students[total_students].age;

        fin.ignore();

        getline(fin, students[total_students].Course);
        getline(fin, students[total_students].Branch);
        getline(fin, students[total_students].Specialization);

        total_students++;
    }

    fin.close();

    cout<<"\nData loaded successfully\n";
}

int main(){

    cout<<"\n\n ----  Welcome to Student Management System  ----\n\n";

    while(true){
    cout<<"\n\nChoose from the below - \n\n";

    cout<<"1) Add Student\n";
    cout<<"2) Display Students\n";
    cout<<"3) Search Student\n";
    cout<<"4) Update Student\n";
    cout<<"5) Delete Student\n";
    cout<<"6) Save Data to File\n";
    cout<<"7) Load Data from File\n";
    cout<<"8) Exit\n";

        
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
            search();
        break;

        case 4: 
            update();           
        break;

        case 5: 
            del();
        break;

        case 6: 
            save_data();
        break;

        case 7: 
            load_data();
        break;

        case 8:
           cout<<"\nThank You For Using Student Management System\n";
        return 0;

        default:
            cout<<"\nInvalid Option\n"; 
        }
    }
}   