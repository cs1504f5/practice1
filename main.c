/* Project:		practice1
   File Name:	main.c
   Author:		何凯
   Date:		2017-3-28
   Purpose:		mainÄ£¿é */
#include <stdio.h>
#include <stdlib.h>
#include"Level1.h"
#include"level2.h"
#include"System.h"
#include"GamestateManager.h"

int main()
{
    System_Initialize();
    GSM_Initialize();
    GSM_Update();
    load();
    initialize();
    while(level1_Counter>0)
    {
        Input_Handle();
        update();
        draw();
    }
    Free();
    unload();
    Previous=Current;
    Current=Next;
    GSM_Update();
    load();

    while(Level2_Lives>0)
    {    initialize();

        while(Level2_Counter>0)
        {Input_Handle();
      update();
        draw();
        }
        Level2_Lives=Level2_Lives-1;
        Free();
    }
    unload();
    System_Exit();
	return 0;
}
