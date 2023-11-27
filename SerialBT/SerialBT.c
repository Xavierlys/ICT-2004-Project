#include <SerialBT.h>

void setup() {
  SerialBT.begin();
  //char welcome[] = "Welcome to our wifi tool!\nPlease enter your command:\n";
  //SerialBT.write(welcome[]);
}

void loop() {
  while (SerialBT) {
    while (SerialBT.available()) {
      //char command[] = SerialBT.read();
      //SerialBT.write(output[]);
    }
  }
}