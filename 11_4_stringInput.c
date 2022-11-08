#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STRLEN 81

char* custom_string_input(char* st, int n);

char* custom_string_input(char* st, int n)
{
    char* ret_ptr;
    int i=0;

    ret_ptr = fgets(st, n, stdin);
    if(ret_ptr)
    {
        while(st[i]!='\n' && st[i]!='\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while(getchar()!='\n') //clear butter
                continue;
    }
    return ret_ptr;

}

int main()
{
    //creating space

    //char* name = ""; //error at run time
    // char name[128];
    // int result = scanf("%s", name);
    // puts(name);

    //scanf() vs gets()
    //scanf() reads one word (until space)
    //gets() reads one line and removes \n and add\0

    //char words[STRLEN] = ""; //warning without initialization
    //gets(words); //gets receives pointer . No idea when string ends
    //gets_s(words, sizeof(words));

    // TODO: try char words[5]
    // printf("START\n");
    // printf("%s", words);
    // puts(words);
    // puts("END.");

    //fgets() and fputs()
    // compensate char words[5]

    // char words[STRLEN] = "";
    // fgets(words, STRLEN, stdin); // does not remove \n
    // fputs(words, stdout);  
    // printf("%c", words[STRLEN-1]);  
    // words[STRLEN-1] = '\0';
    // printf("%c", words[STRLEN-1]);  
    // fputs(words, stdout); //does not add \n
    // fputs("END", stdout);

    //small array
    // char small_array[5];
    // puts("enter long strings:");
    // fgets(small_array, 5, stdin); 
    // fputs(small_array, stdout);

    // repeating short reading
    // char small_array[5];
    // puts("Enter long strings:");
    // while (fgets(small_array, 5, stdin)!= NULL && small_array[0] != '\n')
    //     fputs(small_array, stdout);

    //scanf()
    // char str1[6], str2[6];
    // //int count = scanf("%5s %5s", str1, str2);
    // //int count = scanf("%6s %6s", str1, str2);
    // //int count = scanf_s("%5s %5s", str1, 6, str2, 6);
    // printf("%s %s\n", str1, str2);

    //An example of custom input function
    char word[11];
    puts(custom_string_input(word,11));

    return 0;   
}