# CMAKE generated file: DO NOT EDIT!
# Generated by "NMake Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE
NULL=nul
!ENDIF
SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles\project2020summer.dir\depend.make

# Include the progress variables for this target.
include CMakeFiles\project2020summer.dir\progress.make

# Include the compile flags for this target's objects.
include CMakeFiles\project2020summer.dir\flags.make

CMakeFiles\project2020summer.dir\main.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\main.cpp.obj: ..\main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project2020summer.dir/main.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\main.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\main.cpp"
<<

CMakeFiles\project2020summer.dir\main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/main.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\main.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\main.cpp"
<<

CMakeFiles\project2020summer.dir\main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/main.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\main.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\main.cpp"
<<

CMakeFiles\project2020summer.dir\model\Trainer.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\model\Trainer.cpp.obj: ..\model\Trainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project2020summer.dir/model/Trainer.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\model\Trainer.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Trainer.cpp"
<<

CMakeFiles\project2020summer.dir\model\Trainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/model/Trainer.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\model\Trainer.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Trainer.cpp"
<<

CMakeFiles\project2020summer.dir\model\Trainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/model/Trainer.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\model\Trainer.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Trainer.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonType.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\model\PokemonType.cpp.obj: ..\model\PokemonType.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project2020summer.dir/model/PokemonType.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\model\PokemonType.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonType.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonType.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/model/PokemonType.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\model\PokemonType.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonType.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonType.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/model/PokemonType.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\model\PokemonType.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonType.cpp"
<<

CMakeFiles\project2020summer.dir\model\Pokemon.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\model\Pokemon.cpp.obj: ..\model\Pokemon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/project2020summer.dir/model/Pokemon.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\model\Pokemon.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Pokemon.cpp"
<<

CMakeFiles\project2020summer.dir\model\Pokemon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/model/Pokemon.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\model\Pokemon.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Pokemon.cpp"
<<

CMakeFiles\project2020summer.dir\model\Pokemon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/model/Pokemon.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\model\Pokemon.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Pokemon.cpp"
<<

CMakeFiles\project2020summer.dir\model\Player.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\model\Player.cpp.obj: ..\model\Player.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/project2020summer.dir/model/Player.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\model\Player.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Player.cpp"
<<

CMakeFiles\project2020summer.dir\model\Player.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/model/Player.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\model\Player.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Player.cpp"
<<

CMakeFiles\project2020summer.dir\model\Player.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/model/Player.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\model\Player.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Player.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.obj: ..\model\PokemonSkill.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/project2020summer.dir/model/PokemonSkill.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonSkill.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/model/PokemonSkill.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonSkill.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/model/PokemonSkill.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonSkill.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.obj: ..\model\PokemonBattle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/project2020summer.dir/model/PokemonBattle.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonBattle.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/model/PokemonBattle.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonBattle.cpp"
<<

CMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/model/PokemonBattle.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\PokemonBattle.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.obj: ..\persistence\PokemonSeedReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/project2020summer.dir/persistence/PokemonSeedReader.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\PokemonSeedReader.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/persistence/PokemonSeedReader.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\PokemonSeedReader.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/persistence/PokemonSeedReader.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\PokemonSeedReader.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.obj: ..\persistence\PokemonSkillReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/project2020summer.dir/persistence/PokemonSkillReader.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\PokemonSkillReader.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/persistence/PokemonSkillReader.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\PokemonSkillReader.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/persistence/PokemonSkillReader.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\PokemonSkillReader.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.obj: ..\persistence\TrainerReader.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/project2020summer.dir/persistence/TrainerReader.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\TrainerReader.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/persistence/TrainerReader.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\TrainerReader.cpp"
<<

CMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/persistence/TrainerReader.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\persistence\TrainerReader.cpp"
<<

CMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.obj: ..\model\TrainerBattle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/project2020summer.dir/model/TrainerBattle.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\TrainerBattle.cpp"
<<

CMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/model/TrainerBattle.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\TrainerBattle.cpp"
<<

CMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/model/TrainerBattle.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\TrainerBattle.cpp"
<<

