#include "stm32f4xx_hal.h"

#ifndef PIN_HPP
#define PIN_HPP

// defautl valeu convert from 12bit adc value to voltage 0-3.3V
#ifndef VOLTAGE_VALUE_CONVERSION_VALUE
#define VOLTAGE_VALUE_CONVERSION_VALUE 0.000805861f
#endif

#define WRITE_GPIO(gpio_pin, value) HAL_GPIO_WritePin(gpio_pin.port, gpio_pin.pin, value)
#define READ_GPIO(gpio_pin) (uint8_t)HAL_GPIO_ReadPin(gpio_pin.port, gpio_pin.pin)
#define TOGGLE_GPIO(gpio_pin) HAL_GPIO_TogglePin(gpio_pin.port, gpio_pin.pin)
#define VOLTAGE_VALUE(gpio_pin) (float)gpio_pin.analog_value * VOLTAGE_VALUE_CONVERSION_VALUE

struct GpioPin {
  uint16_t pin;
  GPIO_TypeDef *port;
  uint16_t analog_value;
};






#endif