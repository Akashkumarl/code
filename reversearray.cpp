Question : Program to reverse an array

                     SOURCE CODE
                     
#include <iostream>

using namespace std;
int i,j;
int reverse(int [],int);
int main()
{ int a[50],n;;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the array ";
    for(i=0;i<n;i++)
      cin>>a[i];
    reverse(a,n);  

    return 0;
}

int reverse(int a[],int b)
{ int temp=0;
    for(i=0,j=b-1;i<b/2,j>=b/2;i++,j--)
    {
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<"the array after passing"<<"\n";
    for(i=0;i<b;i++)
    cout<<a[i];
}

                                 OUTPUT
 enter the size 4
enter the array 1 2 3 4
the array after passing
4321                                
