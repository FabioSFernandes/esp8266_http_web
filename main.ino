#include <Arduino.h>
#include "service.h"

wifi_config *wifi;

void setup() {
    Serial.begin(115200);

    wifi = new wifi_config(false); 
    wifi->SetConfig();

}

void loop() {
    // put your main code here, to run repeatedly:
    Serial.write(wifi->get_ip());
}