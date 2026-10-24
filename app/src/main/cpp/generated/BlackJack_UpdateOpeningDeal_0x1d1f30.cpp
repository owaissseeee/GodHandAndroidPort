#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BlackJack_UpdateOpeningDeal
// Address: 0x1d1f30 - 0x1d2888
void BlackJack_UpdateOpeningDeal_0x1d1f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateOpeningDeal_0x1d1f30");
#endif

    switch (ctx->pc) {
        case 0x1d1f30u: goto label_1d1f30;
        case 0x1d1f34u: goto label_1d1f34;
        case 0x1d1f38u: goto label_1d1f38;
        case 0x1d1f3cu: goto label_1d1f3c;
        case 0x1d1f40u: goto label_1d1f40;
        case 0x1d1f44u: goto label_1d1f44;
        case 0x1d1f48u: goto label_1d1f48;
        case 0x1d1f4cu: goto label_1d1f4c;
        case 0x1d1f50u: goto label_1d1f50;
        case 0x1d1f54u: goto label_1d1f54;
        case 0x1d1f58u: goto label_1d1f58;
        case 0x1d1f5cu: goto label_1d1f5c;
        case 0x1d1f60u: goto label_1d1f60;
        case 0x1d1f64u: goto label_1d1f64;
        case 0x1d1f68u: goto label_1d1f68;
        case 0x1d1f6cu: goto label_1d1f6c;
        case 0x1d1f70u: goto label_1d1f70;
        case 0x1d1f74u: goto label_1d1f74;
        case 0x1d1f78u: goto label_1d1f78;
        case 0x1d1f7cu: goto label_1d1f7c;
        case 0x1d1f80u: goto label_1d1f80;
        case 0x1d1f84u: goto label_1d1f84;
        case 0x1d1f88u: goto label_1d1f88;
        case 0x1d1f8cu: goto label_1d1f8c;
        case 0x1d1f90u: goto label_1d1f90;
        case 0x1d1f94u: goto label_1d1f94;
        case 0x1d1f98u: goto label_1d1f98;
        case 0x1d1f9cu: goto label_1d1f9c;
        case 0x1d1fa0u: goto label_1d1fa0;
        case 0x1d1fa4u: goto label_1d1fa4;
        case 0x1d1fa8u: goto label_1d1fa8;
        case 0x1d1facu: goto label_1d1fac;
        case 0x1d1fb0u: goto label_1d1fb0;
        case 0x1d1fb4u: goto label_1d1fb4;
        case 0x1d1fb8u: goto label_1d1fb8;
        case 0x1d1fbcu: goto label_1d1fbc;
        case 0x1d1fc0u: goto label_1d1fc0;
        case 0x1d1fc4u: goto label_1d1fc4;
        case 0x1d1fc8u: goto label_1d1fc8;
        case 0x1d1fccu: goto label_1d1fcc;
        case 0x1d1fd0u: goto label_1d1fd0;
        case 0x1d1fd4u: goto label_1d1fd4;
        case 0x1d1fd8u: goto label_1d1fd8;
        case 0x1d1fdcu: goto label_1d1fdc;
        case 0x1d1fe0u: goto label_1d1fe0;
        case 0x1d1fe4u: goto label_1d1fe4;
        case 0x1d1fe8u: goto label_1d1fe8;
        case 0x1d1fecu: goto label_1d1fec;
        case 0x1d1ff0u: goto label_1d1ff0;
        case 0x1d1ff4u: goto label_1d1ff4;
        case 0x1d1ff8u: goto label_1d1ff8;
        case 0x1d1ffcu: goto label_1d1ffc;
        case 0x1d2000u: goto label_1d2000;
        case 0x1d2004u: goto label_1d2004;
        case 0x1d2008u: goto label_1d2008;
        case 0x1d200cu: goto label_1d200c;
        case 0x1d2010u: goto label_1d2010;
        case 0x1d2014u: goto label_1d2014;
        case 0x1d2018u: goto label_1d2018;
        case 0x1d201cu: goto label_1d201c;
        case 0x1d2020u: goto label_1d2020;
        case 0x1d2024u: goto label_1d2024;
        case 0x1d2028u: goto label_1d2028;
        case 0x1d202cu: goto label_1d202c;
        case 0x1d2030u: goto label_1d2030;
        case 0x1d2034u: goto label_1d2034;
        case 0x1d2038u: goto label_1d2038;
        case 0x1d203cu: goto label_1d203c;
        case 0x1d2040u: goto label_1d2040;
        case 0x1d2044u: goto label_1d2044;
        case 0x1d2048u: goto label_1d2048;
        case 0x1d204cu: goto label_1d204c;
        case 0x1d2050u: goto label_1d2050;
        case 0x1d2054u: goto label_1d2054;
        case 0x1d2058u: goto label_1d2058;
        case 0x1d205cu: goto label_1d205c;
        case 0x1d2060u: goto label_1d2060;
        case 0x1d2064u: goto label_1d2064;
        case 0x1d2068u: goto label_1d2068;
        case 0x1d206cu: goto label_1d206c;
        case 0x1d2070u: goto label_1d2070;
        case 0x1d2074u: goto label_1d2074;
        case 0x1d2078u: goto label_1d2078;
        case 0x1d207cu: goto label_1d207c;
        case 0x1d2080u: goto label_1d2080;
        case 0x1d2084u: goto label_1d2084;
        case 0x1d2088u: goto label_1d2088;
        case 0x1d208cu: goto label_1d208c;
        case 0x1d2090u: goto label_1d2090;
        case 0x1d2094u: goto label_1d2094;
        case 0x1d2098u: goto label_1d2098;
        case 0x1d209cu: goto label_1d209c;
        case 0x1d20a0u: goto label_1d20a0;
        case 0x1d20a4u: goto label_1d20a4;
        case 0x1d20a8u: goto label_1d20a8;
        case 0x1d20acu: goto label_1d20ac;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20b4u: goto label_1d20b4;
        case 0x1d20b8u: goto label_1d20b8;
        case 0x1d20bcu: goto label_1d20bc;
        case 0x1d20c0u: goto label_1d20c0;
        case 0x1d20c4u: goto label_1d20c4;
        case 0x1d20c8u: goto label_1d20c8;
        case 0x1d20ccu: goto label_1d20cc;
        case 0x1d20d0u: goto label_1d20d0;
        case 0x1d20d4u: goto label_1d20d4;
        case 0x1d20d8u: goto label_1d20d8;
        case 0x1d20dcu: goto label_1d20dc;
        case 0x1d20e0u: goto label_1d20e0;
        case 0x1d20e4u: goto label_1d20e4;
        case 0x1d20e8u: goto label_1d20e8;
        case 0x1d20ecu: goto label_1d20ec;
        case 0x1d20f0u: goto label_1d20f0;
        case 0x1d20f4u: goto label_1d20f4;
        case 0x1d20f8u: goto label_1d20f8;
        case 0x1d20fcu: goto label_1d20fc;
        case 0x1d2100u: goto label_1d2100;
        case 0x1d2104u: goto label_1d2104;
        case 0x1d2108u: goto label_1d2108;
        case 0x1d210cu: goto label_1d210c;
        case 0x1d2110u: goto label_1d2110;
        case 0x1d2114u: goto label_1d2114;
        case 0x1d2118u: goto label_1d2118;
        case 0x1d211cu: goto label_1d211c;
        case 0x1d2120u: goto label_1d2120;
        case 0x1d2124u: goto label_1d2124;
        case 0x1d2128u: goto label_1d2128;
        case 0x1d212cu: goto label_1d212c;
        case 0x1d2130u: goto label_1d2130;
        case 0x1d2134u: goto label_1d2134;
        case 0x1d2138u: goto label_1d2138;
        case 0x1d213cu: goto label_1d213c;
        case 0x1d2140u: goto label_1d2140;
        case 0x1d2144u: goto label_1d2144;
        case 0x1d2148u: goto label_1d2148;
        case 0x1d214cu: goto label_1d214c;
        case 0x1d2150u: goto label_1d2150;
        case 0x1d2154u: goto label_1d2154;
        case 0x1d2158u: goto label_1d2158;
        case 0x1d215cu: goto label_1d215c;
        case 0x1d2160u: goto label_1d2160;
        case 0x1d2164u: goto label_1d2164;
        case 0x1d2168u: goto label_1d2168;
        case 0x1d216cu: goto label_1d216c;
        case 0x1d2170u: goto label_1d2170;
        case 0x1d2174u: goto label_1d2174;
        case 0x1d2178u: goto label_1d2178;
        case 0x1d217cu: goto label_1d217c;
        case 0x1d2180u: goto label_1d2180;
        case 0x1d2184u: goto label_1d2184;
        case 0x1d2188u: goto label_1d2188;
        case 0x1d218cu: goto label_1d218c;
        case 0x1d2190u: goto label_1d2190;
        case 0x1d2194u: goto label_1d2194;
        case 0x1d2198u: goto label_1d2198;
        case 0x1d219cu: goto label_1d219c;
        case 0x1d21a0u: goto label_1d21a0;
        case 0x1d21a4u: goto label_1d21a4;
        case 0x1d21a8u: goto label_1d21a8;
        case 0x1d21acu: goto label_1d21ac;
        case 0x1d21b0u: goto label_1d21b0;
        case 0x1d21b4u: goto label_1d21b4;
        case 0x1d21b8u: goto label_1d21b8;
        case 0x1d21bcu: goto label_1d21bc;
        case 0x1d21c0u: goto label_1d21c0;
        case 0x1d21c4u: goto label_1d21c4;
        case 0x1d21c8u: goto label_1d21c8;
        case 0x1d21ccu: goto label_1d21cc;
        case 0x1d21d0u: goto label_1d21d0;
        case 0x1d21d4u: goto label_1d21d4;
        case 0x1d21d8u: goto label_1d21d8;
        case 0x1d21dcu: goto label_1d21dc;
        case 0x1d21e0u: goto label_1d21e0;
        case 0x1d21e4u: goto label_1d21e4;
        case 0x1d21e8u: goto label_1d21e8;
        case 0x1d21ecu: goto label_1d21ec;
        case 0x1d21f0u: goto label_1d21f0;
        case 0x1d21f4u: goto label_1d21f4;
        case 0x1d21f8u: goto label_1d21f8;
        case 0x1d21fcu: goto label_1d21fc;
        case 0x1d2200u: goto label_1d2200;
        case 0x1d2204u: goto label_1d2204;
        case 0x1d2208u: goto label_1d2208;
        case 0x1d220cu: goto label_1d220c;
        case 0x1d2210u: goto label_1d2210;
        case 0x1d2214u: goto label_1d2214;
        case 0x1d2218u: goto label_1d2218;
        case 0x1d221cu: goto label_1d221c;
        case 0x1d2220u: goto label_1d2220;
        case 0x1d2224u: goto label_1d2224;
        case 0x1d2228u: goto label_1d2228;
        case 0x1d222cu: goto label_1d222c;
        case 0x1d2230u: goto label_1d2230;
        case 0x1d2234u: goto label_1d2234;
        case 0x1d2238u: goto label_1d2238;
        case 0x1d223cu: goto label_1d223c;
        case 0x1d2240u: goto label_1d2240;
        case 0x1d2244u: goto label_1d2244;
        case 0x1d2248u: goto label_1d2248;
        case 0x1d224cu: goto label_1d224c;
        case 0x1d2250u: goto label_1d2250;
        case 0x1d2254u: goto label_1d2254;
        case 0x1d2258u: goto label_1d2258;
        case 0x1d225cu: goto label_1d225c;
        case 0x1d2260u: goto label_1d2260;
        case 0x1d2264u: goto label_1d2264;
        case 0x1d2268u: goto label_1d2268;
        case 0x1d226cu: goto label_1d226c;
        case 0x1d2270u: goto label_1d2270;
        case 0x1d2274u: goto label_1d2274;
        case 0x1d2278u: goto label_1d2278;
        case 0x1d227cu: goto label_1d227c;
        case 0x1d2280u: goto label_1d2280;
        case 0x1d2284u: goto label_1d2284;
        case 0x1d2288u: goto label_1d2288;
        case 0x1d228cu: goto label_1d228c;
        case 0x1d2290u: goto label_1d2290;
        case 0x1d2294u: goto label_1d2294;
        case 0x1d2298u: goto label_1d2298;
        case 0x1d229cu: goto label_1d229c;
        case 0x1d22a0u: goto label_1d22a0;
        case 0x1d22a4u: goto label_1d22a4;
        case 0x1d22a8u: goto label_1d22a8;
        case 0x1d22acu: goto label_1d22ac;
        case 0x1d22b0u: goto label_1d22b0;
        case 0x1d22b4u: goto label_1d22b4;
        case 0x1d22b8u: goto label_1d22b8;
        case 0x1d22bcu: goto label_1d22bc;
        case 0x1d22c0u: goto label_1d22c0;
        case 0x1d22c4u: goto label_1d22c4;
        case 0x1d22c8u: goto label_1d22c8;
        case 0x1d22ccu: goto label_1d22cc;
        case 0x1d22d0u: goto label_1d22d0;
        case 0x1d22d4u: goto label_1d22d4;
        case 0x1d22d8u: goto label_1d22d8;
        case 0x1d22dcu: goto label_1d22dc;
        case 0x1d22e0u: goto label_1d22e0;
        case 0x1d22e4u: goto label_1d22e4;
        case 0x1d22e8u: goto label_1d22e8;
        case 0x1d22ecu: goto label_1d22ec;
        case 0x1d22f0u: goto label_1d22f0;
        case 0x1d22f4u: goto label_1d22f4;
        case 0x1d22f8u: goto label_1d22f8;
        case 0x1d22fcu: goto label_1d22fc;
        case 0x1d2300u: goto label_1d2300;
        case 0x1d2304u: goto label_1d2304;
        case 0x1d2308u: goto label_1d2308;
        case 0x1d230cu: goto label_1d230c;
        case 0x1d2310u: goto label_1d2310;
        case 0x1d2314u: goto label_1d2314;
        case 0x1d2318u: goto label_1d2318;
        case 0x1d231cu: goto label_1d231c;
        case 0x1d2320u: goto label_1d2320;
        case 0x1d2324u: goto label_1d2324;
        case 0x1d2328u: goto label_1d2328;
        case 0x1d232cu: goto label_1d232c;
        case 0x1d2330u: goto label_1d2330;
        case 0x1d2334u: goto label_1d2334;
        case 0x1d2338u: goto label_1d2338;
        case 0x1d233cu: goto label_1d233c;
        case 0x1d2340u: goto label_1d2340;
        case 0x1d2344u: goto label_1d2344;
        case 0x1d2348u: goto label_1d2348;
        case 0x1d234cu: goto label_1d234c;
        case 0x1d2350u: goto label_1d2350;
        case 0x1d2354u: goto label_1d2354;
        case 0x1d2358u: goto label_1d2358;
        case 0x1d235cu: goto label_1d235c;
        case 0x1d2360u: goto label_1d2360;
        case 0x1d2364u: goto label_1d2364;
        case 0x1d2368u: goto label_1d2368;
        case 0x1d236cu: goto label_1d236c;
        case 0x1d2370u: goto label_1d2370;
        case 0x1d2374u: goto label_1d2374;
        case 0x1d2378u: goto label_1d2378;
        case 0x1d237cu: goto label_1d237c;
        case 0x1d2380u: goto label_1d2380;
        case 0x1d2384u: goto label_1d2384;
        case 0x1d2388u: goto label_1d2388;
        case 0x1d238cu: goto label_1d238c;
        case 0x1d2390u: goto label_1d2390;
        case 0x1d2394u: goto label_1d2394;
        case 0x1d2398u: goto label_1d2398;
        case 0x1d239cu: goto label_1d239c;
        case 0x1d23a0u: goto label_1d23a0;
        case 0x1d23a4u: goto label_1d23a4;
        case 0x1d23a8u: goto label_1d23a8;
        case 0x1d23acu: goto label_1d23ac;
        case 0x1d23b0u: goto label_1d23b0;
        case 0x1d23b4u: goto label_1d23b4;
        case 0x1d23b8u: goto label_1d23b8;
        case 0x1d23bcu: goto label_1d23bc;
        case 0x1d23c0u: goto label_1d23c0;
        case 0x1d23c4u: goto label_1d23c4;
        case 0x1d23c8u: goto label_1d23c8;
        case 0x1d23ccu: goto label_1d23cc;
        case 0x1d23d0u: goto label_1d23d0;
        case 0x1d23d4u: goto label_1d23d4;
        case 0x1d23d8u: goto label_1d23d8;
        case 0x1d23dcu: goto label_1d23dc;
        case 0x1d23e0u: goto label_1d23e0;
        case 0x1d23e4u: goto label_1d23e4;
        case 0x1d23e8u: goto label_1d23e8;
        case 0x1d23ecu: goto label_1d23ec;
        case 0x1d23f0u: goto label_1d23f0;
        case 0x1d23f4u: goto label_1d23f4;
        case 0x1d23f8u: goto label_1d23f8;
        case 0x1d23fcu: goto label_1d23fc;
        case 0x1d2400u: goto label_1d2400;
        case 0x1d2404u: goto label_1d2404;
        case 0x1d2408u: goto label_1d2408;
        case 0x1d240cu: goto label_1d240c;
        case 0x1d2410u: goto label_1d2410;
        case 0x1d2414u: goto label_1d2414;
        case 0x1d2418u: goto label_1d2418;
        case 0x1d241cu: goto label_1d241c;
        case 0x1d2420u: goto label_1d2420;
        case 0x1d2424u: goto label_1d2424;
        case 0x1d2428u: goto label_1d2428;
        case 0x1d242cu: goto label_1d242c;
        case 0x1d2430u: goto label_1d2430;
        case 0x1d2434u: goto label_1d2434;
        case 0x1d2438u: goto label_1d2438;
        case 0x1d243cu: goto label_1d243c;
        case 0x1d2440u: goto label_1d2440;
        case 0x1d2444u: goto label_1d2444;
        case 0x1d2448u: goto label_1d2448;
        case 0x1d244cu: goto label_1d244c;
        case 0x1d2450u: goto label_1d2450;
        case 0x1d2454u: goto label_1d2454;
        case 0x1d2458u: goto label_1d2458;
        case 0x1d245cu: goto label_1d245c;
        case 0x1d2460u: goto label_1d2460;
        case 0x1d2464u: goto label_1d2464;
        case 0x1d2468u: goto label_1d2468;
        case 0x1d246cu: goto label_1d246c;
        case 0x1d2470u: goto label_1d2470;
        case 0x1d2474u: goto label_1d2474;
        case 0x1d2478u: goto label_1d2478;
        case 0x1d247cu: goto label_1d247c;
        case 0x1d2480u: goto label_1d2480;
        case 0x1d2484u: goto label_1d2484;
        case 0x1d2488u: goto label_1d2488;
        case 0x1d248cu: goto label_1d248c;
        case 0x1d2490u: goto label_1d2490;
        case 0x1d2494u: goto label_1d2494;
        case 0x1d2498u: goto label_1d2498;
        case 0x1d249cu: goto label_1d249c;
        case 0x1d24a0u: goto label_1d24a0;
        case 0x1d24a4u: goto label_1d24a4;
        case 0x1d24a8u: goto label_1d24a8;
        case 0x1d24acu: goto label_1d24ac;
        case 0x1d24b0u: goto label_1d24b0;
        case 0x1d24b4u: goto label_1d24b4;
        case 0x1d24b8u: goto label_1d24b8;
        case 0x1d24bcu: goto label_1d24bc;
        case 0x1d24c0u: goto label_1d24c0;
        case 0x1d24c4u: goto label_1d24c4;
        case 0x1d24c8u: goto label_1d24c8;
        case 0x1d24ccu: goto label_1d24cc;
        case 0x1d24d0u: goto label_1d24d0;
        case 0x1d24d4u: goto label_1d24d4;
        case 0x1d24d8u: goto label_1d24d8;
        case 0x1d24dcu: goto label_1d24dc;
        case 0x1d24e0u: goto label_1d24e0;
        case 0x1d24e4u: goto label_1d24e4;
        case 0x1d24e8u: goto label_1d24e8;
        case 0x1d24ecu: goto label_1d24ec;
        case 0x1d24f0u: goto label_1d24f0;
        case 0x1d24f4u: goto label_1d24f4;
        case 0x1d24f8u: goto label_1d24f8;
        case 0x1d24fcu: goto label_1d24fc;
        case 0x1d2500u: goto label_1d2500;
        case 0x1d2504u: goto label_1d2504;
        case 0x1d2508u: goto label_1d2508;
        case 0x1d250cu: goto label_1d250c;
        case 0x1d2510u: goto label_1d2510;
        case 0x1d2514u: goto label_1d2514;
        case 0x1d2518u: goto label_1d2518;
        case 0x1d251cu: goto label_1d251c;
        case 0x1d2520u: goto label_1d2520;
        case 0x1d2524u: goto label_1d2524;
        case 0x1d2528u: goto label_1d2528;
        case 0x1d252cu: goto label_1d252c;
        case 0x1d2530u: goto label_1d2530;
        case 0x1d2534u: goto label_1d2534;
        case 0x1d2538u: goto label_1d2538;
        case 0x1d253cu: goto label_1d253c;
        case 0x1d2540u: goto label_1d2540;
        case 0x1d2544u: goto label_1d2544;
        case 0x1d2548u: goto label_1d2548;
        case 0x1d254cu: goto label_1d254c;
        case 0x1d2550u: goto label_1d2550;
        case 0x1d2554u: goto label_1d2554;
        case 0x1d2558u: goto label_1d2558;
        case 0x1d255cu: goto label_1d255c;
        case 0x1d2560u: goto label_1d2560;
        case 0x1d2564u: goto label_1d2564;
        case 0x1d2568u: goto label_1d2568;
        case 0x1d256cu: goto label_1d256c;
        case 0x1d2570u: goto label_1d2570;
        case 0x1d2574u: goto label_1d2574;
        case 0x1d2578u: goto label_1d2578;
        case 0x1d257cu: goto label_1d257c;
        case 0x1d2580u: goto label_1d2580;
        case 0x1d2584u: goto label_1d2584;
        case 0x1d2588u: goto label_1d2588;
        case 0x1d258cu: goto label_1d258c;
        case 0x1d2590u: goto label_1d2590;
        case 0x1d2594u: goto label_1d2594;
        case 0x1d2598u: goto label_1d2598;
        case 0x1d259cu: goto label_1d259c;
        case 0x1d25a0u: goto label_1d25a0;
        case 0x1d25a4u: goto label_1d25a4;
        case 0x1d25a8u: goto label_1d25a8;
        case 0x1d25acu: goto label_1d25ac;
        case 0x1d25b0u: goto label_1d25b0;
        case 0x1d25b4u: goto label_1d25b4;
        case 0x1d25b8u: goto label_1d25b8;
        case 0x1d25bcu: goto label_1d25bc;
        case 0x1d25c0u: goto label_1d25c0;
        case 0x1d25c4u: goto label_1d25c4;
        case 0x1d25c8u: goto label_1d25c8;
        case 0x1d25ccu: goto label_1d25cc;
        case 0x1d25d0u: goto label_1d25d0;
        case 0x1d25d4u: goto label_1d25d4;
        case 0x1d25d8u: goto label_1d25d8;
        case 0x1d25dcu: goto label_1d25dc;
        case 0x1d25e0u: goto label_1d25e0;
        case 0x1d25e4u: goto label_1d25e4;
        case 0x1d25e8u: goto label_1d25e8;
        case 0x1d25ecu: goto label_1d25ec;
        case 0x1d25f0u: goto label_1d25f0;
        case 0x1d25f4u: goto label_1d25f4;
        case 0x1d25f8u: goto label_1d25f8;
        case 0x1d25fcu: goto label_1d25fc;
        case 0x1d2600u: goto label_1d2600;
        case 0x1d2604u: goto label_1d2604;
        case 0x1d2608u: goto label_1d2608;
        case 0x1d260cu: goto label_1d260c;
        case 0x1d2610u: goto label_1d2610;
        case 0x1d2614u: goto label_1d2614;
        case 0x1d2618u: goto label_1d2618;
        case 0x1d261cu: goto label_1d261c;
        case 0x1d2620u: goto label_1d2620;
        case 0x1d2624u: goto label_1d2624;
        case 0x1d2628u: goto label_1d2628;
        case 0x1d262cu: goto label_1d262c;
        case 0x1d2630u: goto label_1d2630;
        case 0x1d2634u: goto label_1d2634;
        case 0x1d2638u: goto label_1d2638;
        case 0x1d263cu: goto label_1d263c;
        case 0x1d2640u: goto label_1d2640;
        case 0x1d2644u: goto label_1d2644;
        case 0x1d2648u: goto label_1d2648;
        case 0x1d264cu: goto label_1d264c;
        case 0x1d2650u: goto label_1d2650;
        case 0x1d2654u: goto label_1d2654;
        case 0x1d2658u: goto label_1d2658;
        case 0x1d265cu: goto label_1d265c;
        case 0x1d2660u: goto label_1d2660;
        case 0x1d2664u: goto label_1d2664;
        case 0x1d2668u: goto label_1d2668;
        case 0x1d266cu: goto label_1d266c;
        case 0x1d2670u: goto label_1d2670;
        case 0x1d2674u: goto label_1d2674;
        case 0x1d2678u: goto label_1d2678;
        case 0x1d267cu: goto label_1d267c;
        case 0x1d2680u: goto label_1d2680;
        case 0x1d2684u: goto label_1d2684;
        case 0x1d2688u: goto label_1d2688;
        case 0x1d268cu: goto label_1d268c;
        case 0x1d2690u: goto label_1d2690;
        case 0x1d2694u: goto label_1d2694;
        case 0x1d2698u: goto label_1d2698;
        case 0x1d269cu: goto label_1d269c;
        case 0x1d26a0u: goto label_1d26a0;
        case 0x1d26a4u: goto label_1d26a4;
        case 0x1d26a8u: goto label_1d26a8;
        case 0x1d26acu: goto label_1d26ac;
        case 0x1d26b0u: goto label_1d26b0;
        case 0x1d26b4u: goto label_1d26b4;
        case 0x1d26b8u: goto label_1d26b8;
        case 0x1d26bcu: goto label_1d26bc;
        case 0x1d26c0u: goto label_1d26c0;
        case 0x1d26c4u: goto label_1d26c4;
        case 0x1d26c8u: goto label_1d26c8;
        case 0x1d26ccu: goto label_1d26cc;
        case 0x1d26d0u: goto label_1d26d0;
        case 0x1d26d4u: goto label_1d26d4;
        case 0x1d26d8u: goto label_1d26d8;
        case 0x1d26dcu: goto label_1d26dc;
        case 0x1d26e0u: goto label_1d26e0;
        case 0x1d26e4u: goto label_1d26e4;
        case 0x1d26e8u: goto label_1d26e8;
        case 0x1d26ecu: goto label_1d26ec;
        case 0x1d26f0u: goto label_1d26f0;
        case 0x1d26f4u: goto label_1d26f4;
        case 0x1d26f8u: goto label_1d26f8;
        case 0x1d26fcu: goto label_1d26fc;
        case 0x1d2700u: goto label_1d2700;
        case 0x1d2704u: goto label_1d2704;
        case 0x1d2708u: goto label_1d2708;
        case 0x1d270cu: goto label_1d270c;
        case 0x1d2710u: goto label_1d2710;
        case 0x1d2714u: goto label_1d2714;
        case 0x1d2718u: goto label_1d2718;
        case 0x1d271cu: goto label_1d271c;
        case 0x1d2720u: goto label_1d2720;
        case 0x1d2724u: goto label_1d2724;
        case 0x1d2728u: goto label_1d2728;
        case 0x1d272cu: goto label_1d272c;
        case 0x1d2730u: goto label_1d2730;
        case 0x1d2734u: goto label_1d2734;
        case 0x1d2738u: goto label_1d2738;
        case 0x1d273cu: goto label_1d273c;
        case 0x1d2740u: goto label_1d2740;
        case 0x1d2744u: goto label_1d2744;
        case 0x1d2748u: goto label_1d2748;
        case 0x1d274cu: goto label_1d274c;
        case 0x1d2750u: goto label_1d2750;
        case 0x1d2754u: goto label_1d2754;
        case 0x1d2758u: goto label_1d2758;
        case 0x1d275cu: goto label_1d275c;
        case 0x1d2760u: goto label_1d2760;
        case 0x1d2764u: goto label_1d2764;
        case 0x1d2768u: goto label_1d2768;
        case 0x1d276cu: goto label_1d276c;
        case 0x1d2770u: goto label_1d2770;
        case 0x1d2774u: goto label_1d2774;
        case 0x1d2778u: goto label_1d2778;
        case 0x1d277cu: goto label_1d277c;
        case 0x1d2780u: goto label_1d2780;
        case 0x1d2784u: goto label_1d2784;
        case 0x1d2788u: goto label_1d2788;
        case 0x1d278cu: goto label_1d278c;
        case 0x1d2790u: goto label_1d2790;
        case 0x1d2794u: goto label_1d2794;
        case 0x1d2798u: goto label_1d2798;
        case 0x1d279cu: goto label_1d279c;
        case 0x1d27a0u: goto label_1d27a0;
        case 0x1d27a4u: goto label_1d27a4;
        case 0x1d27a8u: goto label_1d27a8;
        case 0x1d27acu: goto label_1d27ac;
        case 0x1d27b0u: goto label_1d27b0;
        case 0x1d27b4u: goto label_1d27b4;
        case 0x1d27b8u: goto label_1d27b8;
        case 0x1d27bcu: goto label_1d27bc;
        case 0x1d27c0u: goto label_1d27c0;
        case 0x1d27c4u: goto label_1d27c4;
        case 0x1d27c8u: goto label_1d27c8;
        case 0x1d27ccu: goto label_1d27cc;
        case 0x1d27d0u: goto label_1d27d0;
        case 0x1d27d4u: goto label_1d27d4;
        case 0x1d27d8u: goto label_1d27d8;
        case 0x1d27dcu: goto label_1d27dc;
        case 0x1d27e0u: goto label_1d27e0;
        case 0x1d27e4u: goto label_1d27e4;
        case 0x1d27e8u: goto label_1d27e8;
        case 0x1d27ecu: goto label_1d27ec;
        case 0x1d27f0u: goto label_1d27f0;
        case 0x1d27f4u: goto label_1d27f4;
        case 0x1d27f8u: goto label_1d27f8;
        case 0x1d27fcu: goto label_1d27fc;
        case 0x1d2800u: goto label_1d2800;
        case 0x1d2804u: goto label_1d2804;
        case 0x1d2808u: goto label_1d2808;
        case 0x1d280cu: goto label_1d280c;
        case 0x1d2810u: goto label_1d2810;
        case 0x1d2814u: goto label_1d2814;
        case 0x1d2818u: goto label_1d2818;
        case 0x1d281cu: goto label_1d281c;
        case 0x1d2820u: goto label_1d2820;
        case 0x1d2824u: goto label_1d2824;
        case 0x1d2828u: goto label_1d2828;
        case 0x1d282cu: goto label_1d282c;
        case 0x1d2830u: goto label_1d2830;
        case 0x1d2834u: goto label_1d2834;
        case 0x1d2838u: goto label_1d2838;
        case 0x1d283cu: goto label_1d283c;
        case 0x1d2840u: goto label_1d2840;
        case 0x1d2844u: goto label_1d2844;
        case 0x1d2848u: goto label_1d2848;
        case 0x1d284cu: goto label_1d284c;
        case 0x1d2850u: goto label_1d2850;
        case 0x1d2854u: goto label_1d2854;
        case 0x1d2858u: goto label_1d2858;
        case 0x1d285cu: goto label_1d285c;
        case 0x1d2860u: goto label_1d2860;
        case 0x1d2864u: goto label_1d2864;
        case 0x1d2868u: goto label_1d2868;
        case 0x1d286cu: goto label_1d286c;
        case 0x1d2870u: goto label_1d2870;
        case 0x1d2874u: goto label_1d2874;
        case 0x1d2878u: goto label_1d2878;
        case 0x1d287cu: goto label_1d287c;
        case 0x1d2880u: goto label_1d2880;
        case 0x1d2884u: goto label_1d2884;
        default: break;
    }

    ctx->pc = 0x1d1f30u;

