#include <stdio.h>
#include <ctype.h>

/*
*   01. Prompt the user to enter a string, and let them type it in.
    This could be an entire(entire* same whole) sentence, with the newline indicating the end of the string.
    You may assume the string will be no more than 100 characters, so declare your array accordingly.

    02. Display the following menu:

     A)  Count the number of vowels in the string
     B)  Count the number of consonants in the string
     C)  Convert the string to uppercase
     D)  Convert the string to lowercase
     E)  Display the current string
     F)  Enter another string

     M)  Display this menu
     X)  Exit the progra

*/

int vowelsNumber(char str[]);
int consonantsNumber(char str[]);
char *strUppercase(char str[]);
char *strLowcase(char str[]);
void showString(char str[]);
void menu();
void exitMenu();

int main() {
    char str[100],enter,letterUpcase;

    /* First the guy need put a string value*/
    printf("Enter string value: ");
    gets(str);

    menu();
    scanf("%c",&enter);
    letterUpcase=toupper(enter);

    switch(letterUpcase){
        case 'A': printf("The number of vowels: %d\n",vowelsNumber(str));break;

        case 'B': printf("The number of consonants: %d\n",consonantsNumber(str));break;

        case 'C': printf("Uppercase string: %s\n", strUppercase(str));break;

        case 'D': printf("Downcase string: %s\n",strLowcase(str));break;

        case 'E': printf("E");break;

        case 'F': printf("F");break;

        case 'M': menu();break;

        case 'X': printf("X");break;
        default: printf("Any other");
    };



    return 0;
}

void menu(){
    printf("\n\
    A)  Count the number of vowels in the string\n\
    B)  Count the number of consonants in the string\n\
    C)  Convert the string to uppercase\n\
    D)  Convert the string to lowercase\n\
    E)  Display the current string\n\
    F)  Enter another string\n\n\
    M)  Display this menu\n\
    X)  Exit the progra\nValue: ");
}


int vowelsNumber(char str[]){
    char vowel[]={'A','E','I','O','U','\0'},uppercase=' ';
    int index,count=0,i;

    for(index=0;str[index]!='\0';index++) {
    uppercase=toupper(str[index]);
        for(i=0;vowel[i]!='\0';i++){
            if(uppercase==vowel[i]){
                count++;
            }
        }
    }

    return count;
}


int consonantsNumber(char str[]){
    char vowel[]={'A','E','I','O','U','\0'},uppercase=' ';
    int index,i,size=0,space=0,count=0;

    while(str[size]!='\0') {
    size++;
    }

    for(index=0;str[index]!='\0';index++) {
    uppercase=toupper(str[index]);
        if(str[index]==' ') {
            space++;
        }
        for(i=0;vowel[i]!='\0';i++){
            if(uppercase==vowel[i]){
                size--;
            }
        }
    }
    count = size - space;
    return count;
}

char *strUppercase(char str[]){
    int index;
    char uppercase;

    for(index=0;str[index]!='\0';index++){
        uppercase=toupper(str[index]);
        str[index]=uppercase;
    }
    return str;
}

char *strLowcase(char str[]){
    int index;
    char lowcase;

    for(index=0;str[index]!='\0';index++){
        lowcase=tolower(str[index]);
        str[index]=lowcase;
    }

    return str;
}
