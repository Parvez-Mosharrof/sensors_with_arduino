#include <LiquidCrystal_I2C.h>

// Set the LCD address (0x27 is common) and dimensions (16 columns, 2 rows)
// Replace 0x27 with the address found by the I2C scanner if necessary.
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Initialize the LCD
  lcd.init();

  // Turn on the backlight
  lcd.backlight();

  // Set the cursor to the first row (row 0)
  lcd.setCursor(0, 0);

  // Print "Hello," on the first row
  lcd.print("Hello,");

  // Set the cursor to the second row (row 1)
  lcd.setCursor(0, 1);

  // Print "World!" on the second row
  lcd.print("World!");
}

void loop() {
  // The program simply prints the text once in the setup()
}
