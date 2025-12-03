#include <assert.h>
#include <stdio.h>

int divide(int a, int b) {
    assert(b != 0); 
    return a / b;
}

int main(void) {
    printf("%d\n", divide(10, 2)); 
   
    return 0;
}
