
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

#define leftMoterA 9
#define leftMoterB 10
#define leftMoterE 11

#define rightMoterA 7
#define rightMoterB 6
#define rightMoterE 5

void setup() {
  // put your setup code here, to run once:


  pinMode(leftMoterA, OUTPUT);
  pinMode(leftMoterB, OUTPUT);
  pinMode(leftMoterE, OUTPUT);

  pinMode(rightMoterA, OUTPUT);
  pinMode(rightMoterB, OUTPUT);
  pinMode(rightMoterE, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(leftMoterA, LOW);
  digitalWrite(leftMoterB, HIGH);
  analogWrite(leftMoterE, 200);
  delay(5000);

  digitalWrite(leftMoterA, LOW);
  digitalWrite(leftMoterB, LOW);
  analogWrite(leftMoterE, 0);

	delay(1000);

  digitalWrite(rightMoterA, HIGH);
  digitalWrite(rightMoterB, LOW);
  analogWrite(rightMoterE, 150);
  delay(5000);

  digitalWrite(rightMoterA, LOW);
  digitalWrite(rightMoterB, LOW);
  analogWrite(rightMoterE, 0);



}















