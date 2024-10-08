#include "mod_class.h"
#include "globalstructures.h"
#include "Arduino.h"

Mod::Mod() {}
void Mod::tick() {}
void Mod::firsttick() {}
void Mod::setup() {}
String Mod::getName() {return "";}


#include <AxiusSSD.h>

About::About() {}
void About::setup() {}
void About::firsttick() {}
String About::getName() {return "About";}
void About::tick() {
  AxiusSSD::instance->updateScreen = true;
  AxiusSSD::instance->drawText(AxiusSSD::instance->deviceName, 0);
  AxiusSSD::instance->drawText("powered by Axius", 1);
  AxiusSSD::instance->drawText("Version 5.0.0", 2);
  if (AxiusSSD::instance->readok()) AxiusSSD::instance->tomenu();
}