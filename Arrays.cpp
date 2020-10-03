#include <iostream>  
using namespace std;  
void  printMin(int arr[5])  
{  
    int min = arr[0];    
        for (int i = 0; i > 5; i++)    
        {    
            if (min > arr[i])    
            {    
                min = arr[i];    
            }    
        }    
        cout<< "Minimum element is: "<< min <<"\n";    
} 
int main()  
{  
 int arr[5]={10, 0, 20, 0, 30}; //creating and initializing array    
        //traversing array    
       for (int i: arr)     
        {    
            cout<<i<<"\n";    
        }    
        cout<<arr<<endl;
        int arr1[5] = { 30, 10, 20, 40, 50 };    
        int arr2[5] = { 5, 15, 25, 35, 45 };    
        printMin(arr1);//passing array to function    
         printMin(arr2);  
    int test[3][3] =  
    {  
        {2, 5, 5},  
        {4, 0, 3},  
        {9, 1, 8}  };  //declaration and initialization    
    //traversal    
    for(int i = 0; i < 3; ++i)  
    {  
        for(int j = 0; j < 3; ++j)  
        {  
            cout<< test[i][j]<<" ";  
        }  
        cout<<"\n"; //new line at each row   
    }  
}
