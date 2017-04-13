/* Project:		practice1
   File Name:	GamestateManager.h
   Author:		ºÎ¿­
   Date:		2017-3-28
   Purpose:		GSMÄ£¿é  */

#ifndef _GameStateManager
#define _GameStateManager
int Previous,Current,Next;
void (*load)(void);
void (*initialize)(void);
void (*update)(void);
void (*draw)(void);
void (*Free)(void);
void (*unload)(void);

void GSM_Initialize(void);
void GSM_Update(void);


#endif