label_1d1f30:
    // 0x1d1f30: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d1f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1d1f34:
    // 0x1d1f34: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1d1f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1d1f38:
    // 0x1d1f38: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1d1f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1d1f3c:
    // 0x1d1f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d1f40:
    // 0x1d1f40: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1d1f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1d1f44:
    // 0x1d1f44: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1d1f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1d1f48:
    // 0x1d1f48: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d1f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1d1f4c:
    // 0x1d1f4c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d1f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d1f50:
    // 0x1d1f50: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1d1f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1d1f54:
    // 0x1d1f54: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1d1f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1d1f58:
    // 0x1d1f58: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1d1f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1d1f5c:
    // 0x1d1f5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d1f60:
    // 0x1d1f60: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x1d1f60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1d1f64:
    // 0x1d1f64: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d1f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1d1f68:
    // 0x1d1f68: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d1f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d1f6c:
    // 0x1d1f6c: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1d1f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1d1f70:
    // 0x1d1f70: 0x10400237  beqz        $v0, . + 4 + (0x237 << 2)
label_1d1f74:
    if (ctx->pc == 0x1D1F74u) {
        ctx->pc = 0x1D1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F70u;
        // 0x1d1f74: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1F78u;
        goto label_1d1f78;
    }
    ctx->pc = 0x1D1F70u;
    {
        const bool branch_taken_0x1d1f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D1F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1F70u;
        // 0x1d1f74: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d1f70) {
            ctx->pc = 0x1D2850u;
            goto label_1d2850;
        }
    }
    ctx->pc = 0x1D1F78u;
