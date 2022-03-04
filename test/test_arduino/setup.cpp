#include <Arduino.h>
#include <gtest/gtest.h>

uint32_t baudRate = 115200;

void setup() {
  Serial.begin(baudRate);
  delay(1000);

  testing::InitGoogleTest();

  /*
    workaround until
    https://github.com/platformio/platformio-core/issues/3572
    is resolved
  */
  if (!RUN_ALL_TESTS()) {
    Serial.println("Tests Failures Ignored :PASS");
  } else {
    Serial.println("Tests Failures Ignored :FAIL");
  }
}

void loop() {}