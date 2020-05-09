project(kwindowsystem-workarea-test)

cmake_minimum_required (VERSION 2.8.12 FATAL_ERROR)
set (QT_MIN_VERSION "5.2.0")

find_package(ECM 1.2.0 REQUIRED NO_MODULE)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ECM_MODULE_PATH})

include(KDECompilerSettings NO_POLICY_SCOPE)

find_package(Qt5 ${QT_MIN_VERSION} CONFIG REQUIRED Core Widgets)

find_package(KF5 5.29 REQUIRED
    WindowSystem
)

set(workareatest_SRCS
    main.cpp
)

add_executable(workareatest ${workareatest_SRCS})

target_link_libraries(workareatest
    Qt5::Widgets
    KF5::WindowSystem
)

if(X11_FOUND)
  target_link_libraries(workareatest Qt5::X11Extras ${X11_X11_LIB})
endif(X11_FOUND)
