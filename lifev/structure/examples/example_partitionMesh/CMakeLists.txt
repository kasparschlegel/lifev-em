
INCLUDE(TribitsAddExecutable)

INCLUDE_DIRECTORIES(${CMAKE_SOURCE_DIR})

TRIBITS_ADD_EXECUTABLE(
  Example_PartitionIO
  SOURCES main_write.cpp
  COMM serial mpi
  )

# TRIBITS_COPY_FILES_TO_BINARY_DIR(data_examplepartition_io
#   SOURCE_FILES data
#   SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}
#   CREATE_SYMLINK
# )