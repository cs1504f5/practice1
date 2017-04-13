/* Project:		practice1
   File Name:	Level1.c
   Author:		ºÎ¿­
   Date:		2017-3-28
   Purpose:		LevelÄ£¿é  */

#include"System.h"
#include"Level1.h"

void load1(void)
{   op=fopen("Level1_Counter.txt","r");
    fread(&level1_Counter,sizeof(int),1,op);
    fclose(op);
    level1_Counter-=48;
    fprintf(fp,"Level1:Load\n");
}

void initialize1(void)
{
    fprintf(fp,"Level1:Initialize\n");
}

void update1(void)
{
    level1_Counter-=1;
    fprintf(fp,"Level1:Update\n");
}

void draw1(void)
{
    fprintf(fp,"Level1:Draw\n");
}

void free1(void)
{
    fprintf(fp,"Level1:Free\n");
}

void unload1(void)
{
    fprintf(fp,"Level1:Unload\n");
}
