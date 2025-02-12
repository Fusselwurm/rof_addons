#define _ARMA_

class CfgPatches
{
    class rof_patch_mbg
    {
        name = "Republic of Folk - MBG M16 Patch";
        units[] = {};
        requiredVersion = 1.88;
        requiredAddons[] = {"cba_main", "mbg_m16a2", "rhsusf_c_weapons"};
        author = "Republic of Folk";
        authors[] = {"Republic of Folk"};
        version = "0.0.2";
        versionStr = "0.0.2";
        versionAr[] = {0,0,2};
    };
};

class CfgMagazines
{
    class rhs_mag_20Rnd_556x45_M855A1_Stanag;
    class rhs_mag_30Rnd_556x45_M855A1_Stanag;
    class mbg_mag_20Rnd_556x45_M855A1_Stanag : rhs_mag_30Rnd_556x45_M855A1_Stanag {
        scope = 1;
    };
    class rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Green: rhs_mag_20Rnd_556x45_M855A1_Stanag
    {
        author = "Republic of Folk";
        displayName = "5.56mm M885A1 20Rnd Mag (Tracer Green)";
        picture = "\rof_addons\rof_patch_mbg\data\ui\picture_mbg_stanag_mag_20rnd_green";
        ammo="rhs_ammo_556x45_M855A1_Ball_Green";
        tracersEvery=1;
    };
    class rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Red: rhs_mag_20Rnd_556x45_M855A1_Stanag
    {
        author = "Republic of Folk";
        displayName = "5.56mm M885A1 20Rnd Mag (Tracer Red)";
        picture = "\rof_addons\rof_patch_mbg\data\ui\picture_mbg_stanag_mag_20rnd_red";
        ammo="rhs_ammo_556x45_M855A1_Ball_Red";
        tracersEvery=1;
    };
    class rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Yellow: rhs_mag_20Rnd_556x45_M855A1_Stanag
    {
        author = "Republic of Folk";
        displayName = "5.56mm M885A1 20Rnd Mag (Tracer Yellow)";
        picture = "\rof_addons\rof_patch_mbg\data\ui\picture_mbg_stanag_mag_20rnd_yellow";
        ammo="rhs_ammo_556x45_M855A1_Ball_Yellow";
        tracersEvery=1;
    };
};

class CfgMagazineWells {
    class CBA_556x45_STANAG {
        mbg_magazines[] = {
            "rhs_mag_20Rnd_556x45_M855A1_Stanag",
            "mbg_mag_20Rnd_556x45_M855A1_Stanag",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Yellow"
        };
    };
    class CBA_556x45_STANAG_SHORT {
        mbg_magazines[] = {
            "rhs_mag_20Rnd_556x45_M855A1_Stanag",
            "mbg_mag_20Rnd_556x45_M855A1_Stanag",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Yellow"
        };
    };
};

class CfgWeapons {
    class rhs_weap_m16a4;
    class mbg_m16a1: rhs_weap_m16a4 {
        magazines[] = {
            "rhs_mag_20Rnd_556x45_M855A1_Stanag",
            "mbg_mag_20Rnd_556x45_M855A1_Stanag",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Green",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Red",
            "rof_mag_20Rnd_556x45_M855A1_Stanag_Tracer_Yellow"
        };
        magazineWell[] = {"CBA_556x45_STANAG_SHORT"};
    };
    class mbg_m16a2: rhs_weap_m16a4 {
        magazineWell[] = {"CBA_556x45_STANAG"};
    };
};