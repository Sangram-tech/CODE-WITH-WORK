#include <stdio.h>

int main() {
    int var = 42;     
    int *ptr = &var;    
    printf("Address stored in ptr: %p\n", (void*)ptr);
    printf("Address of ptr: %p\n", (void*)&ptr);

    return 0;
}
