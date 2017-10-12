#include <stdio.h>
#include <stdlib.h>

#define MIN 0
#define MAX 100
#define STEP 1

int main()
{
    float cels = MIN;
    float fahr = 0;


    printf("Cels to Fahr\n");

    while(cels <= MAX)
    {
        fahr = ((9.0/5.0)*cels) + 32;
        printf("%2.3f = %2.3f\n", cels, fahr);
        cels += STEP;
    }

    return 0;
}
