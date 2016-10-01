#include<stdio.h>
#include<string.h>

char lecture()
{
    char c;
    scanf("%c",&c);getchar();
    return c;
}

float conversion()
{
    float resultat=0.0,v=0.0;
    char signe,c,rep;

    printf("Entrer le signe du reel : ");
    scanf("%c",&signe);getchar();

    printf("Enrez votre nombre chiffre par chiffre : ");
    scanf("%c",&c);getchar();

    resultat = (c-'0');

    printf("Voulez-vous continuer ? [O/N] ");
    scanf("%c",&rep);getchar();

    while(rep=='O' || rep=='o')
    {
        int j=1;
        scanf("%c",&c);getchar();
        if(c == '.')
        {
            j=-1;
            continue;
        }
        if(j < 0)  {
            v+=(c-'0')*pow(10,j);
            j--;
        }
        else if(j > 0)
        {
            resultat *= 10;
            resultat += (c-'0');
        }
        printf("Voulez-vous continuer ? [O/N] ");
        scanf("%c",&rep);getchar();
    }
    resultat += v;
    if(signe == '-')    return resultat *= -1;
    return resultat;
}

int main()
{
    float a;
    a=conversion();
    printf("\na = %f\n",a);
    return 0;
}
