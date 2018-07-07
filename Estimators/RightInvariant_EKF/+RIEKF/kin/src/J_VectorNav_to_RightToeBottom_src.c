/*
 * Automatically Generated from Mathematica.
 * Mon 2 Jul 2018 15:36:48 GMT-04:00
 */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "J_VectorNav_to_RightToeBottom_src.h"

#ifdef _MSC_VER
  #define INLINE __forceinline /* use __forceinline (VC++ specific) */
#else
  #define INLINE static inline        /* use standard inline */
#endif

/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
INLINE double Power(double x, double y) { return pow(x, y); }
INLINE double Sqrt(double x) { return sqrt(x); }

INLINE double Abs(double x) { return fabs(x); }

INLINE double Exp(double x) { return exp(x); }
INLINE double Log(double x) { return log(x); }

INLINE double Sin(double x) { return sin(x); }
INLINE double Cos(double x) { return cos(x); }
INLINE double Tan(double x) { return tan(x); }

INLINE double Csc(double x) { return 1.0/sin(x); }
INLINE double Sec(double x) { return 1.0/cos(x); }

INLINE double ArcSin(double x) { return asin(x); }
INLINE double ArcCos(double x) { return acos(x); }
//INLINE double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
INLINE double ArcTan(double x, double y) { return atan2(y,x); }

INLINE double Sinh(double x) { return sinh(x); }
INLINE double Cosh(double x) { return cosh(x); }
INLINE double Tanh(double x) { return tanh(x); }

