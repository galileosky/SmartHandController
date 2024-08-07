// -----------------------------------------------------------------------------------------------------------------------------
// Button pad
#pragma once

#include "../../lib/pushButton/PushButton.h"

class KeyPad {
public:
  void init(const int pin[7], const int active[7], int thresholdNS, int thresholdEW);

  void poll();
  bool anyPressed();
  bool nsewPressed();  
  void waitForPress();
  void clearAllPressed();

  Button *shift, *n, *s, *e, *w, *F, *f;

private:
  int debounceMs = 30;
  bool ready = false;
};

extern KeyPad keyPad;
