#include<stdio.h>
int main()
{
    int ch;
    printf("Enter a char:");
    scanf("%c",&ch);
    switch(ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    printf("Vowel\n");
    break;

    default:
    printf("Consonant\n");
    }
    return 0;
}
