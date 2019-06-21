bool pressedred = false;
bool pressedblue = false;
bool pressedgreen = false;

// This method registers the pressing of a button and relays it back at Game method //
int checkButton(int f)
{
  int button = f;
  while (button == 5)
  {
    if (digitalRead(redbutton) == HIGH && pressedred == false)
    {
      pressedred = true;
    }
    if (digitalRead(bluebutton) == HIGH && pressedblue == false)
    {
      pressedblue = true;
    }
    if (digitalRead(greenbutton) == HIGH && pressedgreen == false)
    {
      pressedgreen = true;
    }
    if (digitalRead(redbutton) == LOW && pressedred == true)
    {
      pressedred = false;
      button = 0; //ChoiceRed //
      delay(10); // Debouncing //
    }
    if (digitalRead(bluebutton) == LOW && pressedblue == true)
    {
      pressedblue = false;
      button = 1; //ChoiceBlue //
      delay(10);
    }
    if (digitalRead(greenbutton) == LOW && pressedgreen == true)
    {
      pressedgreen = false;
      button = 2; //ChoiceGreen //
      delay(10);
    }
  }
  return button;
}
