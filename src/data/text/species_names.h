const u8 gSpeciesNames[][POKEMON_NAME_LENGTH + 1] = {
    [SPECIES_NONE] = _("??????????"),
    [SPECIES_BULBASAUR] = _("BULBASAUR"),
    [SPECIES_IVYSAUR] = _("IVYSAUR"),
    [SPECIES_VENUSAUR] = _("VENUSAUR"),
    [SPECIES_CHARMANDER] = _("CHARMANDER"),
    [SPECIES_CHARMELEON] = _("CHARMELEON"),
    [SPECIES_CHARIZARD] = _("CHARIZARD"),
    [SPECIES_SQUIRTLE] = _("SQUIRTLE"),
    [SPECIES_WARTORTLE] = _("WARTORTLE"),
    [SPECIES_BLASTOISE] = _("BLASTOISE"),
    [SPECIES_CATERPIE] = _("CATERPIE"),
    [SPECIES_METAPOD] = _("METAPOD"),
    [SPECIES_BUTTERFREE] = _("METAMOTH"),
    [SPECIES_WEEDLE] = _("WEEDLE"),
    [SPECIES_KAKUNA] = _("KAKUNA"),
    [SPECIES_BEEDRILL] = _("BEEDRILL"),
    [SPECIES_PIDGEY] = _("PIDGEY"),
    [SPECIES_PIDGEOTTO] = _("PIDGEOTTO"),
    [SPECIES_PIDGEOT] = _("PIDGEOT"),
    [SPECIES_RATTATA] = _("RATTATA"),
    [SPECIES_RATICATE] = _("RATICATE"),
    [SPECIES_SPEAROW] = _("SPEAROW"),
    [SPECIES_FEAROW] = _("FEAROW"),
    [SPECIES_EKANS] = _("EKANS"),
    [SPECIES_ARBOK] = _("ARBOK"),
    [SPECIES_PIKACHU] = _("PIKACHU"),
    [SPECIES_RAICHU] = _("RAICHU"),
    [SPECIES_SANDSHREW] = _("SANDSHREW"),
    [SPECIES_SANDSLASH] = _("SANDSLASH"),
    [SPECIES_NIDORAN_F] = _("NIDORAN"),
    [SPECIES_NIDORINA] = _("NIDORINA"),
    [SPECIES_NIDOQUEEN] = _("NIDOQUEEN"),
    [SPECIES_NIDORAN_M] = _("NIDORAN"),
    [SPECIES_NIDORINO] = _("NIDORINO"),
    [SPECIES_NIDOKING] = _("NIDOKING"),
    [SPECIES_CLEFAIRY] = _("CLEFAIRY"),
    [SPECIES_CLEFABLE] = _("CLEFABLE"),
    [SPECIES_VULPIX] = _("VULPIX"),
    [SPECIES_NINETALES] = _("NINETALES"),
    [SPECIES_JIGGLYPUFF] = _("JIGGLYPUFF"),
    [SPECIES_WIGGLYTUFF] = _("WIGGLYTUFF"),
    [SPECIES_ZUBAT] = _("ZUBAT"),
    [SPECIES_GOLBAT] = _("GOLBAT"),
    [SPECIES_ODDISH] = _("ODDISH"),
    [SPECIES_GLOOM] = _("GLOOM"),
    [SPECIES_VILEPLUME] = _("VILEPLUME"),
    [SPECIES_PARAS] = _("PARAS"),
    [SPECIES_PARASECT] = _("PARASECT"),
    [SPECIES_VENONAT] = _("VENONAT"),
    [SPECIES_VENOMOTH] = _("BETTERFLY"),
    [SPECIES_DIGLETT] = _("DIGLETT"),
    [SPECIES_DUGTRIO] = _("DUGTRIO"),
    [SPECIES_MEOWTH] = _("MEOWTH"),
    [SPECIES_PERSIAN] = _("PERSIAN"),
    [SPECIES_PSYDUCK] = _("PSYDUCK"),
    [SPECIES_GOLDUCK] = _("GOLDUCK"),
    [SPECIES_MANKEY] = _("MANKEY"),
    [SPECIES_PRIMEAPE] = _("PRIMEAPE"),
    [SPECIES_GROWLITHE] = _("GROWLITHE"),
    [SPECIES_ARCANINE] = _("ARCANINE"),
    [SPECIES_POLIWAG] = _("POLIWAG"),
    [SPECIES_POLIWHIRL] = _("POLIWHIRL"),
    [SPECIES_POLIWRATH] = _("POLIWRATH"),
    [SPECIES_ABRA] = _("ABRA"),
    [SPECIES_KADABRA] = _("KADABRA"),
    [SPECIES_ALAKAZAM] = _("ALAKAZAM"),
    [SPECIES_MACHOP] = _("MACHOP"),
    [SPECIES_MACHOKE] = _("MACHOKE"),
    [SPECIES_MACHAMP] = _("MACHAMP"),
    [SPECIES_BELLSPROUT] = _("PEASHOOTER"),
    [SPECIES_WEEPINBELL] = _("MUDEETER"),
    [SPECIES_VICTREEBEL] = _("TREEPEETER"),
    [SPECIES_TENTACOOL] = _("TENTACOOL"),
    [SPECIES_TENTACRUEL] = _("TENTACRUEL"),
    [SPECIES_GEODUDE] = _("GEODUDE"),
    [SPECIES_GRAVELER] = _("GRAVELER"),
    [SPECIES_GOLEM] = _("GOLEM"),
    [SPECIES_PONYTA] = _("PONYTA"),
    [SPECIES_RAPIDASH] = _("RAPIDASH"),
    [SPECIES_SLOWPOKE] = _("SLOWPOKE"),
    [SPECIES_SLOWBRO] = _("FASTRAX"),
    [SPECIES_MAGNEMITE] = _("MAGNEMITE"),
    [SPECIES_MAGNETON] = _("MAGNETON"),
    [SPECIES_FARFETCHD] = _("FARFETCH'D"),
    [SPECIES_DODUO] = _("DODUO"),
    [SPECIES_DODRIO] = _("DODRIO"),
    [SPECIES_SEEL] = _("SEEL"),
    [SPECIES_DEWGONG] = _("DEWGONG"),
    [SPECIES_GRIMER] = _("GRIMER"),
    [SPECIES_MUK] = _("MUK"),
    [SPECIES_SHELLDER] = _("CLAMPERL"),
    [SPECIES_CLOYSTER] = _("CLOYSTER"),
    [SPECIES_GASTLY] = _("GASTLY"),
    [SPECIES_HAUNTER] = _("HAUNTER"),
    [SPECIES_GENGAR] = _("GENGAR"),
    [SPECIES_ONIX] = _("ONIX"),
    [SPECIES_DROWZEE] = _("DROWZEE"),
    [SPECIES_HYPNO] = _("HYPNO"),
    [SPECIES_KRABBY] = _("KRABBY"),
    [SPECIES_KINGLER] = _("KINGLER"),
    [SPECIES_VOLTORB] = _("VOLTORB"),
    [SPECIES_ELECTRODE] = _("ELECTRODE"),
    [SPECIES_EXEGGCUTE] = _("ACCURASEED"),
    [SPECIES_EXEGGUTOR] = _("TREECESION"),
    [SPECIES_CUBONE] = _("CUBONE"),
    [SPECIES_MAROWAK] = _("MAROWAK"),
    [SPECIES_HITMONLEE] = _("HITMONLEE"),
    [SPECIES_HITMONCHAN] = _("HITMONCHAN"),
    [SPECIES_LICKITUNG] = _("HITMONCENA"),
    [SPECIES_KOFFING] = _("KOFFING"),
    [SPECIES_WEEZING] = _("WEEZING"),
    [SPECIES_RHYHORN] = _("RHYHORN"),
    [SPECIES_RHYDON] = _("RHYDON"),
    [SPECIES_CHANSEY] = _("CHANSEY"),
    [SPECIES_TANGELA] = _("PEKKA"),
    [SPECIES_KANGASKHAN] = _("KANGASKHAN"),
    [SPECIES_HORSEA] = _("HORSEA"),
    [SPECIES_SEADRA] = _("SEADRA"),
    [SPECIES_GOLDEEN] = _("FRILLISH"),
    [SPECIES_SEAKING] = _("JELLICENT"),
    [SPECIES_STARYU] = _("STARYU"),
    [SPECIES_STARMIE] = _("STARMIE"),
    [SPECIES_MR_MIME] = _("MR. MIME"),
    [SPECIES_SCYTHER] = _("SCYTHER"),
    [SPECIES_JYNX] = _("BEARTIC"),
    [SPECIES_ELECTABUZZ] = _("ELECTABUZZ"),
    [SPECIES_MAGMAR] = _("MAGMAR"),
    [SPECIES_PINSIR] = _("PINSIR"),
    [SPECIES_TAUROS] = _("TAUROS"),
    [SPECIES_MAGIKARP] = _("MAGIKARP"),
    [SPECIES_GYARADOS] = _("GYARADOS"),
    [SPECIES_LAPRAS] = _("LAPRAS"),
    [SPECIES_DITTO] = _("DITTO"),
    [SPECIES_EEVEE] = _("EEVEE"),
    [SPECIES_VAPOREON] = _("VAPOREON"),
    [SPECIES_JOLTEON] = _("JOLTEON"),
    [SPECIES_FLAREON] = _("FLAREON"),
    [SPECIES_PORYGON] = _("PORYGON"),
    [SPECIES_OMANYTE] = _("OMANYTE"),
    [SPECIES_OMASTAR] = _("OMASTAR"),
    [SPECIES_KABUTO] = _("KABUTO"),
    [SPECIES_KABUTOPS] = _("KABUTUFF"),
    [SPECIES_AERODACTYL] = _("AERODACTYL"),
    [SPECIES_SNORLAX] = _("SNORLAX"),
    [SPECIES_ARTICUNO] = _("ARTICUNO"),
    [SPECIES_ZAPDOS] = _("ZAPDOS"),
    [SPECIES_MOLTRES] = _("MOLTRES"),
    [SPECIES_DRATINI] = _("DRATINI"),
    [SPECIES_DRAGONAIR] = _("DRAGONAIR"),
    [SPECIES_DRAGONITE] = _("DRAGONITE"),
    [SPECIES_MEWTWO] = _("MEWTWO"),
    [SPECIES_MEW] = _("MEW"),
    [SPECIES_CHIKORITA] = _("CHIKORITA"),
    [SPECIES_BAYLEEF] = _("BAYLEEF"),
    [SPECIES_MEGANIUM] = _("SPIRITREE"),
    [SPECIES_CYNDAQUIL] = _("CYNDAQUIL"),
    [SPECIES_QUILAVA] = _("QUILAVA"),
    [SPECIES_TYPHLOSION] = _("SEPTEMBER"),
    [SPECIES_TOTODILE] = _("TOTODILE"),
    [SPECIES_CROCONAW] = _("CROCONAW"),
    [SPECIES_FERALIGATR] = _("REXOBOXER"),
    [SPECIES_SENTRET] = _("BIDOOF"),
    [SPECIES_FURRET] = _("BIBAREL"),
    [SPECIES_HOOTHOOT] = _("HOOTHOOT"),
    [SPECIES_NOCTOWL] = _("NOCTOWL"),
    [SPECIES_LEDYBA] = _("LEDYBA"),
    [SPECIES_LEDIAN] = _("LEDIAN"),
    [SPECIES_SPINARAK] = _("SPINARAK"),
    [SPECIES_ARIADOS] = _("ARIAVOLT"),
    [SPECIES_CROBAT] = _("CROBAT"),
    [SPECIES_CHINCHOU] = _("CHINCHOU"),
    [SPECIES_LANTURN] = _("LANTURN"),
    [SPECIES_PICHU] = _("PICHU"),
    [SPECIES_CLEFFA] = _("ZORUA"),
    [SPECIES_IGGLYBUFF] = _("ZOROARK"),
    [SPECIES_TOGEPI] = _("TOGEPI"),
    [SPECIES_TOGETIC] = _("TOGETIC"),
    [SPECIES_NATU] = _("PIDOVE"),
    [SPECIES_XATU] = _("UNFEZANT"),
    [SPECIES_MAREEP] = _("MAREEP"),
    [SPECIES_FLAAFFY] = _("FLAAFFY"),
    [SPECIES_AMPHAROS] = _("AMPHAROS"),
    [SPECIES_BELLOSSOM] = _("SUNBLOOM"),
    [SPECIES_MARILL] = _("METALLOY"),
    [SPECIES_AZUMARILL] = _("AZUMETAL"),
    [SPECIES_SUDOWOODO] = _("SUDOWOODO"),
    [SPECIES_POLITOED] = _("POLIWARM"),
    [SPECIES_HOPPIP] = _("SHINX"),
    [SPECIES_SKIPLOOM] = _("LUXIO"),
    [SPECIES_JUMPLUFF] = _("LUXRAY"),
    [SPECIES_AIPOM] = _("PANDARA"),
    [SPECIES_SUNKERN] = _("RIOLU"),
    [SPECIES_SUNFLORA] = _("LUCARIO"),
    [SPECIES_YANMA] = _("YANMA"),
    [SPECIES_WOOPER] = _("WOOPER"),
    [SPECIES_QUAGSIRE] = _("QUAGSIRE"),
    [SPECIES_ESPEON] = _("ESPEON"),
    [SPECIES_UMBREON] = _("UMBREON"),
    [SPECIES_MURKROW] = _("SANDILE"),
    [SPECIES_SLOWKING] = _("KROKOROK"),
    [SPECIES_MISDREAVUS] = _("KROOKODILE"),
    [SPECIES_UNOWN] = _("UNOWN"),
    [SPECIES_WOBBUFFET] = _("WOBBUFFET"),
    [SPECIES_GIRAFARIG] = _("BOOMER"),
    [SPECIES_PINECO] = _("PINECO"),
    [SPECIES_FORRETRESS] = _("FORRETRESS"),
    [SPECIES_DUNSPARCE] = _("SHUCKLE"),
    [SPECIES_GLIGAR] = _("GLIGAR"),
    [SPECIES_STEELIX] = _("STEELIX"),
    [SPECIES_SNUBBULL] = _("VAMPERE"),
    [SPECIES_GRANBULL] = _("ELECTOX"),
    [SPECIES_QWILFISH] = _("GARBIN"),
    [SPECIES_SCIZOR] = _("SCIZOR"),
    [SPECIES_SHUCKLE] = _("KLEAVOR"),
    [SPECIES_HERACROSS] = _("HERACROSS"),
    [SPECIES_SNEASEL] = _("SNEEZLE"),
    [SPECIES_TEDDIURSA] = _("TEDDIURSA"),
    [SPECIES_URSARING] = _("URSARING"),
    [SPECIES_SLUGMA] = _("SLUGMA"),
    [SPECIES_MAGCARGO] = _("MAGCARGO"),
    [SPECIES_SWINUB] = _("SWINUB"),
    [SPECIES_PILOSWINE] = _("PILOSWINE"),
    [SPECIES_CORSOLA] = _("DRACOON"),
    [SPECIES_REMORAID] = _("ANCHORAGE"),
    [SPECIES_OCTILLERY] = _("QUARTILERY"),
    [SPECIES_DELIBIRD] = _("DELIBERD"),
    [SPECIES_MANTINE] = _("MANTINE"),
    [SPECIES_SKARMORY] = _("SKARMORY"),
    [SPECIES_HOUNDOUR] = _("HOUNDOUR"),
    [SPECIES_HOUNDOOM] = _("HOUNDOOM"),
    [SPECIES_KINGDRA] = _("KINGDRA"),
    [SPECIES_PHANPY] = _("PHANPY"),
    [SPECIES_DONPHAN] = _("DONPHAN"),
    [SPECIES_PORYGON2] = _("PORYGON2"),
    [SPECIES_STANTLER] = _("BERDEER"),
    [SPECIES_SMEARGLE] = _("SMEARGLE"),
    [SPECIES_TYROGUE] = _("TYROGUE"),
    [SPECIES_HITMONTOP] = _("ANNIHILAPE"),
    [SPECIES_SMOOCHUM] = _("MAMOSWINE"),
    [SPECIES_ELEKID] = _("ELECTIVIRE"),
    [SPECIES_MAGBY] = _("MAGMORTAR"),
    [SPECIES_MILTANK] = _("MILTANK"),
    [SPECIES_BLISSEY] = _("BLISSEY"),
    [SPECIES_RAIKOU] = _("RAIKOU"),
    [SPECIES_ENTEI] = _("ENTEI"),
    [SPECIES_SUICUNE] = _("SUICUNE"),
    [SPECIES_LARVITAR] = _("LARVITAR"),
    [SPECIES_PUPITAR] = _("PUPITAR"),
    [SPECIES_TYRANITAR] = _("TYRANITAR"),
    [SPECIES_LUGIA] = _("LUGIA"),
    [SPECIES_HO_OH] = _("HO-OH"),
    [SPECIES_CELEBI] = _("CELEBI"),
    [SPECIES_TREECKO] = _("TREECKO"),
    [SPECIES_GROVYLE] = _("GROVYLE"),
    [SPECIES_SCEPTILE] = _("SCEPTILE"),
    [SPECIES_TORCHIC] = _("TORCHIC"),
    [SPECIES_COMBUSKEN] = _("COMBUSKEN"),
    [SPECIES_BLAZIKEN] = _("BLAZIKEN"),
    [SPECIES_MUDKIP] = _("MUDKIP"),
    [SPECIES_MARSHTOMP] = _("MARSHTOMP"),
    [SPECIES_SWAMPERT] = _("SWAMPERT"),
    [SPECIES_POOCHYENA] = _("POOCHYENA"),
    [SPECIES_MIGHTYENA] = _("MIGHTYENA"),
    [SPECIES_ZIGZAGOON] = _("ZIGZAGOON"),
    [SPECIES_LINOONE] = _("LINOONE"),
    [SPECIES_WURMPLE] = _("OBSTAGOON"),
    [SPECIES_SILCOON] = _("PANSAGE"),
    [SPECIES_BEAUTIFLY] = _("PANSEAR"),
    [SPECIES_CASCOON] = _("PANPOUR"),
    [SPECIES_DUSTOX] = _("PANVOLT"),
    [SPECIES_LOTAD] = _("LOTAD"),
    [SPECIES_LOMBRE] = _("LOMBRE"),
    [SPECIES_LUDICOLO] = _("LUDICOLO"),
    [SPECIES_SEEDOT] = _("SEEDOT"),
    [SPECIES_NUZLEAF] = _("NUZLEAF"),
    [SPECIES_SHIFTRY] = _("SHIFTRY"),
    [SPECIES_TAILLOW] = _("TAILLOW"),
    [SPECIES_SWELLOW] = _("SWELLOW"),
    [SPECIES_WINGULL] = _("WINGULL"),
    [SPECIES_PELIPPER] = _("PELIPPER"),
    [SPECIES_RALTS] = _("RALTS"),
    [SPECIES_KIRLIA] = _("GALLADE"),
    [SPECIES_GARDEVOIR] = _("GARDEVOIR"),
    [SPECIES_SURSKIT] = _("WIMPOD"),
    [SPECIES_MASQUERAIN] = _("GOLISOPOD"),
    [SPECIES_SHROOMISH] = _("SHROOMISH"),
    [SPECIES_BRELOOM] = _("BRELOOM"),
    [SPECIES_SLAKOTH] = _("SLAKOTH"),
    [SPECIES_VIGOROTH] = _("VIGOROTH"),
    [SPECIES_SLAKING] = _("SLAKING"),
    [SPECIES_NINCADA] = _("NINCADA"),
    [SPECIES_NINJASK] = _("NINJASK"),
    [SPECIES_SHEDINJA] = _("SHEDINJA"),
    [SPECIES_WHISMUR] = _("WHISMUR"),
    [SPECIES_LOUDRED] = _("LOUDRED"),
    [SPECIES_EXPLOUD] = _("EXPLOUD"),
    [SPECIES_MAKUHITA] = _("MAKUHITA"),
    [SPECIES_HARIYAMA] = _("HARIYAMA"),
    [SPECIES_AZURILL] = _("VECTOR"),
    [SPECIES_NOSEPASS] = _("LARVESTAR"),
    [SPECIES_SKITTY] = _("VOLCARONA"),
    [SPECIES_DELCATTY] = _("FROSMOTH"),
    [SPECIES_SABLEYE] = _("SABLEYE"),
    [SPECIES_MAWILE] = _("MAWILE"),
    [SPECIES_ARON] = _("ARON"),
    [SPECIES_LAIRON] = _("LAIRON"),
    [SPECIES_AGGRON] = _("AGGRON"),
    [SPECIES_MEDITITE] = _("MEDITITE"),
    [SPECIES_MEDICHAM] = _("MEDICHAM"),
    [SPECIES_ELECTRIKE] = _("ELECTRIKE"),
    [SPECIES_MANECTRIC] = _("MANECTRIC"),
    [SPECIES_PLUSLE] = _("SUS"),
    [SPECIES_MINUN] = _("DED"),
    [SPECIES_VOLBEAT] = _("POCHITA"),
    [SPECIES_ILLUMISE] = _("WILDMUTT"),
    [SPECIES_ROSELIA] = _("CORVIDOC"),
    [SPECIES_GULPIN] = _("CETODDLE"),
    [SPECIES_SWALOT] = _("CETITAN"),
    [SPECIES_CARVANHA] = _("CARVANHA"),
    [SPECIES_SHARPEDO] = _("SHARPEDO"),
    [SPECIES_WAILMER] = _("WAILMER"),
    [SPECIES_WAILORD] = _("WAILORD"),
    [SPECIES_NUMEL] = _("NUMEL"),
    [SPECIES_CAMERUPT] = _("CAMERUPT"),
    [SPECIES_TORKOAL] = _("TORKOAL"),
    [SPECIES_SPOINK] = _("SPOINK"),
    [SPECIES_GRUMPIG] = _("GRUMPIG"),
    [SPECIES_SPINDA] = _("SPINDA"),
    [SPECIES_TRAPINCH] = _("TRAPINCH"),
    [SPECIES_VIBRAVA] = _("VIBRAVA"),
    [SPECIES_FLYGON] = _("FLYGON"),
    [SPECIES_CACNEA] = _("CACNEA"),
    [SPECIES_CACTURNE] = _("CACTURNE"),
    [SPECIES_SWABLU] = _("SWABLU"),
    [SPECIES_ALTARIA] = _("ALTARIA"),
    [SPECIES_ZANGOOSE] = _("ZANGOOSE"),
    [SPECIES_SEVIPER] = _("SEVIPER"),
    [SPECIES_LUNATONE] = _("LUNATONE"),
    [SPECIES_SOLROCK] = _("SOLROCK"),
    [SPECIES_BARBOACH] = _("TYRUNT"),
    [SPECIES_WHISCASH] = _("TYRANTRUM"),
    [SPECIES_CORPHISH] = _("AMAURA"),
    [SPECIES_CRAWDAUNT] = _("AURORUS"),
    [SPECIES_BALTOY] = _("BALTOY"),
    [SPECIES_CLAYDOL] = _("CLAYDOL"),
    [SPECIES_LILEEP] = _("LILEEP"),
    [SPECIES_CRADILY] = _("CRADILY"),
    [SPECIES_ANORITH] = _("ANORITH"),
    [SPECIES_ARMALDO] = _("ARMALDO"),
    [SPECIES_FEEBAS] = _("FEEBAS"),
    [SPECIES_MILOTIC] = _("MILOTIC"),
    [SPECIES_CASTFORM] = _("CASTFORM"),
    [SPECIES_KECLEON] = _("KECLEON"),
    [SPECIES_SHUPPET] = _("SHUPPET"),
    [SPECIES_BANETTE] = _("BANETTE"),
    [SPECIES_DUSKULL] = _("DUSKULL"),
    [SPECIES_DUSCLOPS] = _("DUSCLOPS"),
    [SPECIES_TROPIUS] = _("TROPIUS"),
    [SPECIES_CHIMECHO] = _("MUDD"),
    [SPECIES_ABSOL] = _("ABSOL"),
    [SPECIES_WYNAUT] = _("FORKNIGHT"),
    [SPECIES_SNORUNT] = _("SNORUNT"),
    [SPECIES_GLALIE] = _("PHANTOM"),
    [SPECIES_SPHEAL] = _("SPHEAL"),
    [SPECIES_SEALEO] = _("SEALEO"),
    [SPECIES_WALREIN] = _("WALREIN"),
    [SPECIES_CLAMPERL] = _("MELTAN"),
    [SPECIES_HUNTAIL] = _("MELMETAL"),
    [SPECIES_GOREBYSS] = _("SNOBRAWL"),
    [SPECIES_RELICANTH] = _("CHIMPUNK"),
    [SPECIES_LUVDISC] = _("RAMPAPE"),
    [SPECIES_BAGON] = _("BAGON"),
    [SPECIES_SHELGON] = _("SHELGON"),
    [SPECIES_SALAMENCE] = _("SALAMENCE"),
    [SPECIES_BELDUM] = _("BELDUM"),
    [SPECIES_METANG] = _("METANG"),
    [SPECIES_METAGROSS] = _("METAGROSS"),
    [SPECIES_REGIROCK] = _("REGIROCK"),
    [SPECIES_REGICE] = _("REGICE"),
    [SPECIES_REGISTEEL] = _("REGISTEEL"),
    [SPECIES_LATIAS] = _("LATIAS"),
    [SPECIES_LATIOS] = _("LATIOS"),
    [SPECIES_KYOGRE] = _("KYOGRE"),
    [SPECIES_GROUDON] = _("GROUDON"),
    [SPECIES_RAYQUAZA] = _("RAYQUAZA"),
    [SPECIES_JIRACHI] = _("JIRACHI"),
    [SPECIES_DEOXYS] = _("MISSINGNO."),
    [SPECIES_OLD_UNOWN_B] = _("?"),
    [SPECIES_OLD_UNOWN_C] = _("?"),
    [SPECIES_OLD_UNOWN_D] = _("?"),
    [SPECIES_OLD_UNOWN_E] = _("?"),
    [SPECIES_OLD_UNOWN_F] = _("?"),
    [SPECIES_OLD_UNOWN_G] = _("?"),
    [SPECIES_OLD_UNOWN_H] = _("?"),
    [SPECIES_OLD_UNOWN_I] = _("?"),
    [SPECIES_OLD_UNOWN_J] = _("?"),
    [SPECIES_OLD_UNOWN_K] = _("?"),
    [SPECIES_OLD_UNOWN_L] = _("?"),
    [SPECIES_OLD_UNOWN_M] = _("?"),
    [SPECIES_OLD_UNOWN_N] = _("?"),
    [SPECIES_OLD_UNOWN_O] = _("?"),
    [SPECIES_OLD_UNOWN_P] = _("?"),
    [SPECIES_OLD_UNOWN_Q] = _("?"),
    [SPECIES_OLD_UNOWN_R] = _("?"),
    [SPECIES_OLD_UNOWN_S] = _("?"),
    [SPECIES_OLD_UNOWN_T] = _("?"),
    [SPECIES_OLD_UNOWN_U] = _("?"),
    [SPECIES_OLD_UNOWN_V] = _("?"),
    [SPECIES_OLD_UNOWN_W] = _("?"),
    [SPECIES_OLD_UNOWN_X] = _("?"),
    [SPECIES_OLD_UNOWN_Y] = _("?"),
    [SPECIES_OLD_UNOWN_Z] = _("?"),
};
