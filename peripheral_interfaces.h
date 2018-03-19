#ifndef PERIPHERAL_INTERFACES_H
#define PERIPHERAL_INTERFACES_H

#include <stdint.h>
#include <stdbool.h>

//////////////////// PERIPH
uint8_t enable_stepper(int port, int pin);

uint8_t disable_stepper(int port, int pin);

uint8_t set_stepperDirection(int port, int pin, bool direction);

uint8_t set_stepperSpeed(int port, int pin, int speed);

// probs have to change the return and argument types after looking through documentation
uint8_t get_DIOPinState(int port, int pin);

uint16_t get_ADCValue(int port, int pin);


#endif // PERIPHERAL_INTERFACES_H
