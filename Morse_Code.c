#include <stdio.h>
#include <windows.h>

void Morze(char);

int main()
{
    char texto[30];
    printf("Thiz is a Morze Code, ingresa el texto: \n");
    fgets(texto,sizeof(texto),stdin);
    for(int i=0; texto[i]!='\0'; i++)
    {
        //printf("%c \n",texto[i]);
        Morze(texto[i]);
    }

    return 0;
}

void Morze(letra)
{
    switch (letra)
    {
        case 'a':
            Beep(550,250);
            Beep(550,550);
            printf(".-");
        break;
        case 'b':
            Beep(550,550);
            Beep(550,250);
            Beep(550,250);
            Beep(550,250);
            printf("-...");
        break;
        case 'c':
            Beep(550,550);
            Beep(550,250);
            Beep(550,550);
            Beep(550,250);
            printf("-.-.");
        break;
        case 'd':
            Beep(550,550);
            Beep(550,250);
            Beep(550,250);
            printf("-..");
        break;
        case 'e':
            Beep(550,250);
            printf(".");
        break;
        case 'f':
            Beep(550,250);
            Beep(550,250);
            Beep(550,550);
            Beep(550,250);
            printf("..-.");
        break;
        case 'g':
            Beep(550,550);
            Beep(550,550);
            Beep(550,250);
            printf("--.");
        break;
        case 'h':
            Beep(550,250);
            Beep(550,250);
            Beep(550,250);
            Beep(550,250);
            printf("....");
        break;
        case 'i':
            Beep(550,250);
            Beep(550,250);
            printf("..");
        break;
        case 'j':
            Beep(550,250);
            Beep(550,550);
            Beep(550,550);
            Beep(550,550);
            printf(".---");
        break;
        case 'k':
            Beep(550,550);
            Beep(550,250);
            Beep(550,550);
            printf("-.-");
        break;
        case 'l':
            Beep(550,250);
            Beep(550,550);
            Beep(550,250);
            Beep(550,250);
            printf(".-..");
        break;
        case 'm':
            Beep(550,550);
            Beep(550,550);
            printf("--");
        break;
        case 'n':
            Beep(550,550);
            Beep(550,250);
            printf("-.");
        break;
        case 'o':
            Beep(550,550);
            Beep(550,550);
            Beep(550,550);
            printf("---");
        break;
        case 'p':
            Beep(550,250);
            Beep(550,550);
            Beep(550,550);
            Beep(550,250);
            printf(".--.");
        break;
        case 'q':
            Beep(550,550);
            Beep(550,550);
            Beep(550,250);
            Beep(550,550);
            printf("--.-");
        break;
        case 'r':
            Beep(550,250);
            Beep(550,550);
            Beep(550,250);
            printf(".-.");
        break;
        case 's':
            Beep(550,250);
            Beep(550,250);
            Beep(550,250);
            printf("...");
        break;
        case 't':
            Beep(550,550);
            printf("-");
        break;
        case 'u':
            Beep(550,250);
            Beep(550,250);
            Beep(550,550);
            printf("..-");
        break;
        case 'v':
            Beep(550,250);
            Beep(550,250);
            Beep(550,250);
            Beep(550,550);
            printf("...-");
        break;
        case 'w':
            Beep(550,250);
            Beep(550,550);
            Beep(550,550);
            printf(".--");
        break;
        case 'x':
            Beep(550,550);
            Beep(550,250);
            Beep(550,250);
            Beep(550,550);
            printf("-..-");
        break;
        case 'y':
            Beep(550,550);
            Beep(550,250);
            Beep(550,550);
            Beep(550,550);
            printf("-.--");
        break;
        case 'z':
            Beep(550,550);
            Beep(550,550);
            Beep(550,250);
            Beep(550,250);
            printf("--..");
        break;
    
    
        default:
        break;
    }
}