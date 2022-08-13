#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include<time.h>
#include "data.h"
int main()
{

    char ch;
    int life=5;
    int i,j,res,n;
    int final_res=0;
    int completed[30]= {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    srand(time(NULL));

    printf("\n\n\n\t\t\t\t\tWELCOME TO HANGMAN GAME!\n\n\n");
    do{
            printf("\n\n\n\t\t\t\t\t1.NEW GAME.\n\n\n\t\t\t\t\t2.HELP.\n\n\n\t\t\t\t\t3.EXIT.");
            printf("\n\n\n\t\t\t\t\tENTER CHOICE:");
            scanf("%d",&n);
            system("cls");
            switch(n){
                case 1:

    for (i=0; ques[i][0]; i++)
    {
        printf("\t\t\t\t\t%s\n",ques[i]);
    }
    printf("\t\t\t\t\tENTER YOUR CHOICE:");
    scanf("%d",&i);
    system("cls");

        while(completed[i]==1)
        {
            i = (i+1)%30;
        }

        if(completed[i]==0)
        {
            completed[i]=1;
            final_res++;
            printf("\n\n\n\t\t\t\t\t%s\n",ques[i]);
            printf("\n\n\n\t\t\t\t\t%s\n",temp[i]);

            while(life!=0)
            {
                res=0;
                printf("\n");
                printf("\t\t\t\t\tENTER A CHARACTER:");
                scanf("\n%c",&ch);
                system("cls");
                if(isupper(ch))
                {
                    ch=tolower(ch);
                }
                for(j=0; j<strlen(word[i]); j++)
                {
                    if(ch==word[i][j])
                    {
                        temp[i][j]=ch;
                        res=1;
                    }

                }

                if(strcmp(temp[i],word[i])==0)
                {
                    printf("\n\n\n\t\t\t\t\tCONGRATULATIONS!\n\n\n\t\t\t\t\tYOU HAVE GUESSED CORRECTLY!\n");
                    printf("\n\n\n\t\t\t\t\t%s\n",temp[i]);
                    printf("\n\n\n\t\t\t\t\tPRESS [ENTER] TO CONTINUE.");
                    getch();
                    system("cls");
                    break;
                }

                else
                {
                    if(res==1)
                    {
                        printf("\n\n\n\t\t\t\t\t%s\n",ques[i]);
                        printf("\n\n\n\t\t\t\t\t%s\n",temp[i]);
                    }

                    else
                    {
                        printf("\n\n\n\t\t\t\t\tNO MATCHING CHARACTER\n");
                        life--;
                        printf("\n\n\t\t\t\t\tYOU HAVE %d LIVES REMAINING.",life);
                        printf("\n\n\n\t\t\t\t\t%s\n",ques[i]);
                        printf("\n\n\n\t\t\t\t\t%s\n",temp[i]);


                    }

                }

            }

            if (life<=0)
            {
                system("cls");
                printf("\n\n\n\t\t\t\t\tGAME OVER!");
                break;
            }
        }
        if (final_res==30)
        {
            break;
        }

    break;
    case 2:
        printf("1.\n\n\n\t\t\t\t\t1.You have to guess words in the game\n\n\n\t\t\t\t\t2.You will be provided with 5 chances to guess the word\n\n\n\t\t\t\t\t3.You will have a clue with every word\n");
        break;
    case 3:
        printf("\n\n\n\t\t\t\t\tEXIT");
        break;
    default:
        printf("Please enter a valid choice");
        break;
            }
    }while(n!=3);
    return 0;
}
