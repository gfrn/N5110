#include <stdio.h>
#include <unistd.h>
#include "./lib/5110_w.h"

int main() 
{
    lcd_init(); // Initializes LCD
    lcd_set_backlight(1); // Turns backlight on
    lcd_clear(); // Clears LCD

    lcd_print("Testing"); // Prints "testing"

    lcd_set_cursor(1,0); // Sets cursor to row 1, column 0
    lcd_print("Testing too");

    lcd_close();
}
