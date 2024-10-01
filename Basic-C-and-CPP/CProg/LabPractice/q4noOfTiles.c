#include <stdio.h>
void main()
{
    int tileSide = 12, areaOfRoom = 144, areaOfTile, noOfTiles, newAreaOfRoom;
    areaOfTile = tileSide * tileSide;
    newAreaOfRoom = areaOfRoom * 10000;
    noOfTiles = newAreaOfRoom / areaOfTile;
    printf("No of tiles : %d", noOfTiles);
}