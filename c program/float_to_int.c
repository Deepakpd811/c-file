#include<stdio.h>
// demonstarate  the data loss dut to auto type conversion

int main(){

    float f = 12.3;

    int i = (int)f;

    printf("%d", i);





    return 0;
}