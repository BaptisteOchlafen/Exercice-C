#include <stdio.h>

/*

    Liste NOIRE ! : gets(), atoi(), atol(,) atod()
    Liste GRISE   : scanf(), fscanf() -> savoir comment cette fonction fonctionne
    Liste BLANCHE : fgets(),

    automatiquement : stdin -> capture tout ce qui passe

    int scanf(const char *format, ..autre variables..);

    int someFonction(params...)
    {
        return 0
        //si problème digitalRead
        return -1;

        //...si problème G
        return -11;
    }

    ret = someFunction(...)

    -------------------------------------------

    chaine en C : blablahbla\0 (scanf avec %s)
    
     

*/
/*

porte|creerdictionnaire
chat|dsjdklae
voiture|fzklfjezfmlkj travailler avec des fichiers binaire
pareil à "%s|%s"....

manipules des octets 

sizeof() 

*/

//#define BUFFER_SIZE 6
//juste un exemple n'est pas du tout sécurisé

int main(void)
{
    char letter[26];
    int ret;

    printf("Lettre : ");
    ret = scanf(" %25c", &letter);

    printf("Lettre saisie : %s\n", letter);
    printf("RET : %d\n", ret);

    return 0;
}