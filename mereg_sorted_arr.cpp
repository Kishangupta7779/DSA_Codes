#include <iostream>

using namespace std ;

int main(){ 
    int n = 4 , m = 4; 
    int arr[n] = { 1,3,5,7};
    int mar[m] = {2,4,8,9};
    int free[n+m];
    int i = 0, j = 0, k = 0;

    while ( i < n && j < m){ 
        
        if ( arr[i] < mar[j]){ 
            free[k] = arr[i];
            i++;
        }
        else { 
            free[k] = mar[j];
            j++;
        }
        k++;
    }

    // putting remaing element on arrays

    while ( i < n ){ 
        free[k] = arr[i];
        i++;
        k++;
    }
    while ( j < n ){ 
        free[k] = mar[j];
        j++;
        k++;
    }
    cout << "Two sorted arrays : " ;
    for (int l = 0; l < (n + m); l++){
        cout  << free[l] << " " ;
    }

}