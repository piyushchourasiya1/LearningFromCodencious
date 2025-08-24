#include<iostream>
using namespace std;

int knapsack(int wt[], int val[],int w,int n)
{
    if(n==0||w==0 )
    {
     return 0;
    }
    else if(wt[n-1]<=w)
    {
        return max(
            val[n-1] + knapsack(wt, val, w-wt[n-1], n-1), 
            knapsack(wt, val, w, n-1)
            );
    }
    else
    {
        return knapsack(wt, val, w, n-1);
        
    }
    return 0;
}
int main()
{  
    int wt[]={4,8,7,6,3};
    int val[]={10,50,45,20,35};
    int w=14;
    int n=5;
    cout<<"Max value in knapsack:"<<knapsack(wt, val, w, n)<<endl;
    return 0;
}