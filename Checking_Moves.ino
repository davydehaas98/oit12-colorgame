// This method is the main game and calls the other methods and checks if the chosen answers are correct //
// returns a true when game is won and false when wrong answer is chosen //
boolean Game()
{
  gameRound = 0;
  while (gameRound < winning)
  {
    addtomoves();
    displayMoves();
    for (int currentMove = 0; currentMove < gameRound; currentMove++)
    {
      int choice = checkButton(5);

      if (choice != gameBoard[currentMove]) return false;
    }
    lcd.print("Round won");
    delay(1000);
  }
  return true;
}
