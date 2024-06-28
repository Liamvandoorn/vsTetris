#include "TileMover.h"

// ========================================================================================================================================================//

int TileMover::toGrid(int pixel) const {
    return ((pixel - 153) / 30);
}

// ========================================================================================================================================================//

int TileMover::toPixel(int grid) const {
    return ((grid * 30) + 153);
}
