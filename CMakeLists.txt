cmake_minimum_required(VERSION 3.27)
project(GameBoyEmulator C)
project(GameBoyEmulator VERSION 1.0)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

add_executable(GameBoyEmulator main.c)

add_library(
        emu_libs
        libs/emu_hardware/gba_cpu.c
        libs/emu_hardware/gba_memory.c
        libs/emulators/gba_emu.c
)

target_include_directories(emu_libs PUBLIC include/emu_hardware_headers)

find_library(EMU_LIBS emu_libs libs)
target_link_libraries(GameBoyEmulator LINK_PUBLIC ${EMU_LIBS})