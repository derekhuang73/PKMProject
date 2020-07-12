cmake_minimum_required(VERSION 3.16)
project(project2020summer)

set(CMAKE_CXX_STANDARD 14)

add_executable(project2020summer main.cpp model/Trainer.cpp model/Trainer.h model/PokemonType.cpp model/PokemonType.h model/Pokemon.cpp model/Pokemon.h model/Player.cpp model/Player.h model/PokemonSkill.cpp model/PokemonSkill.h model/PokemonBattle.cpp model/PokemonBattle.h persistence/PokemonSeedReader.cpp persistence/PokemonSeedReader.h persistence/PokemonSkillReader.cpp persistence/PokemonSkillReader.h exception/NullPokemonException.h exception/NullSkillException.h persistence/TrainerReader.cpp persistence/TrainerReader.h exception/NullTrainerException.h model/TrainerBattle.cpp model/TrainerBattle.h persistence/PlayerReader.cpp persistence/PlayerReader.h persistence/PlayerWriter.cpp persistence/PlayerWriter.h)
