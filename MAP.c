/****************************************************/
/****************************************************/
/**********		Author: Hoda Osama		*************/
/**********		Layer : LIB				*************/
/**********		SWC	  : MAP		    	*************/
/**********		Version: 1.00			*************/
/****************************************************/
/****************************************************/

#include"STD_TYPES.h
#include "MAP.h"

s32 Map(s32 InputMin, s32 InputMax, s32 OutputMin, s32 OutputMax, s32 InputValue)
{
	s32 Local_s32M,Local_s32B;
	Local_s32M=(OutputMax-InputMax)/(OutputMin-InputMin);
	Local_s32B=InputMax-(Local_s32M*InputMin);
	return Local_s32M*InputValue+Local_s32B;
}