CMakeFiles\project2020summer.dir\model\Block.cpp.obj: CMakeFiles\project2020summer.dir\flags.make
CMakeFiles\project2020summer.dir\model\Block.cpp.obj: ..\model\Block.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object CMakeFiles/project2020summer.dir/model/Block.cpp.obj"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoCMakeFiles\project2020summer.dir\model\Block.cpp.obj /FdCMakeFiles\project2020summer.dir\ /FS -c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Block.cpp"
<<

CMakeFiles\project2020summer.dir\model\Block.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2020summer.dir/model/Block.cpp.i"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe > CMakeFiles\project2020summer.dir\model\Block.cpp.i @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Block.cpp"
<<

CMakeFiles\project2020summer.dir\model\Block.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2020summer.dir/model/Block.cpp.s"
	C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\cl.exe @<<
 /nologo /TP $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) /FoNUL /FAs /FaCMakeFiles\project2020summer.dir\model\Block.cpp.s /c "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\model\Block.cpp"
<<

# Object files for target project2020summer
project2020summer_OBJECTS = \
"CMakeFiles\project2020summer.dir\main.cpp.obj" \
"CMakeFiles\project2020summer.dir\model\Trainer.cpp.obj" \
"CMakeFiles\project2020summer.dir\model\PokemonType.cpp.obj" \
"CMakeFiles\project2020summer.dir\model\Pokemon.cpp.obj" \
"CMakeFiles\project2020summer.dir\model\Player.cpp.obj" \
"CMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.obj" \
"CMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.obj" \
"CMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.obj" \
"CMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.obj" \
"CMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.obj" \
"CMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.obj" \
"CMakeFiles\project2020summer.dir\model\Block.cpp.obj"

# External object files for target project2020summer
project2020summer_EXTERNAL_OBJECTS =

project2020summer.exe: CMakeFiles\project2020summer.dir\main.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\model\Trainer.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\model\PokemonType.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\model\Pokemon.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\model\Player.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\model\PokemonSkill.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\model\PokemonBattle.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\persistence\PokemonSeedReader.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\persistence\PokemonSkillReader.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\persistence\TrainerReader.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\model\TrainerBattle.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\model\Block.cpp.obj
project2020summer.exe: CMakeFiles\project2020summer.dir\build.make
project2020summer.exe: CMakeFiles\project2020summer.dir\objects1.rsp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_13) "Linking CXX executable project2020summer.exe"
	"C:\Program Files\JetBrains\CLion 2020.1\bin\cmake\win\bin\cmake.exe" -E vs_link_exe --intdir=CMakeFiles\project2020summer.dir --rc=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\rc.exe --mt=C:\PROGRA~2\WI3CF2~1\10\bin\100183~1.0\x86\mt.exe --manifests  -- C:\PROGRA~2\MIB055~1\2019\COMMUN~1\VC\Tools\MSVC\1425~1.286\bin\Hostx86\x86\link.exe /nologo @CMakeFiles\project2020summer.dir\objects1.rsp @<<
 /out:project2020summer.exe /implib:project2020summer.lib /pdb:"C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\project2020summer.pdb" /version:0.0  /machine:X86 /debug /INCREMENTAL /subsystem:console  kernel32.lib user32.lib gdi32.lib winspool.lib shell32.lib ole32.lib oleaut32.lib uuid.lib comdlg32.lib advapi32.lib 
<<

# Rule to build all files generated by this target.
CMakeFiles\project2020summer.dir\build: project2020summer.exe

.PHONY : CMakeFiles\project2020summer.dir\build

CMakeFiles\project2020summer.dir\clean:
	$(CMAKE_COMMAND) -P CMakeFiles\project2020summer.dir\cmake_clean.cmake
.PHONY : CMakeFiles\project2020summer.dir\clean

CMakeFiles\project2020summer.dir\depend:
	$(CMAKE_COMMAND) -E cmake_depends "NMake Makefiles" "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer" "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer" "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug" "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug" "C:\Users\Derek Huang\CLionProjects\PKMProject\project2020summer\cmake-build-debug\CMakeFiles\project2020summer.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles\project2020summer.dir\depend
