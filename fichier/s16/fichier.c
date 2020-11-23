#include <stdio.h>
#include <stdlib.h>

/*
    mode texte uniquement !

    fopen(<fichier, <mode_ouverture>) : r  (lecture seule, doit exister)
                                        w  (écriture seule) 
                                        a  (ajout de fichier)
                                        r+ (lecture/écriture, doit exister)
                                        w+ (lecture/écriture, supprime contenu)
                                        a+ (ajout lecture/écriture, fin de fichier)
    fclose(<fichier>) : fermer un fichier ouvert
    feof(<fichier>)   : tester la fin d'un fichier

    [LECTURE]
    fgetc(<fichier>) : lire un caractère
    fgets(<chaine>, <taille_chaine>, <fichier>) : lire une ligne //fonction plus sécurisé


    [ECRITURE]
    fputc(<caractère>,<fichier>)                : écrit un caractère 
    fputs(<chaine>, <fichhier>)                 : écrit une ligne de texte
    fprintf(<fichier>, <format>, ...)           : écrit du texte formaté

    [POSITIONNEMENT]
    ftell(<fichier>)                            : retourne position curseur fichier
   
    fseek(<fichier>, <deplacement>, <origine>)  : déplace curseur
        -> <origine> : SEEK_SET (début fichier)
                       SEEK_CUR (position courante)
                       SEEK_END (fin fichier)

    rewind(<fichier>)                           : réinitialise la position du curseur
    
    [DIVERS]
    rename (<ancien_nom>, <nouveau_nom)
    remove (<fichier>) /!\ attention à cette fonction pas de corbeille

*/

int main(void)
{
    // rename("profil.save", "data.save");
    remove ("nomdefichier"); 
    return 0;
}