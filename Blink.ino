//This code runs on the LilyPad Arduino as it is hooked up to work in my project "MaskWear Technology"

const int xpin = A1;                  // x-axis of the accelerometer
const int ypin = A2;                  // y-axis
const int zpin = A3;                  // z-axis (only on 3-axis models)
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  //pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
 //
 //Make sure the analog-to-digital converter takes its reference voltage from
 // the AREF pin
  pinMode(xpin, INPUT);
  pinMode(ypin, INPUT);
  pinMode(zpin, INPUT);
}

// the loop function runs over and over again forever
void loop() {
  int x = analogRead(xpin);
  int y = analogRead(ypin);
  int z = analogRead(zpin);
  Serial.print("Pin x-");
  Serial.println(x);
  Serial.print("Pin y-");
  Serial.println(y);
  Serial.print("Pin z-");
  Serial.println(z);
  //digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(2000);                       // wait for 2 seconds
  //digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
}
