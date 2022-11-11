#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void fit_str(char* str, unsigned int size);
void my_strcat(char* str1, char* str2);
int my_strcmp(char* str1, char* str2);

int main()
{
    //strlen(): return length of string

    // char msg[] = "Just,"" Do it!";
    // puts(msg);
    // printf("Length %d\n", strlen(msg));
    // fit_str(msg, 4);
    // puts(msg);
    // printf("Length %d\n", strlen(msg));

    // strcat() and strncat90 : string concatenation

    // char str1[100] = "First string";
    // char str2[]= "Second string";

    // printf("%d\n", sizeof(str2));
    // // strcat(str1, ",");
    // // puts(str1);
    // // strcat(str1, str2);
    // //strncat(str1, str2, 1);
    // //my_strcat(str1, str2);
    // my_strcat(str1, ",");
    // my_strcat(str1, str2);
    // //puts(str1);

    //strcmp() and strncmp() ; compare strings (not characters)
    // printf("%d\n", strcmp("A", "A"));
    // printf("%d\n", strcmp("A", "B"));
    // printf("%d\n", strcmp("B", "A"));
    // printf("%d\n", strcmp("Hello", "Hello"));
    // printf("%d\n", strcmp("Banana", "Bananas"));
    // printf("%d\n", strcmp("Bananas", "Banana"));
    // printf("%d\n", strncmp("Bananas","Banana", 6));
    
    //printf("%d\n", my_strcmp("Hellos", "Hello"));
    
    // //strcpy() and strncpy()
    // char dest[100] = ""; //make sure memory is enough
    // char source[] = "Start programming";

    // //strcpy(dest,source);
    // //puts(dest);
    // strncpy(dest, source, 3);    //'\0' is NOT added
    // puts(dest);
    // strcpy(dest, source+6);
    // puts(dest);
    // strcpy(dest,source);
    // puts(dest);
    // strcpy(dest+6, "coding");
    // puts(dest);
    
    //sprintf()
    // char str[100]="";
    // int i=123;
    // double d=3.14;
    // //sprintf(str,"%05d.png %f", i, d);
    // for (int i=0;i<10; i++)
    // {
    //     sprintf(str, "capture%05d.png ", i);            
    //     puts(str);   
    // }

    // There are more functions
    printf("%s\n", strchr("Hello, World", 'e'));
    printf("%s\n", strpbrk("Hello, World", "ABCDE"));
    printf("%s\n", strpbrk("Hello, World", "abcde"));

    printf("%s\n", strrchr("Hello, World, Hello, World", 'l')); //last coourrence
    printf("%s\n", strstr("Hello, World", "wor"));
    printf("%s\n", strstr("Hello, World", "Wor"));

    return 0;

}
int my_strcmp(char* str1, char* str2)
{
    while(*str1 != NULL)
    {
        if (*str1 > *str2)
            return 1;
        else if (*str1 < *str2)
            return -1;

        *str1++;
        *str2++;
    }

    if (*str2 != NULL)
        return -1;
    else
        return 0;

}
void my_strcat(char* str1, char* str2)
{
    char* headPtr = str1;
    
    while(*str1!='\0'){
        str1++;
    }
    while(*str2!='\0')
    {
        *str1 = *str2;
        str1++;
        str2++;
    }      
    
    puts(headPtr);

}

void fit_str(char* str, unsigned int size)
{
    if (strlen(str) > size)
        str[size] = '\0';
 
}

/* void fit_str(char* str, unsigned int size)
{
    int cnt = 0;
    while(cnt<size){
        putchar(*str);
        str++;
        cnt++;
    }
    *str = '\0';
    putchar('\n');
        
} */