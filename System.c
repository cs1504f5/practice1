/* Project:		practice1
   File Name:	system.h
   Author:		ºÎ¿­
   Date:		2017-3-28
   Purpose:		systemÄ£¿é  */

#include"System.h"
void System_Initialize(void)
{
    fp=fopen("output.txt","w");
    fprintf(fp,"System:Initialize\n");
}


void System_Exit(void)
{
    fprintf(fp,"System:Exit\n");
    fclose(fp);
    free(fp);
}
