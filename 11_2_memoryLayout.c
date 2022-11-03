#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void test_function()
{
    int j;
    printf("Stack high \t%llu\n", (unsigned long long)&j);
}

int main()
{
    const char* pt2 = "I am a string!.";
    const char* pt3 = "I am a string!.";
    const char* pt4 = "I am a string!!!!!!.";
    const char ar1[] = "I am a string!.";
    const char ar2[] = "I am a string!.";
    const char ar3[] = "I am a string!!.";

    // printf("rodata low \t%llu %llu %llu %llu\n", (unsigned long long)pt2, 
    //     (unsigned long long)pt3, (unsigned long long)pt4,
    //     (unsigned long long)"I am a string!." );
    
    // printf("Stack high \t%llu %llu %llu \n", (unsigned long long)ar1, 
    //     (unsigned long long)ar2, (unsigned long long)ar3); 

    // //memeory address check
    // //local variables

    // printf("Stack high \t%llu %llu %llu\n", (unsigned long long)&pt2, 
    //     (unsigned long long)&pt3, (unsigned long long)&pt4);
    
    // int i;
    // printf("Stack hihg \t%llu\n", (unsigned long long)&i);

    // // local variable in a function
    // test_function();

    // //dynamic allocation
    // char* p5 = (char*)malloc(sizeof(char)*100);
    // printf("Heap middle\t%llu\n", (unsigned long long)p5);

    // char* p6 = (char*)malloc(sizeof(char)*100);
    // printf("Heap middle\t%llu\n", (unsigned long long)p6);

    //ar1++;
    pt2++;
    puts(pt2);

    //Array and pointer differences
    char heart[]="I love kelly!";
    const char* head = "I love helly!";

    for (int i=0; i<6; i++)
        putchar(heart[i]);
    putchar('\n');

    for (int i=0; i<6; i++)
        putchar(head[i]);
    putchar('\n');

    //pointer addition
    for (int i=0; i<6; i++)
        putchar(*(heart+i));
    putchar('\n');

    for (int i=0; i<8; i++)
        putchar(*(head+i));
    putchar('\n');

    for (int i=0; i<8; i++)
        putchar(*(head++));
    putchar('\n');

    //heart=head;
    head=heart;

    for (int i=0; i<8; i++)
        putchar(*(head++));
    putchar('\n');

    heart[7]='H';
    putchar(heart[7]);
    putchar('\n');

    *(heart+7)='T';
    putchar(heart[7]);
    putchar('\n');

    char* word = "Google";
    //word[2]='o';
    puts(word);

    //const char* word = "Google"; is recommended

    const char* str1 = "When all the light are low, ...";
    const char* copy;
    puts(copy);
    copy=str1;
    puts(copy);

    printf("%s %p %p\n", str1, str1, &str1);
    printf("%s %p %p\n", copy, copy, &copy);

    return 0;   

}

