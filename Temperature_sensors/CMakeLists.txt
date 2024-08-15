

target_include_directories(${PROJECT_NAME} PUBLIC
  inc
)

target_sources(${PROJECT_NAME} PRIVATE
  src/MCP9700AT.cpp
  src/ntc_termistors.cpp
)
