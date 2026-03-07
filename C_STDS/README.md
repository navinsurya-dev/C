To make the compiler to compile the code in specific standards 
use the flag "-std"


Example :

        gcc -std=c17 filename.c
        gcc -std=c23 filename.c

To Know the Current Standards the Compiler uses 

#include<stdio.h>

int main(){

    printf("%ld",__STDC_VERSION__);
    return 0 ;
}

Compile the above code and note the output
