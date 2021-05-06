set(srcs "cpu_util_esp32c3.c"
         "rtc_clk_init.c"
         "rtc_clk.c"
         "rtc_init.c"
         "rtc_pm.c"
         "rtc_sleep.c"
         "rtc_time.c"
         )

add_prefix(srcs "${CMAKE_CURRENT_LIST_DIR}/" "${srcs}")

target_sources(${COMPONENT_LIB} PRIVATE "${srcs}")
target_include_directories(${COMPONENT_LIB} PUBLIC . private_include)
target_include_directories(${COMPONENT_LIB} PRIVATE ../hal)
