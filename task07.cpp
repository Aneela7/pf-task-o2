#include<iostream>
using namespace std;
int main()
{
    int numsubject,marks;
    cout<<"total no of subject"<<endl;
    cin>>numsubject;
    for(int i=1;i<=numsubject;i++)
    {
        cout<<"enter a marks f a subject"<<endl;
        cin>>marks;
        if(marks>=90)
        cout<<"Grate A"<<endl;
        else if(marks>=75)
        cout<<"Grate B"<<endl;
        else if(marks>=50)
        cout<<"Grate c"<<endl;
        else
        cout<<"Fail"<<endl;
    }
    return 0;
}