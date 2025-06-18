SET(SRCS 
    Dictionary.cpp 
    Word.cpp)	


add_library(${CMAKE_PROJECT_NAME}_LIB STATIC ${SRCS})
#target_include_directories(${CMAKE_PROJECT_NAME}_LIB PUBLIC "./")