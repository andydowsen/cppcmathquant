cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("cppcmathquant")

# Add source to this project's executable.
add_executable (cppcmathquant "_c_cpp_langwork_.cpp"  "source/selector_binary_classifier_neuron_.cpp" "source/general_problems_main_.cpp" "_interim_probes__.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET cppcmathquant PROPERTY CXX_STANDARD 20)
endif()

 find_package(SFML COMPONENTS Network Graphics Window Audio System CONFIG REQUIRED)
 target_link_libraries(cppcmathquant PRIVATE SFML::Network SFML::Graphics SFML::Window SFML::Audio SFML::System)

  # If you want SFML to provide an implementation of main():
    target_link_libraries(cppcmathquant PRIVATE SFML::Audio)