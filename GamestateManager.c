/* Project:		practice1
   File Name:	GamestateManager.c
   Author:		ºÎ¿­
   Date:		2017-3-28
   Purpose:		GSMÄ£¿é  */
#include"System.h"
#include"GameStateList.h"
#include"GamestateManager.h"
#include"Level1.h"
#include"level2.h"



void GSM_Initialize(void)
{
    Previous=Current=GS_L1;
    Next=GS_L2;
    fprintf(fp,"GSM:Initialize\n");
}

void GSM_Update(void)
{ if(Current==GS_Restart)
      Current=Previous;
   else  if(Current==GS_L1)
        {
            load=load1;
            initialize=initialize1;
            update=update1;
            draw=draw1;
            Free=free1;
            unload=unload1;
        }
      else if(Current==GS_L2)
       {
            load=load2;
            initialize=initialize2;
            update=update2;
            draw=draw2;
            Free=free2;
            unload=unload2;
       }

    fprintf(fp,"GSM:Update\n");
}
