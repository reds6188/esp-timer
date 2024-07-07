#ifndef TIMER_H_
#define TIMER_H_

#include <Arduino.h>

#define TIME_10MS	10
#define TIME_100MS	100
#define TIME_1S		1000
#define TIME_10S	10000
#define TIME_1M		60000
#define TIME_1H		3600000

class Timer {
	private:
		volatile unsigned long timer_ms;
	public:
		Timer(void);
		~Timer();
		void trigger(void);
		bool elapsedX1ms(unsigned long time_ms = 1);
		bool elapsedX10ms(unsigned long time_10ms = 1);
		bool elapsedX100ms(unsigned long time_100ms = 1);
		bool elapsedX1s(unsigned long time_s = 1);
		bool elapsedX10s(unsigned long time_10s = 1);
		bool elapsedX1m(unsigned long time_m = 1);
		bool elapsedX1h(unsigned long time_h = 1);
};

#endif  /* TIMER_H_ */