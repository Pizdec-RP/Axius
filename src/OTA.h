#include <Arduino.h>

class OTA : public Mod {
public:
  OTA();
  void tick() override;
  void firsttick() override;
  void setup() override;
  String getName() override {return "Update OTA";}

private:
  uint8_t state = 0;
  const String ssid = "AxiusOTA";
  const String password = "91809791";
};