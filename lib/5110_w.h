#ifndef LCDUTIL_H
#define LCDUTIL_H

#define LCD_WIDTH 84
#define LCD_HEIGHT 48

typedef struct
{
  int header;
  int pin;
} Pin;

void lcd_init();
void lcd_close();

void lcd_line(int x, int y, int len);
int8_t lcd_write(int mode, const uint8_t *wr, int len);
void lcd_set_backlight(int state);
void lcd_clear();
int8_t lcd_set_cursor(int row, int col);
void lcd_print(char* strn);

#endif