/*
 * This Arduino Nano code was developed by newbiely.com
 *
 * This Arduino Nano code is made available for public use without any restriction
 *
 * For comprehensive instructions and wiring diagrams, please visit:
 * https://newbiely.com/tutorials/arduino-nano/arduino-nano-joystick
 */

#define VRXL_PIN  A3 // The Arduino Nano pin connected to VRX pin
#define VRYL_PIN  A6 // The Arduino Nano pin connected to VRY pin
#define VRXR_PIN  A1 // The Arduino Nano pin connected to VRX pin
#define VRYR_PIN  A2 // The Arduino Nano pin connected to VRY pin


int value_XL = 0; // The variable to store value of the X axis
int value_YL = 0; // The variable to store value of the Y axis
int value_XR = 0; // The variable to store value of the X axis
int value_YR = 0; // The variable to store value of the Y axis

void setup() {
  Serial.begin(9600) ;
}

void loop() {
  // read analog X and Y analog values
  value_XL = analogRead(VRXL_PIN);
  value_YL = analogRead(VRYL_PIN);
  value_XR = analogRead(VRXR_PIN);
  value_YR = analogRead(VRYR_PIN);

  // print data to Serial Monitor on Arduino IDE
  Serial.print("xL = ");
  Serial.print(value_XL);
  Serial.print(", yL = ");
  Serial.println(value_YL);
  Serial.print("xR = ");
  Serial.print(value_XR);
  Serial.print(", yR = ");
  Serial.println(value_YR);
  delay(200);
}
