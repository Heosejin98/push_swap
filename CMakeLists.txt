cmake_minimum_required(VERSION 3.23)
project(push_swap C)
SET ( PROJECT_VERSION_MAJOR 0 )
SET ( PROJECT_VERSION_MINOR 1 )

# 빌드 형상(Configuration) 및 주절주절 Makefile 생성 여부
SET ( CMAKE_BUILD_TYPE Debug )
SET ( CMAKE_VERBOSE_MAKEFILE true )


set(CMAKE_C_STANDARD 99)

SET ( SRC_FILES
        src/push_swap.c
        src/check_stdin.c
        src/double_link_stack.c
        src/double_link_stack_util.c
        src/error.c
        src/print_message.c
        src/stack_rotate.c
        src/stack_move.c
        src/stack_rotate_reverse.c
        src/stack_swap.c
        src/ft_atoi.c
        src/sort_2.c
        src/sort_3.c
        src/sort_5.c
        src/sort_n.c
        src/sort_util.c
        src/quick_sort.c
        src/sort_n_util.c
        src/control_point.c
        lib/ft_putnbr_fd.c
        lib/ft_split.c
        lib/ft_putendl_fd.c
        lib/ft_putstr_fd.c
        lib/ft_strjoin.c
        lib/ft_calloc.c
        lib/ft_putchar_fd.c
        lib/ft_bzero.c
        lib/ft_strlen.c
        lib/ft_strcmp.c
        lib/ft_isdigit.c
        )

# 공통 컴파일러
SET ( CMAKE_C_COMPILER "gcc" )

# 공통 헤더 파일 Include 디렉토리 (-I)
INCLUDE_DIRECTORIES ( include lib )

# 공통 컴파일 옵션, 링크 옵션
ADD_COMPILE_OPTIONS ( -g )

# 공통 링크 라이브러리 (-l)
LINK_LIBRARIES( ft -static )

# 공통 링크 라이브러리 디렉토리 (-L)
LINK_DIRECTORIES ( lib )

# "Release" 형상 한정 컴파일 옵션, 링크 옵션
SET ( CMAKE_C_FLAGS_RELEASE "-DRELEASE -DC_FLAGS" )
SET ( CMAKE_EXE_LINKER_FLAGS_RELEASE "-DRELEASE -DLINKER_FLAGS" )

# 출력 디렉토리
SET ( CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BUILD_TYPE} )
SET ( CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BUILD_TYPE}/lib )
SET ( CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BUILD_TYPE}/lib )

# 빌드 대상 바이너리 추가
ADD_EXECUTABLE( push_swap ${SRC_FILES} )

