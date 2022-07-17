static const u8 sNoneDescription[] = _("Pas de capacité spéciale.");
static const u8 sStenchDescription[] = _("Repousse POKéMON sauvage.");
static const u8 sDrizzleDescription[] = _("Invoque la pluie en combat.");
static const u8 sSpeedBoostDescription[] = _("Améliore la VITESSE.");
static const u8 sBattleArmorDescription[] = _("Bloque les coups critiques.");
static const u8 sSturdyDescription[] = _("Ignore les K.O. en un coup.");
static const u8 sDampDescription[] = _("Empêche auto-destruction.");
static const u8 sLimberDescription[] = _("Empêche la paralysie.");
static const u8 sSandVeilDescription[] = _("Evasion si tempête sable.");
static const u8 sStaticDescription[] = _("Paralyse au toucher.");
static const u8 sVoltAbsorbDescription[] = _("Change l'électricité en PV.");
static const u8 sWaterAbsorbDescription[] = _("Change l'eau en PV.");
static const u8 sObliviousDescription[] = _("Empêche l'attirance.");
static const u8 sCloudNineDescription[] = _("Ignore les effets du climat.");
static const u8 sCompoundEyesDescription[] = _("Augmente la précision.");
static const u8 sInsomniaDescription[] = _("Empêche de s'endormir.");
static const u8 sColorChangeDescription[] = _("S'adapte au type ennemi.");
static const u8 sImmunityDescription[] = _("Empêche l'empoisonnement.");
static const u8 sFlashFireDescription[] = _("Puissance monte si brûlé.");
static const u8 sShieldDustDescription[] = _("Empêche le cumul d'effets.");
static const u8 sOwnTempoDescription[] = _("Empêche la confusion.");
static const u8 sSuctionCupsDescription[] = _("Fixe solidement le corps.");
static const u8 sIntimidateDescription[] = _("Baisse l'ATTAQUE ennemie.");
static const u8 sShadowTagDescription[] = _("Empêche la fuite ennemie.");
static const u8 sRoughSkinDescription[] = _("Blesse quand touché.");
static const u8 sWonderGuardDescription[] = _("Reçoit seul. «sup. eff.».");
static const u8 sLevitateDescription[] = _("Ignore les attaques SOL.");
static const u8 sEffectSporeDescription[] = _("Laisse spores si touché.");
static const u8 sSynchronizeDescription[] = _("Transfère statuts.");
static const u8 sClearBodyDescription[] = _("Empêche réduction de cap.");
static const u8 sNaturalCureDescription[] = _("Soigne POKéMON changeant.");
static const u8 sLightningRodDescription[] = _("Attire attaques élec.");
static const u8 sSereneGraceDescription[] = _("Favorise le cumul d'effets.");
static const u8 sSwiftSwimDescription[] = _("Monte VITESSE s'il pleut.");
static const u8 sChlorophyllDescription[] = _("Augmente VITESSE au soleil.");
static const u8 sIlluminateDescription[] = _("Augmente les rencontres.");
static const u8 sTraceDescription[] = _("Imite la capacité spéciale.");
static const u8 sHugePowerDescription[] = _("Augmente l'ATTAQUE.");
static const u8 sPoisonPointDescription[] = _("Empoisonne quand touché.");
static const u8 sInnerFocusDescription[] = _("Empêche la peur.");
static const u8 sMagmaArmorDescription[] = _("Empêche le gel.");
static const u8 sWaterVeilDescription[] = _("Empêche les brûlures.");
static const u8 sMagnetPullDescription[] = _("Piège les POKéMON ACIER.");
static const u8 sSoundproofDescription[] = _("Evite les attaques sonores.");
static const u8 sRainDishDescription[] = _("Gagne quelques PV si pluie.");
static const u8 sSandStreamDescription[] = _("Lance une tempête de sable.");
static const u8 sPressureDescription[] = _("Ennemi dépense plus de PP.");
static const u8 sThickFatDescription[] = _("Contre chaleur et froid.");
static const u8 sEarlyBirdDescription[] = _("Se réveille rapidement.");
static const u8 sFlameBodyDescription[] = _("Brûle l'ennemi quand touché.");
static const u8 sRunAwayDescription[] = _("Améliore chances de fuite.");
static const u8 sKeenEyeDescription[] = _("Empêche perte de précision.");
static const u8 sHyperCutterDescription[] = _("Empêche réduction ATTAQUE.");
static const u8 sPickupDescription[] = _("Peut ramasser des objets.");
static const u8 sTruantDescription[] = _("Frappe tous les 2 tours.");
static const u8 sHustleDescription[] = _("Substitue préc. par puiss.");
static const u8 sCuteCharmDescription[] = _("Séduit quand touché.");
static const u8 sPlusDescription[] = _("Puissance + avec MINUS.");
static const u8 sMinusDescription[] = _("Puissance + avec PLUS.");
static const u8 sForecastDescription[] = _("Change selon le climat.");
static const u8 sStickyHoldDescription[] = _("Empêche le vol d'objets.");
static const u8 sShedSkinDescription[] = _("Mue pour se soigner.");
static const u8 sGutsDescription[] = _("Augmente ATT. quand blessé.");
static const u8 sMarvelScaleDescription[] = _("Augmente DEF. quand blessé.");
static const u8 sLiquidOozeDescription[] = _("Blesse quand drainé.");
static const u8 sOvergrowDescription[] = _("Augmente attaques PLANTE.");
static const u8 sBlazeDescription[] = _("Augmente attaques FEU.");
static const u8 sTorrentDescription[] = _("Augmente attaques EAU.");
static const u8 sSwarmDescription[] = _("Augmente attaques INSECT.");
static const u8 sRockHeadDescription[] = _("Empêche dégâts du recul.");
static const u8 sDroughtDescription[] = _("Invoque le soleil.");
static const u8 sArenaTrapDescription[] = _("Empêche la fuite.");
static const u8 sVitalSpiritDescription[] = _("Empêche le sommeil.");
static const u8 sWhiteSmokeDescription[] = _("Empêche réduction des cap.");
static const u8 sPurePowerDescription[] = _("Augmente l'ATTAQUE.");
static const u8 sShellArmorDescription[] = _("Bloque les coups critiques.");
static const u8 sCacophonyDescription[] = _("Evite les attaques sonores.");
static const u8 sAirLockDescription[] = _("Ignore les effets du climat.");

