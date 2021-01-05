cmake_minimum_required(VERSION 3.16)
project(project2020summer)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${CMAKE_CURRENT_SOURCE_DIR}/cmake )
set(SDL2_PATH ${CMAKE_CURRENT_SOURCE_DIR}/SDL-related/SDL2-devel-2.0.12-mingw/SDL2-2.0.12/i686-w64-mingw32)
set(SDL2_IMAGE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/SDL-related/SDL2_image-devel-2.0.5-mingw/SDL2_image-2.0.5/i686-w64-mingw32)
set(SDL2_TTF_PATH ${CMAKE_CURRENT_SOURCE_DIR}/SDL-related/SDL2_ttf-devel-2.0.15-mingw/SDL2_ttf-2.0.15/i686-w64-mingw32)

find_package(SDL2 REQUIRED)
find_package(SDL2_image REQUIRED)
find_package(SDL2_ttf REQUIRED)

include_directories(${SDL2_INCLUDE_DIR}
        ${SDL2_IMAGE_INCLUDE_DIR}
        ${SDL2_TTF_INCLUDE_DIR})

add_executable(project2020summer main.cpp model/TrainerSystem/Trainer.cpp model/TrainerSystem/Trainer.h model/Pokemon/PokemonType.cpp model/Pokemon/PokemonType.h model/Pokemon/Pokemon.cpp model/Pokemon/Pokemon.h model/TrainerSystem/Player.cpp model/TrainerSystem/Player.h model/Pokemon/PokemonSkill.cpp model/Pokemon/PokemonSkill.h model/Pokemon/PokemonBattle.cpp model/Pokemon/PokemonBattle.h persistence/PokemonSeedReader.cpp persistence/PokemonSeedReader.h persistence/PokemonSkillReader.cpp persistence/PokemonSkillReader.h exception/NullPokemonException.h exception/NullSkillException.h persistence/TrainerReader.cpp persistence/TrainerReader.h exception/NullTrainerException.h model/TrainerSystem/TrainerBattle.cpp model/TrainerSystem/TrainerBattle.h persistence/PlayerReader.cpp persistence/PlayerReader.h persistence/PlayerWriter.cpp persistence/PlayerWriter.h model/Map/Block.cpp model/Map/Block.h model/UI_feature/MessageBox.cpp model/UI_feature/MessageBox.h model/UI_feature/TextureManager.cpp model/TrainerSystem/Trainer.h model/Game.cpp model/Game.h model/UI_feature/PlayerRenderer.cpp model/UI_feature/PlayerRenderer.h model/TrainerSystem/TrainerList.cpp model/TrainerSystem/TrainerList.h)

target_link_libraries(
        project2020summer
        ${SDL2_LIBRARY}
        ${SDL2_IMAGE_LIBRARIES}
        ${SDL2_TTF_LIBRARIES}
)