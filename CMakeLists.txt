cmake_minimum_required(VERSION 3.16)
project(CoinFlipper LANGUAGES CXX)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
find_package(Qt6 REQUIRED COMPONENTS Widgets)
qt_standard_project_setup()
qt_add_executable(CoinFlipper main.cpp mainwindow.cpp mainwindow.h mainwindow.ui)
target_link_libraries(CoinFlipper PRIVATE Qt6::Widgets)

# Install the application executable into Flatpak's bin directory.
install(TARGETS CoinFlipper
        RUNTIME DESTINATION bin)
