#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nX;
    int nY;
    int nSize;
    char cC;
    printf("Please type in a character.\n");
    scanf("%c",&cC);
    printf("Size of the cross ?\n");
    scanf("%d",&nSize);

    for (nX=0;nX<nSize;nX++)
    {
        for (nY=0;nY<nSize;nY++)
        {
            if (nX==nY || nY==nSize-nX-1)
            {
                printf("%c",cC);
            }
            else
            {
                printf("-");
            }

        }
        printf("\n");
    }
/* ------------------Carré ------------------*/
int nL;
int nH;
int nI;
int nJ;
char cCh;
char cChfill;
    fflush(stdin);
    printf("Please type in a character.\n");
    scanf("%c",&cCh);
    fflush(stdin);
    printf("Please type in another character.\n");
    scanf("%c",&cChfill);
    fflush(stdin);
    printf("What height ?\n");
    scanf("%d",&nH);
    fflush(stdin);
    printf("What width ?\n");
    scanf("%d",&nL);
    fflush(stdin);
    for(nJ=1;nJ<=nH;nJ++) //de haut en bas
    {
        for(nI=1;nI<=nL;nI++) //de gauche à droite
        {
            if(nJ==1 || nJ==nH || nI==1 || nI == nL)
            {
                printf("%c",cCh);
            }
            else
            {
                printf("%c",cChfill);
            }
        } // fin du gauche à droite
        printf("\n");
    }

    return 0;
}