#define E 2.71828182845904523536029
#define Pi 3.14159265358979323846264
#define Degree 0.01745329251994329576924

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1)
{
  double t82;
  double t152;
  double t345;
  double t398;
  double t426;
  double t444;
  double t500;
  double t726;
  double t1033;
  double t1035;
  double t1084;
  double t1156;
  double t950;
  double t973;
  double t1013;
  double t1258;
  double t1266;
  double t1276;
  double t1527;
  double t1560;
  double t1573;
  double t1706;
  double t1356;
  double t1398;
  double t1505;
  double t1824;
  double t1827;
  double t1838;
  double t1909;
  double t1925;
  double t1953;
  double t2050;
  double t1882;
  double t1902;
  double t1903;
  double t2229;
  double t2252;
  double t2260;
  double t2371;
  double t2372;
  double t2437;
  double t2514;
  double t2307;
  double t2347;
  double t2358;
  double t2621;
  double t2633;
  double t2648;
  double t212;
  double t216;
  double t278;
  double t356;
  double t384;
  double t498;
  double t518;
  double t554;
  double t757;
  double t825;
  double t910;
  double t1155;
  double t1200;
  double t1204;
  double t1291;
  double t1306;
  double t1326;
  double t3016;
  double t3035;
  double t3070;
  double t3123;
  double t3152;
  double t3161;
  double t1659;
  double t1759;
  double t1786;
  double t1850;
  double t1856;
  double t1860;
  double t3203;
  double t3223;
  double t3262;
  double t3289;
  double t3333;
  double t3340;
  double t2019;
  double t2134;
  double t2149;
  double t2263;
  double t2267;
  double t2276;
  double t3376;
  double t3377;
  double t3378;
  double t3397;
  double t3491;
  double t3499;
  double t2492;
  double t2524;
  double t2569;
  double t2675;
  double t2694;
  double t2709;
  double t3680;
  double t3689;
  double t3693;
  double t3738;
  double t3756;
  double t3792;
  double t3968;
  double t4036;
  double t4071;
  double t4132;
  double t4139;
  double t4189;
  double t4262;
  double t4285;
  double t4291;
  double t4383;
  double t4396;
  double t4401;
  double t4438;
  double t4475;
  double t4477;
  double t4488;
  double t4521;
  double t4588;
  double t5417;
  double t5418;
  double t5456;
  double t5488;
  double t5504;
  double t5542;
  double t5563;
  double t5571;
  double t5581;
  double t5633;
  double t5645;
  double t5659;
  double t5676;
  double t5682;
  double t5710;
  double t5728;
  double t5730;
  double t5765;
  double t5070;
  double t5080;
  double t5134;
  double t5936;
  double t5937;
  double t5940;
  double t5948;
  double t5950;
  double t5952;
  double t5957;
  double t5981;
  double t6015;
  double t6035;
  double t6041;
  double t6078;
  double t6093;
  double t6096;
  double t6105;
  double t6120;
  double t6124;
  double t6138;
  double t6252;
  double t6253;
  double t6268;
  double t6270;
  double t6274;
  double t6277;
  double t6306;
  double t6312;
  double t6316;
  double t6332;
  double t6339;
  double t6343;
  double t6361;
  double t6370;
  double t6371;
  double t6353;
  double t6355;
  double t6356;
  double t6225;
  double t6226;
  double t6231;
  double t6455;
  double t6464;
  double t6467;
  double t6474;
  double t6480;
  double t6483;
  double t6490;
  double t6497;
  double t6502;
  double t6504;
  double t6508;
  double t6510;
  double t6515;
  double t6518;
  double t6532;
  double t6537;
  double t6544;
  double t6524;
  double t6525;
  double t6526;
  double t6431;
  double t6434;
  double t6580;
  double t6581;
  double t6585;
  double t6589;
  double t6590;
  double t6596;
  double t6600;
  double t6601;
  double t6608;
  double t6612;
  double t6613;
  double t6617;
  double t6622;
  double t6625;
  double t6651;
  double t6652;
  double t6653;
  double t6634;
  double t6637;
  double t6644;
  double t6269;
  double t6298;
  double t6326;
  double t6344;
  double t6358;
  double t6372;
  double t6374;
  double t6382;
  double t6384;
  double t6386;
  double t6393;
  double t6395;
  double t6402;
  double t6423;
  double t6680;
  double t6692;
  double t6697;
  double t6698;
  double t6703;
  double t6721;
  double t6725;
  double t6729;
  double t6730;
  double t6739;
  double t6757;
  double t6763;
  double t6777;
  double t6779;
  double t6780;
  double t6769;
  double t6770;
  double t6771;
  double t6820;
  double t6826;
  double t6828;
  double t6835;
  double t6838;
  double t6853;
  double t6854;
  double t6857;
  double t6859;
  double t6861;
  double t6863;
  double t6864;
  double t6865;
  double t6901;
  double t6905;
  double t6908;
  double t6867;
  double t6876;
  double t6881;
  double t6985;
  double t6993;
  double t6995;
  double t7014;
  double t7025;
  double t7033;
  double t7037;
  double t7049;
  double t7060;
  double t7061;
  double t7042;
  double t7043;
  double t7045;
  double t6982;
  double t6983;
  double t6999;
  double t7000;
  double t7003;
  double t7148;
  double t7150;
  double t7163;
  double t7168;
  double t7178;
  double t7154;
  double t7156;
  double t7229;
  double t7230;
  double t7232;
  double t7238;
  double t7250;
  double t7256;
  double t7263;
  double t7293;
  double t7296;
  double t7298;
  double t7270;
  double t7278;
  double t7284;
  double t7346;
  double t7356;
  double t7358;
  double t7380;
  double t7382;
  double t7370;
  double t7371;
  double t7333;
  double t7340;
  double t7359;
  double t7366;
  double t7368;
  double t7447;
  double t7450;
  double t3872;
  double t7492;
  double t7494;
  double t7495;
  double t7512;
  double t7516;
  double t7501;
  double t7505;
  double t7569;
  double t7572;
  double t7580;
  double t7402;
  double t7421;
  double t7549;
  double t7556;
  double t7582;
  double t7586;
  double t7587;
  double t7462;
  double t3875;
  double t3887;
  double t7665;
  double t7666;
  double t7676;
  double t7520;
  double t7530;
  t82 = Sin(var1[7]);
  t152 = Cos(var1[8]);
  t345 = Sin(var1[8]);
  t398 = Cos(var1[9]);
  t426 = -1.*t398;
  t444 = 1. + t426;
  t500 = Sin(var1[9]);
  t726 = Cos(var1[7]);
  t1033 = Cos(var1[10]);
  t1035 = -1.*t1033;
  t1084 = 1. + t1035;
  t1156 = Sin(var1[10]);
  t950 = -1.*t398*t82*t345;
  t973 = -1.*t726*t500;
  t1013 = t950 + t973;
  t1258 = -1.*t726*t398;
  t1266 = t82*t345*t500;
  t1276 = t1258 + t1266;
  t1527 = Cos(var1[11]);
  t1560 = -1.*t1527;
  t1573 = 1. + t1560;
  t1706 = Sin(var1[11]);
  t1356 = t1033*t1013;
  t1398 = t1276*t1156;
  t1505 = t1356 + t1398;
  t1824 = t1033*t1276;
  t1827 = -1.*t1013*t1156;
  t1838 = t1824 + t1827;
  t1909 = Cos(var1[12]);
  t1925 = -1.*t1909;
  t1953 = 1. + t1925;
  t2050 = Sin(var1[12]);
  t1882 = t1527*t1505;
  t1902 = t1838*t1706;
  t1903 = t1882 + t1902;
  t2229 = t1527*t1838;
  t2252 = -1.*t1505*t1706;
  t2260 = t2229 + t2252;
  t2371 = Cos(var1[13]);
  t2372 = -1.*t2371;
  t2437 = 1. + t2372;
  t2514 = Sin(var1[13]);
  t2307 = t1909*t1903;
  t2347 = t2260*t2050;
  t2358 = t2307 + t2347;
  t2621 = t1909*t2260;
  t2633 = -1.*t1903*t2050;
  t2648 = t2621 + t2633;
  t212 = -1.*t152;
  t216 = 1. + t212;
  t278 = -0.135*t216;
  t356 = 0.049*t345;
  t384 = 0. + t278 + t356;
  t498 = -0.049*t444;
  t518 = -0.09*t500;
  t554 = 0. + t498 + t518;
  t757 = -0.09*t444;
  t825 = 0.049*t500;
  t910 = 0. + t757 + t825;
  t1155 = -0.049*t1084;
  t1200 = -0.21*t1156;
  t1204 = 0. + t1155 + t1200;
  t1291 = -0.21*t1084;
  t1306 = 0.049*t1156;
  t1326 = 0. + t1291 + t1306;
  t3016 = t726*t398*t345;
  t3035 = -1.*t82*t500;
  t3070 = t3016 + t3035;
  t3123 = -1.*t398*t82;
  t3152 = -1.*t726*t345*t500;
  t3161 = t3123 + t3152;
  t1659 = -0.0016*t1573;
  t1759 = -0.2707*t1706;
  t1786 = 0. + t1659 + t1759;
  t1850 = -0.2707*t1573;
  t1856 = 0.0016*t1706;
  t1860 = 0. + t1850 + t1856;
  t3203 = t1033*t3070;
  t3223 = t3161*t1156;
  t3262 = t3203 + t3223;
  t3289 = t1033*t3161;
  t3333 = -1.*t3070*t1156;
  t3340 = t3289 + t3333;
  t2019 = 0.0184*t1953;
  t2134 = -0.7055*t2050;
  t2149 = 0. + t2019 + t2134;
  t2263 = -0.7055*t1953;
  t2267 = -0.0184*t2050;
  t2276 = 0. + t2263 + t2267;
  t3376 = t1527*t3262;
  t3377 = t3340*t1706;
  t3378 = t3376 + t3377;
  t3397 = t1527*t3340;
  t3491 = -1.*t3262*t1706;
  t3499 = t3397 + t3491;
  t2492 = -0.0216*t2437;
  t2524 = -1.1135*t2514;
  t2569 = 0. + t2492 + t2524;
  t2675 = -1.1135*t2437;
  t2694 = 0.0216*t2514;
  t2709 = 0. + t2675 + t2694;
  t3680 = t1909*t3378;
  t3689 = t3499*t2050;
  t3693 = t3680 + t3689;
  t3738 = t1909*t3499;
  t3756 = -1.*t3378*t2050;
  t3792 = t3738 + t3756;
  t3968 = -1.*t398*t1033*t345;
  t4036 = t345*t500*t1156;
  t4071 = t3968 + t4036;
  t4132 = t1033*t345*t500;
  t4139 = t398*t345*t1156;
  t4189 = t4132 + t4139;
  t4262 = t1527*t4071;
  t4285 = t4189*t1706;
  t4291 = t4262 + t4285;
  t4383 = t1527*t4189;
  t4396 = -1.*t4071*t1706;
  t4401 = t4383 + t4396;
  t4438 = t1909*t4291;
  t4475 = t4401*t2050;
  t4477 = t4438 + t4475;
  t4488 = t1909*t4401;
  t4521 = -1.*t4291*t2050;
  t4588 = t4488 + t4521;
  t5417 = t726*t152*t398*t1033;
  t5418 = -1.*t726*t152*t500*t1156;
  t5456 = t5417 + t5418;
  t5488 = -1.*t726*t152*t1033*t500;
  t5504 = -1.*t726*t152*t398*t1156;
  t5542 = t5488 + t5504;
  t5563 = t1527*t5456;
  t5571 = t5542*t1706;
  t5581 = t5563 + t5571;
  t5633 = t1527*t5542;
  t5645 = -1.*t5456*t1706;
  t5659 = t5633 + t5645;
  t5676 = t1909*t5581;
  t5682 = t5659*t2050;
  t5710 = t5676 + t5682;
  t5728 = t1909*t5659;
  t5730 = -1.*t5581*t2050;
  t5765 = t5728 + t5730;
  t5070 = 0.049*t152;
  t5080 = -0.135*t345;
  t5134 = t5070 + t5080;
  t5936 = t152*t398*t1033*t82;
  t5937 = -1.*t152*t82*t500*t1156;
  t5940 = t5936 + t5937;
  t5948 = -1.*t152*t1033*t82*t500;
  t5950 = -1.*t152*t398*t82*t1156;
  t5952 = t5948 + t5950;
  t5957 = t1527*t5940;
  t5981 = t5952*t1706;
  t6015 = t5957 + t5981;
  t6035 = t1527*t5952;
  t6041 = -1.*t5940*t1706;
  t6078 = t6035 + t6041;
  t6093 = t1909*t6015;
  t6096 = t6078*t2050;
  t6105 = t6093 + t6096;
  t6120 = t1909*t6078;
  t6124 = -1.*t6015*t2050;
  t6138 = t6120 + t6124;
  t6252 = -1.*t152*t1033*t500;
  t6253 = -1.*t152*t398*t1156;
  t6268 = t6252 + t6253;
  t6270 = -1.*t152*t398*t1033;
  t6274 = t152*t500*t1156;
  t6277 = t6270 + t6274;
  t6306 = t1527*t6268;
  t6312 = t6277*t1706;
  t6316 = t6306 + t6312;
  t6332 = t1527*t6277;
  t6339 = -1.*t6268*t1706;
  t6343 = t6332 + t6339;
  t6361 = t1909*t6343;
  t6370 = -1.*t6316*t2050;
  t6371 = t6361 + t6370;
  t6353 = t1909*t6316;
  t6355 = t6343*t2050;
  t6356 = t6353 + t6355;
  t6225 = -0.09*t398;
  t6226 = -0.049*t500;
  t6231 = t6225 + t6226;
  t6455 = -1.*t726*t398*t345;
  t6464 = t82*t500;
  t6467 = t6455 + t6464;
  t6474 = t6467*t1156;
  t6480 = t3289 + t6474;
  t6483 = t1033*t6467;
  t6490 = -1.*t3161*t1156;
  t6497 = t6483 + t6490;
  t6502 = t1527*t6480;
  t6504 = t6497*t1706;
  t6508 = t6502 + t6504;
  t6510 = t1527*t6497;
  t6515 = -1.*t6480*t1706;
  t6518 = t6510 + t6515;
  t6532 = t1909*t6518;
  t6537 = -1.*t6508*t2050;
  t6544 = t6532 + t6537;
  t6524 = t1909*t6508;
  t6525 = t6518*t2050;
  t6526 = t6524 + t6525;
  t6431 = 0.049*t398;
  t6434 = t6431 + t518;
  t6580 = t726*t398;
  t6581 = -1.*t82*t345*t500;
  t6585 = t6580 + t6581;
  t6589 = t1033*t6585;
  t6590 = t1013*t1156;
  t6596 = t6589 + t6590;
  t6600 = -1.*t6585*t1156;
  t6601 = t1356 + t6600;
  t6608 = t1527*t6596;
  t6612 = t6601*t1706;
  t6613 = t6608 + t6612;
  t6617 = t1527*t6601;
  t6622 = -1.*t6596*t1706;
  t6625 = t6617 + t6622;
  t6651 = t1909*t6625;
  t6652 = -1.*t6613*t2050;
  t6653 = t6651 + t6652;
  t6634 = t1909*t6613;
  t6637 = t6625*t2050;
  t6644 = t6634 + t6637;
  t6269 = t6268*t1786;
  t6298 = t6277*t1860;
  t6326 = t6316*t2149;
  t6344 = t6343*t2276;
  t6358 = t6356*t2569;
  t6372 = t6371*t2709;
  t6374 = t2371*t6371;
  t6382 = -1.*t6356*t2514;
  t6384 = t6374 + t6382;
  t6386 = -1.1312*t6384;
  t6393 = t2371*t6356;
  t6395 = t6371*t2514;
  t6402 = t6393 + t6395;
  t6423 = 0.0306*t6402;
  t6680 = 0.049*t1033;
  t6692 = t6680 + t1200;
  t6697 = -0.21*t1033;
  t6698 = -0.049*t1156;
  t6703 = t6697 + t6698;
  t6721 = -1.*t1033*t3070;
  t6725 = t6721 + t6490;
  t6729 = t6725*t1706;
  t6730 = t3397 + t6729;
  t6739 = t1527*t6725;
  t6757 = -1.*t3340*t1706;
  t6763 = t6739 + t6757;
  t6777 = t1909*t6763;
  t6779 = -1.*t6730*t2050;
  t6780 = t6777 + t6779;
  t6769 = t1909*t6730;
  t6770 = t6763*t2050;
  t6771 = t6769 + t6770;
  t6820 = t398*t82*t345;
  t6826 = t726*t500;
  t6828 = t6820 + t6826;
  t6835 = -1.*t6828*t1156;
  t6838 = t6589 + t6835;
  t6853 = -1.*t1033*t6828;
  t6854 = t6853 + t6600;
  t6857 = t1527*t6838;
  t6859 = t6854*t1706;
  t6861 = t6857 + t6859;
  t6863 = t1527*t6854;
  t6864 = -1.*t6838*t1706;
  t6865 = t6863 + t6864;
  t6901 = t1909*t6865;
  t6905 = -1.*t6861*t2050;
  t6908 = t6901 + t6905;
  t6867 = t1909*t6861;
  t6876 = t6865*t2050;
  t6881 = t6867 + t6876;
  t6985 = t152*t398*t1033;
  t6993 = -1.*t152*t500*t1156;
  t6995 = t6985 + t6993;
  t7014 = -1.*t6995*t1706;
  t7025 = t6306 + t7014;
  t7033 = -1.*t1527*t6995;
  t7037 = t7033 + t6339;
  t7049 = t1909*t7037;
  t7060 = -1.*t7025*t2050;
  t7061 = t7049 + t7060;
  t7042 = t1909*t7025;
  t7043 = t7037*t2050;
  t7045 = t7042 + t7043;
  t6982 = 0.0016*t1527;
  t6983 = t6982 + t1759;
  t6999 = -0.2707*t1527;
  t7000 = -0.0016*t1706;
  t7003 = t6999 + t7000;
  t7148 = -1.*t1527*t3262;
  t7150 = t7148 + t6757;
  t7163 = t1909*t7150;
  t7168 = -1.*t3499*t2050;
  t7178 = t7163 + t7168;
  t7154 = t7150*t2050;
  t7156 = t3738 + t7154;
  t7229 = t1033*t6828;
  t7230 = t6585*t1156;
  t7232 = t7229 + t7230;
  t7238 = -1.*t7232*t1706;
  t7250 = t6857 + t7238;
  t7256 = -1.*t1527*t7232;
  t7263 = t7256 + t6864;
  t7293 = t1909*t7263;
  t7296 = -1.*t7250*t2050;
  t7298 = t7293 + t7296;
  t7270 = t1909*t7250;
  t7278 = t7263*t2050;
  t7284 = t7270 + t7278;
  t7346 = t1527*t6995;
  t7356 = t6268*t1706;
  t7358 = t7346 + t7356;
  t7380 = -1.*t1909*t7358;
  t7382 = t7380 + t7060;
  t7370 = -1.*t7358*t2050;
  t7371 = t7042 + t7370;
  t7333 = -0.0184*t1909;
  t7340 = t7333 + t2134;
  t7359 = -0.7055*t1909;
  t7366 = 0.0184*t2050;
  t7368 = t7359 + t7366;
  t7447 = -1.*t1909*t3378;
  t7450 = t7447 + t7168;
  t3872 = t2371*t3792;
  t7492 = t1527*t7232;
  t7494 = t6838*t1706;
  t7495 = t7492 + t7494;
  t7512 = -1.*t1909*t7495;
  t7516 = t7512 + t7296;
  t7501 = -1.*t7495*t2050;
  t7505 = t7270 + t7501;
  t7569 = t1909*t7358;
  t7572 = t7025*t2050;
  t7580 = t7569 + t7572;
  t7402 = -1.*t7371*t2514;
  t7421 = t2371*t7371;
  t7549 = 0.0216*t2371;
  t7556 = t7549 + t2524;
  t7582 = -1.1135*t2371;
  t7586 = -0.0216*t2514;
  t7587 = t7582 + t7586;
  t7462 = -1.*t3792*t2514;
  t3875 = -1.*t3693*t2514;
  t3887 = t3872 + t3875;
  t7665 = t1909*t7495;
  t7666 = t7250*t2050;
  t7676 = t7665 + t7666;
  t7520 = -1.*t7505*t2514;
  t7530 = t2371*t7505;
  p_output1[0]=0;
  p_output1[1]=0;
  p_output1[2]=0;
  p_output1[3]=0;
  p_output1[4]=0;
  p_output1[5]=0;
  p_output1[6]=0;
  p_output1[7]=0;
  p_output1[8]=0;
  p_output1[9]=0;
  p_output1[10]=0;
  p_output1[11]=0;
  p_output1[12]=0;
  p_output1[13]=0;
  p_output1[14]=0;
  p_output1[15]=0;
  p_output1[16]=0;
  p_output1[17]=0;
  p_output1[18]=0;
  p_output1[19]=0;
  p_output1[20]=0;
  p_output1[21]=0;
  p_output1[22]=t1013*t1204 + t1276*t1326 + t1505*t1786 + t1838*t1860 + t1903*t2149 + t2260*t2276 + t2358*t2569 - 1.1312*(-1.*t2358*t2514 + t2371*t2648) + 0.0306*(t2358*t2371 + t2514*t2648) + t2648*t2709 - 0.135*t82 + 0.1305*t152*t82 - 1.*t384*t82 - 1.*t345*t554*t82 - 1.*t726*t910;
  p_output1[23]=t1204*t3070 + t1326*t3161 + t1786*t3262 + t1860*t3340 + t2149*t3378 + t2276*t3499 + t2569*t3693 + t2709*t3792 + 0.0306*(t2371*t3693 + t2514*t3792) - 1.1312*t3887 + 0.135*t726 - 0.1305*t152*t726 + t384*t726 + t345*t554*t726 - 1.*t82*t910;
  p_output1[24]=-0.004500000000000004*t152 - 0.049*t345 - 1.*t1204*t345*t398 + t1786*t4071 + t1860*t4189 + t2149*t4291 + t2276*t4401 + t2569*t4477 + t2709*t4588 - 1.1312*(-1.*t2514*t4477 + t2371*t4588) + 0.0306*(t2371*t4477 + t2514*t4588) + t1326*t345*t500 - 1.*t345*t554;
  p_output1[25]=t1786*t5456 + t1860*t5542 + t2149*t5581 + t2276*t5659 + t2569*t5710 + t2709*t5765 - 1.1312*(-1.*t2514*t5710 + t2371*t5765) + 0.0306*(t2371*t5710 + t2514*t5765) + 0.1305*t345*t726 + t1204*t152*t398*t726 - 1.*t1326*t152*t500*t726 + t5134*t726 + t152*t554*t726;
  p_output1[26]=t1786*t5940 + t1860*t5952 + t2149*t6015 + t2276*t6078 + t2569*t6105 + t2709*t6138 - 1.1312*(-1.*t2514*t6105 + t2371*t6138) + 0.0306*(t2371*t6105 + t2514*t6138) + 0.1305*t345*t82 + t1204*t152*t398*t82 - 1.*t1326*t152*t500*t82 + t5134*t82 + t152*t554*t82;
  p_output1[27]=-1.*t1326*t152*t398 - 1.*t1204*t152*t500 + t152*t6231 + t6269 + t6298 + t6326 + t6344 + t6358 + t6372 + t6386 + t6423;
  p_output1[28]=t1204*t3161 + t1326*t6467 + t1786*t6480 + t1860*t6497 + t2149*t6508 + t2276*t6518 + t2569*t6526 + t2709*t6544 - 1.1312*(-1.*t2514*t6526 + t2371*t6544) + 0.0306*(t2371*t6526 + t2514*t6544) + t345*t6231*t726 - 1.*t6434*t82;
  p_output1[29]=t1013*t1326 + t1204*t6585 + t1786*t6596 + t1860*t6601 + t2149*t6613 + t2276*t6625 + t2569*t6644 + t2709*t6653 - 1.1312*(-1.*t2514*t6644 + t2371*t6653) + 0.0306*(t2371*t6644 + t2514*t6653) + t6434*t726 + t345*t6231*t82;
  p_output1[30]=t6269 + t6298 + t6326 + t6344 + t6358 + t6372 + t6386 + t6423 - 1.*t152*t500*t6692 + t152*t398*t6703;
  p_output1[31]=t1786*t3340 + t3161*t6692 + t3070*t6703 + t1860*t6725 + t2149*t6730 + t2276*t6763 + t2569*t6771 + t2709*t6780 - 1.1312*(-1.*t2514*t6771 + t2371*t6780) + 0.0306*(t2371*t6771 + t2514*t6780);
  p_output1[32]=t6585*t6692 + t6703*t6828 + t1786*t6838 + t1860*t6854 + t2149*t6861 + t2276*t6865 + t2569*t6881 + t2709*t6908 - 1.1312*(-1.*t2514*t6881 + t2371*t6908) + 0.0306*(t2371*t6881 + t2514*t6908);
  p_output1[33]=t6268*t6983 + t6995*t7003 + t2149*t7025 + t2276*t7037 + t2569*t7045 + t2709*t7061 - 1.1312*(-1.*t2514*t7045 + t2371*t7061) + 0.0306*(t2371*t7045 + t2514*t7061);
  p_output1[34]=t2149*t3499 + t3340*t6983 + t3262*t7003 + t2276*t7150 + t2569*t7156 + t2709*t7178 - 1.1312*(-1.*t2514*t7156 + t2371*t7178) + 0.0306*(t2371*t7156 + t2514*t7178);
  p_output1[35]=t6838*t6983 + t7003*t7232 + t2149*t7250 + t2276*t7263 + t2569*t7284 + t2709*t7298 - 1.1312*(-1.*t2514*t7284 + t2371*t7298) + 0.0306*(t2371*t7284 + t2514*t7298);
  p_output1[36]=t7025*t7340 + t7358*t7368 + t2569*t7371 + t2709*t7382 - 1.1312*(t2371*t7382 + t7402) + 0.0306*(t2514*t7382 + t7421);
  p_output1[37]=t2569*t3792 + t3499*t7340 + t3378*t7368 + t2709*t7450 + 0.0306*(t3872 + t2514*t7450) - 1.1312*(t2371*t7450 + t7462);
  p_output1[38]=t7250*t7340 + t7368*t7495 + t2569*t7505 + t2709*t7516 - 1.1312*(t2371*t7516 + t7520) + 0.0306*(t2514*t7516 + t7530);
  p_output1[39]=t7371*t7556 - 1.1312*(t7402 - 1.*t2371*t7580) + 0.0306*(t7421 - 1.*t2514*t7580) + t7580*t7587;
  p_output1[40]=0.0306*t3887 - 1.1312*(-1.*t2371*t3693 + t7462) + t3792*t7556 + t3693*t7587;
  p_output1[41]=t7505*t7556 + t7587*t7676 - 1.1312*(t7520 - 1.*t2371*t7676) + 0.0306*(t7530 - 1.*t2514*t7676);
}



void J_VectorNav_to_RightToeBottom_src(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}
