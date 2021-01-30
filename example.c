#include <stdio.h>
#include <unistd.h>
#include "5110_w.h"

int main() 
{
    lcd_init();
    lcd_set_backlight(1);

    lcd_print("Testing");

    lcd_set_cursor(1,0);
    lcd_print("Testing too");

    lcd_close();
}
