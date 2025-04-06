# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\TIP-3-kr_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\TIP-3-kr_autogen.dir\\ParseCache.txt"
  "TIP-3-kr_autogen"
  )
endif()