const u8 gAbilityNames[ABILITIES_COUNT][ABILITY_NAME_LENGTH + 1] =
{
    [ABILITY_NONE] = _("-------"),
    [ABILITY_STENCH] = _("PUANTEUR"),
    [ABILITY_DRIZZLE] = _("CRACHIN"),
    [ABILITY_SPEED_BOOST] = _("TURBO"),
    [ABILITY_BATTLE_ARMOR] = _("ARMURBASTON"),
    [ABILITY_STURDY] = _("FERMETE"),
    [ABILITY_DAMP] = _("MOITEUR"),
    [ABILITY_LIMBER] = _("ECHAUFFEMENT"),
    [ABILITY_SAND_VEIL] = _("VOILE SABLE"),
    [ABILITY_STATIC] = _("STATIK"),
    [ABILITY_VOLT_ABSORB] = _("ABSORB VOLT"),
    [ABILITY_WATER_ABSORB] = _("ABSORB EAU"),
    [ABILITY_OBLIVIOUS] = _("BENET"),
    [ABILITY_CLOUD_NINE] = _("CIEL GRIS"),
    [ABILITY_COMPOUND_EYES] = _("OEIL COMPOSE"),
    [ABILITY_INSOMNIA] = _("INSOMNIA"),
    [ABILITY_COLOR_CHANGE] = _("DEGUISEMENT"),
    [ABILITY_IMMUNITY] = _("VACCIN"),
    [ABILITY_FLASH_FIRE] = _("TORCHE"),
    [ABILITY_SHIELD_DUST] = _("ECRAN POUDRE"),
    [ABILITY_OWN_TEMPO] = _("TEMPO PERSO"),
    [ABILITY_SUCTION_CUPS] = _("VENTOUSE"),
    [ABILITY_INTIMIDATE] = _("INTIMIDATION"),
    [ABILITY_SHADOW_TAG] = _("MARQUE OMBRE"),
    [ABILITY_ROUGH_SKIN] = _("PEAU DURE"),
    [ABILITY_WONDER_GUARD] = _("GARDE MYSTIK"),
    [ABILITY_LEVITATE] = _("LEVITATION"),
    [ABILITY_EFFECT_SPORE] = _("POSE SPORE"),
    [ABILITY_SYNCHRONIZE] = _("SYNCHRO"),
    [ABILITY_CLEAR_BODY] = _("CORPS SAIN"),
    [ABILITY_NATURAL_CURE] = _("MEDIC NATURE"),
    [ABILITY_LIGHTNING_ROD] = _("PARATONNERRE"),
    [ABILITY_SERENE_GRACE] = _("SERENITE"),
    [ABILITY_SWIFT_SWIM] = _("GLISSADE"),
    [ABILITY_CHLOROPHYLL] = _("CHLOROPHYLE"),
    [ABILITY_ILLUMINATE] = _("LUMIATIRANCE"),
    [ABILITY_TRACE] = _("CALQUE"),
    [ABILITY_HUGE_POWER] = _("COLOFORCE"),
    [ABILITY_POISON_POINT] = _("POINT POISON"),
    [ABILITY_INNER_FOCUS] = _("ATTENTION"),
    [ABILITY_MAGMA_ARMOR] = _("ARMUMAGMA"),
    [ABILITY_WATER_VEIL] = _("IGNIFU-VOILE"),
    [ABILITY_MAGNET_PULL] = _("MAGNEPIEGE"),
    [ABILITY_SOUNDPROOF] = _("ANTI-BRUIT"),
    [ABILITY_RAIN_DISH] = _("CUVETTE"),
    [ABILITY_SAND_STREAM] = _("SABLE VOLANT"),
    [ABILITY_PRESSURE] = _("PRESSION"),
    [ABILITY_THICK_FAT] = _("ISOGRAISSE"),
    [ABILITY_EARLY_BIRD] = _("MATINAL"),
    [ABILITY_FLAME_BODY] = _("CORPS ARDENT"),
    [ABILITY_RUN_AWAY] = _("FUITE"),
    [ABILITY_KEEN_EYE] = _("REGARD VIF"),
    [ABILITY_HYPER_CUTTER] = _("HYPER CUTTER"),
    [ABILITY_PICKUP] = _("RAMASSAGE"),
    [ABILITY_TRUANT] = _("ABSENTEISME"),
    [ABILITY_HUSTLE] = _("AGITATION"),
    [ABILITY_CUTE_CHARM] = _("JOLI SOURIRE"),
    [ABILITY_PLUS] = _("PLUS"),
    [ABILITY_MINUS] = _("MINUS"),
    [ABILITY_FORECAST] = _("METEO"),
    [ABILITY_STICKY_HOLD] = _("GLUE"),
    [ABILITY_SHED_SKIN] = _("MUE"),
    [ABILITY_GUTS] = _("CRAN"),
    [ABILITY_MARVEL_SCALE] = _("ECAILLE SPE."),
    [ABILITY_LIQUID_OOZE] = _("SUINTEMENT"),
    [ABILITY_OVERGROW] = _("ENGRAIS"),
    [ABILITY_BLAZE] = _("BRASIER"),
    [ABILITY_TORRENT] = _("TORRENT"),
    [ABILITY_SWARM] = _("ESSAIM"),
    [ABILITY_ROCK_HEAD] = _("TETE DE ROC"),
    [ABILITY_DROUGHT] = _("SECHERESSE"),
    [ABILITY_ARENA_TRAP] = _("PIEGE"),
    [ABILITY_VITAL_SPIRIT] = _("ESPRIT VITAL"),
    [ABILITY_WHITE_SMOKE] = _("ECRAN FUMEE"),
    [ABILITY_PURE_POWER] = _("FORCE PURE"),
    [ABILITY_SHELL_ARMOR] = _("COQUE ARMURE"),
    [ABILITY_CACOPHONY] = _("CACOPHONIE"),
    [ABILITY_AIR_LOCK] = _("AIR LOCK"),
};

