#include <iostream>
using namespace std;
int main(){  

    int n = 7;
int arr[n] = {1,2,3,4,5,6,7};
int i = 0;
int flag = 0 ;
while ( i < n-2){ 
    if (arr[i] < arr[i+1]){
        flag = 1 ;
    }
    else {
        flag = 0;
        break;
} 
    i++;
}
if (flag == 0){ 
    cout << "False";
}
else {cout << "True" ;}
}