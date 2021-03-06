#ifndef _CUST_BATTERY_METER_TABLE_H
#define _CUST_BATTERY_METER_TABLE_H

#include <mach/mt_typedefs.h>

// ============================================================
// define
// ============================================================
#define BAT_NTC_10 1
#define BAT_NTC_47 0

#if (BAT_NTC_10 == 1)
#define RBAT_PULL_UP_R             16900	
#endif

#if (BAT_NTC_47 == 1)
#define RBAT_PULL_UP_R             61900	
#endif

#define RBAT_PULL_UP_VOLT          1800



// ============================================================
// ENUM
// ============================================================

// ============================================================
// structure
// ============================================================

// ============================================================
// typedef
// ============================================================
typedef struct _BATTERY_PROFILE_STRUC
{
    kal_int32 percentage;
    kal_int32 voltage;
} BATTERY_PROFILE_STRUC, *BATTERY_PROFILE_STRUC_P;

typedef struct _R_PROFILE_STRUC
{
    kal_int32 resistance; // Ohm
    kal_int32 voltage;
} R_PROFILE_STRUC, *R_PROFILE_STRUC_P;

typedef enum
{
    T1_0C,
    T2_25C,
    T3_50C
} PROFILE_TEMPERATURE;

// ============================================================
// External Variables
// ============================================================

// ============================================================
// External function
// ============================================================

// ============================================================
// <DOD, Battery_Voltage> Table
// ============================================================
#if (BAT_NTC_10 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,68237},
        {-15,53650},
        {-10,42506},
        { -5,33892},
        {  0,27219},
        {  5,22021},
        { 10,17926},
        { 15,14674},
        { 20,12081},
        { 25,10000},
        { 30,8315},
        { 35,6948},
        { 40,5834},
        { 45,4917},
        { 50,4161},
        { 55,3535},
        { 60,3014}
    };
#endif

#if (BAT_NTC_47 == 1)
    BATT_TEMPERATURE Batt_Temperature_Table[] = {
        {-20,483954},
        {-15,360850},
        {-10,271697},
        { -5,206463},
        {  0,158214},
        {  5,122259},
        { 10,95227},
        { 15,74730},
        { 20,59065},
        { 25,47000},
        { 30,37643},
        { 35,30334},
        { 40,24591},
        { 45,20048},
        { 50,16433},
        { 55,13539},
        { 60,11210}        
    };
#endif

// T0 -10C
BATTERY_PROFILE_STRUC battery_profile_t0[] =
{
{0,4349},
{1,4325},
{2,4305},
{3,4288},
{4,4272},
{5,4256},
{6,4242},
{7,4227},
{9,4214},
{10,4201},
{11,4188},
{12,4175},
{13,4162},
{14,4149},
{15,4136},
{16,4123},
{17,4111},
{18,4100},
{19,4090},
{20,4081},
{21,4070},
{22,4056},
{23,4039},
{24,4019},
{26,4000},
{27,3983},
{28,3969},
{29,3957},
{30,3947},
{31,3939},
{32,3932},
{33,3925},
{34,3919},
{35,3912},
{36,3905},
{37,3898},
{38,3890},
{39,3883},
{40,3876},
{41,3870},
{43,3863},
{44,3856},
{45,3850},
{46,3844},
{47,3838},
{48,3832},
{49,3826},
{50,3821},
{51,3816},
{52,3811},
{53,3806},
{54,3801},
{55,3797},
{56,3793},
{57,3789},
{58,3786},
{60,3783},
{61,3780},
{62,3777},
{63,3774},
{64,3771},
{65,3769},
{66,3766},
{67,3763},
{68,3760},
{69,3757},
{70,3754},
{71,3751},
{72,3748},
{73,3745},
{74,3742},
{76,3738},
{77,3735},
{78,3732},
{79,3728},
{80,3725},
{81,3721},
{82,3717},
{83,3713},
{84,3708},
{85,3702},
{86,3699},
{87,3696},
{88,3694},
{89,3692},
{90,3690},
{91,3689},
{93,3687},
{94,3685},
{95,3684},
{96,3682},
{97,3680},
{98,3679},
{99,3677},
{100,3676},
{100,3400},
};      
        