const u8 *const gAbilityDescriptionPointers[ABILITIES_COUNT] =
{
    [ABILITY_NONE] = sNoneDescription,
    [ABILITY_STENCH] = sStenchDescription,
    [ABILITY_DRIZZLE] = sDrizzleDescription,
    [ABILITY_SPEED_BOOST] = sSpeedBoostDescription,
    [ABILITY_BATTLE_ARMOR] = sBattleArmorDescription,
    [ABILITY_STURDY] = sSturdyDescription,
    [ABILITY_DAMP] = sDampDescription,
    [ABILITY_LIMBER] = sLimberDescription,
    [ABILITY_SAND_VEIL] = sSandVeilDescription,
    [ABILITY_STATIC] = sStaticDescription,
    [ABILITY_VOLT_ABSORB] = sVoltAbsorbDescription,
    [ABILITY_WATER_ABSORB] = sWaterAbsorbDescription,
    [ABILITY_OBLIVIOUS] = sObliviousDescription,
    [ABILITY_CLOUD_NINE] = sCloudNineDescription,
    [ABILITY_COMPOUND_EYES] = sCompoundEyesDescription,
    [ABILITY_INSOMNIA] = sInsomniaDescription,
    [ABILITY_COLOR_CHANGE] = sColorChangeDescription,
    [ABILITY_IMMUNITY] = sImmunityDescription,
    [ABILITY_FLASH_FIRE] = sFlashFireDescription,
    [ABILITY_SHIELD_DUST] = sShieldDustDescription,
    [ABILITY_OWN_TEMPO] = sOwnTempoDescription,
    [ABILITY_SUCTION_CUPS] = sSuctionCupsDescription,
    [ABILITY_INTIMIDATE] = sIntimidateDescription,
    [ABILITY_SHADOW_TAG] = sShadowTagDescription,
    [ABILITY_ROUGH_SKIN] = sRoughSkinDescription,
    [ABILITY_WONDER_GUARD] = sWonderGuardDescription,
    [ABILITY_LEVITATE] = sLevitateDescription,
    [ABILITY_EFFECT_SPORE] = sEffectSporeDescription,
    [ABILITY_SYNCHRONIZE] = sSynchronizeDescription,
    [ABILITY_CLEAR_BODY] = sClearBodyDescription,
    [ABILITY_NATURAL_CURE] = sNaturalCureDescription,
    [ABILITY_LIGHTNING_ROD] = sLightningRodDescription,
    [ABILITY_SERENE_GRACE] = sSereneGraceDescription,
    [ABILITY_SWIFT_SWIM] = sSwiftSwimDescription,
    [ABILITY_CHLOROPHYLL] = sChlorophyllDescription,
    [ABILITY_ILLUMINATE] = sIlluminateDescription,
    [ABILITY_TRACE] = sTraceDescription,
    [ABILITY_HUGE_POWER] = sHugePowerDescription,
    [ABILITY_POISON_POINT] = sPoisonPointDescription,
    [ABILITY_INNER_FOCUS] = sInnerFocusDescription,
    [ABILITY_MAGMA_ARMOR] = sMagmaArmorDescription,
    [ABILITY_WATER_VEIL] = sWaterVeilDescription,
    [ABILITY_MAGNET_PULL] = sMagnetPullDescription,
    [ABILITY_SOUNDPROOF] = sSoundproofDescription,
    [ABILITY_RAIN_DISH] = sRainDishDescription,
    [ABILITY_SAND_STREAM] = sSandStreamDescription,
    [ABILITY_PRESSURE] = sPressureDescription,
    [ABILITY_THICK_FAT] = sThickFatDescription,
    [ABILITY_EARLY_BIRD] = sEarlyBirdDescription,
    [ABILITY_FLAME_BODY] = sFlameBodyDescription,
    [ABILITY_RUN_AWAY] = sRunAwayDescription,
    [ABILITY_KEEN_EYE] = sKeenEyeDescription,
    [ABILITY_HYPER_CUTTER] = sHyperCutterDescription,
    [ABILITY_PICKUP] = sPickupDescription,
    [ABILITY_TRUANT] = sTruantDescription,
    [ABILITY_HUSTLE] = sHustleDescription,
    [ABILITY_CUTE_CHARM] = sCuteCharmDescription,
    [ABILITY_PLUS] = sPlusDescription,
    [ABILITY_MINUS] = sMinusDescription,
    [ABILITY_FORECAST] = sForecastDescription,
    [ABILITY_STICKY_HOLD] = sStickyHoldDescription,
    [ABILITY_SHED_SKIN] = sShedSkinDescription,
    [ABILITY_GUTS] = sGutsDescription,
    [ABILITY_MARVEL_SCALE] = sMarvelScaleDescription,
    [ABILITY_LIQUID_OOZE] = sLiquidOozeDescription,
    [ABILITY_OVERGROW] = sOvergrowDescription,
    [ABILITY_BLAZE] = sBlazeDescription,
    [ABILITY_TORRENT] = sTorrentDescription,
    [ABILITY_SWARM] = sSwarmDescription,
    [ABILITY_ROCK_HEAD] = sRockHeadDescription,
    [ABILITY_DROUGHT] = sDroughtDescription,
    [ABILITY_ARENA_TRAP] = sArenaTrapDescription,
    [ABILITY_VITAL_SPIRIT] = sVitalSpiritDescription,
    [ABILITY_WHITE_SMOKE] = sWhiteSmokeDescription,
    [ABILITY_PURE_POWER] = sPurePowerDescription,
    [ABILITY_SHELL_ARMOR] = sShellArmorDescription,
    [ABILITY_CACOPHONY] = sCacophonyDescription,
    [ABILITY_AIR_LOCK] = sAirLockDescription,
};
