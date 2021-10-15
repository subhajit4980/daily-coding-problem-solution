/*  Given a list of numbers and a number k, return whether any two numbers from the list add up to k.

    For example, given [10, 15, 3, 7] and k of 17, return true since 10 + 7 is 17.             */

#include <bits/stdc++.h>
using namespace std;
void check(int arr[],int k,int n)
{
    bool flag=false;
    unordered_set <int> hashset;
    for (int i = 0; i < n; i++)
    {
        /* code */
        if(hashset.find(k-arr[i]) !=hashset.end())
        {
            flag=true;
        }
        hashset.insert(arr[i]);
    }
    if(flag)
    {
        cout<<"present";
    }
    else{
        cout<<"not present";
    }
    
}
int main()
{
    int arr[]={12,3,56,34,5,7};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k=19;
    check(arr,k,n);
    return 0;
}