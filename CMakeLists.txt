# указывайте последнюю доступную вам версию CMake
cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

# название проекта
project(PolinomXYZ)

# затем следует список инструкций для подключения проектов из подкаталогов

include(cmake/function.cmake)    # подхватываем функции, реализованные в файле function.cmake
                                 # для простоты мы объединили наборы команд для создания статической библиотеки
								 # и для создания исполняемого проекта в отдельные функции


add_subdirectory(lib_stack)          # подключаем дополнительный CMakeLists.txt из подкаталога с именем lib_stack 
add_subdirectory(lib_list)	     # подключаем дополнительный CMakeLists.txt из подкаталога с именем lib_list
add_subdirectory(lib_StackFromList)  # подключаем дополнительный CMakeLists.txt из подкаталога с именем lib_StackFromList
add_subdirectory(lib_HashOpenShuffle)
add_subdirectory(lib_HashTabList)
add_subdirectory(lib_LinTabList)
add_subdirectory(lib_LinTabMass)
add_subdirectory(lib_OrdTabMass)
add_subdirectory(lib_TabSearchTree)
add_subdirectory(lib_polinom)
add_subdirectory(lib_postfix)
add_subdirectory(lib_TableInterface)
add_subdirectory(main)              # подключаем дополнительный CMakeLists.txt из подкаталога с именем main


