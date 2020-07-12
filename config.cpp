#include "BIS_AddonInfo.hpp"
class CfgPatches
{
	class AlverichMusic
	{
		name = "AlverichMusic";
		author = "Alverich";
		requiredVersion = 1.00;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
      	        worlds[] = {};
	};
};
class CfgMusic
{
	#include "Military.hpp"
	#include "Sabaton.hpp"
	#include "Vietnam.hpp"
	#include "Movies.hpp"
	#include "Modern.hpp"
	#include "Country.hpp"
	#include "ACDC.hpp"
	#include "Epic.hpp"
	#include "Games.hpp"

};
class CfgMusicClasses
{
	class Military
	{
		displayName = "AM - Military";
	};
	class Sabaton
	{
		displayName = "AM - Sabaton";
	};
	class Vietnam
	{
		displayName = "AM - Rock/Metal";
	};
	class Movies
	{
		displayName = "AM - Movies & Series";
	};
	class Modern
	{
		displayName = "AM - POP/Modern";
	};
	class Country
	{
		displayName = "AM - Country";
	};
	class ACDC
	{
		displayName = "AM - AC/DC";
	};
	class Epic
	{
		displayName = "AM - Epic";
	};
	class Games
	{
		displayName = "AM - Videogames";
	};
};