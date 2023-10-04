# Create a library called "myLib1" (in Linux, this library is created
# with the name of either libmyLib1.a or myLib1.so).
add_library (myPID
  # list of cpp source files:
  pidcontroller.cpp
  )

# Indicate what directories should be added to the include file search
# path when using this library.
target_include_directories(myPID PUBLIC
  # list of directories:
  .
  )
