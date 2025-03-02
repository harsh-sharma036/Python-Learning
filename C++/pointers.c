#include <stdio.h>

int main(){
    
    int n = 10;
    int *ptr = &n;

    // printf("%d\n", n);
    // printf("%p\n", &n);
    // printf("%d\n", *ptr);
    // printf("%p\n", ptr);

    
    
    int arr[5] = {11, 12, 13, 14, 15};
    int *ptr1 = &arr[0];

    for(int i = 0; i<5; i++){
        printf("%d\n", (*ptr1));
        printf("%p\n", ptr1);
        ptr1++;
        printf("\n");
    }
    
    
    return 0;
}