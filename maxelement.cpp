#include <iostream>
using namespace std;
int main(){ 
int n = 5;
int arr[n] = {3, 4, 0, 99, -40};
int second = 0;
int largest = arr [0];
for (int i = 0; i < n - 1 ; i++){ 
    if ( arr[i] > largest) { 
    second = largest ;
        largest = arr[i];
    }
   
}
cout << " The largest element on arrays is : " << largest << endl ;
cout << " The 2nd largest element on arrays is : " << second ;
}