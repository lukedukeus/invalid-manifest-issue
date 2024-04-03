#include <stdio.h>
#include "esp_log.h"
#include "Arduino.h"

const char *TAG = "MAIN";

void app_main() {

    ESP_LOGI(TAG, "Hello World!");

    initArduino();
    
    pinMode(4, 1);
    digitalWrite(4, 1);
}