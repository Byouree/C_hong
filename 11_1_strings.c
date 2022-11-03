#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MESSAGE "A symbolic string contant"
#define MAXLENGTH 81

int main()
{
    char words[MAXLENGTH] = "A string in an array";
    const char* pt1 = "A pointer to a string";

    puts("Puts() adds a newline at the end:");
    puts(MESSAGE);
    puts(words);
    puts(pt1);
    words[3]='p';
    puts(words);
    //pt1[8]='p';
    printf("%s, %p, %c\n", "We", "are", *"excellent programmers");

    const char m1[15] = "Love you!";

    for (int i=0; i<15; i++){
        printf("%d ", (int)m1[i]);
    }
    printf("\n");

    int n = 8;
    char cookies[1] = {'A',};
    char crumbs[n];

    char truth[10]="Truth is ";
    if (truth == &truth[0]) puts("true");
    if (*truth == 'T') puts("true");
    if (*(truth+1) == truth[1]) puts("ture");
    if (truth[1] =='r') puts("true");


    return 0;

}