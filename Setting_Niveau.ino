// This method is used for setting the difficulty //
bool sender;
String message = "";

void SettingNiveau()
{
  if (Serial.available() > 0)
  {
    char readChar = (char) Serial.read();
    if (readChar == '#')
    {
      message = "";
      sender = true;
    }
    else if (sender == true)
    {
      if (readChar == '%')
      {
        Serial.println("#" + message + "%");
        winning = message.toInt();
        sender == false;
      }
      else
      {
        message += readChar;
      }
    }
  }
}
