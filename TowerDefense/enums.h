#pragma once
/*header and enum file*/
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <iostream>
#include <utility>
#include <memory>
#include <string>
#include <map>
#include <cassert>
#include <vector>
#include <fstream>
#include <stdexcept>

enum TEXTURES
{
	TILE_START, TILE_END,
	TILE_GRASS, TILE_SAND,											//tiles impassable on which we can't build
	TILE_MUD, TILE_ROAD,											//tiles passable on which we can't build
	TILE_BUILD_GRASS, TILE_BUILD_SAND,								//tiles on which we can build

	TOWER_MG_1, TOWER_MG_2, TOWER_MG_3, TOWER_ROCKET_1, TOWER_ROCKET_2,		
	TOWER_SLOW_1, TOWER_SLOW_2, TOWER_POISON_1,	TOWER_POISON_2,		//towers

	ENEMY_FAST, ENEMY_HEAVY, ENEMY_BOSS,							//enemies
	ENEMY_FAST_FREEZED, ENEMY_FAST_POISONED,						//effect on enemies
	ENEMY_HEAVY_FREEZED, ENEMY_HEAVY_POISONED,						//fast, heavy, boss - poisoned and freezed
	ENEMY_BOSS_FREEZED, ENEMY_BOSS_POISONED,
	ENEMY_FAST_FREEZED_POISONED, ENEMY_HEAVY_FREEZED_POISONED,
	ENEMY_BOSS_FREEZED_POISONED,

	ENEMY_FAST_RIGHT, ENEMY_FAST_LEFT, ENEMY_FAST_DOWN, ENEMY_FAST_UP,
	ENEMY_FAST_FREEZED_RIGHT, ENEMY_FAST_FREEZED_LEFT, ENEMY_FAST_FREEZED_DOWN, ENEMY_FAST_FREEZED_UP,
	ENEMY_FAST_POISONED_RIGHT, ENEMY_FAST_POISONED_LEFT, ENEMY_FAST_POISONED_DOWN, ENEMY_FAST_POISONED_UP,
	ENEMY_FAST_FREEZED_POISONED_RIGHT, ENEMY_FAST_FREEZED_POISONED_LEFT, ENEMY_FAST_FREEZED_POISONED_DOWN,
	ENEMY_FAST_FREEZED_POISONED_UP,

	ENEMY_HEAVY_RIGHT, ENEMY_HEAVY_LEFT, ENEMY_HEAVY_DOWN, ENEMY_HEAVY_UP,
	ENEMY_HEAVY_FREEZED_RIGHT, ENEMY_HEAVY_FREEZED_LEFT, ENEMY_HEAVY_FREEZED_DOWN, ENEMY_HEAVY_FREEZED_UP,
	ENEMY_HEAVY_POISONED_RIGHT, ENEMY_HEAVY_POISONED_LEFT, ENEMY_HEAVY_POISONED_DOWN, ENEMY_HEAVY_POISONED_UP,
	ENEMY_HEAVY_FREEZED_POISONED_RIGHT, ENEMY_HEAVY_FREEZED_POISONED_LEFT, ENEMY_HEAVY_FREEZED_POISONED_DOWN,
	ENEMY_HEAVY_FREEZED_POISONED_UP,

	ENEMY_BOSS_RIGHT, ENEMY_BOSS_LEFT, ENEMY_BOSS_DOWN, ENEMY_BOSS_UP,
	ENEMY_BOSS_FREEZED_RIGHT, ENEMY_BOSS_FREEZED_LEFT, ENEMY_BOSS_FREEZED_DOWN, ENEMY_BOSS_FREEZED_UP,
	ENEMY_BOSS_POISONED_RIGHT, ENEMY_BOSS_POISONED_LEFT, ENEMY_BOSS_POISONED_DOWN, ENEMY_BOSS_POISONED_UP,
	ENEMY_BOSS_FREEZED_POISONED_RIGHT, ENEMY_BOSS_FREEZED_POISONED_LEFT, ENEMY_BOSS_FREEZED_POISONED_DOWN,
	ENEMY_BOSS_FREEZED_POISONED_UP,

	POWERUP_SLOW, POWERUP_EXPLOSION, POWERUP_FREEZE,				//power-ups
	POWERUP_SLOW_COOLDOWN, POWERUP_EXPLOSION_COOLDOWN,
	POWERUP_FREEZE_COOLDOWN,

	GOLD, HEART,													//gold and heart

	BUTTON_LEFT, BUTTON_RIGHT, BUTTON_UP, BUTTON_DOWN,
	BUTTON_PAUSE, BUTTON_RESUME,
	PANEL,															//buttons and panel

	BULLET_MG_1, BULLET_MG_2, BULLET_ROCKET_1, BULLET_ROCKET_2, 
	BULLET_SLOW_1, BULLET_POISON_1,									//bullets

	UPGRADE_1, UPGRADE_2, UPGRADE_3,
	SELL,
	BACKGROUND, BUTTON,
	NONE
};

enum DIRECTIONS
{
	UP, DOWN, LEFT, RIGHT
};