label_1d1f78:
    // 0x1d1f78: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d1f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d1f7c:
    // 0x1d1f7c: 0x2442aff0  addiu       $v0, $v0, -0x5010
    ctx->pc = 0x1d1f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946800));
label_1d1f80:
    // 0x1d1f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1d1f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d1f84:
    // 0x1d1f84: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1d1f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d1f88:
    // 0x1d1f88: 0x800008  jr          $a0
label_1d1f8c:
    if (ctx->pc == 0x1D1F8Cu) {
        ctx->pc = 0x1D1F90u;
        goto label_1d1f90;
    }
    ctx->pc = 0x1D1F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D1F90u: goto label_1d1f90;
            case 0x1D2340u: goto label_1d2340;
            case 0x1D23A8u: goto label_1d23a8;
            case 0x1D2434u: goto label_1d2434;
            case 0x1D24A4u: goto label_1d24a4;
            case 0x1D2548u: goto label_1d2548;
            case 0x1D2644u: goto label_1d2644;
            case 0x1D276Cu: goto label_1d276c;
            case 0x1D2834u: goto label_1d2834;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D1F88u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1D1F90u;
label_1d1f90:
    // 0x1d1f90: 0x26151822  addiu       $s5, $s0, 0x1822
    ctx->pc = 0x1d1f90u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 6178));
label_1d1f94:
    // 0x1d1f94: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d1f98:
    // 0x1d1f98: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1d1f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1d1f9c:
    // 0x1d1f9c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d1f9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1d1fa0:
    // 0x1d1fa0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d1fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d1fa4:
    // 0x1d1fa4: 0x245480f0  addiu       $s4, $v0, -0x7F10
    ctx->pc = 0x1d1fa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934768));
label_1d1fa8:
    // 0x1d1fa8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d1fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d1fac:
    // 0x1d1fac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d1facu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d1fb0:
    // 0x1d1fb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d1fb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fb4:
    // 0x1d1fb4: 0x261e182c  addiu       $fp, $s0, 0x182C
    ctx->pc = 0x1d1fb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 6188));
label_1d1fb8:
    // 0x1d1fb8: 0x24160034  addiu       $s6, $zero, 0x34
    ctx->pc = 0x1d1fb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d1fbc:
    // 0x1d1fbc: 0x261117d4  addiu       $s1, $s0, 0x17D4
    ctx->pc = 0x1d1fbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6100));
label_1d1fc0:
    // 0x1d1fc0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1d1fc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fc4:
    // 0x1d1fc4: 0x0  nop
    ctx->pc = 0x1d1fc4u;
    // NOP
label_1d1fc8:
    // 0x1d1fc8: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x1d1fc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1fcc:
    // 0x1d1fcc: 0x50560021  beql        $v0, $s6, . + 4 + (0x21 << 2)
label_1d1fd0:
    if (ctx->pc == 0x1D1FD0u) {
        ctx->pc = 0x1D1FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FCCu;
        // 0x1d1fd0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FD4u;
        goto label_1d1fd4;
    }
    ctx->pc = 0x1D1FCCu;
    {
        const bool branch_taken_0x1d1fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x1d1fcc) {
            ctx->pc = 0x1D1FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D1FCCu;
            // 0x1d1fd0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2054u;
            goto label_1d2054;
        }
    }
    ctx->pc = 0x1D1FD4u;
label_1d1fd4:
    // 0x1d1fd4: 0x96460000  lhu         $a2, 0x0($s2)
    ctx->pc = 0x1d1fd4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1d1fd8:
    // 0x1d1fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d1fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d1fdc:
    // 0x1d1fdc: 0xc075168  jal         func_1D45A0
label_1d1fe0:
    if (ctx->pc == 0x1D1FE0u) {
        ctx->pc = 0x1D1FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FDCu;
        // 0x1d1fe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FE4u;
        goto label_1d1fe4;
    }
    ctx->pc = 0x1D1FDCu;
    SET_GPR_U32(ctx, 31, 0x1D1FE4u);
    ctx->pc = 0x1D1FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FDCu;
    // 0x1d1fe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45A0u, 0x1D1FDCu, 0x1D1FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FE4u;
label_1d1fe4:
    // 0x1d1fe4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d1fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1fe8:
    // 0x1d1fe8: 0xc074326  jal         func_1D0C98
