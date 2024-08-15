

target_include_directories(${PROJECT_NAME} PUBLIC
  inc
)

target_sources(${PROJECT_NAME} PRIVATE
  src/filter.cpp
  src/filter_moving_avarage.cpp
  src/filter_alfa_beta.cpp
)
