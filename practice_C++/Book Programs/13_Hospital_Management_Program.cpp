#include<iostream>
using namespace std;
class person{
    protected:
        char name[20];
        char DOB[10];
        char gender[10];
    public:
        void read(){
            cout<<"Input Name : ";  cin.getline(name,20,'\n');  cout<<"\n";
            cout<<"Input DOB[DD MM YYYY] : ";   cin.getline(DOB, 10,'\n');
            cout<<"Input Gender [male,female,other] : ";    cin.getline(gender,10,'\n');
        }
        void show(){
            cout<<"Name: " <<name <<"\n"
                <<"Date of Birth: " <<DOB <<"\n"
                <<"Gender: "<<gender<<"\n";
        }
};
class doctor:public person
{
    protected:
        char specialization[30];
    public:
        void read(){
            person::read();
            cout<<"Input specialization of doctor: "; cin.getline(specialization, 30,'\n'); cout<<"\n";
        }
        void show(){
            person::show();
            cout<<"Specialization: "<<specialization;
        }
};
class patient:public person{
    protected:
        int casenumber,bill_number;
        char Disease[40], DOA[10], DOD[10];
    public:
        void read(){
            person::read();
            cout<<"Input CaseNumber: ";  cin>>casenumber;   cout<<'\n';
            cout<<"Input name of disease: ";   cin.getline(Disease, 40, '\n');   cout<<"\n";
            cout<<"Input Date of Addmission: ";   cin.getline(DOA, 10, '\n');   cout<<"\n";
            cout<<"Input Date of Discharge: ";   cin.getline(DOD, 10, '\n');   cout<<"\n";
            cout<<"Input Bill Number: ";    cin>>bill_number;   cout<<"\n";
        }
        void show(){
            person::show();
            cout<<"CaseNumber: "<<casenumber<<"\n"
                <<"Disease: "<<Disease<<"\n"
                <<"Date of Addmission: "<<DOA<<"\n"
                <<"Date of Discharge: "<<DOD<<"\n"
                <<"Bill Number: "<<bill_number<<"\n";
        }
};
int main()
{
    doctor doc;
    patient pat;
    doc.read();
    doc.show();
    pat.read();
    pat.show();   
    return 0;
}