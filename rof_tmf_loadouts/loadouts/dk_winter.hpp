// in case of fire, tell Bear

class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] = {"gm_dk_army_uniform_soldier_84_win"};
    vest[] = {"gm_ge_army_vest_80_belt"};
    backpack[] = {};
    headgear[] = {"gm_ge_headgear_winterhat_80_oli"};
    goggles[] = {
        "","","","","","","","","","","",
        "","","","","","","","","","","",
        "G_Spectacles","G_Squares_Tinted","G_Squares","G_Spectacles_Tinted"
    };
    hmd[] = {};
    // Leave empty to remove all. "Default" > leave original item.

    // All randomized
    primaryWeapon[] = {};
    scope[] = {};
    bipod[] = {};
    attachment[] = {};
    silencer[] = {};
    // Leave empty to remove all. "Default" for primaryWeapon > leave original weapon.

    // Only *Weapons[] arrays are randomized
    secondaryWeapon[] = {};
    secondaryAttachments[] = {};
    sidearmWeapon[] = {};
    sidearmAttachments[] = {};
    // Leave empty to remove all. "Default" for secondaryWeapon or sidearmWeapon > leave original weapon.

    // These are added to the uniform or vest
    magazines[] = {};
    items[] =
    {
        LIST_4("ACE_fieldDressing"),
        LIST_2("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
    // These are added directly into their respective slots
    linkedItems[] = {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "gm_watch_kosei_80"
    };

    // These are put into the backpack
    backpackItems[] = {};

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
    traits[] = {};
};
class r_light : baseMan
{
    displayName = "Rifleman (light)";
    vest[] = {"gm_dk_army_vest_54_rifleman"};
    headgear[] =  {
        "gm_dk_headgear_m52_net_win"
    };
    primaryWeapon[] = {"gm_g3a3_blk"};
    magazines[] =
    {
        LIST_6("gm_20Rnd_762x51mm_B_DM41_g3_blk"),
        LIST_1("SmokeShell")
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
};
class r : r_light
{
    displayName = "Rifleman";
    magazines[] +=
    {
        LIST_3("gm_20Rnd_762x51mm_B_DM41_g3_blk"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_1rnd_67mm_heat_dm22a1_g3")
    };
    items[] += {
        "ACE_EntrenchingTool"
    };
};
class g : r
{
    displayName = "Grenadier";
};
class car : r_light
{
    displayName = "Carabinier";
    primaryWeapon[] = {"gm_g3a4_blk"};
};
class m : r_light
{
    displayName = "Medic";
    traits[] += {"medic"};
    vest[] = {"gm_ge_army_vest_80_medic"};
    backpack[] = {"gm_ge_backpack_satchel_80_san"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_6("ACE_bloodIV_500")
    };
    items[] = {};
};
class smg : r_light
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"gm_mp2a1_blk"};
    magazines[] = {
        LIST_7("gm_32Rnd_9x19mm_B_DM11_mp2_blk"),
        LIST_2("gm_handgrenade_frag_dm51a1")
    };
};
class ftl : r_light
{
    displayName = "Fireteam Leader";
    linkedItems[] += {
        "gm_ferod16_oli"
    };
};
class sl : ftl
{
    displayName = "Squad Leader";
    headgear[] = {"gm_ge_headgear_beret_crew_grn"};
    vest[] = {"gm_ge_army_vest_80_leader"};
    items[] += {
        "ACE_Maptools"
    };
};
class co : smg
{
    displayName = "Platoon Leader";
    headgear[] = {"gm_ge_headgear_beret_grn"};
    uniform[] = {"gm_dk_army_uniform_soldier_84_win"};
    sidearmWeapon[] = {"gm_p1_blk"};
    vest[] = {"gm_ge_army_vest_80_leader"};
    magazines[] +=
    {
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk")
    };
    Items[] += {
        "ACE_Maptools",
        "ZSN_Whistle"
    };
    linkedItems[] += {
        "gm_ferod16_oli"
    };
};
class fac : r_light
{
    displayName = "Forward Air Controller";
    headgear[] = {"gm_ge_headgear_headset_crew_oli"};
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    linkedItems[] += {"gm_ferod16_oli"};
    Items[] += {
        "ACE_Maptools"
    };
};
class ar : r_light
{
    displayName = "Machinegunner";
    vest[] = {"gm_dk_army_vest_54_machinegunner"};
    primaryWeapon[] = {"gm_mg3_blk"};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] =
    {
        LIST_4("gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn"),
        LIST_1("SmokeShell"),
        LIST_1("gm_handgrenade_frag_dm51a1"),
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk")
    };
};
class aar : r
{
    displayName = "Assistant Machinegunner";
    backPack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] =
    {
        LIST_3("gm_120Rnd_762x51mm_B_T_DM21A1_mg3_grn")
    };
    linkedItems[] += {
        "gm_ferod16_oli"
    };
};
class rat : r_light
{
    displayName = "Anti-Tank Specialist (PzF44-2)";
    secondaryWeapon[] = {"gm_pzf44_2_oli"};
    secondaryMagazine[] = {"gm_1Rnd_44x537mm_heat_dm32_pzf44_2"};
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    magazines[] += {LIST_4("gm_1Rnd_44x537mm_heat_dm32_pzf44_2")};
};
class dm : r_light
{
    displayName = "Designated Marksman";
    scope[] = {"gm_feroz24_blk"};
};
class mmgg : ar
{
    displayName = "MMG Gunner";
};
class mmgac : aar
{
    displayName = "MMG Ammo Carrier";
    backpackItems[] += {"ACE_Tripod"};
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] += {"gm_ferod16_oli"};
    Items[] += {"ACE_Maptools"};
};
class hmgg : r_light
{
    displayName = "HMG Gunner";
    backPack[] = {"RHS_M2_Gun_Bag"};
    attachment[] = {};
    bipod[] = {};
};
class hmgac : r_light
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"RHS_M2_Gun_Bag"};
    attachment[] = {};
    bipod[] = {};
};
class hmgag : r_light
{
    displayName = "HMG Assistant Gunner";
    backPack[] = {"RHS_M2_Tripod_Bag"};
    linkedItems[] += {"gm_ferod16_oli"};
    Items[] += {"ACE_Maptools"};
};
class matg : r_light
{
    displayName = "MAT Gunner (PzF84)";
    secondaryWeapon[] = {"gm_pzf84_oli"};
    secondaryMagazine[] = {"gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf"};
    secondaryAttachments[] = {"gm_feroz2x17_pzf84_blk"};
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    backpackItems[] =
    {
        LIST_2("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class matac : r_light
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class matag : r_light
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] += {"gm_ferod16_oli"};
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    backpackItems[] =
    {
        LIST_3("gm_1Rnd_84x245mm_heat_t_DM22_carlgustaf")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner (Milan)";
    backPack[] = {"gm_milan_launcher_weaponBag"};
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    linkedItems[] += {"gm_ferod16_oli"};
    Items[] += {"ACE_Maptools"};
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    backPack[] = {"I_Mortar_01_weapon_F"};
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_Maptools"
    };
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] += {"gm_ferod16_oli"};
    items[] += {
        "ACE_RangeTable_82mm",
        "ACE_Maptools"
    };
};
class samg : r_light
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"rhs_weap_fim92"};
    secondaryMagazine[] = {"rhs_fim92_mag"};
    backpack[] = {"gm_ge_backpack_satchel_80_blk"};
    backpackItems[] = {LIST_1("rhs_fim92_mag")};
    linkedItems[] += {"gm_ferod16_oli"};
    items[] += {"ACE_Maptools"};
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    backpack[] = {"gm_ge_backpack_satchel_80_blk"};
    backpackItems[] = {LIST_1("rhs_fim92_mag")};
};
class sn : dm
{
    displayName = "Sniper";
    traits[] += {"camouflageCoef"};
    headgear[] = {"gm_ge_headgear_winterhat_80_oli"};
    primaryWeapon[] = {"rhs_weap_m24sws"};
    scope[] = {"rhsusf_acc_LEUPOLDMK4_wd"};
    silencer[] = {"rhsusf_acc_m24_muzzlehider_wd"};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] = {
        LIST_12("rhsusf_5Rnd_762x51_m993_Mag"),
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk"),
        LIST_1("SmokeShell")
    };
    linkedItems[] += {"rhs_pdu4"};
    items[] += {"ACE_Maptools"};
};
class sp : r_light
{
    displayName = "Spotter";
    traits[] += {"camouflageCoef"};
    headgear[] = {"gm_ge_headgear_winterhat_80_oli"};
    linkedItems[] += {"rhsusf_bino_lerca_1200_tan"};
    items[] += {"ACE_Maptools","ACE_SpottingScope"};
};
class vc : smg
{
    displayName = "Vehicle Commander";
    uniform[] = {"gm_dk_army_uniform_soldier_84_oli"};
    headgear[] = {"gm_ge_headgear_beret_crew_blk"};
    vest[] = {"gm_dk_army_vest_54_crew"};
    linkedItems[] += {"gm_ferod16_oli"};
    items[] += {"ACE_Maptools"};
};
class vd : smg
{
    displayName = "Vehicle Driver";
    uniform[] = {"gm_dk_army_uniform_soldier_84_oli"};
    traits[] += {"engineer"};
    headgear[] = {"gm_ge_headgear_crewhat_80_blk", "gm_ge_headgear_headset_crew_oli"};
    vest[] = {"gm_dk_army_vest_54_crew"};
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    backpackItems[] = {"ToolKit"};
};
class vg : smg
{
    displayName = "Vehicle Gunner";
    uniform[] = {"gm_dk_army_uniform_soldier_84_oli"};
    headgear[] = {"gm_ge_headgear_crewhat_80_blk", "gm_ge_headgear_headset_crew_oli"};
    vest[] = {"gm_dk_army_vest_54_crew"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"gm_dk_army_uniform_soldier_84_oli"};
    headgear[] = {"gm_ge_headgear_headset_crew_oli"};
    vest[] = {"gm_dk_army_vest_54_crew"};
};
class pcc : smg
{
    displayName = "Helicopter Crew Chief";
    uniform[] = {"gm_dk_army_uniform_soldier_84_oli"};
    traits[] += {"engineer"};
    headgear[] = {"gm_ge_headgear_headset_crew_oli"};
    vest[] = {"gm_dk_army_vest_54_crew"};
    backPack[] = {"gm_ge_backpack_satchel_80_blk"};
    backpackItems[] = {"ToolKit"};
};
class pc : smg
{
    displayName = "Helicopter Crew";
    uniform[] = {"gm_dk_army_uniform_soldier_84_oli"};
    headgear[] = {"gm_ge_headgear_headset_crew_oli"};
    vest[] = {"gm_dk_army_vest_54_crew"};
};
class jp : baseMan
{
    displayName = "Jet pilot";
    uniform[] = {"gm_dk_army_uniform_soldier_84_oli"};
    backpack[] = {"ACE_NonSteerableParachute"};
    headgear[] = {"rhs_zsh7a","rhs_zsh7a_alt"};
    vest[] = {"gm_ge_army_vest_80_officer"};
    goggles[] = {};
    primaryWeapon[] = {};
    sidearmWeapon[] = {"gm_p1_blk"};
    magazines[] = {
        LIST_2("gm_8Rnd_9x19mm_B_DM11_p1_blk"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellRed")
    };
};
class eng : r_light
{
    displayName = "Combat Engineer (Explosives)";
    traits[] += {"explosiveSpecialist"};
    vest[] = {"gm_ge_army_vest_80_demolition"};
    backPack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] = {
        LIST_4("rhsusf_m112_mag"),
        LIST_1("rhsusf_m112x4_mag")
    };
    items[] += {
        "ACE_wirecutter",
        "ACE_Clacker",
        "ACE_DefusalKit"
    };
};
class engm : r_light
{
    displayName = "Combat Engineer (Mines)";
    traits[] += {"explosiveSpecialist"};
    backPack[] = {"gm_dk_army_backpack_73_oli"};
    backpackItems[] = {LIST_3("ATMine_Range_Mag")};
    items[] += {
        "ACE_wirecutter",
        "ACE_DefusalKit"
    };
};
class UAV_light : r_light
{
    displayName = "UAV Operator (no drone)";
};
class UAV : UAV_light
{
    displayName = "UAV Operator";
};