#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    int arr[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int low =0;
    int high = n-1;
    bool flag = false;
    while(low<high)
    {
        if(arr[low]+arr[high]==x)
        {
            flag = true;
            break;
        }
        if((arr[low]+arr[high])<x)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    if(flag==true)
    {
        cout<< "Pair is existed"<<endl;
        cout<< "Index is "<< low<< " "<<high<<endl;
    }
    else
    {
        cout<< "Not existed"<<endl;
    }
}