label_1d1fec:
    if (ctx->pc == 0x1D1FECu) {
        ctx->pc = 0x1D1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D1FE8u;
        // 0x1d1fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D1FF0u;
        goto label_1d1ff0;
    }
    ctx->pc = 0x1D1FE8u;
    SET_GPR_U32(ctx, 31, 0x1D1FF0u);
    ctx->pc = 0x1D1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D1FE8u;
    // 0x1d1fec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C98u, 0x1D1FE8u, 0x1D1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D1FF0u;
label_1d1ff0:
    // 0x1d1ff0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d1ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d1ff4:
    // 0x1d1ff4: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x1d1ff4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d1ff8:
    // 0x1d1ff8: 0x0  nop
    ctx->pc = 0x1d1ff8u;
    // NOP
label_1d1ffc:
    // 0x1d1ffc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d1ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d2000:
    // 0x1d2000: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d2000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d2004:
    // 0x1d2004: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d2004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2008:
    // 0x1d2008: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1d2008u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_1d200c:
    // 0x1d200c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1d200cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_1d2010:
    // 0x1d2010: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d2010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1d2014:
    // 0x1d2014: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1d2014u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_1d2018:
    // 0x1d2018: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d2018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d201c:
    // 0x1d201c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1d201cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2020:
    // 0x1d2020: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d2020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2024:
    // 0x1d2024: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d2024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d2028:
    // 0x1d2028: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d2028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d202c:
    // 0x1d202c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1d202cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d2030:
    // 0x1d2030: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d2030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d2034:
    // 0x1d2034: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d2034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d2038:
    // 0x1d2038: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d2038u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d203c:
    // 0x1d203c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d203cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d2040:
    // 0x1d2040: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d2040u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d2044:
    // 0x1d2044: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d2044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d2048:
    // 0x1d2048: 0x60f809  jalr        $v1
label_1d204c:
    if (ctx->pc == 0x1D204Cu) {
        ctx->pc = 0x1D204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2048u;
        // 0x1d204c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2050u;
        goto label_1d2050;
    }
    ctx->pc = 0x1D2048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D2050u);
        ctx->pc = 0x1D204Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2048u;
        // 0x1d204c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2048u, 0x1D2050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2050u;
label_1d2050:
    // 0x1d2050: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2054:
    // 0x1d2054: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d2054u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1d2058:
    // 0x1d2058: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d2058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1d205c:
    // 0x1d205c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1d205cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_1d2060:
    // 0x1d2060: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1d2064:
    if (ctx->pc == 0x1D2064u) {
        ctx->pc = 0x1D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2060u;
        // 0x1d2064: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2068u;
        goto label_1d2068;
    }
    ctx->pc = 0x1D2060u;
    {
        const bool branch_taken_0x1d2060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2060u;
        // 0x1d2064: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2060) {
            ctx->pc = 0x1D1FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d1fc8;
        }
    }
    ctx->pc = 0x1D2068u;
label_1d2068:
    // 0x1d2068: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d206c:
    // 0x1d206c: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1d206cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d2070:
    // 0x1d2070: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1d2070u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1d2074:
    // 0x1d2074: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d2074u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1d2078:
    // 0x1d2078: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d2078u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d207c:
    // 0x1d207c: 0x245480f0  addiu       $s4, $v0, -0x7F10
    ctx->pc = 0x1d207cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934768));
label_1d2080:
    // 0x1d2080: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d2084:
    // 0x1d2084: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d2084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d2088:
    // 0x1d2088: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d2088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d208c:
    // 0x1d208c: 0x24150034  addiu       $s5, $zero, 0x34
    ctx->pc = 0x1d208cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d2090:
    // 0x1d2090: 0x261117d4  addiu       $s1, $s0, 0x17D4
    ctx->pc = 0x1d2090u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 6100));
label_1d2094:
    // 0x1d2094: 0x0  nop
    ctx->pc = 0x1d2094u;
    // NOP
label_1d2098:
    // 0x1d2098: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x1d2098u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1d209c:
    // 0x1d209c: 0x54550021  bnel        $v0, $s5, . + 4 + (0x21 << 2)
label_1d20a0:
    if (ctx->pc == 0x1D20A0u) {
        ctx->pc = 0x1D20A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D209Cu;
        // 0x1d20a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20A4u;
        goto label_1d20a4;
    }
    ctx->pc = 0x1D209Cu;
    {
        const bool branch_taken_0x1d209c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1d209c) {
            ctx->pc = 0x1D20A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D209Cu;
            // 0x1d20a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2124u;
            goto label_1d2124;
        }
    }
    ctx->pc = 0x1D20A4u;
label_1d20a4:
    // 0x1d20a4: 0x3406ffff  ori         $a2, $zero, 0xFFFF
    ctx->pc = 0x1d20a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1d20a8:
    // 0x1d20a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d20a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d20ac:
    // 0x1d20ac: 0xc075168  jal         func_1D45A0
label_1d20b0:
    if (ctx->pc == 0x1D20B0u) {
        ctx->pc = 0x1D20B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20ACu;
        // 0x1d20b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20B4u;
        goto label_1d20b4;
    }
    ctx->pc = 0x1D20ACu;
    SET_GPR_U32(ctx, 31, 0x1D20B4u);
    ctx->pc = 0x1D20B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20ACu;
    // 0x1d20b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45A0u, 0x1D20ACu, 0x1D20B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20B4u;
label_1d20b4:
    // 0x1d20b4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d20b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d20b8:
    // 0x1d20b8: 0xc074326  jal         func_1D0C98
label_1d20bc:
    if (ctx->pc == 0x1D20BCu) {
        ctx->pc = 0x1D20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20B8u;
        // 0x1d20bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20C0u;
        goto label_1d20c0;
    }
    ctx->pc = 0x1D20B8u;
    SET_GPR_U32(ctx, 31, 0x1D20C0u);
    ctx->pc = 0x1D20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20B8u;
    // 0x1d20bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C98u, 0x1D20B8u, 0x1D20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20C0u;
label_1d20c0:
    // 0x1d20c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d20c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d20c4:
    // 0x1d20c4: 0x44931000  mtc1        $s3, $f2
    ctx->pc = 0x1d20c4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d20c8:
    // 0x1d20c8: 0x0  nop
    ctx->pc = 0x1d20c8u;
    // NOP
label_1d20cc:
    // 0x1d20cc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d20ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d20d0:
    // 0x1d20d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d20d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d20d4:
    // 0x1d20d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d20d8:
    // 0x1d20d8: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1d20d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_1d20dc:
    // 0x1d20dc: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1d20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_1d20e0:
    // 0x1d20e0: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d20e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1d20e4:
    // 0x1d20e4: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1d20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_1d20e8:
    // 0x1d20e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d20e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d20ec:
    // 0x1d20ec: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x1d20ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d20f0:
    // 0x1d20f0: 0xc6810004  lwc1        $f1, 0x4($s4)
    ctx->pc = 0x1d20f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d20f4:
    // 0x1d20f4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d20f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d20f8:
    // 0x1d20f8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d20f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d20fc:
    // 0x1d20fc: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1d20fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d2100:
    // 0x1d2100: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1d2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d2104:
    // 0x1d2104: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d2104u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d2108:
    // 0x1d2108: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1d2108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d210c:
    // 0x1d210c: 0x8cc20214  lw          $v0, 0x214($a2)
    ctx->pc = 0x1d210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d2110:
    // 0x1d2110: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x1d2110u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_1d2114:
    // 0x1d2114: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x1d2114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_1d2118:
    // 0x1d2118: 0x60f809  jalr        $v1
label_1d211c:
    if (ctx->pc == 0x1D211Cu) {
        ctx->pc = 0x1D211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2118u;
        // 0x1d211c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2120u;
        goto label_1d2120;
    }
    ctx->pc = 0x1D2118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D2120u);
        ctx->pc = 0x1D211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2118u;
        // 0x1d211c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2118u, 0x1D2120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2120u;
label_1d2120:
    // 0x1d2120: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2124:
    // 0x1d2124: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x1d2124u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1d2128:
    // 0x1d2128: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1d2128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1d212c:
    // 0x1d212c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1d212cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_1d2130:
    // 0x1d2130: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_1d2134:
    if (ctx->pc == 0x1D2134u) {
        ctx->pc = 0x1D2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2130u;
        // 0x1d2134: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2138u;
        goto label_1d2138;
    }
    ctx->pc = 0x1D2130u;
    {
        const bool branch_taken_0x1d2130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2130u;
        // 0x1d2134: 0x26520002  addiu       $s2, $s2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2130) {
            ctx->pc = 0x1D2098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2098;
        }
    }
    ctx->pc = 0x1D2138u;
label_1d2138:
    // 0x1d2138: 0x261617e8  addiu       $s6, $s0, 0x17E8
    ctx->pc = 0x1d2138u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
label_1d213c:
    // 0x1d213c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d2140:
    // 0x1d2140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d2144:
    // 0x1d2144: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d2144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d2148:
    // 0x1d2148: 0x24558080  addiu       $s5, $v0, -0x7F80
    ctx->pc = 0x1d2148u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
label_1d214c:
    // 0x1d214c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1d214cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1d2150:
    // 0x1d2150: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d2150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1d2154:
    // 0x1d2154: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d2154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d2158:
    // 0x1d2158: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d2158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d215c:
    // 0x1d215c: 0x24170034  addiu       $s7, $zero, 0x34
    ctx->pc = 0x1d215cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d2160:
    // 0x1d2160: 0x2c0982d  daddu       $s3, $s6, $zero
    ctx->pc = 0x1d2160u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d2164:
    // 0x1d2164: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d2164u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2168:
    // 0x1d2168: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x1d2168u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d216c:
    // 0x1d216c: 0x0  nop
    ctx->pc = 0x1d216cu;
    // NOP
label_1d2170:
    // 0x1d2170: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x1d2170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1d2174:
    // 0x1d2174: 0x5057002a  beql        $v0, $s7, . + 4 + (0x2A << 2)
label_1d2178:
    if (ctx->pc == 0x1D2178u) {
        ctx->pc = 0x1D2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2174u;
        // 0x1d2178: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D217Cu;
        goto label_1d217c;
    }
    ctx->pc = 0x1D2174u;
    {
        const bool branch_taken_0x1d2174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x1d2174) {
            ctx->pc = 0x1D2178u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2174u;
            // 0x1d2178: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2220u;
            goto label_1d2220;
        }
    }
    ctx->pc = 0x1D217Cu;
label_1d217c:
    // 0x1d217c: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x1d217cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_1d2180:
    // 0x1d2180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2184:
    // 0x1d2184: 0xc075168  jal         func_1D45A0
label_1d2188:
    if (ctx->pc == 0x1D2188u) {
        ctx->pc = 0x1D2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2184u;
        // 0x1d2188: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D218Cu;
        goto label_1d218c;
    }
    ctx->pc = 0x1D2184u;
    SET_GPR_U32(ctx, 31, 0x1D218Cu);
    ctx->pc = 0x1D2188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2184u;
    // 0x1d2188: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45A0u, 0x1D2184u, 0x1D218Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D218Cu;
label_1d218c:
    // 0x1d218c: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_1d2190:
    if (ctx->pc == 0x1D2190u) {
        ctx->pc = 0x1D2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D218Cu;
        // 0x1d2190: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2194u;
        goto label_1d2194;
    }
    ctx->pc = 0x1D218Cu;
    {
        const bool branch_taken_0x1d218c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D218Cu;
        // 0x1d2190: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d218c) {
            ctx->pc = 0x1D21A8u;
            goto label_1d21a8;
        }
    }
    ctx->pc = 0x1D2194u;
label_1d2194:
    // 0x1d2194: 0x8e0417e8  lw          $a0, 0x17E8($s0)
    ctx->pc = 0x1d2194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6120)));
label_1d2198:
    // 0x1d2198: 0xc074326  jal         func_1D0C98
label_1d219c:
    if (ctx->pc == 0x1D219Cu) {
        ctx->pc = 0x1D219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2198u;
        // 0x1d219c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D21A0u;
        goto label_1d21a0;
    }
    ctx->pc = 0x1D2198u;
    SET_GPR_U32(ctx, 31, 0x1D21A0u);
    ctx->pc = 0x1D219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2198u;
    // 0x1d219c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C98u, 0x1D2198u, 0x1D21A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21A0u;
label_1d21a0:
    // 0x1d21a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d21a4:
    if (ctx->pc == 0x1D21A4u) {
        ctx->pc = 0x1D21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21A0u;
        // 0x1d21a4: 0x260417e8  addiu       $a0, $s0, 0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D21A8u;
        goto label_1d21a8;
    }
    ctx->pc = 0x1D21A0u;
    {
        const bool branch_taken_0x1d21a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21A0u;
        // 0x1d21a4: 0x260417e8  addiu       $a0, $s0, 0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21a0) {
            ctx->pc = 0x1D21B8u;
            goto label_1d21b8;
        }
    }
    ctx->pc = 0x1D21A8u;
