#include<stdio.h>
#include<stdlib.h>

int main()
{
        char    test[400];
        int     maman[400];
        maman[0]=0;

        int     wpresd=0;
        int     widolfarry=0;
        int     words=0;
        int     widolfarry1=0;
        int     halou=0;

        printf("Write something:");

        scanf("%400[0-9a-zA-Z .,]",test);

        while(test[widolfarry]!=EOF)
        {
                if(test[widolfarry]=='\0' || test[widolfarry]==32 || test[widolfarry]==46)
                {
                    if(test[widolfarry-1]=='\0' || test[widolfarry-1]==32 || test[widolfarry-1]==46)
                    {
                        maman[wpresd]=widolfarry;
                    }
                    else
                    {
                        words++;
                        widolfarry++;

                        wpresd++;
                        maman[wpresd]=widolfarry;
                    }
                }
                else
                {
                    widolfarry++;
                    widolfarry1++;
                }
        }


        printf("There are %d characters\n",widolfarry1);
        printf("There are %d words in the sentence\n\n\n",words);


        if(widolfarry1>20)
        {
            printf("the sentence:%s",test);
        }

        for(int gnu=0;gnu<words;gnu++)
        {
            for(int guj=0;guj<5;guj++)
            {
                for(int guh=maman[gnu];guh<maman[gnu+1]-maman[gnu]-1;guh++)
                {
                    printf("%c",test[guh]);
                }

                printf(", ");
            }

            printf("\n");
        }


        return 0;
}
