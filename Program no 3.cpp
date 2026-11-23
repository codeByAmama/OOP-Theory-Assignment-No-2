#include<iostream>
#include<string>
using namespace std;
class Time{
private:
    int hours, minutes, seconds;
public:
    Time(int h=0, int m=0, int s=0){
    setHours(h);
    setMinutes(m);
    setSeconds(s);
}
    
    void setHours(int h) {
        if (h>=0 && h<=23)
            hours=h;
        else
            hours=0;
    }
    void setMinutes(int m) {
        if (m>=0 && m<=59)
            minutes=m;
        else
            minutes=0;
    }
    void setSeconds(int s) {
        if (s>=0 && s<=59)
            seconds=s;
        else
            seconds=0;
    }
    int getHours() const{
        return hours;
    }

    int getMinutes() const{
        return minutes;
    }

    int getSeconds() const{
        return seconds;
    }
    void displayTime() const{
        cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
    }
};

class TimeDifference : public Time{
public:
    TimeDifference(int h=0, int m=0, int s=0): Time(h, m, s) {
    	
    }

    void displayDuration() const{
        cout<<"Duration"<<endl;
        displayTime();
    }
};

class ScheduledTime : public Time{
private:
    string event;
public:
    ScheduledTime(int h=0, int m=0, int s=0,string e="No Event") : Time(h, m, s), event(e){
    }

    void displaySchedule() const{
        cout<<"Event: "<<event<<endl;
        cout<<"Scheduled Time"<<endl;
        displayTime();
    }
};

int main(){
    int choice;
    int h, m, s;
    string event;
    cout<<"Choose an option"<<endl;
    cout<<"1. Time"<<endl;
    cout<<"2. Time Difference"<<endl;
    cout<<"3. Scheduled Time"<<endl;
    cout<<"\nEnter your choice: ";
    cin>>choice;
    cout<<"Enter hours (0-23): ";
    cin>>h;
    cout<<"Enter minutes (0-59): ";
    cin>>m;
    cout<<"Enter seconds (0-59): ";
    cin>>s;
    if(choice==1) {
        Time t(h, m, s);
        cout << "\nTime:";
        t.displayTime();
    }
    else if(choice==2){
        TimeDifference d(h, m, s);
        cout<<"\nTime Difference"<<endl;
        d.displayDuration();
    }
    else if(choice==3){
        cin.ignore();
        cout<<"Enter event name: ";
        getline(cin, event);
        ScheduledTime st(h, m, s, event);
        cout<<"\nScheduled Time"<<endl;
        st.displaySchedule();
    }
    else{
        cout<<"Invalid choice";
    }
    return 0;
}
