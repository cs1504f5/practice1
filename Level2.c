/* Project:		practice1
   File Name:	Level2.c
   Author:		ºÎ¿­
   Date:		2017-3-28
   Purpose:		LevelÄ£¿é  */

#include"System.h"
#include"level2.h"
void load2(void)
{   op=fopen("Level2_Lives.txt","r");
    fread(&Level2_Lives,sizeof(int),1,op);
    fclose(op);
    Level2_Lives-=48;
    fprintf(fp,"Level2:Load\n");
}

void initialize2(void)
{
    op=fopen("Level2_Counter.txt","r");
    fread(&Level2_Counter,sizeof(int),1,op);
    fclose(op);
    Level2_Counter-=48;
    fprintf(fp,"Level2:Initialize\n");
}

void update2(void)
{  Level2_Counter-=1;
    fprintf(fp,"Level2:Update\n");
}

void draw2(void)
{
    fprintf(fp,"Level2:Draw\n");
}

void free2(void)
{
    fprintf(fp,"Level2:Free\n");
}

void unload2(void)
{
    fprintf(fp,"Level2:Unload\n");
}
