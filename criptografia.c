#include <stdio.h>

int criptografar(int i, char senha[60])
{
    switch(senha[i])
    {
    case 'a': return 1;
    case 'b': return 2;
    case 'c': return 3;
    case 'd': return 4;
    case 'e': return 5;
    case 'f': return 6;
    case 'g': return 7;
    case 'h': return 8;
    case 'i': return 9;
    case 'j': return 10;
    case 'k': return 11;
    case 'l': return 12;
    case 'm': return 13;
    case 'n': return 14;
    case 'o': return 15;
    case 'p': return 16;
    case 'q': return 17;
    case 'r': return 18;
    case 's': return 19;
    case 't': return 20;
    case 'u': return 21;
    case 'v': return 22;
    case 'w': return 23;
    case 'x': return 24;
    case 'y': return 25;
    case 'z': return 26;
    case ' ': return 0;
    default: return senha[i];
    }
}

int ver_tam_senha(char senha[60])
{
    for(int i=0; senha[i] != '\0'; i++)
    {
        if(i>11)
        {
           return -1;
        }
    }
    return 1;
}

int main()
{
    int i=0;
    char senha[60];
    scanf("%[^\n]", senha);
    while(1)
    {
        if(ver_tam_senha(senha) != 1)
        {
            printf("Senha nao pode ter mais de 12 caracteres!\n");
            scanf("\n%[^\n]", senha);
            ver_tam_senha(senha);
        }
        else
        {
            for(i=0; senha[i] != '\0'; i++)
            {
                printf("%d", criptografar(i, senha));
            }
            break;
        }
    }

    return 0;
}
