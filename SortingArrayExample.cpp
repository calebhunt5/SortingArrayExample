#include <stdio.h>
#include <iostream>

using namespace std;


//main method
int main()
{
    int arr[10];
    
    //prompt to fill array with user values
    for(int i =0;i<10;i++)
    {
        cout<<"Enter a value for index "<<i<<": ";
        cin>>arr[i];
    }

    //bubble sort the array
    for(int i =0;i<10;i++)
    {
        for (int j =0;j<10;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp =arr[i];
                arr[i] =arr[j];
                arr[j] =temp;
            }
        }
    }
    
    //outputs the array in a single column
    for(int i =0;i<10;i++)
    {
        printf("%d \n", arr[i]);
    }
    
    return 0;
}