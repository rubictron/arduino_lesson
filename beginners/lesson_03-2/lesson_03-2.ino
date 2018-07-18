
/***************************************************************************************


  /$$$$$$$  /$$   /$$ /$$$$$$$  /$$$$$$  /$$$$$$  /$$$$$$$$ /$$$$$$$   /$$$$$$  /$$   /$$
  | $$__  $$| $$  | $$| $$__  $$|_  $$_/ /$$__  $$|__  $$__/| $$__  $$ /$$__  $$| $$$ | $$
  | $$  \ $$| $$  | $$| $$  \ $$  | $$  | $$  \__/   | $$   | $$  \ $$| $$  \ $$| $$$$| $$
  | $$$$$$$/| $$  | $$| $$$$$$$   | $$  | $$         | $$   | $$$$$$$/| $$  | $$| $$ $$ $$
  | $$__  $$| $$  | $$| $$__  $$  | $$  | $$         | $$   | $$__  $$| $$  | $$| $$  $$$$
  | $$  \ $$| $$  | $$| $$  \ $$  | $$  | $$    $$   | $$   | $$  \ $$| $$  | $$| $$\  $$$
  | $$  | $$|  $$$$$$/| $$$$$$$/ /$$$$$$|  $$$$$$/   | $$   | $$  | $$|  $$$$$$/| $$ \  $$
  |__/  |__/ \______/ |_______/ |______/ \______/    |__/   |__/  |__/ \______/ |__/  \__/


  This file is belong to RUBICTRON Please Don't Infringe Copyright.

      _____    _    _   ____    _____    _____   _______   _____     ____    _   _
     |  __ \  | |  | | |  _ \  |_   _|  / ____| |__   __| |  __ \   / __ \  | \ | |
     | |__) | | |  | | | |_) |   | |   | |         | |    | |__) | | |  | | |  \| |
     | | \ \  | |__| | | |_) |  _| |_  | |____     | |    | | \ \  | |__| | | |\  |
     |_|  \_\  \____/  |____/  |_____|  \_____|    |_|    |_|  \_\  \____/  |_| \_|



***************************************************************************************/


int ledPin = 13;
int switchPin = 8;

int ledState = LOW;

int buttonState;
int lastButtonState = LOW;


unsigned long lastDebounceTime = 0;
unsigned long debounceDelay = 50;


void setup() {
  // put your setup code here, to run once:


  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);

  digitalWrite(ledPin, ledState);


}

void loop() {
  // put your main code here, to run repeatedly:

  int reading = digitalRead(switchPin);

  if (reading != lastButtonState) {
    lastDebounceTime = millis();
  }

  if ((millis() - lastDebounceTime) > debounceDelay) {

    if (reading != buttonState) {
      buttonState = reading;

      if (buttonState == HIGH) {
        ledState = !ledState;
      }
    }
  }


  digitalWrite(ledPin, ledState);

  lastButtonState = reading;

}










