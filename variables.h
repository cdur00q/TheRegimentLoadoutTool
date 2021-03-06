#ifndef VARIABLES_H
#define VARIABLES_H

#include <string>
#include <array>

const std::string sasGame("..\\SASGame.u");
const std::string sasChars("..\\SASChars.u");

const std::string none{"SASWeapons.Non_Wpn"}; // 18
const std::string m60{"SASWeapons.M60_Wpn"}; // 18
const std::string uzi{"SASWeapons.Uzi_Wpn"}; // 18
const std::string ak47{"SASWeapons.AK47_Wpn"}; // 19
const std::string m4a1{"SASWeapons.M4A1_Wpn"}; // 19
const std::string ak74{"SASWeapons.AK_74_Wpn"}; // 20
const std::string g3sg1{"SASWeapons.G3SG1_Wpn"}; // 20
const std::string mac11{"SASWeapons.MAC11_Wpn"}; // 20
const std::string socom{"SASWeapons.SOCOM_Wpn"}; // 20
const std::string m1100{"SASWeapons.M1100_Wpn"}; // 20
const std::string mp5{"SASWeapons.HK_MP5_Wpn"}; // 21
const std::string m1100t{"SASWeapons.M1100T_Wpn"}; // 21
const std::string mp5k{"SASWeapons.HK_MP5K_Wpn"}; // 22
const std::string sigswat{"SASWeapons.SIGSWAT_Wpn"}; // 22
const std::string p226{"SASWeapons.Sigp226_Wpn"}; // 22
const std::string mp5sd{"SASWeapons.HK_MP5_SD_Wpn"}; // 24
const std::string aug{"SASWeapons.Steyr_AUG_Wpn"}; // 24
const std::string m9{"SASWeapons.Beretta_m9_Wpn"}; // 25
const std::string knife{"SASWeapons.CombatKnife_Wpn"}; // 26
const std::string flash{"SASWeapons.G60_Grenade_Wpn"}; // 26
const std::string mp5lss{"SASWeapons.HK_MP5_LS_S_Wpn"}; // 26
const std::string bda{"SASWeapons.Browning_BDA_Wpn"}; // 27
const std::string mp5klss{"SASWeapons.HK_MP5K_LS_S_Wpn"}; // 27
const std::string frag{"SASWeapons.L2A2_Grenade_Wpn"}; // 27
const std::string mp5sdlss{"SASWeapons.HK_MP5SD_LS_S_Wpn"}; // 28
const std::string gas{"SASWeapons.L13A1_Gas_Grenade_Wpn"}; // 32

// for terrorists
const std::string fragt{"SASWeapons.L2A2_TerrGrenade_Wpn"}; // 31
const std::string molotov{"SASWeapons.Molotov_Cocktail_Wpn"}; // 31

// for training
const std::string mp5training{"SASTraining.HK_MP5_T_Wpn"}; // 24
const std::string mp5empty{"SASWeapons.HK_MP5_Blank_Empty_Wpn"}; // 33

// Note: do not change the order of these as the comboboxes are mapped to this order.
const std::array<std::string, 26> weapons{
    none, m60, uzi, ak47, m4a1, ak74, g3sg1, mac11, socom, m1100, mp5,
    m1100t, mp5k, sigswat, p226, mp5sd, aug, m9, knife, flash, mp5lss,
    bda, mp5klss, frag, mp5sdlss, gas
};

const int terrorPrimariesSize{16};
const std::string terrorPrimaries[terrorPrimariesSize]{
    m60, uzi, ak47, m4a1, ak74, g3sg1, mac11, mp5, m1100t, mp5k, sigswat,
    mp5sd, aug, mp5lss, mp5klss, mp5sdlss
};

const int terrorSecondariesSize{4};
const std::string terrorSecondaries[terrorSecondariesSize]{
    socom, p226, m9, bda
};

const int terrorBothSize{20};
const std::string terrorBoth[terrorBothSize]{
    m60, uzi, ak47, m4a1, ak74, g3sg1, mac11, socom, mp5, m1100t, mp5k,
    sigswat, p226, mp5sd, aug, m9, mp5lss, bda, mp5klss, mp5sdlss
};

struct terroristWeaponSlot
{
    int filePosition;
    int length;
};

// SASGame.u
const terroristWeaponSlot defaultAK47 {0x03126E, 19};

// SASChars.u
const terroristWeaponSlot defaultBDA {0x70E2, 27};

