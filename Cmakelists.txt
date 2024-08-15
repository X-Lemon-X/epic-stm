cmake_minimum_required(VERSION 3.15)

project(epic-stm VERSION 1.0.0 LANGUAGES CXX C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIOFFS ON)
set(CMAKE_CXX_STANDARD 17)

# option(USE_TIMING "Use timing" OFF)


# option(USE_LOGGER "Use logger" OFF)
# option(USE_GPIO "Use gpio" OFF)


# option(USE_CAN "Use can" OFF)

# option(USE_ENCODER "Use encoder" OFF)

# option(USE_STEPPER "Use stepper" OFF)

# option(USE_FILTER "Use filter" OFF)

# option(USE_MEMORY "Use memory" OFF)

# option(USE_DATA_HOLDERS "Use data holders" OFF)

# option(USE_BOARDID "Use boardid" OFF)

# option(USE_TEMPERATURE "Use temperature" OFF)
# option(USE_USB "Use usb" OFF)
# option(USE_MOVEMENT "Use movement" OFF)
# option(USE_COFFTROLLERS "Use controllers" OFF)

add_subdirectory(BoardId)
add_subdirectory(CanControl)
add_subdirectory(Contolers)
add_subdirectory(Encoder)
add_subdirectory(Filter)
add_subdirectory(Gpio)
add_subdirectory(list)
add_subdirectory(Logger)
add_subdirectory(Memory)
add_subdirectory(MovementControl)
add_subdirectory(SteperMotor)
add_subdirectory(Temperature_sensors)
add_subdirectory(Timing)
add_subdirectory(UsbPrograming)

target_link_libraries( ${PROJECT_NAME}
  PUBLIC
  stm32cubemx
)