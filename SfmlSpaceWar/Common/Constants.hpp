#pragma once

// Define some constants
constexpr float PI = 3.14159f;
constexpr float DEGTORAD = 0.017453f;

enum class GameState
{
    Playing
    , GameOver
    , StartMenu
};
enum /*class*/ Tag /*:uint32_t*/
{
    // entity type
    Player
    , Laser
    , Explosion

    // player id
    , Player1
    , Player2
    , Player3
    , Player4

    // utilities
    , Renderable
    , Delete
};

enum class ShipTypes
{
    Ship01
    , Ship02
};

enum class LaserTypes
{
    Laser01
    , Laser02
};

enum class ExplosionTypes
{
    Explosion01
    , Explosion02
};

// TODO : User this instead
enum class TextureAsset
{
    ShipBlue01
    , ShipRed01
    , LaserBlue01
    , Explosion01
    , Explosion02
    , Background01
    , Background02
};

// TODO : User this instead
enum class SoundBufferAsset
{
    Laser01
    , Laser02
    , Laser03
    , Laser04
    , Laser05
    , Laser06
    , Laser07
    , Laser08
    , Laser09
    , Laser10
    , Laser11
    , Laser12
    , Laser13
    , Laser14
    , Laser15
    , Laser16

    , Explosion01
    , Explosion02
};

enum class FontAsset
{
    Font01
};
