cmake_minimum_required(VERSION 3.16)
project(project2020summer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${project_SOURCE_DIR}/cmake")
set(SDL2_PATH "${project_SOURCE_DIR}/SDL-related/SDL2-devel-2.0.12-mingw/SDL2-2.0.12/i686-w64-mingw32")
set(SDL2_IMAGE_PATH "${project_SOURCE_DIR}/SDL-related/SDL2_image-devel-2.0.5-mingw/SDL2_image-2.0.5/i686-w64-mingw32")
set(SDL2_TTF_PATH "${project_SOURCE_DIR}/Desktop/SDL-related/SDL2_ttf-devel-2.0.15-mingw/SDL2_ttf-2.0.15/i686-w64-mingw32")

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)

include_directories(${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR})

add_executable(project2020summer main.cpp model/Trainer.cpp model/Trainer.h model/PokemonType.cpp model/PokemonType.h model/Pokemon.cpp model/Pokemon.h model/Player.cpp model/Player.h model/PokemonSkill.cpp model/PokemonSkill.h model/PokemonBattle.cpp model/PokemonBattle.h persistence/PokemonSeedReader.cpp persistence/PokemonSeedReader.h persistence/PokemonSkillReader.cpp persistence/PokemonSkillReader.h exception/NullPokemonException.h exception/NullSkillException.h persistence/TrainerReader.cpp persistence/TrainerReader.h exception/NullTrainerException.h model/TrainerBattle.cpp model/TrainerBattle.h persistence/PlayerReader.cpp persistence/PlayerReader.h persistence/PlayerWriter.cpp persistence/PlayerWriter.h model/Block.cpp model/Block.h model/MessageBox.cpp model/MessageBox.h model/TextureManager.cpp model/Trainer.h model/Game.cpp model/Game.h)

target_link_libraries(
        project2020summer
        ${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES}
)