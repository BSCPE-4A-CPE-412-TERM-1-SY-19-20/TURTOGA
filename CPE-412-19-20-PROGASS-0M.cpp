//359179
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char str[100];
             int q, count=0, count1;
    cout<<"Enter String: "; 
    cin>>(str);
    cout<<(str);
    for(q=0; q<strlen(str); q++)
    {
        if(str[q]=='b')
        {
            count++;
        }
        if(str[q]!='a'&&str[q]!='b')
        {
            cout<<"\nInvalid";
            count1++;
            break;
        }
    }
    
    if (count<=5&&count1==0)
    {
        cout<<"\nAccepted";
    }
    if(count>5)
    {
        cout<<"\nInvalid";
    }
    return 0;
}
