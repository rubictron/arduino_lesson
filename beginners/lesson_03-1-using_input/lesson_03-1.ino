
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

int ledState=LOW;
int ledPin=13;
int switchPin=8;

void setup() {
  // put your setup code here, to run once:


  pinMode(ledPin, OUTPUT);
  pinMode(switchPin, INPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  if (digitalRead(8) == HIGH) {

    ledState=!ledState;

  } 

    digitalWrite(13, ledState);
  


}











