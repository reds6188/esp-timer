# esp-timer
Timing functions for ESP32

## Example

```c++
#include <Arduino.h>
#include <timer.h>

Timer TimerBlink1, TimerBlink2;

void setup(void) {
    pinMode(LED1, OUTPUT);
    pinMode(LED2, OUTPUT);
    TimerBlink1.trigger();
    TimerBlink2.trigger();
}

void loop(void) {
    // Blink LED1 every 200 milliseconds
    if(TimerBlink1.elapsed100ms(2)) {
        TimerBlink1.trigger();
        digitalWrite(LED1, !digitalRead(LED1));
    }

    // Blink LED2 every seconds
    if(TimerBlink2.elapsed1s()) {
        TimerBlink2.trigger();
        digitalWrite(LED2, !digitalRead(LED2));
    }
}
```