// Library of LCD //
#include <LiquidCrystal.h>

// Assigning the pins //
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
const int bluebutton = 12;
const int redbutton = 13;
const int greenbutton = 11;

// winning needs to be global as it is used in the loop and in the Game method //
int winning = 0;

// These variables need to be global as it is used in the multible methods //
int gameBoard[32];
int gameRound = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(bluebutton, INPUT);
  pinMode(redbutton, INPUT);
  pinMode(greenbutton, INPUT);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.clear();
}

void loop() {
  // put your main code here, to run repeatedly:
  lcd.print("Stel niveau in");
  lcd.setCursor(2, 1);
  lcd.print("op computer");
  while (winning == 0)
    {
      SettingNiveau();
    }
  delay(1000);
  if (Game() == true)
  {
    lcd.clear();
    lcd.print("You won the game");
    winning = 0;
    delay(4000);
    lcd.clear();
  }
  else
  {
    lcd.clear();
    lcd.print("Game Over");
    winning = 0;
    delay(1000);
    lcd.clear();

  }
}
