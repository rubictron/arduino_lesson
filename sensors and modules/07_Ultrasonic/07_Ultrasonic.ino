
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

const int trigPin = 9;
const int echoPin = 10;
long duration;
int distanceCm, distanceInch;
void setup() {

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);

Serial.begin(9600);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
distanceInch = duration*0.0133/2;

Serial.print("Distance: "); // Prints string "Distance" on the LCD
Serial.print(distanceCm); // Prints the distance value from the sensor
Serial.print(" cm");
delay(10);

Serial.print("Distance: ");
Serial.print(distanceInch);
Serial.println(" inch");
delay(10);
}
