#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    //Arrays of character strings
    const char* mythings[5] = {
        "Dancing in the rain",
        "Couting apples",
        "Watching moview with friends",
        "Writing sad letters",
        "Studying the C langusge"
    };

    char yourthings[5][40] = {
        "Studying the C++ langusge",
        "Eating",
        "Wathing netflix",
        "Walking around till dark",
        "Deleting spam emails"
    };

    const char* temp1 = "Dancing in the rain";
    const char* temp2 = "Studying the C++ langusge";

    printf("%s %u %u\n", mythings[0], (unsigned) mythings[0], (unsigned)temp1);
    printf("%s %u %u\n", yourthings[0], (unsigned) yourthings[0], (unsigned)temp2);
    printf("%u %u\n", (unsigned)&yourthings[0][0], (unsigned)temp2);

    printf("%-30s %-30s\n", "My things:", "Your things:");
    for (int i=0; i<5; i++)
        printf("%-30s %-30s\n", mythings[i], yourthings[i]);

    printf("\nsizeof mythings: %zd, sizeof yourthing: %zd\n",
    sizeof(mythings), sizeof(yourthings));

    for (int i=0; i<100; i++)
        printf("%c", mythings[0][i]);
    printf("\n");
    printf("\n");
    
    for (int i=0; i<200; i++)
        printf("%d", (int)mythings[0][i]);
    printf("\n");
    printf("\n");

    for (int i=0; i<200; i++)
        printf("%c", yourthings[0][i]);
    printf("\n");
    printf("\n");
    return 0;
}
