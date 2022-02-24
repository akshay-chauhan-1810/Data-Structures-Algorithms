#include <iostream>
using namespace std;

void linearSearch(int a[], int n)
{
    int temp = -1;
    for (int i = 0; i < 5; i++)
    {
        if(a[i]==n)
        {
            cout<<"Element Found at location: "<<i+1<<endl;
            temp = 0;
        }
    }
    if(temp==-1)
    {
        cout<<"No Element Found"<<endl;
    }
    

}

int main()
{
    int i;
    int arr[5];
    cout<<"Please Enter 5 Elements of Array :"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Please enter an element to serach :"<<endl;
    int num;
    cin>>num;
    
    linearSearch(arr,num);
    return 0; 
}