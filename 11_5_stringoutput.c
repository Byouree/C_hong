#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define TEST "A string from #define"

void custom_put(const char* str);
int custom_put2(const char* str);

int main()
{
    //puts() : add \n at the end

    // char str[60] = "String array initialized";
    // const char* ptr = "A pointer initialized";

    // puts("String without \\n");
    // puts("END");
    // puts(TEST);
    // puts(TEST+5); //ing ..
    // puts(&str[3]); //ing...
    // //puts(str[3]);
    // puts(ptr+3); //ointer..

    //string without \0
    // char str[] = {'H', 'I', '!'}; // No \0 at the end
    // puts(str);
    
    //puts() and fputs()
    // char line[100];
    // while(gets(line)) //while(gets(line)!= NULL)
    //     puts(line);
    
    // char fline[100];
    // while(fgets(fline, 81, stdin))
    //     fputs(fline, stdout);
    
    // char str[] = "just do it just do it";
    // printf("%s ", str);
    // puts(str);
    // char input[100];
    // int ret = scanf("%10s", input); // Input = "Just do it, do it\n"
    // printf("%s\n", input); // Output : Just
    
    // ret=scanf("%10s", input); //read remaing buffer
    // printf("%s\n",input); // do

    // ret=scanf("%10s", input); //read remaing buffer
    // printf("%s\n",input); // do

    //custom function
    //custom_put("Just ");
    //custom_put("Do it!");
    printf("%d\n", custom_put2("12345"));

    
    return 0;

}

void custom_put(const char* str)
{
    while(*str!=NULL) {
        putchar(*str);
        str++;
    }
}
int custom_put2(const char* str)
{    
    int cnt=0;
    while(*str!=NULL) {        
        putchar(*str);
        str++;
        cnt++;
    }
    putchar('\n');
    return cnt;
}