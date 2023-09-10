#include <stdint.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


int main()
{
    uint64_t test = 0;
    uint64_t write;
    void * ptr = &write;
    uint8_t * test_8b = ptr;
    for(int i = 0; i < 64; i++){

        test = (i % 2) ? test + 0b1 : test;
        test = test << 1;
    }
    printf("%lu\n", test);
    write = test;
    test_8b += 5;
    for(int i = 0; i < 8; i++){
        printf("%d\n", test_8b[i]);
    }
    printf("%lu\n", write);

}

int count_bits(void){
    return 0;
}
