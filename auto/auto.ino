#include <NintendoSwitchControlLibrary.h>

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  pushButton(Button::Y, 100);
  pushHat(Hat::DOWN, 1000);
}
