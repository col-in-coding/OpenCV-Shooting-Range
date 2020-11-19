CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

# Variables
#SET(PROJECT_SOURCE_DIR "/training/colin/Github/OpenCV-Shooting-Range/cpp")

SET(PROJECT_NAME test)
SET(CMAKE_PREFIX_PATH "/usr/local/share/opencv4")

PROJECT(${PROJECT_NAME})

FIND_PACKAGE(OpenCV REQUIRED)
find_package(CUDA 10.2 REQUIRED)
INCLUDE_DIRECTORIES(${OpenCV_INCLUDE_DIRS})

MESSAGE(STATUS "Project: ${PROJECT_NAME}")
MESSAGE(STATUS "OpenCV library status:")
MESSAGE(STATUS "    version: ${OpenCV_VERSION}")
MESSAGE(STATUS "    libraries: ${OpenCV_LIBS}")
MESSAGE(STATUS "    include path: ${OpenCV_INCLUDE_DIRS}")

#获取代码，在项目中，将所有代码都放在src文件夹中
#AUX_SOURCE_DIRECTORY(src DIR_SRCS)
#MESSAGE(STATUS "Src file: ${DIR_SRCS}")

# Define sources and executable
include_directories(${CUDA_INCLUDE_DIRS})

ADD_EXECUTABLE(mat mat.cpp)
TARGET_LINK_LIBRARIES(mat ${OpenCV_LIBS})

