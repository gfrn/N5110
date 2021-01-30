#ifndef LCDUTIL_H
#define LCDUTIL_H

#define LCD_WIDTH 84
#define LCD_HEIGHT 48

void lcd_init();
void lcd_close();

char *lcd_write(int mode, char *wr);
void lcd_set_backlight(int state);
void lcd_clear();
int lcd_set_cursor(int row, int col);
void lcd_print(char* strn);

#endif