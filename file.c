#include<stdio.h>
#include<stdlib.h>

          int main()
{
            FILE *fp;
            char fname[20];
            char ch[100];
            printf{“Enter File Name:”);
            scanf( “%s” , fname);
            fp=fopen(fname,”w”);
            if(fp==NULL)
                         {
                                      printf(“file not created”);
                                      Exit(0);
                          }
            printf(“file created successfully”);
            printf(“\n enter text to create:\n”);
            getchar();
            gets(ch);
            fprintf(fp, ”Text                 = %s\n” , ch);
            printf(“\n data written”);
            fclose(fp);
}
