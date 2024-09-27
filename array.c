#include <stdio.h>

int main() {
    // Write C code here
    int arr[5] = {34,12,21,54,48};
    int largest = *arr;
    
    for(int i = 0; i<5;i++){
        if(largest < *(arr+i)){
            largest = *(arr+i);
        }
    }
    
    printf("Largest Element: %d\n", largest);
    
    return 0;
}