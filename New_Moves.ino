// Randomly chooses new color for the new round and adds it to the array //
void addtomoves()
{
  int newButton = random(0, 3);
  if (newButton == 0)
  {
    newButton = 0;
    Serial.println(newButton);
  }
  else if (newButton == 1)
  {
    newButton = 1;
    Serial.println(newButton);
  }
  else if (newButton == 2)
  {
    newButton = 2;
    Serial.println(newButton);
  }
  gameBoard[gameRound++] = newButton;
}
