#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,j,min,max,sum=0;
    double ave;
    cout<<"Enter 10 integers: ";
    for(i=0;i<10;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        ave=sum/10.0;
    }
    max=arr[0],min=arr[0];
    for(i=0;i<10;i++)
    {
        if(max<arr[i])
            max=arr[i];
        if(min>arr[i])
            min=arr[i];
    }
    cout<<endl<<"Smallest element: "<<min<<endl;
    cout<<"Largest element: "<<max<<endl;
    cout<<"Total: "<<sum<<endl;
    cout<<"Average: "<<ave<<endl;
    system("pause");
    return 0;
}


