#ifndef INCLUDE_ARDUINO_FIRMWARE_H_
#define INCLUDE_ARDUINO_FIRMWARE_H_

#include "mraa.hpp"
#include "color.h"

#define CLRLO 0
#define CLRHI 1
#define REDLO 2
#define REDHI 3
#define GRNLO 4
#define GRNHI 5
#define BLULO 6
#define BLUHI 7

namespace firmware {

	class Arduino {
		private:
			mraa::Gpio ss;
			mraa::Spi spi;
			utils::Color blockColor;
			void poll();
			bool running;
		public:
			Arduino(int gpioPin);
			void stopPoll();
			void startPoll();
			utils::Color getBlockColor();

	};
}

#endif
