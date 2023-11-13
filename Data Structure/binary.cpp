Binary 

#include<iostream>
#include<conio.h>
using namespace std;
class searching
{
    public:
    int a[20];
    int n;
    
    
    void display()
    {
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<"\t";
        }
    }
    
    
    void insert()
    {
        cout<<"\n enter the size of the array : ";
        cin>>n;
        
        cout<<"\n enetr the elements into the array :\n";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    
    int binarysearch(int k)
{
        int left=0,right=n-1;
        
        
        while(left<=right)
    {
                 int mid = left + (right - left) / 2;

        if (a[mid] == k) 
        {
            return mid; 
        }
        else if (a[mid] < k)
        {
            left = mid + 1; 
        } 
        else 
        {
            right = mid - 1; 
        }
    }

    return -1; 
}

  
   void Sort()
    {
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = 0; j < n - i - 1; j++)
            {
                if (a[j] > a[j + 1])
                {
                    // swap elements if they are in the wrong order
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }
    }      
    
};

int main()

{
    searching obj;
    
    obj.insert();
    cout<<"\n array elemets are : \n";
    obj.display();
    
     obj.Sort(); 
     cout<<"\n binary search can perform only in a sorted array  : \n";
    cout<<"\n sorted array is :\n";
    
    obj.display();
     int key;
    cout<<"\n enter the key element to be searched : "
  cin>>key;
    int result =obj.binarysearch(key);
    if(result==-1)
    {
        cout << "Target not found at array";
    }
    else {
       cout << "Target  found at the index of  " << result;
    }
}
