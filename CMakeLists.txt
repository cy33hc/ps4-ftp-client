cmake_minimum_required(VERSION 3.0)

project(ps4_ftp_client)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -DDONT_HAVE_STRUPR")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fpermissive")

add_executable(ps4_ftp_client
  source/actions.cpp
  source/config.cpp
  source/fs.cpp
  source/ftpclient.cpp
  source/gui.cpp
  source/ime_dialog.cpp
  source/inifile.c
  source/lang.cpp
  source/main.cpp
  source/windows.cpp
  source/imgui_draw.cpp
  source/imgui_impl_sdl.cpp
  source/imgui_impl_sdlrenderer.cpp
  source/imgui_tables.cpp
  source/imgui_widgets.cpp
  source/imgui.cpp
)

add_self(ps4_ftp_client)

add_pkg(ps4_ftp_client ${CMAKE_SOURCE_DIR}/data "FTPC00001" "PS4 FTP Client" "01.02" 32 0)

target_link_libraries(ps4_ftp_client
  c
  c++
  png
  z
  pthread
  SDL2
  samplerate
  kernel
  SceShellCoreUtil
  SceSysmodule
  SceSystemService
  ScePigletv2VSH
  ScePrecompiledShaders
  SceRtc
  SceUserService
  ScePad
  SceAudioOut
  SceSysUtil
  SceImeDialog
  SceNet
)