label_1d21a8:
    // 0x1d21a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d21ac:
    // 0x1d21ac: 0xc074364  jal         func_1D0D90
label_1d21b0:
    if (ctx->pc == 0x1D21B0u) {
        ctx->pc = 0x1D21B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21ACu;
        // 0x1d21b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D21B4u;
        goto label_1d21b4;
    }
    ctx->pc = 0x1D21ACu;
    SET_GPR_U32(ctx, 31, 0x1D21B4u);
    ctx->pc = 0x1D21B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D21ACu;
    // 0x1d21b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D90u, 0x1D21ACu, 0x1D21B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D21B4u;
label_1d21b4:
    // 0x1d21b4: 0x260417e8  addiu       $a0, $s0, 0x17E8
    ctx->pc = 0x1d21b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
label_1d21b8:
    // 0x1d21b8: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x1d21b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
label_1d21bc:
    // 0x1d21bc: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x1d21bcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d21c0:
    // 0x1d21c0: 0x0  nop
    ctx->pc = 0x1d21c0u;
    // NOP
label_1d21c4:
    // 0x1d21c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d21c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d21c8:
    // 0x1d21c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d21c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d21cc:
    // 0x1d21cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d21ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d21d0:
    // 0x1d21d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d21d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d21d4:
    // 0x1d21d4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1d21d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_1d21d8:
    // 0x1d21d8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1d21d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_1d21dc:
    // 0x1d21dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d21dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1d21e0:
    // 0x1d21e0: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1d21e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_1d21e4:
    // 0x1d21e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d21e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d21e8:
    // 0x1d21e8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1d21e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d21ec:
    // 0x1d21ec: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x1d21ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d21f0:
    // 0x1d21f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d21f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d21f4:
    // 0x1d21f4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d21f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d21f8:
    // 0x1d21f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1d21f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d21fc:
    // 0x1d21fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d21fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d2200:
    // 0x1d2200: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2204:
    // 0x1d2204: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1d2204u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2208:
    // 0x1d2208: 0x8cc30214  lw          $v1, 0x214($a2)
    ctx->pc = 0x1d2208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d220c:
    // 0x1d220c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1d220cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1d2210:
    // 0x1d2210: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1d2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1d2214:
    // 0x1d2214: 0x40f809  jalr        $v0
label_1d2218:
    if (ctx->pc == 0x1D2218u) {
        ctx->pc = 0x1D2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2214u;
        // 0x1d2218: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D221Cu;
        goto label_1d221c;
    }
    ctx->pc = 0x1D2214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D221Cu);
        ctx->pc = 0x1D2218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2214u;
        // 0x1d2218: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2214u, 0x1D221Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D221Cu;
label_1d221c:
    // 0x1d221c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1d221cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1d2220:
    // 0x1d2220: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1d2220u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1d2224:
    // 0x1d2224: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d2224u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1d2228:
    // 0x1d2228: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1d2228u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_1d222c:
    // 0x1d222c: 0x2a420005  slti        $v0, $s2, 0x5
    ctx->pc = 0x1d222cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)5) ? 1 : 0);
label_1d2230:
    // 0x1d2230: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_1d2234:
    if (ctx->pc == 0x1D2234u) {
        ctx->pc = 0x1D2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2230u;
        // 0x1d2234: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2238u;
        goto label_1d2238;
    }
    ctx->pc = 0x1D2230u;
    {
        const bool branch_taken_0x1d2230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2230u;
        // 0x1d2234: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2230) {
            ctx->pc = 0x1D2170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2170;
        }
    }
    ctx->pc = 0x1D2238u;
label_1d2238:
    // 0x1d2238: 0x261617e8  addiu       $s6, $s0, 0x17E8
    ctx->pc = 0x1d2238u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
label_1d223c:
    // 0x1d223c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x1d223cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_1d2240:
    // 0x1d2240: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2240u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d2244:
    // 0x1d2244: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1d2244u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d2248:
    // 0x1d2248: 0x24558080  addiu       $s5, $v0, -0x7F80
    ctx->pc = 0x1d2248u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
label_1d224c:
    // 0x1d224c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1d224cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1d2250:
    // 0x1d2250: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1d2250u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1d2254:
    // 0x1d2254: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1d2254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1d2258:
    // 0x1d2258: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x1d2258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d225c:
    // 0x1d225c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d225cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2260:
    // 0x1d2260: 0x24170034  addiu       $s7, $zero, 0x34
    ctx->pc = 0x1d2260u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1d2264:
    // 0x1d2264: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1d2264u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d2268:
    // 0x1d2268: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d2268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d226c:
    // 0x1d226c: 0x0  nop
    ctx->pc = 0x1d226cu;
    // NOP
label_1d2270:
    // 0x1d2270: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x1d2270u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_1d2274:
    // 0x1d2274: 0x5457002a  bnel        $v0, $s7, . + 4 + (0x2A << 2)
label_1d2278:
    if (ctx->pc == 0x1D2278u) {
        ctx->pc = 0x1D2278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2274u;
        // 0x1d2278: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D227Cu;
        goto label_1d227c;
    }
    ctx->pc = 0x1D2274u;
    {
        const bool branch_taken_0x1d2274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1d2274) {
            ctx->pc = 0x1D2278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2274u;
            // 0x1d2278: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2320u;
            goto label_1d2320;
        }
    }
    ctx->pc = 0x1D227Cu;
label_1d227c:
    // 0x1d227c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d227cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2280:
    // 0x1d2280: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d2280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2284:
    // 0x1d2284: 0xc075168  jal         func_1D45A0
label_1d2288:
    if (ctx->pc == 0x1D2288u) {
        ctx->pc = 0x1D2288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2284u;
        // 0x1d2288: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D228Cu;
        goto label_1d228c;
    }
    ctx->pc = 0x1D2284u;
    SET_GPR_U32(ctx, 31, 0x1D228Cu);
    ctx->pc = 0x1D2288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2284u;
    // 0x1d2288: 0x3406ffff  ori         $a2, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D45A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D45A0u, 0x1D2284u, 0x1D228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D228Cu;
label_1d228c:
    // 0x1d228c: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_1d2290:
    if (ctx->pc == 0x1D2290u) {
        ctx->pc = 0x1D2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D228Cu;
        // 0x1d2290: 0x2d31021  addu        $v0, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2294u;
        goto label_1d2294;
    }
    ctx->pc = 0x1D228Cu;
    {
        const bool branch_taken_0x1d228c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D228Cu;
        // 0x1d2290: 0x2d31021  addu        $v0, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d228c) {
            ctx->pc = 0x1D22A8u;
            goto label_1d22a8;
        }
    }
    ctx->pc = 0x1D2294u;
label_1d2294:
    // 0x1d2294: 0x8e0417e8  lw          $a0, 0x17E8($s0)
    ctx->pc = 0x1d2294u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6120)));
label_1d2298:
    // 0x1d2298: 0xc074326  jal         func_1D0C98
label_1d229c:
    if (ctx->pc == 0x1D229Cu) {
        ctx->pc = 0x1D229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2298u;
        // 0x1d229c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22A0u;
        goto label_1d22a0;
    }
    ctx->pc = 0x1D2298u;
    SET_GPR_U32(ctx, 31, 0x1D22A0u);
    ctx->pc = 0x1D229Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2298u;
    // 0x1d229c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0C98u, 0x1D2298u, 0x1D22A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22A0u;
label_1d22a0:
    // 0x1d22a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d22a4:
    if (ctx->pc == 0x1D22A4u) {
        ctx->pc = 0x1D22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22A0u;
        // 0x1d22a4: 0x260417e8  addiu       $a0, $s0, 0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22A8u;
        goto label_1d22a8;
    }
    ctx->pc = 0x1D22A0u;
    {
        const bool branch_taken_0x1d22a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22A0u;
        // 0x1d22a4: 0x260417e8  addiu       $a0, $s0, 0x17E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22a0) {
            ctx->pc = 0x1D22B8u;
            goto label_1d22b8;
        }
    }
    ctx->pc = 0x1D22A8u;
label_1d22a8:
    // 0x1d22a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d22a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d22ac:
    // 0x1d22ac: 0xc074364  jal         func_1D0D90
label_1d22b0:
    if (ctx->pc == 0x1D22B0u) {
        ctx->pc = 0x1D22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22ACu;
        // 0x1d22b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22B4u;
        goto label_1d22b4;
    }
    ctx->pc = 0x1D22ACu;
    SET_GPR_U32(ctx, 31, 0x1D22B4u);
    ctx->pc = 0x1D22B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22ACu;
    // 0x1d22b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0D90u, 0x1D22ACu, 0x1D22B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22B4u;
label_1d22b4:
    // 0x1d22b4: 0x260417e8  addiu       $a0, $s0, 0x17E8
    ctx->pc = 0x1d22b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
label_1d22b8:
    // 0x1d22b8: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x1d22b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_1d22bc:
    // 0x1d22bc: 0x44911000  mtc1        $s1, $f2
    ctx->pc = 0x1d22bcu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d22c0:
    // 0x1d22c0: 0x0  nop
    ctx->pc = 0x1d22c0u;
    // NOP
label_1d22c4:
    // 0x1d22c4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1d22c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1d22c8:
    // 0x1d22c8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d22cc:
    // 0x1d22cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d22ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d22d0:
    // 0x1d22d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d22d4:
    // 0x1d22d4: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x1d22d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_1d22d8:
    // 0x1d22d8: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x1d22d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
label_1d22dc:
    // 0x1d22dc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d22dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1d22e0:
    // 0x1d22e0: 0xac620250  sw          $v0, 0x250($v1)
    ctx->pc = 0x1d22e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 592), GPR_U32(ctx, 2));
label_1d22e4:
    // 0x1d22e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d22e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d22e8:
    // 0x1d22e8: 0xc6a00008  lwc1        $f0, 0x8($s5)
    ctx->pc = 0x1d22e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d22ec:
    // 0x1d22ec: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x1d22ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d22f0:
    // 0x1d22f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d22f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d22f4:
    // 0x1d22f4: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x1d22f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d22f8:
    // 0x1d22f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1d22f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d22fc:
    // 0x1d22fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1d22fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d2300:
    // 0x1d2300: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2304:
    // 0x1d2304: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1d2304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2308:
    // 0x1d2308: 0x8cc30214  lw          $v1, 0x214($a2)
    ctx->pc = 0x1d2308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 532)));
label_1d230c:
    // 0x1d230c: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x1d230cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_1d2310:
    // 0x1d2310: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x1d2310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_1d2314:
    // 0x1d2314: 0x40f809  jalr        $v0
label_1d2318:
    if (ctx->pc == 0x1D2318u) {
        ctx->pc = 0x1D2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2314u;
        // 0x1d2318: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D231Cu;
        goto label_1d231c;
    }
    ctx->pc = 0x1D2314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D231Cu);
        ctx->pc = 0x1D2318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2314u;
        // 0x1d2318: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2314u, 0x1D231Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D231Cu;
label_1d231c:
    // 0x1d231c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d231cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d2320:
    // 0x1d2320: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_1d2324:
    // 0x1d2324: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1d2324u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1d2328:
    // 0x1d2328: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_1d232c:
    // 0x1d232c: 0x2a220005  slti        $v0, $s1, 0x5
    ctx->pc = 0x1d232cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)5) ? 1 : 0);
label_1d2330:
    // 0x1d2330: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
label_1d2334:
    if (ctx->pc == 0x1D2334u) {
        ctx->pc = 0x1D2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2330u;
        // 0x1d2334: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2338u;
        goto label_1d2338;
    }
    ctx->pc = 0x1D2330u;
    {
        const bool branch_taken_0x1d2330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2330u;
        // 0x1d2334: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2330) {
            ctx->pc = 0x1D2270u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2270;
        }
    }
    ctx->pc = 0x1D2338u;
label_1d2338:
    // 0x1d2338: 0x10000039  b           . + 4 + (0x39 << 2)
label_1d233c:
    if (ctx->pc == 0x1D233Cu) {
        ctx->pc = 0x1D233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2338u;
        // 0x1d233c: 0x8e021808  lw          $v0, 0x1808($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2340u;
        goto label_1d2340;
    }
    ctx->pc = 0x1D2338u;
    {
        const bool branch_taken_0x1d2338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2338u;
        // 0x1d233c: 0x8e021808  lw          $v0, 0x1808($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2338) {
            ctx->pc = 0x1D2420u;
            goto label_1d2420;
        }
    }
    ctx->pc = 0x1D2340u;
label_1d2340:
    // 0x1d2340: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d2340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
label_1d2344:
    // 0x1d2344: 0x14400139  bnez        $v0, . + 4 + (0x139 << 2)