// T1 0C 
BATTERY_PROFILE_STRUC battery_profile_t1[] =
{
{0,4353},
{1,4334},
{2,4317},
{3,4302},
{4,4288},
{5,4274},
{6,4261},
{7,4249},
{9,4236},
{10,4224},
{11,4211},
{12,4199},
{13,4188},
{14,4176},
{15,4164},
{16,4152},
{17,4140},
{18,4128},
{19,4116},
{20,4104},
{21,4093},
{22,4083},
{23,4075},
{24,4067},
{26,4055},
{27,4038},
{28,4016},
{29,3995},
{30,3978},
{31,3964},
{32,3953},
{33,3944},
{34,3937},
{35,3931},
{36,3924},
{37,3918},
{38,3911},
{39,3904},
{40,3897},
{41,3890},
{43,3883},
{44,3876},
{45,3870},
{46,3863},
{47,3857},
{48,3851},
{49,3845},
{50,3839},
{51,3834},
{52,3829},
{53,3824},
{54,3819},
{55,3814},
{56,3809},
{57,3805},
{58,3801},
{60,3796},
{61,3792},
{62,3789},
{63,3785},
{64,3782},
{65,3779},
{66,3776},
{67,3773},
{68,3771},
{69,3769},
{70,3766},
{71,3764},
{72,3761},
{73,3759},
{74,3756},
{76,3753},
{77,3749},
{78,3746},
{79,3742},
{80,3739},
{81,3735},
{82,3730},
{83,3725},
{84,3720},
{85,3715},
{86,3711},
{87,3707},
{88,3703},
{89,3699},
{90,3694},
{91,3688},
{93,3679},
{94,3664},
{95,3642},
{96,3612},
{97,3593},
{98,3575},
{99,3560},
{100,3544},
{100,3400},
};           

// T2 25C
BATTERY_PROFILE_STRUC battery_profile_t2[] =
{
{0,4345},
{1,4331},
{2,4317},
{3,4304},
{4,4290},
{5,4278},
{6,4265},
{7,4252},
{9,4240},
{10,4228},
{11,4216},
{12,4204},
{13,4192},
{14,4179},
{15,4168},
{16,4156},
{17,4145},
{18,4133},
{19,4122},
{20,4110},
{21,4099},
{22,4087},
{23,4076},
{24,4068},
{26,4062},
{27,4052},
{28,4036},
{29,4019},
{30,4004},
{31,3992},
{32,3984},
{33,3977},
{34,3970},
{35,3962},
{36,3952},
{37,3941},
{38,3931},
{39,3920},
{40,3910},
{41,3901},
{43,3891},
{44,3884},
{45,3875},
{46,3868},
{47,3862},
{48,3855},
{49,3850},
{50,3843},
{51,3838},
{52,3832},
{53,3828},
{54,3823},
{55,3819},
{56,3814},
{57,3810},
{58,3807},
{60,3802},
{61,3798},
{62,3795},
{63,3792},
{64,3788},
{65,3785},
{66,3782},
{67,3779},
{68,3775},
{69,3771},
{70,3768},
{71,3764},
{72,3759},
{73,3756},
{74,3752},
{76,3748},
{77,3744},
{78,3741},
{79,3737},
{80,3735},
{81,3731},
{82,3726},
{83,3721},
{84,3716},
{85,3712},
{86,3706},
{87,3700},
{88,3692},
{89,3688},
{90,3687},
{91,3686},
{93,3685},
{94,3681},
{95,3672},
{96,3647},
{97,3604},
{98,3549},
{99,3475},
{100,3366},
{100,3145},
};     

// T3 50C
BATTERY_PROFILE_STRUC battery_profile_t3[] =
{
{0,4348},
{1,4333},
{2,4320},
{3,4307},
{4,4294},
{5,4282},
{6,4269},
{7,4257},
{9,4244},
{10,4232},
{11,4220},
{12,4208},
{13,4196},
{14,4184},
{15,4173},
{16,4161},
{17,4149},
{18,4138},
{19,4126},
{20,4115},
{21,4104},
{22,4093},
{23,4082},
{24,4071},
{26,4060},
{27,4050},
{28,4040},
{29,4030},
{30,4020},
{31,4010},
{32,4001},
{33,3991},
{34,3982},
{35,3973},
{36,3963},
{37,3954},
{38,3944},
{39,3933},
{40,3922},
{41,3911},
{43,3900},
{44,3891},
{45,3882},
{46,3874},
{47,3867},
{48,3861},
{49,3854},
{50,3848},
{51,3842},
{52,3837},
{53,3832},
{54,3827},
{55,3822},
{56,3817},
{57,3813},
{58,3809},
{60,3805},
{61,3801},
{62,3797},
{63,3794},
{64,3790},
{65,3787},
{66,3784},
{67,3780},
{68,3777},
{69,3773},
{70,3767},
{71,3759},
{72,3752},
{73,3746},
{74,3741},
{76,3737},
{77,3732},
{78,3728},
{79,3724},
{80,3721},
{81,3718},
{82,3714},
{83,3709},
{84,3704},
{85,3699},
{86,3694},
{87,3688},
{88,3681},
{89,3676},
{90,3674},
{91,3673},
{93,3671},
{94,3668},
{95,3660},
{96,3637},
{97,3598},
{98,3550},
{99,3488},
{100,3403},
{100,3271},
};           

