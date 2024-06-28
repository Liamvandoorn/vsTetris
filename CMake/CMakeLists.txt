cmake_minimum_required(VERSION 3.13)
project(vsTetris)

set(SFML_MODULES network graphics window system)

foreach(i ${SFML_MODULES})
    list(APPEND SFML_LIBRARIES "sfml-${i}")
endforeach(i)

set(SOURCE_FILES
    
    ../main.cc
    ../Code/Common/Common.h
    
    ../Code/Board/Board.cc
    ../Code/Board/Board.h
    ../Code/Board/LeftBoard.cc
    ../Code/Board/LeftBoard.h
    ../Code/Board/RightBoard.cc
    ../Code/Board/RightBoard.h
    
    ../Code/BlocksAndTiles/Handled/Tile.cc
    ../Code/BlocksAndTiles/Handled/Tile.h
    ../Code/BlocksAndTiles/Handled/Block.cc
    ../Code/BlocksAndTiles/Handled/Block.h
    ../Code/BlocksAndTiles/BlockHandler.cc
    ../Code/BlocksAndTiles/BlockHandler.h
    ../Code/BlocksAndTiles/TileHandler.cc
    ../Code/BlocksAndTiles/TileHandler.h
    
    ../Code/States/Game.cc
    ../Code/States/Game.h
    ../Code/States/GameState.cc
    ../Code/States/GameState.h 

    ../Code/PowerUp/TileMover.cc
    ../Code/PowerUp/TileMover.h

    ../Code/PowerUp/PowerUp.cc
    ../Code/PowerUp/PowerUp.h

    ../Code/PowerUp/ReduceSpeed.cc
    ../Code/PowerUp/ReduceSpeed.h

    ../Code/PowerUp/SuperCharge.cc
    ../Code/PowerUp/SuperCharge.h

    ../Code/PowerUp/RowSwap.cc
    ../Code/PowerUp/RowSwap.h

    ../Code/PowerUp/ColumnSwap.cc
    ../Code/PowerUp/ColumnSwap.h

    ../Code/PowerUp/PongBlock.h
    ../Code/PowerUp/PongBlock.cc
    )

add_executable (vsTetris ${SOURCE_FILES})
add_compile_options(-g -fsanitize=address)

target_link_libraries(vsTetris ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})