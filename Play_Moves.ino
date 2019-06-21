// This method shows the colors on the lcd and sends it to the pc //
void displayMoves()
{
  for (int currentMove = 0; currentMove < gameRound; currentMove++)
  {
    lcd.clear();
    if (gameBoard[currentMove] == 0)
    {
      Serial.println("#Red%");
      lcd.print("Red");
    }
    else if (gameBoard[currentMove] == 1)
    {
      Serial.println("#Blue%");
      lcd.print("Blue");
    }
    else if (gameBoard[currentMove] == 2)
    {
      lcd.print("Green");
      Serial.println("#Green%");
    }
    delay(750);
    lcd.clear();
    Serial.println("#Black%");
    delay(500);
  }
  lcd.print("Voer nu in");
  delay(400);
  lcd.clear();
}
