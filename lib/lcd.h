#ifndef LCD_H
#define LCD_H

#define LCD_WIDTH 84
#define LCD_HEIGHT 48

#define P9_30 "gpio112"
#define P8_7 "gpio66"
#define P8_11 "gpio45"
#define P9_15 "gpio48"
#define P9_14 "gpio50"

#include <stdint.h>

typedef struct
{
  int header;
  int pin;
} Pin;

void lcd_line(int x, int y, int len, int thickness);
void lcd_init();
void lcd_close();
int lcd_write(int mode, uint8_t const *wr, int len);
void lcd_set_backlight(int state);
void lcd_clear();
int lcd_set_cursor(int row, int col);
void lcd_print(char *strn);

#endif
