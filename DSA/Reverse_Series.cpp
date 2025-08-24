#include<iostream>
using namespace std;
void printNum(int n)
{
    if(n==1)
    {
        cout<<"1";
        return;
    }
    cout<<n<<" ";
    return printNum(n-1);
    
}
int main()
{
    printNum(70);
    return 0;
}