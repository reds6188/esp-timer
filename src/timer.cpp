#include "timer.h"

Timer::Timer(void) {

}

Timer::~Timer(void) {

}

void Timer::trigger() {
    timer_ms = millis();
}

bool Timer::elapsedX1ms(unsigned long time_ms) {
    return ((millis() - timer_ms) >= time_ms);
}

bool Timer::elapsedX10ms(unsigned long time_10ms) {
    return ((millis() - timer_ms) >= (time_10ms * TIME_10MS));
}

bool Timer::elapsedX100ms(unsigned long time_100ms) {
    return ((millis() - timer_ms) >= (time_100ms * TIME_100MS));
}

bool Timer::elapsedX1s(unsigned long time_s) {
    return ((millis() - timer_ms) >= (time_s * TIME_1S));
}

bool Timer::elapsedX10s(unsigned long time_10s) {
    return ((millis() - timer_ms) >= (time_10s * TIME_10S));
}

bool Timer::elapsedX1m(unsigned long time_m) {
    return ((millis() - timer_ms) >= (time_m * TIME_1M));
}

bool Timer::elapsedX1h(unsigned long time_h) {
    return ((millis() - timer_ms) >= (time_h * TIME_1H));
}