// the weapon slots for terrorists. these are sets of two - the address of the position in the file
// and the length of the entry
const int terrorSlotPrimariesSize{34};
const terroristWeaponSlot terrorSlotPrimaries[terrorSlotPrimariesSize] {
    0x01415C, 19, 0x014455, 19, 0x01474E, 22, 0x014A4A, 20, 0x014D44, 18, // scripted embassy (5)
    0x0153E0, 18, 0x01556D, 20, 0x0156EB, 18, 0x015BAD, 20, 0x015EEB, 21, // embassy (5)
    0x0162DE, 21, 0x016778, 18, 0x0168FF, 21, 0x016A7B, 20, 0x016BF6, 19, 0x016F41, 20, 0x0170CE, 18, // farm (7)
    0x01754B, 22, 0x0176D4, 20, 0x01783C, 24, 0x0179CC, 19, 0x017B3B, 21, 0x017CC9, 20, 0x017E48, 18, 0x017FE4, 18, // parliment (8)
    0x01859A, 24, 0x01887E, 18, 0x0189E3, 21, 0x018B67, 20, 0x018D0F, 18, 0x01902B, 24, 0x0191C1, 18, 0x019351, 20, 0x0194E3, 20 // metro (9)
};

const int terrorSlotSecondariesSize{31};
const terroristWeaponSlot terrorSlotSecondaries[terrorSlotSecondariesSize] {
    0xDAC7, 22, // sig pistol used by 1 enemy at end of farm 2 (1)
    0x014175, 27, 0x01446E, 27, 0x01476A, 27, 0x014A64, 27, 0x014D5C, 27, // scripted embassy (5)
    0x015240, 25, 0x015A1F, 22, 0x015D4E, 20, // embassy (3)
    0x0162F9, 25, 0x016487, 25, 0x016C0F, 25, 0x016DBB, 20, 0x016F5B, 25, 0x0170E6, 25, // farm (6)
    0x0173F5, 25, 0x017567, 25, 0x01785A, 25, 0x0179E5, 25, 0x017B56, 25, 0x017E60, 25, // parliment (6)
    0x018445, 25, 0x018706, 20, 0x0189FE, 25, 0x018B81, 25, 0x018D27, 25, 0x018EB3, 25, 0x019049, 25, 0x0191D9, 25, 0x01936B, 25, 0x0194FD, 25 // metro (10)
};

// terrorists primary slots plus secondary slots in one array
const int terrorSlotBothSize{65};
const terroristWeaponSlot terrorSlotBoth[terrorSlotBothSize] {
    0x01415C, 19, 0x014455, 19, 0x01474E, 22, 0x014A4A, 20, 0x014D44, 18, // scripted embassy (5)
    0x0153E0, 18, 0x01556D, 20, 0x0156EB, 18, 0x015BAD, 20, 0x015EEB, 21, // embassy (5)
    0x0162DE, 21, 0x016778, 18, 0x0168FF, 21, 0x016A7B, 20, 0x016BF6, 19, 0x016F41, 20, 0x0170CE, 18, // farm (7)
    0x01754B, 22, 0x0176D4, 20, 0x01783C, 24, 0x0179CC, 19, 0x017B3B, 21, 0x017CC9, 20, 0x017E48, 18, 0x017FE4, 18, // parliment (8)
    0x01859A, 24, 0x01887E, 18, 0x0189E3, 21, 0x018B67, 20, 0x018D0F, 18, 0x01902B, 24, 0x0191C1, 18, 0x019351, 20, 0x0194E3, 20, // metro (9)

    0xDAC7, 22, // sig pistol used by 1 enemy at end of farm 2 (1)
    0x014175, 27, 0x01446E, 27, 0x01476A, 27, 0x014A64, 27, 0x014D5C, 27, // scripted embassy (5)
    0x015240, 25, 0x015A1F, 22, 0x015D4E, 20, // embassy (3)
    0x0162F9, 25, 0x016487, 25, 0x016C0F, 25, 0x016DBB, 20, 0x016F5B, 25, 0x0170E6, 25, // farm (6)
    0x0173F5, 25, 0x017567, 25, 0x01785A, 25, 0x0179E5, 25, 0x017B56, 25, 0x017E60, 25, // parliment (6)
    0x018445, 25, 0x018706, 20, 0x0189FE, 25, 0x018B81, 25, 0x018D27, 25, 0x018EB3, 25, 0x019049, 25, 0x0191D9, 25, 0x01936B, 25, 0x0194FD, 25 // metro (10)
};

enum class AssignmentResult{
    SUCCESS,
    INVALIDADDRESS,
    VALUETOOLARGE,
    FILESTREAMERROR
};

#endif // VARIABLES_H
