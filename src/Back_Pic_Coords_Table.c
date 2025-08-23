#include "defines.h"
#include "../include/graphics.h"

const struct MonCoords gMonBackPicCoords[NUM_SPECIES] =
{
	[SPECIES_NONE] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BULBORBLARVA] =
	{
		.size = 0x64,
		.y_offset = 0,
	},
	[SPECIES_BULBORB] =
	{
		.size = 0x76,
		.y_offset = 0,
	},
	[SPECIES_JUMBOBULBORB] =
	{
		.size = 0x86,
		.y_offset = 0,
	},
	[SPECIES_FIERYBLOWLET] =
	{
		.size = 0x66,
		.y_offset = 0,
	},
	[SPECIES_FIERYBLOWHOG] =
	{
		.size = 0x77,
		.y_offset = 0,
	},
	[SPECIES_TITANBLOWHOG] =
	{
		.size = 0x87,
		.y_offset = 0,
	},
	[SPECIES_WOLPOLE] =
	{
		.size = 0x75,
		.y_offset = 0,
	},
	[SPECIES_YELLOWWOLLYHOP] =
	{
		.size = 0x86,
		.y_offset = 0,
	},
	[SPECIES_MASTERHOP] =
	{
		.size = 0x86,
		.y_offset = 0,
	},
	[SPECIES_FLINTBEETLE] =
	{
		.size = 0x55,
		.y_offset = 0x12,
	},
	[SPECIES_DOODLEBUG] =
	{
		.size = 0x65,
		.y_offset = 0x12,
	},
	[SPECIES_GLINTBEETLE] =
	{
		.size = 0x87,
		.y_offset = 0x12,
	},
	[SPECIES_SWOOPINGSNITCHBUG] =
	{
		.size = 0x56,
		.y_offset = 0x0,
	},
	[SPECIES_BUMBLINGSNITCHBUG] =
	{
		.size = 0x46,
		.y_offset = 0x6,
	},
	[SPECIES_DIRIGIBUG] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_SNOWBULBORB] =
	{
		.size = 0x66,
		.y_offset = 0x11,
	},
	[SPECIES_DWARFFROSTYBULBORB] =
	{
		.size = 0x85,
		.y_offset = 0x10,
	},
	[SPECIES_FROSTYBULBORB] =
	{
		.size = 0x87,
		.y_offset = 0x10,
	},
	[SPECIES_CRUMBUG] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_BREADBUG] =
	{
		.size = 0x75,
		.y_offset = 0x0,
	},
	[SPECIES_GIANTBREADBUG] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_FEAROW] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_EKANS] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_DWARFBULBEAR] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_SPOTTYBULBEAR] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_HONEYWISP] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_DANDELFLY] =
	{
		.size = 0x65,
		.y_offset = 0xD,
	},
	[SPECIES_DOWNYSNAGRET] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_BURROWINGSNAGRET] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_PILEATEDSNAGRET] =
	{
		.size = 0x86,
		.y_offset = 0x5,
	},
	[SPECIES_FEMALESHEARGRUB] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_SWARMINGSHEARGRUB] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_MAMASHEARGRUB] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_MALESHEARGRUB] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SHEARWIG] =
	{
		.size = 0x65,
		.y_offset = 0xe,
	},
	[SPECIES_QUEENSHEARWIG] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_ARISTOCRABOFFSPRING] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_ARISTOCRAB] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_GOOLIX] =
	{
		.size = 0x65,
		.y_offset = 0x0,
	},
	[SPECIES_FOOLIX] =
	{
		.size = 0x66,
		.y_offset = 0x0,
	},
	[SPECIES_ARCTICCANNONLARVA] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_ARCTICCANNONBEETLE] =
	{
		.size = 0x87,
		.y_offset = 0xd,
	},
	[SPECIES_SKITTERLEAF] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_DESICCATEDSKITTERLEAF] =
	{
		.size = 0x76,
		.y_offset = 0xb,
	},
	[SPECIES_ARMOREDCANNONLARVA] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_ARMOREDCANNONBEETLE] =
	{
		.size = 0x63,
		.y_offset = 0x0,
	},
	[SPECIES_HORNEDCANNONBEETLE] =
	{
		.size = 0x87,
		.y_offset = 0xd,
	},
	[SPECIES_CREEPINGCHRYSANTHEMUM] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_STARTLESPORE] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_HERMITCRAWMAD] =
	{
		.size = 0x54,
		.y_offset = 0xe,
	},
	[SPECIES_BUGEYEDCRAWMAD] =
	{
		.size = 0x66,
		.y_offset = 0x11,
	},
	[SPECIES_DWARFBULBORB] =
	{
		.size = 0x65,
		.y_offset = 0x6,
	},
	[SPECIES_DWARFORANGEBULBORB] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_BEADYLONGLEGS] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_RAGINGLONGLEGS] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_BALDYLONGLEGS] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_SHAGGYLONGLEGS] =
	{
		.size = 0x77,
		.y_offset = 0xa,
	},
	[SPECIES_BULBMIN] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_ADULTBULBMIN] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_SCORNET] =
	{
		.size = 0x74,
		.y_offset = 0x13,
	},
	[SPECIES_POLIWHIRL] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_BURROWNIT] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_ABRA] =
	{
		.size = 0x55,
		.y_offset = 0xc,
	},
	[SPECIES_KADABRA] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_VOLATILEDWEEVIL] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_MANATLEGS] =
	{
		.size = 0x65,
		.y_offset = 0x6,
	},
	[SPECIES_MACHOKE] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_MACHAMP] =
	{
		.size = 0x67,
		.y_offset = 0x7,
	},
	[SPECIES_ARACHNODE] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_MOLDYDWARFBULBORB] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_MOLDYSLOOCH] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_TOXSTOOL] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_PHOSBAT] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_VEHEAMOTHPHOSBAT] =
	{
		.size = 0x66,
		.y_offset = 0xb,
	},
	[SPECIES_PUCKERINGBLINNOW] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_SPUTTLEFISH] =
	{
		.size = 0x84,
		.y_offset = 0xb,
	},
	[SPECIES_PRICKLEPUFF] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_RAPIDASH] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SLOWPOKE] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_SLOWBRO] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_PUFFYBLOWHOG] =
	{
		.size = 0x43,
		.y_offset = 0x6,
	},
	[SPECIES_MAGNETON] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_FARFETCHD] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_PYROCLASTICSLOOCH] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_LESSERSPOTTEDJELLYFLOAT] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_GREATERSPOTTEDJELLYFLOAT] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_DEWGONG] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_GRIMER] =
	{
		.size = 0x75,
		.y_offset = 0xd,
	},
	[SPECIES_SNOWYBLOWHOG] =
	{
		.size = 0x85,
		.y_offset = 0x8,
	},
	[SPECIES_BLIZZARDINGBLOWHOG] =
	{
		.size = 0x76,
		.y_offset = 0x16,
	},
	[SPECIES_CLOYSTER] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_GASTLY] =
	{
		.size = 0x85,
		.y_offset = 0x6,
	},
	[SPECIES_HAUNTER] =
	{
		.size = 0x76,
		.y_offset = 0x4,
	},
	[SPECIES_GENGAR] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_ONIX] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_SUNQUISH] =
	{
		.size = 0x65,
		.y_offset = 0x9,
	},
	[SPECIES_PROQUILLION] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_KRABBY] =
	{
		.size = 0x66,
		.y_offset = 0xf,
	},
	[SPECIES_SNOWFLAKEFLUTTERTAIL] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_BOGSWALLOW] =
	{
		.size = 0x55,
		.y_offset = 0xa,
	},
	[SPECIES_PUFFMIN] =
	{
		.size = 0x65,
		.y_offset = 0x7,
	},
	[SPECIES_WOLLYHOP] =
	{
		.size = 0x65,
		.y_offset = 0x12,
	},
	[SPECIES_EXEGGUTOR] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_CUBONE] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_SCORCHCAKE] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_WATERDUMPLE] =
	{
		.size = 0x65,
		.y_offset = 0x4,
	},
	[SPECIES_LONGWATERDUMPLE] =
	{
		.size = 0x65,
		.y_offset = 0x6,
	},
	[SPECIES_MOCKIWI] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_KOFFING] =
	{
		.size = 0x66,
		.y_offset = 0x3,
	},
	[SPECIES_WEEZING] =
	{
		.size = 0x85,
		.y_offset = 0x9,
	},
	[SPECIES_RHYHORN] =
	{
		.size = 0x85,
		.y_offset = 0xb,
	},
	[SPECIES_RHYDON] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_CHANSEY] =
	{
		.size = 0x85,
		.y_offset = 0xb,
	},
	[SPECIES_TANGELA] =
	{
		.size = 0x85,
		.y_offset = 0x14,
	},
	[SPECIES_KANGASKHAN] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_HORSEA] =
	{
		.size = 0x66,
		.y_offset = 0xe,
	},
	[SPECIES_SEADRA] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_GOLDEEN] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_BEARDEDAMPRAT] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_STARYU] =
	{
		.size = 0x75,
		.y_offset = 0x6,
	},
	[SPECIES_GATTLINGGROINK] =
	{
		.size = 0x85,
		.y_offset = 0x4,
	},
	[SPECIES_MR_MIME] =
	{
		.size = 0x85,
		.y_offset = 0x8,
	},
	[SPECIES_SCYTHER] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_ARMOREDMAWDAD] =
	{
		.size = 0x85,
		.y_offset = 0x3,
	},
	[SPECIES_ELECTABUZZ] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_MAGMAR] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_PINSIR] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_TAUROS] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_PELLETPOSY] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_MASTERONION] =
	{
		.size = 0x88,
		.y_offset = 0x5,
	},
	[SPECIES_OATCHI] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_QUAGGLEDMIRECLOPS] =
	{
		.size = 0x54,
		.y_offset = 0x12,
	},
	[SPECIES_EEVEE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_VAPOREON] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_JOLTEON] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_FLAREON] =
	{
		.size = 0x67,
		.y_offset = 0x9,
	},
	[SPECIES_PORYGON] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_OMANYTE] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_OMASTAR] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_KABUTO] =
	{
		.size = 0x65,
		.y_offset = 0x11,
	},
	[SPECIES_KABUTOPS] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_AERODACTYL] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_SNORLAX] =
	{
		.size = 0x86,
		.y_offset = 0xd,
	},
	[SPECIES_ARTICUNO] =
	{
		.size = 0x65,
		.y_offset = 0x5,
	},
	[SPECIES_ZAPDOS] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_MOLTRES] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_DRATINI] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_DRAGONAIR] =
	{
		.size = 0x78,
		.y_offset = 0x4,
	},
	[SPECIES_DRAGONITE] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_MEWTWO] =
	{
		.size = 0x78,
		.y_offset = 0x1,
	},
	[SPECIES_MEW] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CHIKORITA] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_BAYLEEF] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_MEGANIUM] =
	{
		.size = 0x78,
		.y_offset = 0x2,
	},
	[SPECIES_CYNDAQUIL] =
	{
		.size = 0x76,
		.y_offset = 0x3,
	},
	[SPECIES_QUILAVA] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_TYPHLOSION] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_TOTODILE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_CROCONAW] =
	{
		.size = 0x67,
		.y_offset = 0x2,
	},
	[SPECIES_FERALIGATR] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SENTRET] =
	{
		.size = 0x67,
		.y_offset = 0x0,
	},
	[SPECIES_FURRET] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_HOOTHOOT] =
	{
		.size = 0x66,
		.y_offset = 0x4,
	},
	[SPECIES_NOCTOWL] =
	{
		.size = 0x68,
		.y_offset = 0x3,
	},
	[SPECIES_LEDYBA] =
	{
		.size = 0x76,
		.y_offset = 0x8,
	},
	[SPECIES_LEDIAN] =
	{
		.size = 0x77,
		.y_offset = 0x3,
	},
	[SPECIES_SPINARAK] =
	{
		.size = 0x73,
		.y_offset = 0x12,
	},
	[SPECIES_ARIADOS] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_CROBAT] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_CHINCHOU] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_LANTURN] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_PICHU] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_CLEFFA] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_IGGLYBUFF] =
	{
		.size = 0x66,
		.y_offset = 0xd,
	},
	[SPECIES_TOGEPI] =
	{
		.size = 0x54,
		.y_offset = 0xd,
	},
	[SPECIES_TOGETIC] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_NATU] =
	{
		.size = 0x54,
		.y_offset = 0xf,
	},
	[SPECIES_XATU] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_MAREEP] =
	{
		.size = 0x66,
		.y_offset = 0xf,
	},
	[SPECIES_FLAAFFY] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_AMPHAROS] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_BELLOSSOM] =
	{
		.size = 0x66,
		.y_offset = 0xc,
	},
	[SPECIES_MARILL] =
	{
		.size = 0x75,
		.y_offset = 0xd,
	},
	[SPECIES_AZUMARILL] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_SUDOWOODO] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_POLITOED] =
	{
		.size = 0x66,
		.y_offset = 0x5,
	},
	[SPECIES_HOPPIP] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_SKIPLOOM] =
	{
		.size = 0x65,
		.y_offset = 0x3,
	},
	[SPECIES_JUMPLUFF] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_AIPOM] =
	{
		.size = 0x66,
		.y_offset = 0x3,
	},
	[SPECIES_SUNKERN] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_SUNFLORA] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_YANMA] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_WOOPER] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_QUAGSIRE] =
	{
		.size = 0x76,
		.y_offset = 0x5,
	},
	[SPECIES_ESPEON] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_UMBREON] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_MURKROW] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_SLOWKING] =
	{
		.size = 0x66,
		.y_offset = 0x3,
	},
	[SPECIES_MISDREAVUS] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_UNOWN] =
	{
		.size = 0x36,
		.y_offset = 0x8,
	},
	[SPECIES_WOBBUFFET] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_GIRAFARIG] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_PINECO] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_FORRETRESS] =
	{
		.size = 0x84,
		.y_offset = 0x10,
	},
	[SPECIES_DUNSPARCE] =
	{
		.size = 0x85,
		.y_offset = 0x11,
	},
	[SPECIES_GLIGAR] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_STEELIX] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_SNUBBULL] =
	{
		.size = 0x76,
		.y_offset = 0xc,
	},
	[SPECIES_GRANBULL] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_QWILFISH] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_SCIZOR] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_SHUCKLE] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_HERACROSS] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_SNEASEL] =
	{
		.size = 0x66,
		.y_offset = 0x3,
	},
	[SPECIES_TEDDIURSA] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_URSARING] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_SLUGMA] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_MAGCARGO] =
	{
		.size = 0x76,
		.y_offset = 0x7,
	},
	[SPECIES_SWINUB] =
	{
		.size = 0x63,
		.y_offset = 0xf,
	},
	[SPECIES_PILOSWINE] =
	{
		.size = 0x75,
		.y_offset = 0x8,
	},
	[SPECIES_CORSOLA] =
	{
		.size = 0x65,
		.y_offset = 0x8,
	},
	[SPECIES_REMORAID] =
	{
		.size = 0x75,
		.y_offset = 0xc,
	},
	[SPECIES_OCTILLERY] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_DELIBIRD] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_MANTINE] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_SKARMORY] =
	{
		.size = 0x87,
		.y_offset = 0x1,
	},
	[SPECIES_HOUNDOUR] =
	{
		.size = 0x55,
		.y_offset = 0xa,
	},
	[SPECIES_HOUNDOOM] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_KINGDRA] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_PHANPY] =
	{
		.size = 0x65,
		.y_offset = 0xc,
	},
	[SPECIES_DONPHAN] =
	{
		.size = 0x85,
		.y_offset = 0x9,
	},
	[SPECIES_PORYGON2] =
	{
		.size = 0x76,
		.y_offset = 0xb,
	},
	[SPECIES_STANTLER] =
	{
		.size = 0x78,
		.y_offset = 0x1,
	},
	[SPECIES_SMEARGLE] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_TYROGUE] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_HITMONTOP] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_SMOOCHUM] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_ELEKID] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_MAGBY] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_MILTANK] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_BLISSEY] =
	{
		.size = 0x85,
		.y_offset = 0x10,
	},
	[SPECIES_RAIKOU] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_ENTEI] =
	{
		.size = 0x87,
		.y_offset = 0xb,
	},
	[SPECIES_SUICUNE] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_LARVITAR] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_PUPITAR] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_TYRANITAR] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_LUGIA] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_HO_OH] =
	{
		.size = 0x88,
		.y_offset = 0x2,
	},
	[SPECIES_CELEBI] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[252] =
	{
		.size = 0x88,
		.y_offset = 0x10,
	},
	[253] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[254] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[255] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[256] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[257] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[258] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[259] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[260] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[261] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[262] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[263] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[264] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[265] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[266] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[267] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[268] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[269] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[270] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[271] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[272] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[273] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[274] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[275] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[276] =
	{
		.size = 0x88,
		.y_offset = 0x1,
	},
	[SPECIES_TREECKO] =
	{
		.size = 0x87,
		.y_offset = 0x9,
	},
	[SPECIES_GROVYLE] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SCEPTILE] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_TORCHIC] =
	{
		.size = 0x67,
		.y_offset = 0xa,
	},
	[SPECIES_COMBUSKEN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_BLAZIKEN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_MUDKIP] =
	{
		.size = 0x77,
		.y_offset = 0xa,
	},
	[SPECIES_MARSHTOMP] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SWAMPERT] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_POOCHYENA] =
	{
		.size = 0x76,
		.y_offset = 0x0,
	},
	[SPECIES_MIGHTYENA] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_ZIGZAGOON] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_LINOONE] =
	{
		.size = 0x85,
		.y_offset = 0x6,
	},
	[SPECIES_WURMPLE] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SILCOON] =
	{
		.size = 0x83,
		.y_offset = 0xd,
	},
	[SPECIES_BEAUTIFLY] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CASCOON] =
	{
		.size = 0x73,
		.y_offset = 0x6,
	},
	[SPECIES_DUSTOX] =
	{
		.size = 0x83,
		.y_offset = 0x0,
	},
	[SPECIES_LOTAD] =
	{
		.size = 0x75,
		.y_offset = 0xc,
	},
	[SPECIES_LOMBRE] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_LUDICOLO] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SEEDOT] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_NUZLEAF] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_SHIFTRY] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_NINCADA] =
	{
		.size = 0x83,
		.y_offset = 0x13,
	},
	[SPECIES_NINJASK] =
	{
		.size = 0x86,
		.y_offset = 0xd,
	},
	[SPECIES_SHEDINJA] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_TAILLOW] =
	{
		.size = 0x64,
		.y_offset = 0x10,
	},
	[SPECIES_SWELLOW] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SHROOMISH] =
	{
		.size = 0x85,
		.y_offset = 0x4,
	},
	[SPECIES_BRELOOM] =
	{
		.size = 0x87,
		.y_offset = 0x3,
	},
	[SPECIES_SPINDA] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_WINGULL] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_PELIPPER] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_SURSKIT] =
	{
		.size = 0x86,
		.y_offset = 0x9,
	},
	[SPECIES_MASQUERAIN] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_WAILMER] =
	{
		.size = 0x83,
		.y_offset = 0x8,
	},
	[SPECIES_WAILORD] =
	{
		.size = 0x83,
		.y_offset = 0xe,
	},
	[SPECIES_SKITTY] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_DELCATTY] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_KECLEON] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_BALTOY] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_CLAYDOL] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_NOSEPASS] =
	{
		.size = 0x85,
		.y_offset = 0xa,
	},
	[SPECIES_TORKOAL] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_SABLEYE] =
	{
		.size = 0x76,
		.y_offset = 0xd,
	},
	[SPECIES_BARBOACH] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_WHISCASH] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_LUVDISC] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_CORPHISH] =
	{
		.size = 0x77,
		.y_offset = 0x8,
	},
	[SPECIES_CRAWDAUNT] =
	{
		.size = 0x87,
		.y_offset = 0x7,
	},
	[SPECIES_FEEBAS] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_MILOTIC] =
	{
		.size = 0x68,
		.y_offset = 0x0,
	},
	[SPECIES_CARVANHA] =
	{
		.size = 0x87,
		.y_offset = 0xa,
	},
	[SPECIES_SHARPEDO] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_TRAPINCH] =
	{
		.size = 0x75,
		.y_offset = 0xa,
	},
	[SPECIES_VIBRAVA] =
	{
		.size = 0x74,
		.y_offset = 0xc,
	},
	[SPECIES_FLYGON] =
	{
		.size = 0x88,
		.y_offset = 0x3,
	},
	[SPECIES_MAKUHITA] =
	{
		.size = 0x76,
		.y_offset = 0x6,
	},
	[SPECIES_HARIYAMA] =
	{
		.size = 0x87,
		.y_offset = 0x4,
	},
	[SPECIES_ELECTRIKE] =
	{
		.size = 0x84,
		.y_offset = 0xd,
	},
	[SPECIES_MANECTRIC] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_NUMEL] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_CAMERUPT] =
	{
		.size = 0x84,
		.y_offset = 0xd,
	},
	[SPECIES_SPHEAL] =
	{
		.size = 0x64,
		.y_offset = 0xc,
	},
	[SPECIES_SEALEO] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_WALREIN] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_CACNEA] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_CACTURNE] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_SNORUNT] =
	{
		.size = 0x76,
		.y_offset = 0xa,
	},
	[SPECIES_GLALIE] =
	{
		.size = 0x85,
		.y_offset = 0xa,
	},
	[SPECIES_LUNATONE] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_SOLROCK] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_AZURILL] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_SPOINK] =
	{
		.size = 0x56,
		.y_offset = 0x4,
	},
	[SPECIES_GRUMPIG] =
	{
		.size = 0x87,
		.y_offset = 0x2,
	},
	[SPECIES_PLUSLE] =
	{
		.size = 0x76,
		.y_offset = 0x3,
	},
	[SPECIES_MINUN] =
	{
		.size = 0x76,
		.y_offset = 0x4,
	},
	[SPECIES_MAWILE] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_MEDITITE] =
	{
		.size = 0x76,
		.y_offset = 0x9,
	},
	[SPECIES_MEDICHAM] =
	{
		.size = 0x68,
		.y_offset = 0x0,
	},
	[SPECIES_SWABLU] =
	{
		.size = 0x86,
		.y_offset = 0xb,
	},
	[SPECIES_ALTARIA] =
	{
		.size = 0x87,
		.y_offset = 0xa,
	},
	[SPECIES_WYNAUT] =
	{
		.size = 0x77,
		.y_offset = 0xb,
	},
	[SPECIES_DUSKULL] =
	{
		.size = 0x66,
		.y_offset = 0x7,
	},
	[SPECIES_DUSCLOPS] =
	{
		.size = 0x86,
		.y_offset = 0x2,
	},
	[SPECIES_ROSELIA] =
	{
		.size = 0x86,
		.y_offset = 0x7,
	},
	[SPECIES_SLAKOTH] =
	{
		.size = 0x85,
		.y_offset = 0xd,
	},
	[SPECIES_VIGOROTH] =
	{
		.size = 0x86,
		.y_offset = 0x0,
	},
	[SPECIES_SLAKING] =
	{
		.size = 0x86,
		.y_offset = 0x6,
	},
	[SPECIES_GULPIN] =
	{
		.size = 0x66,
		.y_offset = 0x9,
	},
	[SPECIES_SWALOT] =
	{
		.size = 0x77,
		.y_offset = 0x2,
	},
	[SPECIES_TROPIUS] =
	{
		.size = 0x87,
		.y_offset = 0x0,
	},
	[SPECIES_WHISMUR] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_LOUDRED] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_EXPLOUD] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_CLAMPERL] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_HUNTAIL] =
	{
		.size = 0x68,
		.y_offset = 0x4,
	},
	[SPECIES_GOREBYSS] =
	{
		.size = 0x77,
		.y_offset = 0x9,
	},
	[SPECIES_ABSOL] =
	{
		.size = 0x78,
		.y_offset = 0x3,
	},
	[SPECIES_SHUPPET] =
	{
		.size = 0x77,
		.y_offset = 0x5,
	},
	[SPECIES_BANETTE] =
	{
		.size = 0x65,
		.y_offset = 0x5,
	},
	[SPECIES_SEVIPER] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_ZANGOOSE] =
	{
		.size = 0x88,
		.y_offset = 0x6,
	},
	[SPECIES_RELICANTH] =
	{
		.size = 0x86,
		.y_offset = 0xc,
	},
	[SPECIES_ARON] =
	{
		.size = 0x54,
		.y_offset = 0x8,
	},
	[SPECIES_LAIRON] =
	{
		.size = 0x84,
		.y_offset = 0xf,
	},
	[SPECIES_AGGRON] =
	{
		.size = 0x87,
		.y_offset = 0x5,
	},
	[SPECIES_CASTFORM] =
	{
		.size = 0x45,
		.y_offset = 0x0,
	},
	[SPECIES_VOLBEAT] =
	{
		.size = 0x76,
		.y_offset = 0x3,
	},
	[SPECIES_ILLUMISE] =
	{
		.size = 0x67,
		.y_offset = 0x8,
	},
	[SPECIES_LILEEP] =
	{
		.size = 0x86,
		.y_offset = 0x8,
	},
	[SPECIES_CRADILY] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_ANORITH] =
	{
		.size = 0x83,
		.y_offset = 0x13,
	},
	[SPECIES_ARMALDO] =
	{
		.size = 0x77,
		.y_offset = 0x0,
	},
	[SPECIES_RALTS] =
	{
		.size = 0x45,
		.y_offset = 0xd,
	},
	[SPECIES_KIRLIA] =
	{
		.size = 0x57,
		.y_offset = 0x6,
	},
	[SPECIES_GARDEVOIR] =
	{
		.size = 0x77,
		.y_offset = 0x6,
	},
	[SPECIES_BAGON] =
	{
		.size = 0x66,
		.y_offset = 0x6,
	},
	[SPECIES_SHELGON] =
	{
		.size = 0x85,
		.y_offset = 0xc,
	},
	[SPECIES_SALAMENCE] =
	{
		.size = 0x77,
		.y_offset = 0x4,
	},
	[SPECIES_BELDUM] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_METANG] =
	{
		.size = 0x84,
		.y_offset = 0xd,
	},
	[SPECIES_METAGROSS] =
	{
		.size = 0x83,
		.y_offset = 0x6,
	},
	[SPECIES_REGIROCK] =
	{
		.size = 0x86,
		.y_offset = 0xa,
	},
	[SPECIES_REGICE] =
	{
		.size = 0x85,
		.y_offset = 0xb,
	},
	[SPECIES_REGISTEEL] =
	{
		.size = 0x85,
		.y_offset = 0xb,
	},
	[SPECIES_KYOGRE] =
	{
		.size = 0x84,
		.y_offset = 0x12,
	},
	[SPECIES_GROUDON] =
	{
		.size = 0x87,
		.y_offset = 0x8,
	},
	[SPECIES_RAYQUAZA] =
	{
		.size = 0x78,
		.y_offset = 0x0,
	},
	[SPECIES_LATIAS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_LATIOS] =
	{
		.size = 0x88,
		.y_offset = 0x0,
	},
	[SPECIES_JIRACHI] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_DEOXYS] =
	{
		.size = 0x87,
		.y_offset = 0x6,
	},
	[SPECIES_CHIMECHO] =
	{
		.size = 0x47,
		.y_offset = 0x9,
	},
	[SPECIES_EGG] =
	{
		.size = 0x36,
		.y_offset = 0x0,
	},
	[SPECIES_UNOWN_B] =
	{
		.size = 0x56,
		.y_offset = 0x9,
	},
	[SPECIES_UNOWN_C] =
	{
		.size = 0x67,
		.y_offset = 0x6,
	},
	[SPECIES_UNOWN_D] =
	{
		.size = 0x56,
		.y_offset = 0x8,
	},
	[SPECIES_UNOWN_E] =
	{
		.size = 0x56,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_F] =
	{
		.size = 0x66,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_G] =
	{
		.size = 0x57,
		.y_offset = 0x5,
	},
	[SPECIES_UNOWN_H] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_UNOWN_I] =
	{
		.size = 0x37,
		.y_offset = 0x7,
	},
	[SPECIES_UNOWN_J] =
	{
		.size = 0x46,
		.y_offset = 0x9,
	},
	[SPECIES_UNOWN_K] =
	{
		.size = 0x57,
		.y_offset = 0x7,
	},
	[SPECIES_UNOWN_L] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_M] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_N] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_O] =
	{
		.size = 0x66,
		.y_offset = 0x8,
	},
	[SPECIES_UNOWN_P] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_Q] =
	{
		.size = 0x55,
		.y_offset = 0xf,
	},
	[SPECIES_UNOWN_R] =
	{
		.size = 0x45,
		.y_offset = 0xc,
	},
	[SPECIES_UNOWN_S] =
	{
		.size = 0x57,
		.y_offset = 0x4,
	},
	[SPECIES_UNOWN_T] =
	{
		.size = 0x45,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_U] =
	{
		.size = 0x65,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_V] =
	{
		.size = 0x56,
		.y_offset = 0xb,
	},
	[SPECIES_UNOWN_W] =
	{
		.size = 0x55,
		.y_offset = 0xd,
	},
	[SPECIES_UNOWN_X] =
	{
		.size = 0x55,
		.y_offset = 0xf,
	},
	[SPECIES_UNOWN_Y] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_Z] =
	{
		.size = 0x46,
		.y_offset = 0xa,
	},
	[SPECIES_UNOWN_EXCLAMATION] =
	{
		.size = 0x37,
		.y_offset = 0x6,
	},
	[SPECIES_UNOWN_QUESTION] =
	{
		.size = 0x47,
		.y_offset = 0x6,
	},
};
