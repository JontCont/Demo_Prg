#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main()
{   

    char strpaswd[]="";
    char name[]="";
    //-----------input------------//
    printf("user name :");
    scanf("%s",&name);
    printf("passworld:");
    scanf("%s",&strpaswd);
    //-------------�P�_-------------//

    if(strcmp(name,"name")==0 || strcmp(strpaswd,"321")==0) printf("welcome");
    else printf("error");

    //--------------���G------------//
    return 0;
}