label_1d2348:
    if (ctx->pc == 0x1D2348u) {
        ctx->pc = 0x1D2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2344u;
        // 0x1d2348: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D234Cu;
        goto label_1d234c;
    }
    ctx->pc = 0x1D2344u;
    {
        const bool branch_taken_0x1d2344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2344u;
        // 0x1d2348: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2344) {
            ctx->pc = 0x1D282Cu;
            goto label_1d282c;
        }
    }
    ctx->pc = 0x1D234Cu;
label_1d234c:
    // 0x1d234c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d234cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2350:
    // 0x1d2350: 0xc07570e  jal         func_1D5C38
label_1d2354:
    if (ctx->pc == 0x1D2354u) {
        ctx->pc = 0x1D2354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2350u;
        // 0x1d2354: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2358u;
        goto label_1d2358;
    }
    ctx->pc = 0x1D2350u;
    SET_GPR_U32(ctx, 31, 0x1D2358u);
    ctx->pc = 0x1D2354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2350u;
    // 0x1d2354: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5C38u, 0x1D2350u, 0x1D2358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2358u;
label_1d2358:
    // 0x1d2358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d235c:
    // 0x1d235c: 0xc075748  jal         func_1D5D20
label_1d2360:
    if (ctx->pc == 0x1D2360u) {
        ctx->pc = 0x1D2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D235Cu;
        // 0x1d2360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2364u;
        goto label_1d2364;
    }
    ctx->pc = 0x1D235Cu;
    SET_GPR_U32(ctx, 31, 0x1D2364u);
    ctx->pc = 0x1D2360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D235Cu;
    // 0x1d2360: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D20u, 0x1D235Cu, 0x1D2364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2364u;
label_1d2364:
    // 0x1d2364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2368:
    // 0x1d2368: 0xc075782  jal         func_1D5E08
label_1d236c:
    if (ctx->pc == 0x1D236Cu) {
        ctx->pc = 0x1D236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2368u;
        // 0x1d236c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2370u;
        goto label_1d2370;
    }
    ctx->pc = 0x1D2368u;
    SET_GPR_U32(ctx, 31, 0x1D2370u);
    ctx->pc = 0x1D236Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2368u;
    // 0x1d236c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5E08u, 0x1D2368u, 0x1D2370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2370u;
label_1d2370:
    // 0x1d2370: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2374:
    // 0x1d2374: 0xc0757d4  jal         func_1D5F50
label_1d2378:
    if (ctx->pc == 0x1D2378u) {
        ctx->pc = 0x1D2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2374u;
        // 0x1d2378: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D237Cu;
        goto label_1d237c;
    }
    ctx->pc = 0x1D2374u;
    SET_GPR_U32(ctx, 31, 0x1D237Cu);
    ctx->pc = 0x1D2378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2374u;
    // 0x1d2378: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5F50u, 0x1D2374u, 0x1D237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D237Cu;
label_1d237c:
    // 0x1d237c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d237cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2380:
    // 0x1d2380: 0xc07580c  jal         func_1D6030
label_1d2384:
    if (ctx->pc == 0x1D2384u) {
        ctx->pc = 0x1D2384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2380u;
        // 0x1d2384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2388u;
        goto label_1d2388;
    }
    ctx->pc = 0x1D2380u;
    SET_GPR_U32(ctx, 31, 0x1D2388u);
    ctx->pc = 0x1D2384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2380u;
    // 0x1d2384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6030u, 0x1D2380u, 0x1D2388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2388u;
label_1d2388:
    // 0x1d2388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d238c:
    // 0x1d238c: 0xc07583e  jal         func_1D60F8
label_1d2390:
    if (ctx->pc == 0x1D2390u) {
        ctx->pc = 0x1D2390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D238Cu;
        // 0x1d2390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2394u;
        goto label_1d2394;
    }
    ctx->pc = 0x1D238Cu;
    SET_GPR_U32(ctx, 31, 0x1D2394u);
    ctx->pc = 0x1D2390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D238Cu;
    // 0x1d2390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D60F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D60F8u, 0x1D238Cu, 0x1D2394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2394u;
label_1d2394:
    // 0x1d2394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2398:
    // 0x1d2398: 0xc075870  jal         func_1D61C0
label_1d239c:
    if (ctx->pc == 0x1D239Cu) {
        ctx->pc = 0x1D239Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2398u;
        // 0x1d239c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23A0u;
        goto label_1d23a0;
    }
    ctx->pc = 0x1D2398u;
    SET_GPR_U32(ctx, 31, 0x1D23A0u);
    ctx->pc = 0x1D239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2398u;
    // 0x1d239c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D61C0u, 0x1D2398u, 0x1D23A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23A0u;
label_1d23a0:
    // 0x1d23a0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1d23a4:
    if (ctx->pc == 0x1D23A4u) {
        ctx->pc = 0x1D23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23A0u;
        // 0x1d23a4: 0x8e021808  lw          $v0, 0x1808($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23A8u;
        goto label_1d23a8;
    }
    ctx->pc = 0x1D23A0u;
    {
        const bool branch_taken_0x1d23a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23A0u;
        // 0x1d23a4: 0x8e021808  lw          $v0, 0x1808($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23a0) {
            ctx->pc = 0x1D2420u;
            goto label_1d2420;
        }
    }
    ctx->pc = 0x1D23A8u;
label_1d23a8:
    // 0x1d23a8: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d23a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
label_1d23ac:
    // 0x1d23ac: 0x1440011f  bnez        $v0, . + 4 + (0x11F << 2)
label_1d23b0:
    if (ctx->pc == 0x1D23B0u) {
        ctx->pc = 0x1D23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23ACu;
        // 0x1d23b0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23B4u;
        goto label_1d23b4;
    }
    ctx->pc = 0x1D23ACu;
    {
        const bool branch_taken_0x1d23ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23ACu;
        // 0x1d23b0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23ac) {
            ctx->pc = 0x1D282Cu;
            goto label_1d282c;
        }
    }
    ctx->pc = 0x1D23B4u;
label_1d23b4:
    // 0x1d23b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d23b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d23b8:
    // 0x1d23b8: 0xc07580c  jal         func_1D6030
label_1d23bc:
    if (ctx->pc == 0x1D23BCu) {
        ctx->pc = 0x1D23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23B8u;
        // 0x1d23bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23C0u;
        goto label_1d23c0;
    }
    ctx->pc = 0x1D23B8u;
    SET_GPR_U32(ctx, 31, 0x1D23C0u);
    ctx->pc = 0x1D23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23B8u;
    // 0x1d23bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6030u, 0x1D23B8u, 0x1D23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23C0u;
label_1d23c0:
    // 0x1d23c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d23c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d23c4:
    // 0x1d23c4: 0xc07583e  jal         func_1D60F8
label_1d23c8:
    if (ctx->pc == 0x1D23C8u) {
        ctx->pc = 0x1D23C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23C4u;
        // 0x1d23c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23CCu;
        goto label_1d23cc;
    }
    ctx->pc = 0x1D23C4u;
    SET_GPR_U32(ctx, 31, 0x1D23CCu);
    ctx->pc = 0x1D23C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23C4u;
    // 0x1d23c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D60F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D60F8u, 0x1D23C4u, 0x1D23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23CCu;
label_1d23cc:
    // 0x1d23cc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d23ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d23d0:
    // 0x1d23d0: 0xc07e9c4  jal         func_1FA710
label_1d23d4:
    if (ctx->pc == 0x1D23D4u) {
        ctx->pc = 0x1D23D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23D0u;
        // 0x1d23d4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23D8u;
        goto label_1d23d8;
    }
    ctx->pc = 0x1D23D0u;
    SET_GPR_U32(ctx, 31, 0x1D23D8u);
    ctx->pc = 0x1D23D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23D0u;
    // 0x1d23d4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA710u, 0x1D23D0u, 0x1D23D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23D8u;
label_1d23d8:
    // 0x1d23d8: 0x8e031814  lw          $v1, 0x1814($s0)
    ctx->pc = 0x1d23d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6164)));
label_1d23dc:
    // 0x1d23dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1d23dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1d23e0:
    // 0x1d23e0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1d23e4:
    if (ctx->pc == 0x1D23E4u) {
        ctx->pc = 0x1D23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23E0u;
        // 0x1d23e4: 0x8e021800  lw          $v0, 0x1800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23E8u;
        goto label_1d23e8;
    }
    ctx->pc = 0x1D23E0u;
    {
        const bool branch_taken_0x1d23e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D23E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23E0u;
        // 0x1d23e4: 0x8e021800  lw          $v0, 0x1800($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23e0) {
            ctx->pc = 0x1D2404u;
            goto label_1d2404;
        }
    }
    ctx->pc = 0x1D23E8u;
label_1d23e8:
    // 0x1d23e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d23e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d23ec:
    // 0x1d23ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d23f0:
    // 0x1d23f0: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d23f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_1d23f4:
    // 0x1d23f4: 0xc075870  jal         func_1D61C0
label_1d23f8:
    if (ctx->pc == 0x1D23F8u) {
        ctx->pc = 0x1D23F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23F4u;
        // 0x1d23f8: 0xae021800  sw          $v0, 0x1800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23FCu;
        goto label_1d23fc;
    }
    ctx->pc = 0x1D23F4u;
    SET_GPR_U32(ctx, 31, 0x1D23FCu);
    ctx->pc = 0x1D23F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D23F4u;
    // 0x1d23f8: 0xae021800  sw          $v0, 0x1800($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D61C0u, 0x1D23F4u, 0x1D23FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D23FCu;
label_1d23fc:
    // 0x1d23fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d2400:
    if (ctx->pc == 0x1D2400u) {
        ctx->pc = 0x1D2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23FCu;
        // 0x1d2400: 0x8e021808  lw          $v0, 0x1808($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2404u;
        goto label_1d2404;
    }
    ctx->pc = 0x1D23FCu;
    {
        const bool branch_taken_0x1d23fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23FCu;
        // 0x1d2400: 0x8e021808  lw          $v0, 0x1808($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23fc) {
            ctx->pc = 0x1D2420u;
            goto label_1d2420;
        }
    }
    ctx->pc = 0x1D2404u;
label_1d2404:
    // 0x1d2404: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1d2404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_1d2408:
    // 0x1d2408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d2408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d240c:
    // 0x1d240c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1d240cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d2410:
    // 0x1d2410: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d2410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d2414:
    // 0x1d2414: 0xc075870  jal         func_1D61C0
label_1d2418:
    if (ctx->pc == 0x1D2418u) {
        ctx->pc = 0x1D2418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2414u;
        // 0x1d2418: 0xae021800  sw          $v0, 0x1800($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D241Cu;
        goto label_1d241c;
    }
    ctx->pc = 0x1D2414u;
    SET_GPR_U32(ctx, 31, 0x1D241Cu);
    ctx->pc = 0x1D2418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2414u;
    // 0x1d2418: 0xae021800  sw          $v0, 0x1800($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 6144), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D61C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D61C0u, 0x1D2414u, 0x1D241Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D241Cu;
label_1d241c:
    // 0x1d241c: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d2420:
    // 0x1d2420: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d2420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2424:
    // 0x1d2424: 0xae03180c  sw          $v1, 0x180C($s0)
    ctx->pc = 0x1d2424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
label_1d2428:
    // 0x1d2428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d242c:
    // 0x1d242c: 0x10000108  b           . + 4 + (0x108 << 2)
label_1d2430:
    if (ctx->pc == 0x1D2430u) {
        ctx->pc = 0x1D2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D242Cu;
        // 0x1d2430: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2434u;
        goto label_1d2434;
    }
    ctx->pc = 0x1D242Cu;
    {
        const bool branch_taken_0x1d242c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D242Cu;
        // 0x1d2430: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d242c) {
            ctx->pc = 0x1D2850u;
            goto label_1d2850;
        }
    }
    ctx->pc = 0x1D2434u;
label_1d2434:
    // 0x1d2434: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d2434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
label_1d2438:
    // 0x1d2438: 0x144000fc  bnez        $v0, . + 4 + (0xFC << 2)
label_1d243c:
    if (ctx->pc == 0x1D243Cu) {
        ctx->pc = 0x1D243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2438u;
        // 0x1d243c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2440u;
        goto label_1d2440;
    }
    ctx->pc = 0x1D2438u;
    {
        const bool branch_taken_0x1d2438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2438u;
        // 0x1d243c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2438) {
            ctx->pc = 0x1D282Cu;
            goto label_1d282c;
        }
    }
    ctx->pc = 0x1D2440u;
label_1d2440:
    // 0x1d2440: 0x960217fc  lhu         $v0, 0x17FC($s0)
    ctx->pc = 0x1d2440u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
label_1d2444:
    // 0x1d2444: 0x260d17d4  addiu       $t5, $s0, 0x17D4
    ctx->pc = 0x1d2444u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 6100));
