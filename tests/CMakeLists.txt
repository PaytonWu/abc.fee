find_package(GTest REQUIRED)
include(GoogleTest)

aux_source_directory(./ ABC_FEE_TEST_SOURCES)

add_executable(tests ${ABC_FEE_TEST_SOURCES} ${ABC_FEE_RLP_TEST_SOURCES} ${ABC_FEE_TRIE_TEST_SOURCES})
add_dependencies(tests ${ABC_FEE_LIBRARY} abc)

target_include_directories(tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/../include)
target_link_directories(tests PRIVATE ${PROJECT_BINARY_DIR})
target_link_libraries(tests PRIVATE ${ABC_FEE_LIBRARY} abc GTest::GTest GTest::Main)

gtest_discover_tests(tests)