// battery profile for actual temperature. The size should be the same as T1, T2 and T3
BATTERY_PROFILE_STRUC battery_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
};    

// ============================================================
// <Rbat, Battery_Voltage> Table
// ============================================================
// T0 -10C
R_PROFILE_STRUC r_profile_t0[] =
{
{451,4349},
{451,4325},
{539,4305},
{543,4288},
{540,4272},
{536,4256},
{531,4242},
{526,4227},
{520,4214},
{515,4201},
{511,4188},
{506,4175},
{502,4162},
{498,4149},
{494,4136},
{489,4123},
{485,4111},
{482,4100},
{481,4090},
{480,4081},
{479,4070},
{476,4056},
{470,4039},
{462,4019},
{456,4000},
{451,3983},
{449,3969},
{447,3957},
{446,3947},
{447,3939},
{448,3932},
{448,3925},
{449,3919},
{449,3912},
{449,3905},
{447,3898},
{447,3890},
{446,3883},
{446,3876},
{446,3870},
{446,3863},
{446,3856},
{446,3850},
{446,3844},
{447,3838},
{447,3832},
{448,3826},
{448,3821},
{450,3816},
{450,3811},
{451,3806},
{452,3801},
{454,3797},
{456,3793},
{458,3789},
{460,3786},
{462,3783},
{465,3780},
{468,3777},
{471,3774},
{475,3771},
{479,3769},
{483,3766},
{488,3763},
{493,3760},
{499,3757},
{506,3754},
{513,3751},
{520,3748},
{529,3745},
{539,3742},
{550,3738},
{561,3735},
{574,3732},
{588,3728},
{605,3725},
{622,3721},
{639,3717},
{657,3713},
{676,3708},
{695,3702},
{699,3699},
{696,3696},
{695,3694},
{692,3692},
{691,3690},
{689,3689},
{688,3687},
{526,3685},
{600,3684},
{682,3682},
{682,3680},
{680,3679},
{677,3677},
{677,3676},
{403,3400},
};      

// T1 0C
R_PROFILE_STRUC r_profile_t1[] =
{
{283,4353},
{283,4334},
{298,4317},
{299,4302},
{299,4288},
{297,4274},
{296,4261},
{294,4249},
{292,4236},
{290,4224},
{288,4211},
{286,4199},
{285,4188},
{283,4176},
{281,4164},
{280,4152},
{278,4140},
{277,4128},
{275,4116},
{273,4104},
{272,4093},
{271,4083},
{272,4075},
{273,4067},
{273,4055},
{269,4038},
{264,4016},
{259,3995},
{256,3978},
{254,3964},
{253,3953},
{252,3944},
{253,3937},
{253,3931},
{253,3924},
{253,3918},
{252,3911},
{251,3904},
{250,3897},
{249,3890},
{249,3883},
{249,3876},
{249,3870},
{249,3863},
{249,3857},
{249,3851},
{249,3845},
{250,3839},
{250,3834},
{250,3829},
{251,3824},
{252,3819},
{252,3814},
{253,3809},
{254,3805},
{254,3801},
{255,3796},
{255,3792},
{256,3789},
{257,3785},
{257,3782},
{258,3779},
{260,3776},
{261,3773},
{261,3771},
{263,3769},
{265,3766},
{267,3764},
{269,3761},
{272,3759},
{275,3756},
{277,3753},
{280,3749},
{285,3746},
{288,3742},
{292,3739},
{298,3735},
{304,3730},
{310,3725},
{317,3720},
{325,3715},
{335,3711},
{347,3707},
{362,3703},
{380,3699},
{402,3694},
{430,3688},
{464,3679},
{505,3664},
{558,3642},
{612,3612},
{594,3593},
{576,3575},
{560,3560},
{545,3544},
{403,3400},
};     

