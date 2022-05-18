#include<iostream>
using namespace std;

void reverseArray(int arr[],int n){
  
  int i;
  int j=n-1;
  for ( i = 0; i < j; i++)
  {
      swap(arr[i],arr[j]);
      j--;
  }

  

}

int main()
{
    int arr[]={8,3,4,5,3,6,0};
     
     reverseArray(arr,7);
     cout<<"reverse array is :";
     for ( int i = 0; i < 7; i++)
  {
      cout<<" "<<arr[i];
  }

 
    return 0;
}