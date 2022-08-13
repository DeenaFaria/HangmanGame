#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include "data.h"
int main()
{

    char ch;
    int life=5;
    int i,j,res,n,k,length1,length2,length3,length4,length5;

    printf("\n\n\n\t\t\t\t\tWELCOME TO HANGMAN GAME!\n\n\n");
    do{
            printf("\n\n\n\t\t\t\t\t1.NEW GAME.\n\n\n\t\t\t\t\t2.HELP.\n\n\n\t\t\t\t\t3.EXIT.");
            printf("\n\n\n\t\t\t\t\tENTER CHOICE:");
            scanf("\n\n\n\t\t\t\t\t%d",&n);
            system("cls");
            switch(n){
                case 1:

    for (i=0; ques[i][0]; i++)
    {
        printf("\t\t\t\t\t%s\n",ques[i]);
    }
    printf("\n\t\t\t\t\tENTER YOUR CHOICE(0-29):");
    scanf("\n\n\n\t\t\t\t\t%d",&i);
    system("cls");

            length1=strlen(word[i][0]);
    	    length2=strlen(word[i][1]);
    	    length3=strlen(word[i][2]);
    	    length4=strlen(word[i][3]);
    	    length5=strlen(word[i][4]);

    	 printf("\n\n\n\t\t\t\t\t The lengths of the 5 words are\n\n\n\t\t\t\t\t 0.%d\n\n\n\t\t\t\t\t 1.%d\n\n\n\t\t\t\t\t 2.%d\n\n\n\t\t\t\t\t 3.%d\n\n\n\t\t\t\t\t 4.%d",length1,length2,length3,length4,length5);
    	 printf("\n\n\n\t\t\t\t\tEnter the choice of length(0-4):");


    	 		 		 scanf("\n\n\n\t\t\t\t\t%d",&j);
    	 		 		 system("cls");

            printf("\n\n\n\t\t\t\t\t%s\n",ques[i]);
            printf("\n\n\n\t\t\t\t\t%s\n",temp[i][j]);

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
                for(k=0; k<strlen(word[i][j]); k++)
                {
                    if(ch==word[i][j][k])
                    {
                        temp[i][j][k]=ch;
                        res=1;
                    }

                }

                if(strcmp(temp[i][j],word[i][j])==0)
                {
                    printf("\n\n\n\t\t\t\t\tCONGRATULATIONS!\n\n\n\t\t\t\t\tYOU HAVE GUESSED CORRECTLY!\n");
                    printf("\n\n\n\t\t\t\t\t%s\n",temp[i][j]);
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
                        printf("\n\n\n\t\t\t\t\t%s\n",temp[i][j]);
                    }

                    else
                    {
                        printf("\n\n\n\t\t\t\t\tNO MATCHING CHARACTER\n");
                        life--;
                        printf("\n\n\t\t\t\t\tYOU HAVE %d LIVES REMAINING.",life);
                        printf("\n\n\n\t\t\t\t\t%s\n",ques[i]);
                        printf("\n\n\n\t\t\t\t\t%s\n",temp[i][j]);


                    }

                }

            }


            if (life<=0)
            {
                system("cls");
                printf("\n\n\n\t\t\t\t\tGAME OVER!");
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