label_1d2448:
    // 0x1d2448: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d2448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1d244c:
    // 0x1d244c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d244cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d2450:
    // 0x1d2450: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2450u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2454:
    // 0x1d2454: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d2454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
label_1d2458:
    // 0x1d2458: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1d2458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_1d245c:
    // 0x1d245c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d245cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d2460:
    // 0x1d2460: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d2460u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2464:
    // 0x1d2464: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d2464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2468:
    // 0x1d2468: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d246c:
    // 0x1d246c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d246cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2470:
    // 0x1d2470: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x1d2470u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d2474:
    // 0x1d2474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2478:
    // 0x1d2478: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d2478u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d247c:
    // 0x1d247c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d247cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2480:
    // 0x1d2480: 0x8d820250  lw          $v0, 0x250($t4)
    ctx->pc = 0x1d2480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 592)));
label_1d2484:
    // 0x1d2484: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d2484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d2488:
    // 0x1d2488: 0xad820250  sw          $v0, 0x250($t4)
    ctx->pc = 0x1d2488u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 592), GPR_U32(ctx, 2));
label_1d248c:
    // 0x1d248c: 0x960317fc  lhu         $v1, 0x17FC($s0)
    ctx->pc = 0x1d248cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
label_1d2490:
    // 0x1d2490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d2490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d2494:
    // 0x1d2494: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x1d2494u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
label_1d2498:
    // 0x1d2498: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x1d2498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_1d249c:
    // 0x1d249c: 0x100000ab  b           . + 4 + (0xAB << 2)
label_1d24a0:
    if (ctx->pc == 0x1D24A0u) {
        ctx->pc = 0x1D24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D249Cu;
        // 0x1d24a0: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D24A4u;
        goto label_1d24a4;
    }
    ctx->pc = 0x1D249Cu;
    {
        const bool branch_taken_0x1d249c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D24A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D249Cu;
        // 0x1d24a0: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d249c) {
            ctx->pc = 0x1D274Cu;
            goto label_1d274c;
        }
    }
    ctx->pc = 0x1D24A4u;
label_1d24a4:
    // 0x1d24a4: 0x960317fc  lhu         $v1, 0x17FC($s0)
    ctx->pc = 0x1d24a4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
label_1d24a8:
    // 0x1d24a8: 0xc600180c  lwc1        $f0, 0x180C($s0)
    ctx->pc = 0x1d24a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d24ac:
    // 0x1d24ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d24acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d24b0:
    // 0x1d24b0: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d24b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1d24b4:
    // 0x1d24b4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d24b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d24b8:
    // 0x1d24b8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d24b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d24bc:
    // 0x1d24bc: 0x248480f0  addiu       $a0, $a0, -0x7F10
    ctx->pc = 0x1d24bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934768));
label_1d24c0:
    // 0x1d24c0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d24c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d24c4:
    // 0x1d24c4: 0x960517fc  lhu         $a1, 0x17FC($s0)
    ctx->pc = 0x1d24c4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
label_1d24c8:
    // 0x1d24c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d24c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d24cc:
    // 0x1d24cc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d24ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d24d0:
    // 0x1d24d0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d24d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d24d4:
    // 0x1d24d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d24d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d24d8:
    // 0x1d24d8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d24d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d24dc:
    // 0x1d24dc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d24dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d24e0:
    // 0x1d24e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d24e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d24e4:
    // 0x1d24e4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1d24e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d24e8:
    // 0x1d24e8: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d24e8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1d24ec:
    // 0x1d24ec: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1d24ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d24f0:
    // 0x1d24f0: 0x0  nop
    ctx->pc = 0x1d24f0u;
    // NOP
label_1d24f4:
    // 0x1d24f4: 0x0  nop
    ctx->pc = 0x1d24f4u;
    // NOP
label_1d24f8:
    // 0x1d24f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d24f8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1d24fc:
    // 0x1d24fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d24fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d2500:
    // 0x1d2500: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d2500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d2504:
    // 0x1d2504: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1d2504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1d2508:
    // 0x1d2508: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1d2508u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d250c:
    // 0x1d250c: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1d250cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d2510:
    // 0x1d2510: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1d2510u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1d2514:
    // 0x1d2514: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1d2514u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d2518:
    // 0x1d2518: 0x8ca217d4  lw          $v0, 0x17D4($a1)
    ctx->pc = 0x1d2518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6100)));
label_1d251c:
    // 0x1d251c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d251cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d2520:
    // 0x1d2520: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1d2520u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d2524:
    // 0x1d2524: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d2524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2528:
    // 0x1d2528: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d2528u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d252c:
    // 0x1d252c: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d252cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d2530:
    // 0x1d2530: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d2530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d2534:
    // 0x1d2534: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d2534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
label_1d2538:
    // 0x1d2538: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_1d253c:
    if (ctx->pc == 0x1D253Cu) {
        ctx->pc = 0x1D253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2538u;
        // 0x1d253c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2540u;
        goto label_1d2540;
    }
    ctx->pc = 0x1D2538u;
    {
        const bool branch_taken_0x1d2538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D253Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2538u;
        // 0x1d253c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2538) {
            ctx->pc = 0x1D26E0u;
            goto label_1d26e0;
        }
    }
    ctx->pc = 0x1D2540u;
label_1d2540:
    // 0x1d2540: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_1d2544:
    if (ctx->pc == 0x1D2544u) {
        ctx->pc = 0x1D2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2540u;
        // 0x1d2544: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2548u;
        goto label_1d2548;
    }
    ctx->pc = 0x1D2540u;
    {
        const bool branch_taken_0x1d2540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2540u;
        // 0x1d2544: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2540) {
            ctx->pc = 0x1D2850u;
            goto label_1d2850;
        }
    }
    ctx->pc = 0x1D2548u;
label_1d2548:
    // 0x1d2548: 0x960317fe  lhu         $v1, 0x17FE($s0)
    ctx->pc = 0x1d2548u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
label_1d254c:
    // 0x1d254c: 0xc600180c  lwc1        $f0, 0x180C($s0)
    ctx->pc = 0x1d254cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2550:
    // 0x1d2550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d2550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d2554:
    // 0x1d2554: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d2554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1d2558:
    // 0x1d2558: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2558u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d255c:
    // 0x1d255c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d255cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d2560:
    // 0x1d2560: 0x24848080  addiu       $a0, $a0, -0x7F80
    ctx->pc = 0x1d2560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934656));
label_1d2564:
    // 0x1d2564: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d2568:
    // 0x1d2568: 0x960517fe  lhu         $a1, 0x17FE($s0)
    ctx->pc = 0x1d2568u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
label_1d256c:
    // 0x1d256c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d2570:
    // 0x1d2570: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2570u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2574:
    // 0x1d2574: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d2574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2578:
    // 0x1d2578: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d257c:
    // 0x1d257c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d257cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d2580:
    // 0x1d2580: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d2580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d2584:
    // 0x1d2584: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d2584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d2588:
    // 0x1d2588: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1d2588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d258c:
    // 0x1d258c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d258cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1d2590:
    // 0x1d2590: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1d2590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d2594:
    // 0x1d2594: 0x0  nop
    ctx->pc = 0x1d2594u;
    // NOP
label_1d2598:
    // 0x1d2598: 0x0  nop
    ctx->pc = 0x1d2598u;
    // NOP
label_1d259c:
    // 0x1d259c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d259cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1d25a0:
    // 0x1d25a0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d25a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d25a4:
    // 0x1d25a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d25a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d25a8:
    // 0x1d25a8: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1d25a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1d25ac:
    // 0x1d25ac: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1d25acu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d25b0:
    // 0x1d25b0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1d25b0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d25b4:
    // 0x1d25b4: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1d25b4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1d25b8:
    // 0x1d25b8: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1d25b8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d25bc:
    // 0x1d25bc: 0x8ca217e8  lw          $v0, 0x17E8($a1)
    ctx->pc = 0x1d25bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6120)));
label_1d25c0:
    // 0x1d25c0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d25c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d25c4:
    // 0x1d25c4: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1d25c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d25c8:
    // 0x1d25c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d25cc:
    // 0x1d25cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d25ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d25d0:
    // 0x1d25d0: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d25d4:
    // 0x1d25d4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d25d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d25d8:
    // 0x1d25d8: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d25d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
label_1d25dc:
    // 0x1d25dc: 0x54400093  bnel        $v0, $zero, . + 4 + (0x93 << 2)
label_1d25e0:
    if (ctx->pc == 0x1D25E0u) {
        ctx->pc = 0x1D25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D25DCu;
        // 0x1d25e0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D25E4u;
        goto label_1d25e4;
    }
    ctx->pc = 0x1D25DCu;
    {
        const bool branch_taken_0x1d25dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d25dc) {
            ctx->pc = 0x1D25E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D25DCu;
            // 0x1d25e0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D282Cu;
            goto label_1d282c;
        }
    }
    ctx->pc = 0x1D25E4u;
label_1d25e4:
    // 0x1d25e4: 0x960317fe  lhu         $v1, 0x17FE($s0)
    ctx->pc = 0x1d25e4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
label_1d25e8:
    // 0x1d25e8: 0x260d17d4  addiu       $t5, $s0, 0x17D4
    ctx->pc = 0x1d25e8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 6100));
label_1d25ec:
    // 0x1d25ec: 0x960217fc  lhu         $v0, 0x17FC($s0)
    ctx->pc = 0x1d25ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
label_1d25f0:
    // 0x1d25f0: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1d25f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_1d25f4:
    // 0x1d25f4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d25f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d25f8:
    // 0x1d25f8: 0x34e7fffd  ori         $a3, $a3, 0xFFFD
    ctx->pc = 0x1d25f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65533);
label_1d25fc:
    // 0x1d25fc: 0xa60317fe  sh          $v1, 0x17FE($s0)
    ctx->pc = 0x1d25fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6142), (uint16_t)GPR_U32(ctx, 3));
label_1d2600:
    // 0x1d2600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d2600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2604:
    // 0x1d2604: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1d2604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_1d2608:
    // 0x1d2608: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d260c:
    // 0x1d260c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d260cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d2610:
    // 0x1d2610: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d2610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d2614:
    // 0x1d2614: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d2614u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2618:
    // 0x1d2618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d261c:
    // 0x1d261c: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x1d261cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d2620:
    // 0x1d2620: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d2620u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2624:
    // 0x1d2624: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2624u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2628:
    // 0x1d2628: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d2628u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d262c:
    // 0x1d262c: 0x8d830250  lw          $v1, 0x250($t4)
    ctx->pc = 0x1d262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 592)));
label_1d2630:
    // 0x1d2630: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d2630u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2634:
    // 0x1d2634: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1d2634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_1d2638:
    // 0x1d2638: 0xad830250  sw          $v1, 0x250($t4)
    ctx->pc = 0x1d2638u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 592), GPR_U32(ctx, 3));
label_1d263c:
    // 0x1d263c: 0x1000003f  b           . + 4 + (0x3F << 2)
label_1d2640:
    if (ctx->pc == 0x1D2640u) {
        ctx->pc = 0x1D2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D263Cu;
        // 0x1d2640: 0x960217fc  lhu         $v0, 0x17FC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2644u;
        goto label_1d2644;
    }
    ctx->pc = 0x1D263Cu;
    {
        const bool branch_taken_0x1d263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D263Cu;
        // 0x1d2640: 0x960217fc  lhu         $v0, 0x17FC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d263c) {
            ctx->pc = 0x1D273Cu;
            goto label_1d273c;
        }
    }
    ctx->pc = 0x1D2644u;
label_1d2644:
    // 0x1d2644: 0x960317fc  lhu         $v1, 0x17FC($s0)
    ctx->pc = 0x1d2644u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
label_1d2648:
    // 0x1d2648: 0xc600180c  lwc1        $f0, 0x180C($s0)
    ctx->pc = 0x1d2648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d264c:
    // 0x1d264c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d264cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d2650:
    // 0x1d2650: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1d2654:
    // 0x1d2654: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d2654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2658:
    // 0x1d2658: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d2658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d265c:
    // 0x1d265c: 0x248480f0  addiu       $a0, $a0, -0x7F10
    ctx->pc = 0x1d265cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934768));
label_1d2660:
    // 0x1d2660: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2660u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d2664:
    // 0x1d2664: 0x960517fc  lhu         $a1, 0x17FC($s0)
    ctx->pc = 0x1d2664u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
label_1d2668:
    // 0x1d2668: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d266c:
    // 0x1d266c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d266cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2670:
    // 0x1d2670: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d2670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d2674:
    // 0x1d2674: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d2674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d2678:
    // 0x1d2678: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d2678u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d267c:
    // 0x1d267c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d267cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d2680:
    // 0x1d2680: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d2680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d2684:
    // 0x1d2684: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1d2684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d2688:
    // 0x1d2688: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d2688u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1d268c:
    // 0x1d268c: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1d268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d2690:
    // 0x1d2690: 0x0  nop
    ctx->pc = 0x1d2690u;
    // NOP
