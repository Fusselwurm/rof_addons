class baseMan {// Weaponless baseclass
    displayName = "Unarmed";
    // All randomized.
    uniform[] =
    {
        "U_I_CombatUniform","U_I_CombatUniform",
        "U_I_CombatUniform_shortsleeve"
    };
    vest[] = {};
    backpack[] = {};
    headgear[] =
    {
        "","","","",
        "H_Booniehat_dgtl","H_Cap_blk_Raven","H_MilCap_dgtl"
    };
    goggles[] = 
    {
        "","","","","","",
        "G_Aviator","G_Shades_Black","G_Shades_Blue","G_Shades_Green","G_Shades_Red","G_Spectacles",
        "G_Squares","G_Squares_Tinted","G_Spectacles_Tinted","G_Lowprofile","G_Lowprofile"
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
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine"),
        LIST_2("ACE_CableTie"),
        LIST_1("ACE_Earplugs")
    };
    // These are added directly into their respective slots
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch"
    };

    // These are put into the backpack
    backpackItems[] = {

    };

    // This is executed after unit init is complete. argument: _this = _unit.
    code = "if (random 1 < 0.5) then { _this addItem 'murshun_cigs_cigpack'; _this addItem 'murshun_cigs_matches'};";
};
class r : baseMan
{
    displayName = "Rifleman";
    headgear[] = {"H_HelmetIA"};
    hmd[] = {"NVGoggles_INDEP"};
    vest[] = {"V_PlateCarrierIA1_dgtl"};
    primaryWeapon[] =
    {
        "arifle_Mk20_F"
    };
    scope[] = {"optic_aco_grn"};
    attachment[] = {"acc_pointer_ir"};
    sidearmWeapon[] = {"hgun_ACPC2_F"};
    magazines[] =
    {
        LIST_8("30Rnd_556x45_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_1("ACE_M84"),
        LIST_3("9Rnd_45ACP_Mag")
    };
};
class r_light : r
{
    displayName = "Rifleman (Light)";
    vest[] = {"V_Chestrig_oli"};
    headgear[] = {"H_MilCap_dgtl"};
    attachment[] = {};
};
class g : r
{
    displayName = "Grenadier";
    primaryWeapon[] = {"arifle_Mk20_GL_F"};
    vest[] = {"V_PlateCarrierIAGL_dgtl"};
    backPack[] = {"B_AssaultPack_dgtl"};
    magazines[] =
    {
        LIST_7("30Rnd_556x45_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_4("3Rnd_HE_Grenade_shell"),
        LIST_2("3Rnd_Smoke_Grenade_shell"),
        LIST_1("3Rnd_UGL_FlareCIR_F"),
        LIST_2("ACE_HuntIR_M203"),
        LIST_3("9Rnd_45ACP_Mag")
    };
    items[] += {"ACE_HuntIR_monitor"};
};
class car : r
{
    displayName = "Carabinier";
    primaryWeapon[] = {"arifle_Mk20C_F"};
};
class m : r 
{
    displayName = "Medic";
    vest[] = {"V_PlateCarrierIA2_dgtl"};
    scope[] = {};
    backpack[] = {"B_FieldPack_oli"};
    backpackItems[] = {
        LIST_20("ACE_fieldDressing"),
        LIST_15("ACE_fieldDressing"),
        LIST_10("ACE_morphine"),
        LIST_10("ACE_epinephrine"),
        LIST_4("ACE_bloodIV_250"),
        LIST_2("ACE_bloodIV_500"),
        LIST_1("ACE_bloodIV")
    };
    magazines[] += {LIST_2("SmokeShell")};
};
class smg : r_light
{
    displayName = "Submachinegunner";
    primaryWeapon[] = {"SMG_03C_camo"};
    magazines[] =
    {
        LIST_7("50Rnd_570x28_SMG_03"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("9Rnd_45ACP_Mag")
    };
};
class ftl : r
{
    displayName = "Fireteam Leader";
    primaryWeapon[] = {"arifle_Mk20_GL_F"};
    vest[] = {"V_PlateCarrierIAGL_dgtl"};
    backPack[] = {"B_AssaultPack_dgtl"};
    scope[] = {"optic_hamr"};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Yellow"),
        LIST_1("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellOrange"),
        LIST_1("SmokeShellBlue"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_1("I_IR_Grenade"),
        LIST_4("1Rnd_HE_Grenade_shell"),
        LIST_3("1Rnd_Smoke_Grenade_shell"),
        LIST_1("1Rnd_SmokeGreen_Grenade_Shell"),
        LIST_1("UGL_FlareCIR_F"),
        LIST_3("9Rnd_45ACP_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Binocular",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class sl : r
{
    displayName = "Squad Leader";
    vest[] = {"V_PlateCarrierIA2_dgtl"};
    backPack[] = {"B_AssaultPack_dgtl"};
    scope[] = {"optic_mrco"};
    sidearmAttachments[] = {"acc_flashlight_pistol"};
    magazines[] =
    {
        LIST_6("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Yellow"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_1("SmokeShellOrange"),
        LIST_1("SmokeShellBlue"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_1("I_IR_Grenade"),
        LIST_3("9Rnd_45ACP_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class rto: r
{
    displayName = "Radio Operator";
    // backPack[] = {"B_RadioBag_01_digi_F"};
};
class co : sl
{
    displayName = "Platoon Leader";
    headgear[] = {"H_MilCap_dgtl"};
};
class fac : r_light
{
    displayName = "Forward Air Controller";
    // backPack[] = {"B_RadioBag_01_aaf_F"};
    primaryWeapon[] = {"arifle_Mk20_GL_F"};
    sidearmWeapon[] = {};
    scope[] = {};
    attachment[] = {"acc_pointer_ir"};
    magazines[] =
    {
        LIST_5("30Rnd_556x45_Stanag"),
        LIST_2("30Rnd_556x45_Stanag_Tracer_Yellow"),
        LIST_1("MiniGrenade"),
        LIST_1("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("1Rnd_HE_Grenade_shell"),
        LIST_2("1Rnd_SmokeOrange_Grenade_Shell"),
        LIST_2("1Rnd_SmokePurple_Grenade_Shell"),
        LIST_2("1Rnd_SmokeRed_Grenade_Shell"),
        LIST_2("1Rnd_SmokeYellow_Grenade_Shell")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Laserdesignator",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools"};
};
class ar : r
{
    displayName = "Automatic Rifleman";
    vest[] = {"V_PlateCarrierIA2_dgtl"};
    backPack[] = {"B_AssaultPack_dgtl"};
    primaryWeapon[] = {"LMG_Mk200_F"};
    scope[] = {};
    bipod[] = {"bipod_03_f_blk"};
    magazines[] =
    {
        LIST_3("200Rnd_65x39_cased_Box"),
        LIST_1("200Rnd_65x39_cased_Box"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("9Rnd_45ACP_Mag")
    };
};
class aar : r
{
    displayName = "Assistant Automatic Rifleman";
    backPack[] = {"B_AssaultPack_dgtl"};
    backpackItems[] =
    {
        LIST_2("200Rnd_65x39_cased_Box"),
        LIST_1("200Rnd_65x39_cased_Box")
    };
    linkedItems[] += {"Binocular"};
};
class rat : r
{
    displayName = "Rifleman (AT)";
    secondaryWeapon[] = {"launch_NLAW_F"};
};
class dm : r
{
    displayName = "Designated Marksman";
    backPack[] = {"B_AssaultPack_dgtl"};
    primaryWeapon[] = {"srifle_EBR_F"};
    scope[] = {"optic_mrco"};
    bipod[] = {"bipod_03_f_blk"};
    magazines[] =
    {
        LIST_7("20Rnd_762x51_Mag"),
        LIST_1("ACE_20Rnd_762x51_Mag_tracer_yellow"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("9Rnd_45ACP_Mag")
    };
};
class mmgg : ar
{
    displayName = "MMG Gunner [DLC]";
    primaryWeapon[] = {"gm_mg3_blk"};
    magazines[] =
    {
        LIST_5("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("9Rnd_45ACP_Mag")
    };
};
class mmgac : r
{
    displayName = "MMG Ammo Carrier";
    backPack[] = {"B_TacticalPack_oli"};
    backpackItems[] =
    {
        LIST_7("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn"),
        LIST_1("ACE_Tripod")
    };
};
class mmgag : aar
{
    displayName = "MMG Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_TacticalPack_oli"};
    backpackItems[] =
    {
        LIST_7("gm_120Rnd_762x51mm_B_T_DM21A2_mg3_grn"),
        LIST_1("ACE_SpottingScope")
    };
};
class hmgg : car
{
    displayName = "HMG Gunner";
    vest[] = {"V_Chestrig_oli"};
    backPack[] = {"I_HMG_01_weapon_F"};

};
class hmgac : hmgg
{
    displayName = "HMG Ammo Carrier";
    backPack[] = {"I_HMG_01_high_weapon_F"};
};
class gmgg : hmgg
{
    displayName = "GMG Gunner";
    backPack[] = {"I_GMG_01_weapon_F"};
};
class gmgac : hmgg
{
    displayName = "GMG Ammo Carrier";
    backPack[] = {"I_GMG_01_high_weapon_F"};
};
class hmgag : hmgg
{
    displayName = "HMG/GMG Assistant Gunner";
    backPack[] = {"I_HMG_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class matg : car
{
    displayName = "MAT Gunner";
    secondaryWeapon[] = {"launch_MRAWS_olive_rail_F"};
    backPack[] = {"B_FieldPack_oli"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matac : r
{
    displayName = "MAT Ammo Carrier";
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class matag : r
{
    displayName = "MAT Assistant Gunner";
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("MRAWS_HEAT_F"),
        LIST_2("MRAWS_HE_F")
    };
};
class hatg : r_light
{
    displayName = "HAT Gunner";
    headgear[] = {"H_HelmetIA"};
    backPack[] = {"B_Kitbag_sgg"};
    secondaryWeapon[] = {"launch_I_Titan_short_F"};
    backpackItems[] +=
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
};
class hatac : r_light
{
    displayName = "HAT Ammo Carrier";
    headgear[] = {"H_HelmetIA"};
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        LIST_2("Titan_AP")
    };
};
class hatag : r_light
{
    displayName = "HAT Assistant Gunner";
    headgear[] = {"H_HelmetIA"};
    backPack[] = {"B_Kitbag_sgg"};
    backpackItems[] =
    {
        LIST_2("Titan_AT"),
        "Titan_AP"
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
};
class mtrg : r_light
{
    displayName = "Mortar Gunner";
    headgear[] = {"H_HelmetIA"};
    backPack[] = {"I_Mortar_01_weapon_F"};
    primaryWeapon[] = {"arifle_Mk20C_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class mtrac : r_light
{
    displayName = "Mortar Ammo Carrier";
    headgear[] = {"H_HelmetIA"};
    backPack[] = {"I_Mortar_01_weapon_F"};
};
class mtrag : r_light
{
    displayName = "Mortar Assistant Gunner";
    headgear[] = {"H_HelmetIA"};
    backPack[] = {"I_Mortar_01_support_F"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    items[] += {"ACE_MapTools","ACE_RangeTable_82mm"};
};
class samg : car
{
    displayName = "AA Missile Specialist";
    secondaryWeapon[] = {"launch_I_Titan_F"};
    backPack[] = {"B_FieldPack_oli"};
    magazines[] += {"Titan_AA"};
    backpackItems[] = {"Titan_AA"};
};
class samag : r_light
{
    displayName = "AA Assistant Missile Specialist";
    headgear[] = {"H_HelmetIA"};
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backPack[] = {"B_Carryall_oli"};
    backpackItems[] +=
    {
        LIST_3("Titan_AA")
    };
};
class sn : r
{
displayName = "Sniper";
    uniform[] = {"U_I_FullGhillie_sard"};
    headgear[] = {};
    goggles[] = {"default"};
    primaryWeapon[] = {"rhs_weap_XM2010_sa"};
    scope[] = {"rhsusf_acc_leupoldmk4_2"};
    silencer[] = {"rhsusf_acc_m2010s_sa"};
    bipod[] = {"bipod_03_f_oli"};
    magazines[] =
    {
        LIST_12("rhsusf_5Rnd_300winmag_xm2010"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("9Rnd_45ACP_Mag")
    };
};
class sp : sn
{
    displayName = "Spotter [DLC]";
    headgear[] = {};
    backpack[] = {"B_AssaultPack_dgtl"};
    primaryWeapon[] = 
    {
        "srifle_DMR_03_F",
        "srifle_EBR_F"
    };
    scope[] = {"optic_mrco"};
    bipod[] = {"bipod_03_f_blk"};
    silencer[] = {"muzzle_snds_b"};
    magazines[] =
    {
        LIST_8("ACE_20Rnd_762x51_Mag_Tracer_Dim"),
        LIST_2("ACE_20Rnd_762x51_Mag_Tracer"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green"),
        LIST_2("ACE_M84"),
        LIST_3("9Rnd_45ACP_Mag")
    };
    linkedItems[] =
    {
        "ItemMap",
        "ItemCompass",
        "ItemRadio",
        "ItemWatch",
        "Rangefinder",
        "ItemGPS"
    };
    backpackItems[] =
    {
        "ACE_Tripod",
        "ACE_SpottingScope"
    };
};
class vc : car
{
    displayName = "Vehicle Commander";
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_oli"};
    backpack[] = {"B_AssaultPack_dgtl"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"Binocular","ItemGPS"};
};
class vd : car
{
    displayName = "Vehicle Driver";
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_oli"};
    backpack[] = {"B_AssaultPack_dgtl"};
    headgear[] = {"H_HelmetCrew_I"};
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class vg : car
{
    displayName = "Vehicle Gunner";
    scope[] = {};
    attachment[] = {};
    vest[] = {"V_BandollierB_oli"};
    backpack[] = {"B_AssaultPack_dgtl"};
    linkedItems[] += {"ItemGPS"};
    headgear[] = {"H_HelmetCrew_I"};
};
class pp : smg
{
    displayName = "Helicopter Pilot";
    uniform[] = {"U_I_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_oli"};
    backPack[] = {};
    headgear[] = {"H_PilotHelmetHeli_I"};
    goggles[] = {};
    primaryWeapon[] = {"hgun_PDW2000_F"};
    scope[] = {"optic_holosight_smg_blk_f"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_6("30Rnd_9x21_Yellow_Mag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
    linkedItems[] += {"ItemGPS"};
};
class pcc : car
{

    displayName = "Helicopter Crew Chief";
    uniform[] = {"U_I_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_oli"};
    backPack[] = {"B_AssaultPack_dgtl"};
    headgear[] = {"H_CrewHelmetHeli_I"};
    scope[] = {};
    goggles[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("30Rnd_556x45_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
    linkedItems[] += {"ItemGPS"};
    backpackItems[] = {"ToolKit"};
};
class pc : car
{
    displayName = "Helicopter Crew";
    uniform[] = {"U_I_HeliPilotCoveralls"};
    vest[] = {"V_TacVest_oli"};
    backPack[] = {};
    headgear[] = {"H_CrewHelmetHeli_I"};
    goggles[] = {};
    scope[] = {};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_5("30Rnd_556x45_Stanag"),
        LIST_2("HandGrenade"),
        LIST_2("SmokeShell"),
        LIST_1("SmokeShellGreen"),
        LIST_2("Chemlight_Green")
    };
    linkedItems[] += {"ItemGPS"};
};
class eng : car
{
    displayName = "Combat Engineer (Explosives)";
    vest[] = {"V_PlateCarrierIAGL_dgtl"};
    magazines[] +=
    {
        LIST_4("ClaymoreDirectionalMine_Remote_Mag")
    };
    attachment[] = {"acc_flashlight"};
    backPack[] = {"B_Carryall_oli"};
    Items[] += {
        "MineDetector",
        "ACE_DefusalKit",
        "ACE_M26_Clacker",
        LIST_3("DemoCharge_Remote_Mag"),
        LIST_2("SLAMDirectionalMine_Wire_Mag")
    };
};
class engm : car
{
    displayName = "Combat Engineer (Mines)";
    vest[] = {"V_PlateCarrierIAGL_dgtl"};
    attachment[] = {"acc_flashlight"};
    items[] +=
    {
        LIST_2("APERSBoundingMine_Range_Mag"),
        LIST_2("APERSTripMine_Wire_Mag"),
        "MineDetector",
        "ACE_DefusalKit",
        LIST_2("ATMine_Range_Mag"),
        "APERSMineDispenser_Mag"
    };
    backPack[] = {"B_Carryall_oli"};
};
class jp : pp
{
    displayName = "Jet Pilot";
    headgear[] = {"H_PilotHelmetFighter_I"};
    hmd[] = {};
    uniform[] = {"U_I_PilotCoveralls"};
    vest[] = {"V_BandollierB_blk"};
    backpack[] = {"B_Parachute"};
    primaryWeapon[] = {"hgun_PDW2000_F"};
    scope[] = {"optic_holosight_smg_blk_f"};
    sidearmWeapon[] = {};
    magazines[] =
    {
        LIST_3("30Rnd_9x21_Yellow_Mag"),
        "SmokeShell",
        "SmokeShellBlue",
        "Chemlight_Green"
    };
    items[] = {
        LIST_10("ACE_fieldDressing"),
        LIST_3("ACE_morphine"),
        LIST_1("ACE_epinephrine")
    };
};
class UAV : r
{
    displayName = "UAV Operator [INDFOR]";
    backpack[] = {"I_UAV_01_backpack_F"};
    linkedItems[] += {"I_UavTerminal"};
};