# Install script for directory: C:/Users/PC/Desktop/Leetcode/src

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/Program Files (x86)/main")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("C:/Users/PC/Desktop/Leetcode/build/src/84_largestRectangleArea/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/739_dailyTemperatures/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/503_nextGreaterElements/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/547_findCircleNum/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/523_checkSubarraySum/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/560_subarraySum/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/1004_longestOnes/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/209_minSubArrayLen/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/1094_carPooling/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/1109_corpFlightBookings/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/210_findOrder/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/444_sequenceReconstruction/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/269_alienOrder/cmake_install.cmake")
  include("C:/Users/PC/Desktop/Leetcode/build/src/5_longestPalindrome/cmake_install.cmake")

endif()

