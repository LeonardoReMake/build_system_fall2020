project(A)

add_custom_command(
    OUTPUT ${A_SOURCE_DIR}/index.h
    COMMAND python3 ${A_SOURCE_DIR}/preparing.py ${A_SOURCE_DIR}/index.h
    DEPENDS ${A_SOURCE_DIR}/preparing.py
)

add_custom_target(
    ProjectA
    DEPENDS ${A_SOURCE_DIR}/index.h
)
