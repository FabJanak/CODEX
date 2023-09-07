# include<iostream>
#include<conio.h>
using namespace std;

int main(){
    string name, college; int age;
    cout<<"Enter your name: "<<endl;
    getline(cin, name);
    cout<<"Enter your college: "<<endl;
    getline(cin, college);
    cout<<"Enter your age: "<<endl;
    cin>>age;
    cout<<"Hello "<<name<<",  I see you are "<<age<<" years old and are currently studying at "<<college<<endl;
    getch();
    return 0;
}