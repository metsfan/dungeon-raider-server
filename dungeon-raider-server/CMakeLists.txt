project(dungeon-raider-server)

add_executable(dungeon-raider-server main.cpp)

install(TARGETS dungeon-raider-server RUNTIME DESTINATION bin)

add_subdirectory(Network)