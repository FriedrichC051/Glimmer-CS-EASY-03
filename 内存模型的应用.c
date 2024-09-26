#include <stdio.h>
#include <stdlib.h>

const int constValue = 100;
const char* constString = "Hello, World!";
int globalVar = 10;

void function(int arg) {
    int localVar = 20;
    printf("localVar: 0x%p\n",&localVar);
    int *ptr = malloc(sizeof(int));
    *ptr = 30;
    printf("ptr: 0x%p\n",ptr);
    free(ptr);
}

int main() {
    static int staticVar = 40;
    int localVarMain = 50;
    function(60);

    printf("constValue: 0x%p\n",&constValue);
    printf("constString: 0x%p\n",constString);
    printf("globalVar: 0x%p\n",&globalVar);
    printf("staticVar: 0x%p\n",&staticVar);
    printf("localVarMain: 0x%p\n",&localVarMain);

    return 0;
}
