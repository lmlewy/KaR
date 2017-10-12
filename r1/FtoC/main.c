#include <stdio.h>
#include <stdlib.h>

#define MIN 0
#define MAX 100
#define STEP 10

int main()
{


    printf("Fahr na Celc\n");
    printf("Fahr\t Celc\n");

    float i = MIN;
    float cels = 0.0;
    while(i <= MAX)
    {
        cels = (5.0/9.0)*(i-32.0);
        printf("%3.2f \t= %3.2f\n",i,cels);
        i += STEP;
    }




    return 0;
}
