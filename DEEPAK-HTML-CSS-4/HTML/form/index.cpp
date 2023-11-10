#include <iostream>

using namespace std;
class Employe{
    string name;
    int salary;
    int tax;
    int id;
    int bank_account;
    string designation;
    int equity;
    
    public:
    void salin(){
        cout<<"enter the salary of the person";
        cin>>salary;
    };
    void salout(){
        cout<<"the salary of the employe is ";
        if(salary >10000 && salary <=100000)
        cout<<salary ;
    };
    void namika(){
        cout<<"enter the name of the emp";
        cin>>name; 
    }
    void namisa(){
        cout<<"the name of the emp is";
        cout<<name &&cout<<"\n";
    };
    void designa(){
        cout<<"enter your designation\n SE as software enginner\n d as designer, \n HOD as head of the department \n TH as the tech head\n RT as the part of the resarch team \n ma as the head of the marketing \n sa as the sales head \n BH as the  Business Head \n";

    cin>>designation;
    };
    void equi(){
        cout<<"as per your designation your equity will be decided";
        if(designation == "SE" || designation =="d"){
            equity == 5000;
            cout<<equity ;
        }
        if(designation == "HOD"|| designation == "TH" || designation == "RT"){
            equity == 4500;
            cout<<equity ;
        };
        if(designation == "ma" ||designation  == "sa" ||designation == "BH"){
            equity = 3000;
            cout<<equity ;
        };
        
    }
};
//making a function to check;
int checking(int a , int b){
    if(a == b){
        return 1;
    }
};
int main()
{
    int check;
    //the checking integer
    int a;
    //cheking2
    int check2;
    cout<<"enter the 4 digit pin you want to set as your password to collect the data";
    cout<<"if you don't know yourpassword or forgot it enter 1";
    cin>>a;
    if(a ==1){
    
        cin>>check;
    }
Employe emp;
emp.salin();
emp.namika();
emp.equi();
emp.designa();
cout<<"enter your key to access all your data";
cin>>check2;
if(checking(check , check2) ==1){
emp.salout();
emp.namisa();
}}