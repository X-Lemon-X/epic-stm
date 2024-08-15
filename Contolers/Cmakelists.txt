

target_include_directories(${PROJECT_NAME} PUBLIC
  inc
)

target_sources(${PROJECT_NAME} PRIVATE
  src/pid_controler.cpp
  src/basic_controler.cpp
)
