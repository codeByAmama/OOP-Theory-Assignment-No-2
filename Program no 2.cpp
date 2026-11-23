#include<iostream>
#include<string>
using namespace std;
class employee{
private:
    string name;
    int number;

public:
 void getdata(){
        cout<<"\nEnter Employee Name: ";
        getline(cin>>ws,name);
        cout<<"Enter Employee Number: ";
        cin>>number;
    }
void putdata(){
        cout<<"Employee Name: "<<name<<endl;
        cout<<"Employee Number: "<<number<<endl;
    }
};

class employee2 : public employee{
private:
    double compensation;

public:
    enum period{
        hourly = 1,
        weekly,
        monthly
    };
    period p;
    void getdata() {
        employee::getdata();
        cout<<"Enter Compensation: ";
        cin>>compensation;
        int choice;
        cout<<"\nPayment Period" << endl;
        cout<<"1. Hourly" << endl;
        cout<<"2. Weekly" << endl;
        cout<<"3. Monthly" << endl;
        cout<<"Enter Choice: ";
        cin>>choice;
        if (choice==1)
            p=hourly;
        else if(choice==2)
            p=weekly;
        else
            p=monthly;
    }
void putdata() {
        employee::putdata();
        cout<<"Compensation: "<<compensation<<endl;
        cout<<"Payment period: ";
        if(p==hourly)
            cout<<"Hourly"<<endl;
        else if(p==weekly)
            cout<<"Weekly"<<endl;
        else
            cout<<"Monthly"<<endl;
    }
};
class manager : public employee2{ 

};
class scientist : public employee2{
	
};
class laborer : public employee2{
	
};
int main() {
    manager m;
    scientist s;
    laborer l;
    m.getdata();
    s.getdata();
    l.getdata();
    cout<<endl;
    m.putdata();
    s.putdata();
    l.putdata();
    return 0;
}
