#include<iostream>
#include<string>
using namespace std;
class Publication{
	private:
	string title;
	float price;
	public:
void getdata(){
        cout<<"Enter Title: ";
        getline(cin>>ws,title);
        cout<<"Enter Price: ";
        cin>>price;
	 }
void putdata(){
	 	cout<<"Title: "<<title<<endl;
        cout<<"Price: "<<price<<endl;
	 }
};

class Book: public Publication{
    private:
	int countPages; 	
	public:
void getdata(){
	 	Publication::getdata();
	    cout<<"Enter Page Count: ";
        cin>>countPages;
    }
    
void putdata(){
		Publication::putdata();
	    cout<<"Page Count: "<<countPages<<endl;
	 }
};
class Tap: public Publication{
	private:
	float playingTime;
	 	
	public:
void getdata(){
		Publication::getdata();
	 	cout<<"Enter Playing Time in Minutes: ";
        cin>>playingTime;
	 }
void putdata(){
		Publication::putdata();
	 	cout<<"Playing Time in Minutes is: "<<playingTime;
	 }
};
int main(){
    Book b1;
    Tap t1;
    b1.getdata();
    t1.getdata();
    b1.putdata();
    t1.putdata();
    return 0;
}
