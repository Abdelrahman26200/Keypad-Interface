#include "STD_TYPES.h"

#include "PORT_interface.h"

#include "CLCD_interface.h"
#include "KPD_interface.h"

#include "util/delay.h"

void main ()
{
	u8 Local_u8PressedKey;
	PORT_VidInit();
	CLCD_VidInit();
	CLCD_VidSendCommand(CLCD_CLEAR_DISPLAY);

	while(1)
	{
		do
		{
			Local_u8PressedKey=KPD_u8GetPressedKey();
		}while(0xff==Local_u8PressedKey);
		CLCD_VidWriteNum(Local_u8PressedKey);

	}
}
