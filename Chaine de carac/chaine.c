#include <stdio.h> 
#include <string.h>

/* CHAINE DE CARACTERE = TABLEAU 

[Fonction de chaines] <string.h>
    strcpy()  : copie une chaine dans une autre
    strlen()  : longueur d'une chaine (sans caractère de fin de chaine '\0')
    strcmpt() : comparer deux chaines (lexicographiquement, classé comme dans une dictionnaire)
        strcat()  : concaténer deux chaines (fusionner)
    
    strstr()  : trouver/chercher une chaine dans une autre (pointeurs)
    strchr()  : chercher 1ère occurence de caractère
-------------------------
<stdio> 
    sprintf() : écrire dans une chaine
-------------------------
    signed char mot[] = {'B', 'i', 'j', 'o', 'u', 'r'}
----------------
    mémoire mot[6] = "Bijour";
    ['B']
    ['i']
    ['j']
    ['o']
    ['u']
    ['r']
    ['\0']  fin de chaine compte 1
    -----------------------------
    espace déclaré ne peux être modifié simplement par la suite
    déclaration seulement première ligne ---> signed char mot[] = "le mot"
*/

int main(void)
{
    char texte[256];

    sprintf(texte, "Batou", 5);

    printf("%s\n", texte);

    return 0;
}