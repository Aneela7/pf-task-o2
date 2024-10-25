#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter an interger:"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int cube=i*i*i;
        cout<<"cube of"<<i<<"="<<cube<<endl;
    }
    return 0;
}