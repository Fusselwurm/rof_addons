class CAManBase;
class SoldierEB;
class O_Soldier_base_F: SoldierEB
{
    class EventHandlers;
};
class O_medic_F: SoldierEB
{
    class EventHandlers;
};
class O_Soldier_TL_F: SoldierEB
{
    class EventHandlers;
};
class O_crew_F: SoldierEB
{
    class EventHandlers;
};
class O_Soldier_AR_F: SoldierEB
{
    class EventHandlers;
};
class O_Soldier_SL_F: SoldierEB
{
    class EventHandlers;
};
class O_Soldier_GL_F: SoldierEB
{
    class EventHandlers;
};
class O_soldier_M_F: SoldierEB
{
    class EventHandlers;
};
class O_Soldier_support_base_F: SoldierEB
{
    class EventHandlers;
};
class o_soldier_unarmed_f: SoldierEB
{
    class EventHandlers;
};
class O_support_MG_F: SoldierEB
{
    class EventHandlers;
};
class O_Soldier_F: SoldierEB
{
    class EventHandlers;
};
class O_Soldier_AT_F: SoldierEB
{
    class EventHandlers;
};
class O_Soldier_AAT_F: SoldierEB
{
    class EventHandlers;
};
class oksv_wood_rifleman: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_rifleman";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_machinegunne: O_Soldier_AR_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_machinegunne";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "rhs_sidorMG";
    weapons[] = {"rhs_weap_pkm","Throw","Put"};
    magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_medic: O_medic_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_medic";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "rhs_medic_bag_filled";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_officer: O_Soldier_TL_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_officer";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"fieldcap_butan","6B3_RHS_OF","ItemCompass","ItemMap","ItemWatch","Binocular"};
    weapons[] = {"rhs_weap_ak74","rhs_weap_makarov_pm","Throw","Put","Binocular"};
    magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_nspn_red","rhs_mag_rdg2_white"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_crew: O_crew_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_crew";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"rhs_tsh4","NoGlasses","6B3_RHS","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
    weapons[] = {"rhs_weap_aks74u","Throw","Put","Binocular"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_nspd"};
    Items[] = {"FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_tank_crew: O_crew_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_crew";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"rhs_tsh4","NoGlasses","rhs_6sh46","ItemMap","ItemCompass","ItemWatch","ItemRadio","Binocular"};
    weapons[] = {"rhs_weap_aks74u","Throw","Put","Binocular"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_nspd"};
    Items[] = {"FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_serg: O_Soldier_SL_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_serg";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_net","6B3_RHS_RF","ItemCompass","ItemMap","ItemWatch","Binocular"};
    weapons[] = {"rhs_weap_ak74","rhs_weap_rsp30_red","Throw","Binocular"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_driver: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_driver";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"fieldcap_butan","NoGlasses","6B3_RHS","ItemCompass","ItemMap","ItemWatch"};
    weapons[] = {"rhs_weap_aks74u","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_mag_nspd"};
    Items[] = {"FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_gp: O_Soldier_GL_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "Grenadier";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_net","NoGlasses","6B3_RHS_GP","ItemCompass","ItemMap","ItemWatch"};
    weapons[] = {"rhs_weap_ak74_gp25","Throw"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_sniper: O_soldier_M_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_marksman";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_net","NoGlasses","6B3_RHS_SVD","ItemCompass","ItemMap","ItemWatch"};
    weapons[] = {"rhs_weap_svdp_pso1","Throw","Put"};
    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_wns: o_soldier_unarmed_f
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_wns";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"NoGlasses","ItemCompass","ItemWatch"};
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_secnumber: O_support_MG_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_secnumber";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "rhs_sidorMG";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_rpg: O_Soldier_AT_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "$STR_oksv_rifleman_rpg";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "rhs_rpg";
    weapons[] = {"rhs_weap_ak74","rhs_weap_rpg7_pgo","Throw","Put"};
    magazines[] = {"rhs_rpg7_PG7VL_mag","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_rpgassis: O_Soldier_AAT_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "Rifleman (RPG, Assistant)";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "rhs_rpg";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_rpg7_PG7VL_mag","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_fn_nsv: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "NSV-12 First Number";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "RHS_NSV_Gun_Bag";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_sn_nsv: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "NSV-12 Second Number";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "RHS_NSV_Tripod_Bag";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_fn_2b14: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "2B14 First Number";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "RHS_Podnos_Gun_Bag";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_sn_2b14: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "2B14 Second Number";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "RHS_Podnos_Bipod_Bag";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_fn_ags: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "AGS-30 First Number";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "RHS_AGS30_Gun_Bag";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_sn_ags: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "AGS-30 Second Number";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "RHS_AGS30_Tripod_Bag";
    weapons[] = {"rhs_weap_ak74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_aa: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_msv";
    author = "Basher";
    displayName = "AA operator";
    uniformClass = "Butan_M88";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","6B3_RHS_RF","NoGlasses","ItemCompass","ItemWatch"};
    weapons[] = {"rhs_weap_ak74","rhs_weap_igla","Throw","Put"};
    magazines[] = {"rhs_mag_9k38_rocket","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_rifleman_vdv: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_vdv";
    author = "Basher";
    displayName = "$STR_oksv_rifleman";
    uniformClass = "Butan_M88_vdv";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_camo_green","rhs_6b5","NoGlasses","ItemCompass","ItemWatch"};
    weapons[] = {"rhs_weap_aks74","rhs_weap_rpg26","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_officer_vdv: O_Soldier_TL_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_vdv";
    author = "Basher";
    displayName = "$STR_oksv_officer";
    uniformClass = "Butan_M88_vdv";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_net","rhs_6b5_officer","ItemCompass","ItemMap","ItemWatch","Binocular"};
    weapons[] = {"rhs_weap_aks74","rhs_weap_rpg26","rhs_weap_makarov_pm","Throw","Put","Binocular"};
    magazines[] = {"rhs_mag_9x18_8_57N181S","rhs_mag_9x18_8_57N181S","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_nspn_red","rhs_mag_rdg2_white"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_medic_vdv: O_medic_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_vdv";
    author = "Basher";
    displayName = "$STR_oksv_medic";
    uniformClass = "Butan_M88_vdv";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","rhs_6b5","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "rhs_medic_bag_filled";
    weapons[] = {"rhs_weap_aks74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rdg2_white","rhs_mag_rdg2_white"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_sniper_vdv: O_soldier_M_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_vdv";
    author = "Basher";
    displayName = "$STR_oksv_marksman";
    uniformClass = "Butan_M88_vdv";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_camo_green","NoGlasses","rhs_6b5_sniper","ItemCompass","ItemMap","ItemWatch"};
    weapons[] = {"rhs_weap_svdp_pso1","Throw","Put"};
    magazines[] = {"rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_10Rnd_762x54mmR_7N1","rhs_mag_rdg2_white","rhs_mag_rdg2_white","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_secnumber_vdv: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_vdv";
    author = "Basher";
    displayName = "$STR_oksv_secnumber";
    uniformClass = "Butan_M88_vdv";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","rhs_6b5","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "rhs_sidorMG";
    weapons[] = {"rhs_weap_aks74","Throw","Put"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_machinegunne_vdv: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_vdv";
    author = "Basher";
    displayName = "$STR_oksv_machinegunne";
    uniformClass = "Butan_M88_vdv";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_khaki","rhs_6b5","NoGlasses","ItemCompass","ItemWatch"};
    backpack = "rhs_sidorMG";
    weapons[] = {"rhs_weap_pkm","Throw","Put"};
    magazines[] = {"rhs_100Rnd_762x54mmR_green","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5","rhs_mag_rgd5"};
    Items[] = {"FirstAidKit","FirstAidKit"};
    camouflage = 1.2;
    cost = 20000;
};
class oksv_wood_gp_vdv: O_Soldier_F
{
    _generalMacro = "O_Soldier_F";
    scope = 2;
    side = 0;
    scopeCurator = 2;
    faction = "oksv_army_wood";
    editorCategory = "oksv_army_wood_category";
    editorSubcategory = "oksv_army_wood_vdv";
    author = "Basher";
    displayName = "Grenadier";
    uniformClass = "Butan_M88_vdv";
    identitytypes[] = {"LanguageRUS","Head_Russian","Head_Euro"};
    faceType = "Man_A3";
    genericNames = "RussianMen";
    linkedItems[] = {"ssh68_camo_green","NoGlasses","rhs_6b5","ItemCompass","ItemMap","ItemWatch"};
    weapons[] = {"rhs_weap_aks74_gp25","rhs_weap_rpg26","Throw"};
    magazines[] = {"rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK","rhs_30Rnd_545x39_AK_green","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25","rhs_VOG25"};
    camouflage = 1.2;
    cost = 20000;
};