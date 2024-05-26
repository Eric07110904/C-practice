#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "bar.h"

int main(){
    
    Student s;
    s.age = 18;
    s.name = "Eric";
    printf("%s %d\n", s.name, s.age);
    
    show();
    return 0;
}