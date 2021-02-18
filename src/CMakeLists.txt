set(NAME sample_module)
file(GLOB_RECURSE SRC
	"*.hpp"
	"*.cpp"
	"*.c"
)

add_library(${NAME}
SHARED
${SRC}
)




target_link_libraries(${NAME}
"${CMAKE_SOURCE_DIR}/module_api/libce_module.so"
)
 
include_directories(${NAME}
"${CMAKE_SOURCE_DIR}/module_api/"
)
