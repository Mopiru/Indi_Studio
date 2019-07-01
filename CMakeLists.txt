# Vérifie que la version installée du CMake est bien
# la 3.11, qui est spécifiée dans le sujet.
cmake_minimum_required(VERSION 3.11)

# Indique le nom du projet ainsi que son langage,
# soit du C++.
project(Bomberman CXX)

# Indique que le projet est en C++ 11.
set(CMAKE_CXX_STANDARD 11)

# Vérfie la présence d'OpenGL
find_package(OpenGL REQUIRED)
if(NOT OPENGL_FOUND)
message("OpenGL not found")
endif(NOT OPENGL_FOUND)

# Ajoute les dossiers de type 'include', où se trouvent
# les fichiers headers (.hpp), au projet.
include_directories(
	include/
	lib/include/
	${OPENGL_INCLUDE_DIRS}
	)

	if(UNIX)
	find_package(X11 REQUIRED)
	include_directories(${X11_INCLUDE_DIR})
	if(NOT X11_FOUND)
	message("X11 not found")
	endif(NOT X11_FOUND)

	find_package (Threads REQUIRED)
	if(NOT Threads_FOUND)
	message("Threads not found")
	endif(NOT Threads_FOUND)
	elseif(WIN32)
	endif()

# Ajoute les librairies nécessaires au bon
# fonctionnement du projet.
link_directories(${CMAKE_SOURCE_DIR}/lib/IrrLicht-1.8.4/)

# Liste des sources (.cpp).
# Le ${CMAKE_CURRENT_LIST_DIR} représente le dossier
# dans lequel se trouve le CMakeListe.
file(GLOB_RECURSE BOMBERMAN_SOURCES
	${CMAKE_SOURCE_DIR}/src/*.cpp
)

# Indique qu'il faut créer un binaire nommé 'bomberman'
# à partir des sources.
add_executable(bomberman ${BOMBERMAN_SOURCES})

# Lie les librairies au binaire.
target_link_libraries(bomberman Irrlicht)
target_link_libraries(bomberman sfml-audio)

target_link_libraries(bomberman ${OPENGL_LIBRARIES})

if(UNIX)
	target_link_libraries(bomberman
	${X11_LIBRARIES}
	/usr/lib/x86_64-linux-gnu/libXxf86vm.so.1
	${CMAKE_THREAD_LIBS_INIT}
	/usr/local/lib/
	)
elseif(WIN32)
endif()
