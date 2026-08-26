cmake_minimum_required(VERSION 3.15)
project(FartAnnoyed)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 1. Виправляємо помилки з конвертацією рядків C++20
add_compile_options(/Zc:strictStrings-)

# 2. Вмикаємо Unicode для Win32 API
add_compile_definitions(UNICODE _UNICODE)

# 3. Налаштовуємо компіляцію DirectX шейдерів (HLSL у SHH)
set(PS_SHH "${CMAKE_CURRENT_BINARY_DIR}/FramebufferPS.shh")
set(VS_SHH "${CMAKE_CURRENT_BINARY_DIR}/FramebufferVS.shh")

add_custom_command(
    OUTPUT ${PS_SHH}
    COMMAND fxc /nologo /T ps_5_0 /E FramebufferPS /Vn FramebufferPSBytecode /Fh ${PS_SHH} ${CMAKE_CURRENT_SOURCE_DIR}/Engine/FramebufferPS.hlsl
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Engine/FramebufferPS.hlsl
)
add_custom_command(
    OUTPUT ${VS_SHH}
    COMMAND fxc /nologo /T vs_5_0 /E FramebufferVS /Vn FramebufferVSBytecode /Fh ${VS_SHH} ${CMAKE_CURRENT_SOURCE_DIR}/Engine/FramebufferVS.hlsl
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/Engine/FramebufferVS.hlsl
)

# Збираємо всі файли з кодом
file(GLOB SOURCES "Engine/*.cpp" "Engine/*.h" "Engine/*.rc")

# Створюємо програму та додаємо згенеровані шейдери як залежність
add_executable(FartAnnoyed WIN32 ${SOURCES} ${PS_SHH} ${VS_SHH})

# Вказуємо компілятору, де шукати згенеровані файли .shh
target_include_directories(FartAnnoyed PRIVATE ${CMAKE_CURRENT_BINARY_DIR})

# Підключаємо системні бібліотеки для вікна та DirectX
target_link_libraries(FartAnnoyed d3d11 d3dcompiler user32 gdi32)