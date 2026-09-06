#include <iostream>
using namespace std;


int main(){ 
    int n = 8 ;
    int key = 2;
    int arr[n] = {0,0,1,1,2,2,2,2};
    int start = 0;
    int end = n - 1;
    // int mid = start + (end - start ) / 2;
    int index = -1;
    


    while( end >= start){ 
        int mid = start + ( end - start ) / 2;
        if (arr[mid] == key ){ 
            index = mid ;
            end = mid - 1;
        }
       
    else if ( key > arr[mid] )
    { 
        start = mid + 1;
    }
    else 
    { 
        end = mid - 1;
    }
   
}

cout << "Your first index is : " <<  index << " " ;
int s = 0;
int e = n - 1;
int last_index = -1;
 while( e >= s){ 
   int mid = s + ( e - s ) / 2;
        if (arr[mid] == key ){ 
            last_index = mid ;
            s = mid + 1;
        }
       
   else if ( key > arr[mid] )
    { 
        s = mid + 1;
    }
    else 
    { 
        e = mid - 1;
    }
    
}
cout << last_index ;

}



