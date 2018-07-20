
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

enum Moter {left, right};
enum Direction {forword, backword };

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

  drive(left, forword, 200);
  delay(5000);
  stopM(left);
	delay(1000);
  drive(right, backword, 200);
  delay(5000);
  stopM(right);



}


void drive(Moter moter, Direction dir, int spd ) {
  int state;


  if (moter == left) {

    state = (dir = forword) ? HIGH : LOW;
    digitalWrite(leftMoterA, state);
    digitalWrite(leftMoterB, !state);
    analogWrite(leftMoterE, spd);

  } else {
    state = (dir = forword) ? HIGH : LOW;
    digitalWrite(rightMoterA, state);
    digitalWrite(rightMoterB, !state);
    analogWrite(rightMoterE, spd);

  }
}


void stopM(Moter moter) {
  int state = LOW;

  if (moter == left) {

    digitalWrite(leftMoterA, state);
    digitalWrite(leftMoterB, state);
    analogWrite(leftMoterE, 0);

  } else {

    digitalWrite(rightMoterA, state);
    digitalWrite(rightMoterB, state);
    analogWrite(rightMoterE, 0);

  }
}