label_1d2694:
    // 0x1d2694: 0x0  nop
    ctx->pc = 0x1d2694u;
    // NOP
label_1d2698:
    // 0x1d2698: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d2698u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1d269c:
    // 0x1d269c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d269cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d26a0:
    // 0x1d26a0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d26a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d26a4:
    // 0x1d26a4: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1d26a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1d26a8:
    // 0x1d26a8: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1d26a8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d26ac:
    // 0x1d26ac: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1d26acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d26b0:
    // 0x1d26b0: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1d26b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1d26b4:
    // 0x1d26b4: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1d26b4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d26b8:
    // 0x1d26b8: 0x8ca217d4  lw          $v0, 0x17D4($a1)
    ctx->pc = 0x1d26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6100)));
label_1d26bc:
    // 0x1d26bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d26bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d26c0:
    // 0x1d26c0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1d26c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d26c4:
    // 0x1d26c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d26c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d26c8:
    // 0x1d26c8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d26c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d26cc:
    // 0x1d26cc: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d26ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d26d0:
    // 0x1d26d0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d26d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d26d4:
    // 0x1d26d4: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d26d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
label_1d26d8:
    // 0x1d26d8: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
label_1d26dc:
    if (ctx->pc == 0x1D26DCu) {
        ctx->pc = 0x1D26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26D8u;
        // 0x1d26dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D26E0u;
        goto label_1d26e0;
    }
    ctx->pc = 0x1D26D8u;
    {
        const bool branch_taken_0x1d26d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26D8u;
        // 0x1d26dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26d8) {
            ctx->pc = 0x1D282Cu;
            goto label_1d282c;
        }
    }
    ctx->pc = 0x1D26E0u;
label_1d26e0:
    // 0x1d26e0: 0x960317fc  lhu         $v1, 0x17FC($s0)
    ctx->pc = 0x1d26e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
label_1d26e4:
    // 0x1d26e4: 0x260d17e8  addiu       $t5, $s0, 0x17E8
    ctx->pc = 0x1d26e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 6120));
label_1d26e8:
    // 0x1d26e8: 0x960217fe  lhu         $v0, 0x17FE($s0)
    ctx->pc = 0x1d26e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
label_1d26ec:
    // 0x1d26ec: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x1d26ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_1d26f0:
    // 0x1d26f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d26f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d26f4:
    // 0x1d26f4: 0x34e7fffd  ori         $a3, $a3, 0xFFFD
    ctx->pc = 0x1d26f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65533);
label_1d26f8:
    // 0x1d26f8: 0xa60317fc  sh          $v1, 0x17FC($s0)
    ctx->pc = 0x1d26f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6140), (uint16_t)GPR_U32(ctx, 3));
label_1d26fc:
    // 0x1d26fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2700:
    // 0x1d2700: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1d2700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_1d2704:
    // 0x1d2704: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d2704u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1d2708:
    // 0x1d2708: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d270c:
    // 0x1d270c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d270cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_1d2710:
    // 0x1d2710: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d2710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2714:
    // 0x1d2714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d2714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2718:
    // 0x1d2718: 0x8c6c0000  lw          $t4, 0x0($v1)
    ctx->pc = 0x1d2718u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d271c:
    // 0x1d271c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d271cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2720:
    // 0x1d2720: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d2720u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2724:
    // 0x1d2724: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d2724u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2728:
    // 0x1d2728: 0x8d830250  lw          $v1, 0x250($t4)
    ctx->pc = 0x1d2728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 592)));
label_1d272c:
    // 0x1d272c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d272cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2730:
    // 0x1d2730: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1d2730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_1d2734:
    // 0x1d2734: 0xad830250  sw          $v1, 0x250($t4)
    ctx->pc = 0x1d2734u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 592), GPR_U32(ctx, 3));
label_1d2738:
    // 0x1d2738: 0x960217fe  lhu         $v0, 0x17FE($s0)
    ctx->pc = 0x1d2738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
label_1d273c:
    // 0x1d273c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d273cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d2740:
    // 0x1d2740: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x1d2740u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
label_1d2744:
    // 0x1d2744: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x1d2744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
label_1d2748:
    // 0x1d2748: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1d2748u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1d274c:
    // 0x1d274c: 0xc0b2e92  jal         func_2CBA48
label_1d2750:
    if (ctx->pc == 0x1D2750u) {
        ctx->pc = 0x1D2754u;
        goto label_1d2754;
    }
    ctx->pc = 0x1D274Cu;
    SET_GPR_U32(ctx, 31, 0x1D2754u);
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D274Cu, 0x1D2754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2754u;
label_1d2754:
    // 0x1d2754: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d2754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d2758:
    // 0x1d2758: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d2758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d275c:
    // 0x1d275c: 0xae02180c  sw          $v0, 0x180C($s0)
    ctx->pc = 0x1d275cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
label_1d2760:
    // 0x1d2760: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d2764:
    // 0x1d2764: 0x1000003a  b           . + 4 + (0x3A << 2)
label_1d2768:
    if (ctx->pc == 0x1D2768u) {
        ctx->pc = 0x1D2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2764u;
        // 0x1d2768: 0xae031808  sw          $v1, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D276Cu;
        goto label_1d276c;
    }
    ctx->pc = 0x1D2764u;
    {
        const bool branch_taken_0x1d2764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2764u;
        // 0x1d2768: 0xae031808  sw          $v1, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2764) {
            ctx->pc = 0x1D2850u;
            goto label_1d2850;
        }
    }
    ctx->pc = 0x1D276Cu;
label_1d276c:
    // 0x1d276c: 0x960317fe  lhu         $v1, 0x17FE($s0)
    ctx->pc = 0x1d276cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
label_1d2770:
    // 0x1d2770: 0xc600180c  lwc1        $f0, 0x180C($s0)
    ctx->pc = 0x1d2770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2774:
    // 0x1d2774: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d2774u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1d2778:
    // 0x1d2778: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d2778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
label_1d277c:
    // 0x1d277c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d277cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d2780:
    // 0x1d2780: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d2780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_1d2784:
    // 0x1d2784: 0x24848080  addiu       $a0, $a0, -0x7F80
    ctx->pc = 0x1d2784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934656));
label_1d2788:
    // 0x1d2788: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d2788u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1d278c:
    // 0x1d278c: 0x960517fe  lhu         $a1, 0x17FE($s0)
    ctx->pc = 0x1d278cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
label_1d2790:
    // 0x1d2790: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d2790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1d2794:
    // 0x1d2794: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d2794u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1d2798:
    // 0x1d2798: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d2798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d279c:
    // 0x1d279c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d279cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d27a0:
    // 0x1d27a0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d27a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1d27a4:
    // 0x1d27a4: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d27a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1d27a8:
    // 0x1d27a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1d27ac:
    // 0x1d27ac: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1d27acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1d27b0:
    // 0x1d27b0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d27b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1d27b4:
    // 0x1d27b4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1d27b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d27b8:
    // 0x1d27b8: 0x0  nop
    ctx->pc = 0x1d27b8u;
    // NOP
label_1d27bc:
    // 0x1d27bc: 0x0  nop
    ctx->pc = 0x1d27bcu;
    // NOP
label_1d27c0:
    // 0x1d27c0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d27c0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1d27c4:
    // 0x1d27c4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d27c4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1d27c8:
    // 0x1d27c8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d27c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d27cc:
    // 0x1d27cc: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1d27ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
label_1d27d0:
    // 0x1d27d0: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1d27d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d27d4:
    // 0x1d27d4: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1d27d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d27d8:
    // 0x1d27d8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1d27d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_1d27dc:
    // 0x1d27dc: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1d27dcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d27e0:
    // 0x1d27e0: 0x8ca217e8  lw          $v0, 0x17E8($a1)
    ctx->pc = 0x1d27e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6120)));
label_1d27e4:
    // 0x1d27e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d27e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1d27e8:
    // 0x1d27e8: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1d27e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d27ec:
    // 0x1d27ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d27ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1d27f0:
    // 0x1d27f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d27f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d27f4:
    // 0x1d27f4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
label_1d27f8:
    // 0x1d27f8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d27f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1d27fc:
    // 0x1d27fc: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d27fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
label_1d2800:
    // 0x1d2800: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1d2804:
    if (ctx->pc == 0x1D2804u) {
        ctx->pc = 0x1D2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2800u;
        // 0x1d2804: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2808u;
        goto label_1d2808;
    }
    ctx->pc = 0x1D2800u;
    {
        const bool branch_taken_0x1d2800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2800u;
        // 0x1d2804: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2800) {
            ctx->pc = 0x1D282Cu;
            goto label_1d282c;
        }
    }
    ctx->pc = 0x1D2808u;
label_1d2808:
    // 0x1d2808: 0x960217fe  lhu         $v0, 0x17FE($s0)
    ctx->pc = 0x1d2808u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6142)));
label_1d280c:
    // 0x1d280c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1d280cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1d2810:
    // 0x1d2810: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d2810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
label_1d2814:
    // 0x1d2814: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d2814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d2818:
    // 0x1d2818: 0xae04180c  sw          $a0, 0x180C($s0)
    ctx->pc = 0x1d2818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 4));
label_1d281c:
    // 0x1d281c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d281cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1d2820:
    // 0x1d2820: 0xa60217fe  sh          $v0, 0x17FE($s0)
    ctx->pc = 0x1d2820u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6142), (uint16_t)GPR_U32(ctx, 2));
label_1d2824:
    // 0x1d2824: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d2828:
    if (ctx->pc == 0x1D2828u) {
        ctx->pc = 0x1D2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2824u;
        // 0x1d2828: 0xae031808  sw          $v1, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D282Cu;
        goto label_1d282c;
    }
    ctx->pc = 0x1D2824u;
    {
        const bool branch_taken_0x1d2824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2824u;
        // 0x1d2828: 0xae031808  sw          $v1, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2824) {
            ctx->pc = 0x1D2850u;
            goto label_1d2850;
        }
    }
    ctx->pc = 0x1D282Cu;
label_1d282c:
    // 0x1d282c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1d2830:
    if (ctx->pc == 0x1D2830u) {
        ctx->pc = 0x1D2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D282Cu;
        // 0x1d2830: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2834u;
        goto label_1d2834;
    }
    ctx->pc = 0x1D282Cu;
    {
        const bool branch_taken_0x1d282c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D282Cu;
        // 0x1d2830: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d282c) {
            ctx->pc = 0x1D2850u;
            goto label_1d2850;
        }
    }
    ctx->pc = 0x1D2834u;
label_1d2834:
    // 0x1d2834: 0xc07522c  jal         func_1D48B0
label_1d2838:
    if (ctx->pc == 0x1D2838u) {
        ctx->pc = 0x1D2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2834u;
        // 0x1d2838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D283Cu;
        goto label_1d283c;
    }
    ctx->pc = 0x1D2834u;
    SET_GPR_U32(ctx, 31, 0x1D283Cu);
    ctx->pc = 0x1D2838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2834u;
    // 0x1d2838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D48B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D48B0u, 0x1D2834u, 0x1D283Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D283Cu;
label_1d283c:
    // 0x1d283c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d2840:
    if (ctx->pc == 0x1D2840u) {
        ctx->pc = 0x1D2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D283Cu;
        // 0x1d2840: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2844u;
        goto label_1d2844;
    }
    ctx->pc = 0x1D283Cu;
    {
        const bool branch_taken_0x1d283c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D283Cu;
        // 0x1d2840: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d283c) {
            ctx->pc = 0x1D2848u;
            goto label_1d2848;
        }
    }
    ctx->pc = 0x1D2844u;
label_1d2844:
    // 0x1d2844: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d2848:
    // 0x1d2848: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d2848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
label_1d284c:
    // 0x1d284c: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d284cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d2850:
    // 0x1d2850: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1d2850u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d2854:
    // 0x1d2854: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1d2854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d2858:
    // 0x1d2858: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1d2858u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d285c:
    // 0x1d285c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1d285cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d2860:
    // 0x1d2860: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d2860u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d2864:
    // 0x1d2864: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d2864u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d2868:
    // 0x1d2868: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1d2868u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d286c:
    // 0x1d286c: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1d286cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2870:
    // 0x1d2870: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1d2870u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2874:
    // 0x1d2874: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d2874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2878:
    // 0x1d2878: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x1d2878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d287c:
    // 0x1d287c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d287cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d2880:
    // 0x1d2880: 0x3e00008  jr          $ra
label_1d2884:
    if (ctx->pc == 0x1D2884u) {
        ctx->pc = 0x1D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2880u;
        // 0x1d2884: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2888u;
        goto label_fallthrough_0x1d2880;
    }
    ctx->pc = 0x1D2880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2880u;
        // 0x1d2884: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2880u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d2880:
    ctx->pc = 0x1D2888u;
}
