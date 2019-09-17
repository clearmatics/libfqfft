# Tutorials
add_executable(
  polynomial_evaluation
  EXCLUDE_FROM_ALL

  polynomial_evaluation_example.cpp
)
target_link_libraries(
  polynomial_evaluation

  ff
)
target_include_directories(
  polynomial_evaluation

  PUBLIC
  ${DEPENDS_DIR}/libff/
)

add_executable(
  lagrange_polynomial_evaluation
  EXCLUDE_FROM_ALL

  lagrange_polynomial_evaluation_example.cpp
)
target_link_libraries(
  lagrange_polynomial_evaluation

  ff
)
target_include_directories(
  lagrange_polynomial_evaluation

  PUBLIC
  ${DEPENDS_DIR}/libff/
)
