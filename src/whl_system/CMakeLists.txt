cmake_minimum_required(VERSION 3.8)
project(whl_system)
set(CMAKE_CXX_STANDARD 17)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(rosidl_default_runtime REQUIRED)

rosidl_generate_interfaces(${PROJECT_NAME}
  "srv/InoutStruct.srv"
  "msg/ArmInfo.msg"
  "msg/AgvInfo.msg"
)
ament_export_dependencies(rosidl_default_runtime)

file(GLOB_RECURSE SRC_FILES "${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp")

# 打印找到的源文件，用于调试
message(STATUS "Found source files: ${SRC_FILES}")

add_executable(wheelloong_system_node ${SRC_FILES})

ament_target_dependencies(wheelloong_system_node 
  rclcpp
  rosidl_default_runtime
)

rosidl_get_typesupport_target(cpp_typesupport_target
  ${PROJECT_NAME} "rosidl_typesupport_cpp")

target_link_libraries(wheelloong_system_node "${cpp_typesupport_target}")

install(TARGETS
  wheelloong_system_node
  DESTINATION lib/${PROJECT_NAME})

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # 跳过版权检查
  set(ament_cmake_copyright_FOUND TRUE)
  # 跳过 cpplint 检查
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
