Question : find the maximum and minimum element of array
                       SOURCE CODE
                       
  #include <iostream>

using namespace std;
void getarray(int [],int);
int i;
int main()
{  int array[50],n;
    cout<<"enter the size";
    cin>>n;
    cout<<"enter the array";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    getarray(array,n);
}
void getarray(int a[],int b)
{
    int min = a[0];
    int max = a[0];
     for(i=0;i<b;i++)
     {
        if(a[i]<min)
        min = a[i];
        if(a[i]>max)
        max = a[i];
     }
      cout<<"minimum element is"<<min<<endl;
      cout<<"maximum element is"<<max<<endl;
     
}
OUTPUT
enter the size5
enter the array21 34 23 45 33
minimum element is21
maximum element is45
