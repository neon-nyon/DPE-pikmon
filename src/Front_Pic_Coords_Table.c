#include "defines.h"
#include "../include/graphics.h"

const struct MonCoords gMonFrontPicCoords[NUM_SPECIES] =
{
	[SPECIES_NONE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BULBORBLARVA] =
	{
		.size = 0x55,
		.y_offset = 10,
	},
	[SPECIES_BULBORB] =
	{
		.size = 0x66,
		.y_offset = 8,
	},
	[SPECIES_JUMBOBULBORB] =
	{
		.size = 0x87,
		.y_offset = 3,
	},
	[SPECIES_FIERYBLOWLET] =
	{
		.size = 0x55,
		.y_offset = 8,
	},
	[SPECIES_FIERYBLOWHOG] =
	{
		.size = 0x76,
		.y_offset = 0,
	},
	[SPECIES_TITANBLOWHOG] =
	{
		.size = 0x88,
		.y_offset = 0,
	},
	[SPECIES_WOLPOLE] =
	{
		.size = 0x65,
		.y_offset = 11,
	},
	[SPECIES_YELLOWWOLLYHOP] =
	{
		.size = 0x76,
		.y_offset = 2,
	},
	[SPECIES_MASTERHOP] =
	{
		.size = 0x87,
		.y_offset = 0,
	},
	[SPECIES_FLINTBEETLE] =
	{
		.size = 0x54,
		.y_offset = 0x0,
	},
	[SPECIES_DOODLEBUG] =
	{
		.size = 0x54,
		.y_offset = 0x0,
	},
	[SPECIES_GLINTBEETLE] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_SWOOPINGSNITCHBUG] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_BUMBLINGSNITCHBUG] =
	{
		.size = 0x45,
		.y_offset = 0xb,
	},
	[SPECIES_DIRIGIBUG] =
	{
		.size = 0x86,
		.y_offset = 0x5,
	},
	[SPECIES_SNOWBULBORB] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_DWARFFROSTYBULBORB] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_FROSTYBULBORB] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_CRUMBUG] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_BREADBUG] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_GIANTBREADBUG] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_FEAROW] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_EKANS] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_DWARFBULBEAR] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_SPOTTYBULBEAR] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_HONEYWISP] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_DANDELFLY] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_DOWNYSNAGRET] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_BURROWINGSNAGRET] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_PILEATEDSNAGRET] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_FEMALESHEARGRUB] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_SWARMINGSHEARGRUB] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_MAMASHEARGRUB] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_MALESHEARGRUB] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_SHEARWIG] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_QUEENSHEARWIG] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_ARISTOCRABOFFSPRING] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_ARISTOCRAB] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_GOOLIX] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_FOOLIX] =
	{
		.size = 0x67,
		.y_offset = 0x4,
	},
	[SPECIES_ARCTICCANNONLARVA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_ARCTICCANNONBEETLE] =
	{
		.size = 0x88,
		.y_offset = 0x7,
	},
	[SPECIES_SKITTERLEAF] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_DESICCATEDSKITTERLEAF] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_ARMOREDCANNONLARVA] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_ARMOREDCANNONBEETLE] =
	{
		.size = 0x64,
		.y_offset = 0xc,
	},
	[SPECIES_HORNEDCANNONBEETLE] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_CREEPINGCHRYSANTHEMUM] =
	{
		.size = 0x57,
		.y_offset = 0x8,
	},
	[SPECIES_STARTLESPORE] =
	{
		.size = 0x87,
		.y_offset = 0x9,
	},
	[SPECIES_HERMITCRAWMAD] =
	{
		.size = 0x54,
		.y_offset = 0x11,
	},
	[SPECIES_BUGEYEDCRAWMAD] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_DWARFBULBORB] =
	{
		.size = 0x55,
		.y_offset = 0xa,
	},
	[SPECIES_DWARFORANGEBULBORB] =
	{
		.size = 0x76,
		.y_offset = 0x4,
	},
	[SPECIES_BEADYLONGLEGS] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_RAGINGLONGLEGS] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_BALDYLONGLEGS] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_SHAGGYLONGLEGS] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_BULBMIN] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_ADULTBULBMIN] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SCORNET] =
	{
		.size = 0x74,
		.y_offset = 0xe,
	},
	[SPECIES_POLIWHIRL] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_BURROWNIT] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_ABRA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_KADABRA] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_VOLATILEDWEEVIL] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_MANATLEGS] =
	{
		.size = 0x46,
		.y_offset = 0x5,
	},
	[SPECIES_MACHOKE] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_MACHAMP] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ARACHNODE] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_MOLDYDWARFBULBORB] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_MOLDYSLOOCH] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_TOXSTOOL] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_PHOSBAT] =
	{
		.size = 0x78,
		.y_offset = 0x4,
	},
	[SPECIES_VEHEAMOTHPHOSBAT] =
	{
		.size = 0x74,
		.y_offset = 0x13,
	},
	[SPECIES_PUCKERINGBLINNOW] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_SPUTTLEFISH] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_PRICKLEPUFF] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_RAPIDASH] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWPOKE] =
	{
		.size = 0x65,
		.y_offset = 0x10,
	},
	[SPECIES_SLOWBRO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_PUFFYBLOWHOG] =
	{
		.size = 0x53,
		.y_offset = 0x14,
	},
	[SPECIES_MAGNETON] =
	{
		.size = 0x75,
		.y_offset = 0x7,
	},
	[SPECIES_FARFETCHD] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_PYROCLASTICSLOOCH] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_LESSERSPOTTEDJELLYFLOAT] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_GREATERSPOTTEDJELLYFLOAT] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_DEWGONG] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_GRIMER] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_SNOWYBLOWHOG] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_BLIZZARDINGBLOWHOG] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_CLOYSTER] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_GASTLY] =
	{
		.size = 0x77,
		.y_offset = 0xd,
	},
	[SPECIES_HAUNTER] =
	{
		.size = 0x87,
		.y_offset = 0xd,
	},
	[SPECIES_GENGAR] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_ONIX] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_SUNQUISH] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_PROQUILLION] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_KRABBY] =
	{
		.size = 0x75,
		.y_offset = 0xe,
	},
	[SPECIES_SNOWFLAKEFLUTTERTAIL] =
	{
		.size = 0x87,
		.y_offset = 0x9,
	},
	[SPECIES_BOGSWALLOW] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_PUFFMIN] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_WOLLYHOP] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_EXEGGUTOR] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CUBONE] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_SCORCHCAKE] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_WATERDUMPLE] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_LONGWATERDUMPLE] =
	{
		.size = 0x67,
		.y_offset = 0x3,
	},
	[SPECIES_MOCKIWI] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_KOFFING] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_WEEZING] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_RHYHORN] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_RHYDON] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_CHANSEY] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_TANGELA] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_KANGASKHAN] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_HORSEA] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_SEADRA] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_GOLDEEN] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_BEARDEDAMPRAT] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_STARYU] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_GATTLINGGROINK] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_MR_MIME] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_SCYTHER] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_ARMOREDMAWDAD] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_ELECTABUZZ] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_MAGMAR] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_PINSIR] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_TAUROS] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_PELLETPOSY] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_MASTERONION] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_OATCHI] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_QUAGGLEDMIRECLOPS] =
	{
		.size = 0x54,
		.y_offset = 0x10,
	},
	[SPECIES_EEVEE] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_VAPOREON] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_JOLTEON] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_FLAREON] =
	{
		.size = 0x76,
		.y_offset = 0xb,
	},
	[SPECIES_PORYGON] =
	{
		.size = 0x56,
		.y_offset = 0xf,
	},
	[SPECIES_OMANYTE] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_OMASTAR] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_KABUTO] =
	{
		.size = 0x54,
		.y_offset = 0x12,
	},
	[SPECIES_KABUTOPS] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_AERODACTYL] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_SNORLAX] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_ARTICUNO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ZAPDOS] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_MOLTRES] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_DRATINI] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_DRAGONAIR] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_DRAGONITE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MEWTWO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MEW] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_CHIKORITA] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_BAYLEEF] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_MEGANIUM] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CYNDAQUIL] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_QUILAVA] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_TYPHLOSION] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_TOTODILE] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_CROCONAW] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_FERALIGATR] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_SENTRET] =
	{
		.size = 0x47,
		.y_offset = 0x2,
	},
	[SPECIES_FURRET] =
	{
		.size = 0x67,
		.y_offset = 0x4,
	},
	[SPECIES_HOOTHOOT] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_NOCTOWL] =
	{
		.size = 0x58,
		.y_offset = 0x2,
	},
	[SPECIES_LEDYBA] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_LEDIAN] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_SPINARAK] =
	{
		.size = 0x54,
		.y_offset = 0x12,
	},
	[SPECIES_ARIADOS] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_CROBAT] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_CHINCHOU] =
	{
		.size = 0x75,
		.y_offset = 0xc,
	},
	[SPECIES_LANTURN] =
	{
		.size = 0x87,
		.y_offset = 0xb,
	},
	[SPECIES_PICHU] =
	{
		.size = 0x45,
		.y_offset = 0xe,
	},
	[SPECIES_CLEFFA] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_IGGLYBUFF] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_TOGEPI] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_TOGETIC] =
	{
		.size = 0x46,
		.y_offset = 0x8,
	},
	[SPECIES_NATU] =
	{
		.size = 0x44,
		.y_offset = 0xe,
	},
	[SPECIES_XATU] =
	{
		.size = 0x47,
		.y_offset = 0x0,
	},
	[SPECIES_MAREEP] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_FLAAFFY] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_AMPHAROS] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_BELLOSSOM] =
	{
		.size = 0x45,
		.y_offset = 0xd,
	},
	[SPECIES_MARILL] =
	{
		.size = 0x65,
		.y_offset = 0xe,
	},
	[SPECIES_AZUMARILL] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SUDOWOODO] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_POLITOED] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_HOPPIP] =
	{
		.size = 0x66,
		.y_offset = 0xe,
	},
	[SPECIES_SKIPLOOM] =
	{
		.size = 0x55,
		.y_offset = 0x11,
	},
	[SPECIES_JUMPLUFF] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_AIPOM] =
	{
		.size = 0x58,
		.y_offset = 0x1,
	},
	[SPECIES_SUNKERN] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_SUNFLORA] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_YANMA] =
	{
		.size = 0x86,
		.y_offset = 0xe,
	},
	[SPECIES_WOOPER] =
	{
		.size = 0x54,
		.y_offset = 0x11,
	},
	[SPECIES_QUAGSIRE] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_ESPEON] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_UMBREON] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_MURKROW] =
	{
		.size = 0x66,
		.y_offset = 0x10,
	},
	[SPECIES_SLOWKING] =
	{
		.size = 0x58,
		.y_offset = 0x0,
	},
	[SPECIES_MISDREAVUS] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN] =
	{
		.size = 0x35,
		.y_offset = 0xf,
	},
	[SPECIES_WOBBUFFET] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_GIRAFARIG] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_PINECO] =
	{
		.size = 0x56,
		.y_offset = 0xc,
	},
	[SPECIES_FORRETRESS] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_DUNSPARCE] =
	{
		.size = 0x74,
		.y_offset = 0x9,
	},
	[SPECIES_GLIGAR] =
	{
		.size = 0x78,
		.y_offset = 0x4,
	},
	[SPECIES_STEELIX] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SNUBBULL] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_GRANBULL] =
	{
		.size = 0x57,
		.y_offset = 0x4,
	},
	[SPECIES_QWILFISH] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_SCIZOR] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SHUCKLE] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_HERACROSS] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_SNEASEL] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_TEDDIURSA] =
	{
		.size = 0x46,
		.y_offset = 0xc,
	},
	[SPECIES_URSARING] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_SLUGMA] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_MAGCARGO] =
	{
		.size = 0x57,
		.y_offset = 0x6,
	},
	[SPECIES_SWINUB] =
	{
		.size = 0x43,
		.y_offset = 0x14,
	},
	[SPECIES_PILOSWINE] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_CORSOLA] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_REMORAID] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_OCTILLERY] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_DELIBIRD] =
	{
		.size = 0x56,
		.y_offset = 0x7,
	},
	[SPECIES_MANTINE] =
	{
		.size = 0x88,
		.y_offset = 0xa,
	},
	[SPECIES_SKARMORY] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_HOUNDOUR] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_HOUNDOOM] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_KINGDRA] =
	{
		.size = 0x78,
		.y_offset = 0x1,
	},
	[SPECIES_PHANPY] =
	{
		.size = 0x54,
		.y_offset = 0x10,
	},
	[SPECIES_DONPHAN] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_PORYGON2] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_STANTLER] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SMEARGLE] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_TYROGUE] =
	{
		.size = 0x46,
		.y_offset = 0x9,
	},
	[SPECIES_HITMONTOP] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_SMOOCHUM] =
	{
		.size = 0x35,
		.y_offset = 0xe,
	},
	[SPECIES_ELEKID] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_MAGBY] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_MILTANK] =
	{
		.size = 0x77,
		.y_offset = 0x8,
	},
	[SPECIES_BLISSEY] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_RAIKOU] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_ENTEI] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_SUICUNE] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_LARVITAR] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_PUPITAR] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_TYRANITAR] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_LUGIA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_HO_OH] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CELEBI] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[252] =
	{
		.size = 0x88,
		.y_offset = 0x10,
	},
	[253] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[254] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[255] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[256] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[257] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[258] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[259] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[260] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[261] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[262] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[263] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[264] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[265] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[266] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[267] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[268] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[269] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[270] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[271] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[272] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[273] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[274] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[275] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[276] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_TREECKO] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_GROVYLE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_SCEPTILE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_TORCHIC] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_COMBUSKEN] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_BLAZIKEN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MUDKIP] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_MARSHTOMP] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_SWAMPERT] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_POOCHYENA] =
	{
		.size = 0x55,
		.y_offset = 0xb,
	},
	[SPECIES_MIGHTYENA] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_ZIGZAGOON] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_LINOONE] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_WURMPLE] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_SILCOON] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_BEAUTIFLY] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_CASCOON] =
	{
		.size = 0x74,
		.y_offset = 0xb,
	},
	[SPECIES_DUSTOX] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_LOTAD] =
	{
		.size = 0x65,
		.y_offset = 0xf,
	},
	[SPECIES_LOMBRE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_LUDICOLO] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SEEDOT] =
	{
		.size = 0x46,
		.y_offset = 0xd,
	},
	[SPECIES_NUZLEAF] =
	{
		.size = 0x56,
		.y_offset = 0x6,
	},
	[SPECIES_SHIFTRY] =
	{
		.size = 0x88,
		.y_offset = 0x7,
	},
	[SPECIES_NINCADA] =
	{
		.size = 0x74,
		.y_offset = 0x12,
	},
	[SPECIES_NINJASK] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_SHEDINJA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_TAILLOW] =
	{
		.size = 0x64,
		.y_offset = 0xc,
	},
	[SPECIES_SWELLOW] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SHROOMISH] =
	{
		.size = 0x54,
		.y_offset = 0xf,
	},
	[SPECIES_BRELOOM] =
	{
		.size = 0x77,
		.y_offset = 0x1,
	},
	[SPECIES_SPINDA] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_WINGULL] =
	{
		.size = 0x84,
		.y_offset = 0xb,
	},
	[SPECIES_PELIPPER] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_SURSKIT] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_MASQUERAIN] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_WAILMER] =
	{
		.size = 0x75,
		.y_offset = 0xb,
	},
	[SPECIES_WAILORD] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_SKITTY] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_DELCATTY] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_KECLEON] =
	{
		.size = 0x67,
		.y_offset = 0x5,
	},
	[SPECIES_BALTOY] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_CLAYDOL] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_NOSEPASS] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_TORKOAL] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_SABLEYE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_BARBOACH] =
	{
		.size = 0x46,
		.y_offset = 0x12,
	},
	[SPECIES_WHISCASH] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_LUVDISC] =
	{
		.size = 0x46,
		.y_offset = 0x10,
	},
	[SPECIES_CORPHISH] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_CRAWDAUNT] =
	{
		.size = 0x88,
		.y_offset = 0x4,
	},
	[SPECIES_FEEBAS] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_MILOTIC] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_CARVANHA] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_SHARPEDO] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_TRAPINCH] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_VIBRAVA] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_FLYGON] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_MAKUHITA] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_HARIYAMA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ELECTRIKE] =
	{
		.size = 0x64,
		.y_offset = 0xe,
	},
	[SPECIES_MANECTRIC] =
	{
		.size = 0x67,
		.y_offset = 0x2,
	},
	[SPECIES_NUMEL] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_CAMERUPT] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_SPHEAL] =
	{
		.size = 0x65,
		.y_offset = 0xe,
	},
	[SPECIES_SEALEO] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_WALREIN] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_CACNEA] =
	{
		.size = 0x74,
		.y_offset = 0xf,
	},
	[SPECIES_CACTURNE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SNORUNT] =
	{
		.size = 0x56,
		.y_offset = 0xd,
	},
	[SPECIES_GLALIE] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_LUNATONE] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SOLROCK] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_AZURILL] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_SPOINK] =
	{
		.size = 0x46,
		.y_offset = 0x9,
	},
	[SPECIES_GRUMPIG] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_PLUSLE] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_MINUN] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_MAWILE] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_MEDITITE] =
	{
		.size = 0x65,
		.y_offset = 0xb,
	},
	[SPECIES_MEDICHAM] =
	{
		.size = 0x68,
		.y_offset = 0x0,
	},
	[SPECIES_SWABLU] =
	{
		.size = 0x76,
		.y_offset = 0x10,
	},
	[SPECIES_ALTARIA] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_WYNAUT] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_DUSKULL] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_DUSCLOPS] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_ROSELIA] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_SLAKOTH] =
	{
		.size = 0x74,
		.y_offset = 0x11,
	},
	[SPECIES_VIGOROTH] =
	{
		.size = 0x78,
		.y_offset = 0x7,
	},
	[SPECIES_SLAKING] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_GULPIN] =
	{
		.size = 0x55,
		.y_offset = 0xf,
	},
	[SPECIES_SWALOT] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_TROPIUS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_WHISMUR] =
	{
		.size = 0x55,
		.y_offset = 0xe,
	},
	[SPECIES_LOUDRED] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_EXPLOUD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CLAMPERL] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_HUNTAIL] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_GOREBYSS] =
	{
		.size = 0x86,
		.y_offset = 0x3,
	},
	[SPECIES_ABSOL] =
	{
		.size = 0x68,
		.y_offset = 0x2,
	},
	[SPECIES_SHUPPET] =
	{
		.size = 0x56,
		.y_offset = 0xe,
	},
	[SPECIES_BANETTE] =
	{
		.size = 0x55,
		.y_offset = 0x7,
	},
	[SPECIES_SEVIPER] =
	{
		.size = 0x77,
		.y_offset = 0x7,
	},
	[SPECIES_ZANGOOSE] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_RELICANTH] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_ARON] =
	{
		.size = 0x43,
		.y_offset = 0xf,
	},
	[SPECIES_LAIRON] =
	{
		.size = 0x75,
		.y_offset = 0x8,
	},
	[SPECIES_AGGRON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CASTFORM] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_VOLBEAT] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_ILLUMISE] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_LILEEP] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_CRADILY] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_ANORITH] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_ARMALDO] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_RALTS] =
	{
		.size = 0x35,
		.y_offset = 0xc,
	},
	[SPECIES_KIRLIA] =
	{
		.size = 0x47,
		.y_offset = 0x6,
	},
	[SPECIES_GARDEVOIR] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_BAGON] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_SHELGON] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SALAMENCE] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_BELDUM] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_METANG] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_METAGROSS] =
	{
		.size = 0x87,
		.y_offset = 0xa,
	},
	[SPECIES_REGIROCK] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_REGICE] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_REGISTEEL] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_KYOGRE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_GROUDON] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_RAYQUAZA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_LATIAS] =
	{
		.size = 0x88,
		.y_offset = 0x8,
	},
	[SPECIES_LATIOS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_JIRACHI] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_DEOXYS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CHIMECHO] =
	{
		.size = 0x37,
		.y_offset = 0xb,
	},
	[SPECIES_EGG] =
	{
		.size = 0x33,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_B] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_C] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_D] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_E] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_F] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_G] =
	{
		.size = 0x35,
		.y_offset = 0xe,
	},
	[SPECIES_UNOWN_H] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_I] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_J] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_K] =
	{
		.size = 0x44,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_L] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_M] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_N] =
	{
		.size = 0x43,
		.y_offset = 0x14,
	},
	[SPECIES_UNOWN_O] =
	{
		.size = 0x44,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_P] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_Q] =
	{
		.size = 0x43,
		.y_offset = 0x15,
	},
	[SPECIES_UNOWN_R] =
	{
		.size = 0x34,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_S] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_UNOWN_T] =
	{
		.size = 0x34,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_U] =
	{
		.size = 0x44,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_V] =
	{
		.size = 0x44,
		.y_offset = 0x12,
	},
	[SPECIES_UNOWN_W] =
	{
		.size = 0x44,
		.y_offset = 0x13,
	},
	[SPECIES_UNOWN_X] =
	{
		.size = 0x33,
		.y_offset = 0x15,
	},
	[SPECIES_UNOWN_Y] =
	{
		.size = 0x34,
		.y_offset = 0x11,
	},
	[SPECIES_UNOWN_Z] =
	{
		.size = 0x34,
		.y_offset = 0x10,
	},
	[SPECIES_UNOWN_EXCLAMATION] =
	{
		.size = 0x35,
		.y_offset = 0xf,
	},
	[SPECIES_UNOWN_QUESTION] =
	{
		.size = 0x35,
		.y_offset = 0xd,
	},
};
