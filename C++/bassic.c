#include <stdio.h>

struct student{
    int roll;
};

int main(){
   
    struct student r;
    r.roll = 12;
    printf("%d", r.roll); // 12

    return 0;
}