// T2 25C
R_PROFILE_STRUC r_profile_t2[] =
{
{119,4345},
{119,4331},
{118,4317},
{119,4304},
{117,4290},
{119,4278},
{118,4265},
{117,4252},
{118,4240},
{119,4228},
{119,4216},
{119,4204},
{119,4192},
{118,4179},
{119,4168},
{120,4156},
{121,4145},
{120,4133},
{121,4122},
{121,4110},
{122,4099},
{123,4087},
{122,4076},
{124,4068},
{126,4062},
{127,4052},
{124,4036},
{124,4019},
{124,4004},
{124,3992},
{126,3984},
{126,3977},
{127,3970},
{126,3962},
{125,3952},
{123,3941},
{122,3931},
{121,3920},
{119,3910},
{119,3901},
{117,3891},
{117,3884},
{116,3875},
{115,3868},
{115,3862},
{115,3855},
{116,3850},
{115,3843},
{115,3838},
{115,3832},
{115,3828},
{115,3823},
{116,3819},
{116,3814},
{117,3810},
{118,3807},
{117,3802},
{117,3798},
{118,3795},
{119,3792},
{118,3788},
{118,3785},
{118,3782},
{119,3779},
{118,3775},
{117,3771},
{118,3768},
{117,3764},
{116,3759},
{117,3756},
{116,3752},
{116,3748},
{116,3744},
{116,3741},
{116,3737},
{119,3735},
{119,3731},
{118,3726},
{118,3721},
{118,3716},
{119,3712},
{119,3706},
{119,3700},
{117,3692},
{118,3688},
{121,3687},
{125,3686},
{130,3685},
{133,3681},
{135,3672},
{132,3647},
{132,3604},
{136,3549},
{141,3475},
{149,3366},
{211,3145},
}; 

// T3 50C
R_PROFILE_STRUC r_profile_t3[] =
{
{116,4348},
{116,4333},
{116,4320},
{116,4307},
{116,4294},
{116,4282},
{116,4269},
{116,4257},
{116,4244},
{116,4232},
{116,4220},
{116,4208},
{116,4196},
{116,4184},
{117,4173},
{117,4161},
{117,4149},
{117,4138},
{118,4126},
{118,4115},
{118,4104},
{118,4093},
{119,4082},
{119,4071},
{119,4060},
{120,4050},
{120,4040},
{120,4030},
{121,4020},
{121,4010},
{122,4001},
{122,3991},
{123,3982},
{123,3973},
{123,3963},
{123,3954},
{123,3944},
{122,3933},
{121,3922},
{119,3911},
{118,3900},
{117,3891},
{117,3882},
{116,3874},
{116,3867},
{116,3861},
{116,3854},
{116,3848},
{116,3842},
{116,3837},
{116,3832},
{116,3827},
{117,3822},
{117,3817},
{117,3813},
{117,3809},
{118,3805},
{118,3801},
{119,3797},
{119,3794},
{119,3790},
{120,3787},
{120,3784},
{120,3780},
{120,3777},
{120,3773},
{118,3767},
{116,3759},
{116,3752},
{116,3746},
{116,3741},
{116,3737},
{116,3732},
{116,3728},
{116,3724},
{117,3721},
{118,3718},
{118,3714},
{118,3709},
{118,3704},
{118,3699},
{118,3694},
{118,3688},
{117,3681},
{116,3676},
{118,3674},
{120,3673},
{124,3671},
{129,3668},
{131,3660},
{126,3637},
{126,3598},
{128,3550},
{131,3488},
{137,3403},
{157,3271},
}; 

// r-table profile for actual temperature. The size should be the same as T1, T2 and T3
R_PROFILE_STRUC r_profile_temperature[] =
{
  {0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 }, 
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },  
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
	{0  , 0 },
};    

// ============================================================
// function prototype
// ============================================================
int fgauge_get_saddles(void);
BATTERY_PROFILE_STRUC_P fgauge_get_profile(kal_uint32 temperature);

int fgauge_get_saddles_r_table(void);
R_PROFILE_STRUC_P fgauge_get_profile_r_table(kal_uint32 temperature);

#endif	//#ifndef _CUST_BATTERY_METER_TABLE_H

