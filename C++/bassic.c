#include <stdio.h>

struct student{
    int roll;
};

int main(){
   
    struct student r;
    r.roll = 12;
    printf("%d", r.roll);

    return 0;
}