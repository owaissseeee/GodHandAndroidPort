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

// Function: __svfscanf
// Address: 0x3a6ee8 - 0x3a79f8
void ps2___svfscanf_0x3a6ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___svfscanf_0x3a6ee8");
#endif

    switch (ctx->pc) {
        case 0x3a6ee8u: goto label_3a6ee8;
        case 0x3a6eecu: goto label_3a6eec;
        case 0x3a6ef0u: goto label_3a6ef0;
        case 0x3a6ef4u: goto label_3a6ef4;
        case 0x3a6ef8u: goto label_3a6ef8;
        case 0x3a6efcu: goto label_3a6efc;
        case 0x3a6f00u: goto label_3a6f00;
        case 0x3a6f04u: goto label_3a6f04;
        case 0x3a6f08u: goto label_3a6f08;
        case 0x3a6f0cu: goto label_3a6f0c;
        case 0x3a6f10u: goto label_3a6f10;
        case 0x3a6f14u: goto label_3a6f14;
        case 0x3a6f18u: goto label_3a6f18;
        case 0x3a6f1cu: goto label_3a6f1c;
        case 0x3a6f20u: goto label_3a6f20;
        case 0x3a6f24u: goto label_3a6f24;
        case 0x3a6f28u: goto label_3a6f28;
        case 0x3a6f2cu: goto label_3a6f2c;
        case 0x3a6f30u: goto label_3a6f30;
        case 0x3a6f34u: goto label_3a6f34;
        case 0x3a6f38u: goto label_3a6f38;
        case 0x3a6f3cu: goto label_3a6f3c;
        case 0x3a6f40u: goto label_3a6f40;
        case 0x3a6f44u: goto label_3a6f44;
        case 0x3a6f48u: goto label_3a6f48;
        case 0x3a6f4cu: goto label_3a6f4c;
        case 0x3a6f50u: goto label_3a6f50;
        case 0x3a6f54u: goto label_3a6f54;
        case 0x3a6f58u: goto label_3a6f58;
        case 0x3a6f5cu: goto label_3a6f5c;
        case 0x3a6f60u: goto label_3a6f60;
        case 0x3a6f64u: goto label_3a6f64;
        case 0x3a6f68u: goto label_3a6f68;
        case 0x3a6f6cu: goto label_3a6f6c;
        case 0x3a6f70u: goto label_3a6f70;
        case 0x3a6f74u: goto label_3a6f74;
        case 0x3a6f78u: goto label_3a6f78;
        case 0x3a6f7cu: goto label_3a6f7c;
        case 0x3a6f80u: goto label_3a6f80;
        case 0x3a6f84u: goto label_3a6f84;
        case 0x3a6f88u: goto label_3a6f88;
        case 0x3a6f8cu: goto label_3a6f8c;
        case 0x3a6f90u: goto label_3a6f90;
        case 0x3a6f94u: goto label_3a6f94;
        case 0x3a6f98u: goto label_3a6f98;
        case 0x3a6f9cu: goto label_3a6f9c;
        case 0x3a6fa0u: goto label_3a6fa0;
        case 0x3a6fa4u: goto label_3a6fa4;
        case 0x3a6fa8u: goto label_3a6fa8;
        case 0x3a6facu: goto label_3a6fac;
        case 0x3a6fb0u: goto label_3a6fb0;
        case 0x3a6fb4u: goto label_3a6fb4;
        case 0x3a6fb8u: goto label_3a6fb8;
        case 0x3a6fbcu: goto label_3a6fbc;
        case 0x3a6fc0u: goto label_3a6fc0;
        case 0x3a6fc4u: goto label_3a6fc4;
        case 0x3a6fc8u: goto label_3a6fc8;
        case 0x3a6fccu: goto label_3a6fcc;
        case 0x3a6fd0u: goto label_3a6fd0;
        case 0x3a6fd4u: goto label_3a6fd4;
        case 0x3a6fd8u: goto label_3a6fd8;
        case 0x3a6fdcu: goto label_3a6fdc;
        case 0x3a6fe0u: goto label_3a6fe0;
        case 0x3a6fe4u: goto label_3a6fe4;
        case 0x3a6fe8u: goto label_3a6fe8;
        case 0x3a6fecu: goto label_3a6fec;
        case 0x3a6ff0u: goto label_3a6ff0;
        case 0x3a6ff4u: goto label_3a6ff4;
        case 0x3a6ff8u: goto label_3a6ff8;
        case 0x3a6ffcu: goto label_3a6ffc;
        case 0x3a7000u: goto label_3a7000;
        case 0x3a7004u: goto label_3a7004;
        case 0x3a7008u: goto label_3a7008;
        case 0x3a700cu: goto label_3a700c;
        case 0x3a7010u: goto label_3a7010;
        case 0x3a7014u: goto label_3a7014;
        case 0x3a7018u: goto label_3a7018;
        case 0x3a701cu: goto label_3a701c;
        case 0x3a7020u: goto label_3a7020;
        case 0x3a7024u: goto label_3a7024;
        case 0x3a7028u: goto label_3a7028;
        case 0x3a702cu: goto label_3a702c;
        case 0x3a7030u: goto label_3a7030;
        case 0x3a7034u: goto label_3a7034;
        case 0x3a7038u: goto label_3a7038;
        case 0x3a703cu: goto label_3a703c;
        case 0x3a7040u: goto label_3a7040;
        case 0x3a7044u: goto label_3a7044;
        case 0x3a7048u: goto label_3a7048;
        case 0x3a704cu: goto label_3a704c;
        case 0x3a7050u: goto label_3a7050;
        case 0x3a7054u: goto label_3a7054;
        case 0x3a7058u: goto label_3a7058;
        case 0x3a705cu: goto label_3a705c;
        case 0x3a7060u: goto label_3a7060;
        case 0x3a7064u: goto label_3a7064;
        case 0x3a7068u: goto label_3a7068;
        case 0x3a706cu: goto label_3a706c;
        case 0x3a7070u: goto label_3a7070;
        case 0x3a7074u: goto label_3a7074;
        case 0x3a7078u: goto label_3a7078;
        case 0x3a707cu: goto label_3a707c;
        case 0x3a7080u: goto label_3a7080;
        case 0x3a7084u: goto label_3a7084;
        case 0x3a7088u: goto label_3a7088;
        case 0x3a708cu: goto label_3a708c;
        case 0x3a7090u: goto label_3a7090;
        case 0x3a7094u: goto label_3a7094;
        case 0x3a7098u: goto label_3a7098;
        case 0x3a709cu: goto label_3a709c;
        case 0x3a70a0u: goto label_3a70a0;
        case 0x3a70a4u: goto label_3a70a4;
        case 0x3a70a8u: goto label_3a70a8;
        case 0x3a70acu: goto label_3a70ac;
        case 0x3a70b0u: goto label_3a70b0;
        case 0x3a70b4u: goto label_3a70b4;
        case 0x3a70b8u: goto label_3a70b8;
        case 0x3a70bcu: goto label_3a70bc;
        case 0x3a70c0u: goto label_3a70c0;
        case 0x3a70c4u: goto label_3a70c4;
        case 0x3a70c8u: goto label_3a70c8;
        case 0x3a70ccu: goto label_3a70cc;
        case 0x3a70d0u: goto label_3a70d0;
        case 0x3a70d4u: goto label_3a70d4;
        case 0x3a70d8u: goto label_3a70d8;
        case 0x3a70dcu: goto label_3a70dc;
        case 0x3a70e0u: goto label_3a70e0;
        case 0x3a70e4u: goto label_3a70e4;
        case 0x3a70e8u: goto label_3a70e8;
        case 0x3a70ecu: goto label_3a70ec;
        case 0x3a70f0u: goto label_3a70f0;
        case 0x3a70f4u: goto label_3a70f4;
        case 0x3a70f8u: goto label_3a70f8;
        case 0x3a70fcu: goto label_3a70fc;
        case 0x3a7100u: goto label_3a7100;
        case 0x3a7104u: goto label_3a7104;
        case 0x3a7108u: goto label_3a7108;
        case 0x3a710cu: goto label_3a710c;
        case 0x3a7110u: goto label_3a7110;
        case 0x3a7114u: goto label_3a7114;
        case 0x3a7118u: goto label_3a7118;
        case 0x3a711cu: goto label_3a711c;
        case 0x3a7120u: goto label_3a7120;
        case 0x3a7124u: goto label_3a7124;
        case 0x3a7128u: goto label_3a7128;
        case 0x3a712cu: goto label_3a712c;
        case 0x3a7130u: goto label_3a7130;
        case 0x3a7134u: goto label_3a7134;
        case 0x3a7138u: goto label_3a7138;
        case 0x3a713cu: goto label_3a713c;
        case 0x3a7140u: goto label_3a7140;
        case 0x3a7144u: goto label_3a7144;
        case 0x3a7148u: goto label_3a7148;
        case 0x3a714cu: goto label_3a714c;
        case 0x3a7150u: goto label_3a7150;
        case 0x3a7154u: goto label_3a7154;
        case 0x3a7158u: goto label_3a7158;
        case 0x3a715cu: goto label_3a715c;
        case 0x3a7160u: goto label_3a7160;
        case 0x3a7164u: goto label_3a7164;
        case 0x3a7168u: goto label_3a7168;
        case 0x3a716cu: goto label_3a716c;
        case 0x3a7170u: goto label_3a7170;
        case 0x3a7174u: goto label_3a7174;
        case 0x3a7178u: goto label_3a7178;
        case 0x3a717cu: goto label_3a717c;
        case 0x3a7180u: goto label_3a7180;
        case 0x3a7184u: goto label_3a7184;
        case 0x3a7188u: goto label_3a7188;
        case 0x3a718cu: goto label_3a718c;
        case 0x3a7190u: goto label_3a7190;
        case 0x3a7194u: goto label_3a7194;
        case 0x3a7198u: goto label_3a7198;
        case 0x3a719cu: goto label_3a719c;
        case 0x3a71a0u: goto label_3a71a0;
        case 0x3a71a4u: goto label_3a71a4;
        case 0x3a71a8u: goto label_3a71a8;
        case 0x3a71acu: goto label_3a71ac;
        case 0x3a71b0u: goto label_3a71b0;
        case 0x3a71b4u: goto label_3a71b4;
        case 0x3a71b8u: goto label_3a71b8;
        case 0x3a71bcu: goto label_3a71bc;
        case 0x3a71c0u: goto label_3a71c0;
        case 0x3a71c4u: goto label_3a71c4;
        case 0x3a71c8u: goto label_3a71c8;
        case 0x3a71ccu: goto label_3a71cc;
        case 0x3a71d0u: goto label_3a71d0;
        case 0x3a71d4u: goto label_3a71d4;
        case 0x3a71d8u: goto label_3a71d8;
        case 0x3a71dcu: goto label_3a71dc;
        case 0x3a71e0u: goto label_3a71e0;
        case 0x3a71e4u: goto label_3a71e4;
        case 0x3a71e8u: goto label_3a71e8;
        case 0x3a71ecu: goto label_3a71ec;
        case 0x3a71f0u: goto label_3a71f0;
        case 0x3a71f4u: goto label_3a71f4;
        case 0x3a71f8u: goto label_3a71f8;
        case 0x3a71fcu: goto label_3a71fc;
        case 0x3a7200u: goto label_3a7200;
        case 0x3a7204u: goto label_3a7204;
        case 0x3a7208u: goto label_3a7208;
        case 0x3a720cu: goto label_3a720c;
        case 0x3a7210u: goto label_3a7210;
        case 0x3a7214u: goto label_3a7214;
        case 0x3a7218u: goto label_3a7218;
        case 0x3a721cu: goto label_3a721c;
        case 0x3a7220u: goto label_3a7220;
        case 0x3a7224u: goto label_3a7224;
        case 0x3a7228u: goto label_3a7228;
        case 0x3a722cu: goto label_3a722c;
        case 0x3a7230u: goto label_3a7230;
        case 0x3a7234u: goto label_3a7234;
        case 0x3a7238u: goto label_3a7238;
        case 0x3a723cu: goto label_3a723c;
        case 0x3a7240u: goto label_3a7240;
        case 0x3a7244u: goto label_3a7244;
        case 0x3a7248u: goto label_3a7248;
        case 0x3a724cu: goto label_3a724c;
        case 0x3a7250u: goto label_3a7250;
        case 0x3a7254u: goto label_3a7254;
        case 0x3a7258u: goto label_3a7258;
        case 0x3a725cu: goto label_3a725c;
        case 0x3a7260u: goto label_3a7260;
        case 0x3a7264u: goto label_3a7264;
        case 0x3a7268u: goto label_3a7268;
        case 0x3a726cu: goto label_3a726c;
        case 0x3a7270u: goto label_3a7270;
        case 0x3a7274u: goto label_3a7274;
        case 0x3a7278u: goto label_3a7278;
        case 0x3a727cu: goto label_3a727c;
        case 0x3a7280u: goto label_3a7280;
        case 0x3a7284u: goto label_3a7284;
        case 0x3a7288u: goto label_3a7288;
        case 0x3a728cu: goto label_3a728c;
        case 0x3a7290u: goto label_3a7290;
        case 0x3a7294u: goto label_3a7294;
        case 0x3a7298u: goto label_3a7298;
        case 0x3a729cu: goto label_3a729c;
        case 0x3a72a0u: goto label_3a72a0;
        case 0x3a72a4u: goto label_3a72a4;
        case 0x3a72a8u: goto label_3a72a8;
        case 0x3a72acu: goto label_3a72ac;
        case 0x3a72b0u: goto label_3a72b0;
        case 0x3a72b4u: goto label_3a72b4;
        case 0x3a72b8u: goto label_3a72b8;
        case 0x3a72bcu: goto label_3a72bc;
        case 0x3a72c0u: goto label_3a72c0;
        case 0x3a72c4u: goto label_3a72c4;
        case 0x3a72c8u: goto label_3a72c8;
        case 0x3a72ccu: goto label_3a72cc;
        case 0x3a72d0u: goto label_3a72d0;
        case 0x3a72d4u: goto label_3a72d4;
        case 0x3a72d8u: goto label_3a72d8;
        case 0x3a72dcu: goto label_3a72dc;
        case 0x3a72e0u: goto label_3a72e0;
        case 0x3a72e4u: goto label_3a72e4;
        case 0x3a72e8u: goto label_3a72e8;
        case 0x3a72ecu: goto label_3a72ec;
        case 0x3a72f0u: goto label_3a72f0;
        case 0x3a72f4u: goto label_3a72f4;
        case 0x3a72f8u: goto label_3a72f8;
        case 0x3a72fcu: goto label_3a72fc;
        case 0x3a7300u: goto label_3a7300;
        case 0x3a7304u: goto label_3a7304;
        case 0x3a7308u: goto label_3a7308;
        case 0x3a730cu: goto label_3a730c;
        case 0x3a7310u: goto label_3a7310;
        case 0x3a7314u: goto label_3a7314;
        case 0x3a7318u: goto label_3a7318;
        case 0x3a731cu: goto label_3a731c;
        case 0x3a7320u: goto label_3a7320;
        case 0x3a7324u: goto label_3a7324;
        case 0x3a7328u: goto label_3a7328;
        case 0x3a732cu: goto label_3a732c;
        case 0x3a7330u: goto label_3a7330;
        case 0x3a7334u: goto label_3a7334;
        case 0x3a7338u: goto label_3a7338;
        case 0x3a733cu: goto label_3a733c;
        case 0x3a7340u: goto label_3a7340;
        case 0x3a7344u: goto label_3a7344;
        case 0x3a7348u: goto label_3a7348;
        case 0x3a734cu: goto label_3a734c;
        case 0x3a7350u: goto label_3a7350;
        case 0x3a7354u: goto label_3a7354;
        case 0x3a7358u: goto label_3a7358;
        case 0x3a735cu: goto label_3a735c;
        case 0x3a7360u: goto label_3a7360;
        case 0x3a7364u: goto label_3a7364;
        case 0x3a7368u: goto label_3a7368;
        case 0x3a736cu: goto label_3a736c;
        case 0x3a7370u: goto label_3a7370;
        case 0x3a7374u: goto label_3a7374;
        case 0x3a7378u: goto label_3a7378;
        case 0x3a737cu: goto label_3a737c;
        case 0x3a7380u: goto label_3a7380;
        case 0x3a7384u: goto label_3a7384;
        case 0x3a7388u: goto label_3a7388;
        case 0x3a738cu: goto label_3a738c;
        case 0x3a7390u: goto label_3a7390;
        case 0x3a7394u: goto label_3a7394;
        case 0x3a7398u: goto label_3a7398;
        case 0x3a739cu: goto label_3a739c;
        case 0x3a73a0u: goto label_3a73a0;
        case 0x3a73a4u: goto label_3a73a4;
        case 0x3a73a8u: goto label_3a73a8;
        case 0x3a73acu: goto label_3a73ac;
        case 0x3a73b0u: goto label_3a73b0;
        case 0x3a73b4u: goto label_3a73b4;
        case 0x3a73b8u: goto label_3a73b8;
        case 0x3a73bcu: goto label_3a73bc;
        case 0x3a73c0u: goto label_3a73c0;
        case 0x3a73c4u: goto label_3a73c4;
        case 0x3a73c8u: goto label_3a73c8;
        case 0x3a73ccu: goto label_3a73cc;
        case 0x3a73d0u: goto label_3a73d0;
        case 0x3a73d4u: goto label_3a73d4;
        case 0x3a73d8u: goto label_3a73d8;
        case 0x3a73dcu: goto label_3a73dc;
        case 0x3a73e0u: goto label_3a73e0;
        case 0x3a73e4u: goto label_3a73e4;
        case 0x3a73e8u: goto label_3a73e8;
        case 0x3a73ecu: goto label_3a73ec;
        case 0x3a73f0u: goto label_3a73f0;
        case 0x3a73f4u: goto label_3a73f4;
        case 0x3a73f8u: goto label_3a73f8;
        case 0x3a73fcu: goto label_3a73fc;
        case 0x3a7400u: goto label_3a7400;
        case 0x3a7404u: goto label_3a7404;
        case 0x3a7408u: goto label_3a7408;
        case 0x3a740cu: goto label_3a740c;
        case 0x3a7410u: goto label_3a7410;
        case 0x3a7414u: goto label_3a7414;
        case 0x3a7418u: goto label_3a7418;
        case 0x3a741cu: goto label_3a741c;
        case 0x3a7420u: goto label_3a7420;
        case 0x3a7424u: goto label_3a7424;
        case 0x3a7428u: goto label_3a7428;
        case 0x3a742cu: goto label_3a742c;
        case 0x3a7430u: goto label_3a7430;
        case 0x3a7434u: goto label_3a7434;
        case 0x3a7438u: goto label_3a7438;
        case 0x3a743cu: goto label_3a743c;
        case 0x3a7440u: goto label_3a7440;
        case 0x3a7444u: goto label_3a7444;
        case 0x3a7448u: goto label_3a7448;
        case 0x3a744cu: goto label_3a744c;
        case 0x3a7450u: goto label_3a7450;
        case 0x3a7454u: goto label_3a7454;
        case 0x3a7458u: goto label_3a7458;
        case 0x3a745cu: goto label_3a745c;
        case 0x3a7460u: goto label_3a7460;
        case 0x3a7464u: goto label_3a7464;
        case 0x3a7468u: goto label_3a7468;
        case 0x3a746cu: goto label_3a746c;
        case 0x3a7470u: goto label_3a7470;
        case 0x3a7474u: goto label_3a7474;
        case 0x3a7478u: goto label_3a7478;
        case 0x3a747cu: goto label_3a747c;
        case 0x3a7480u: goto label_3a7480;
        case 0x3a7484u: goto label_3a7484;
        case 0x3a7488u: goto label_3a7488;
        case 0x3a748cu: goto label_3a748c;
        case 0x3a7490u: goto label_3a7490;
        case 0x3a7494u: goto label_3a7494;
        case 0x3a7498u: goto label_3a7498;
        case 0x3a749cu: goto label_3a749c;
        case 0x3a74a0u: goto label_3a74a0;
        case 0x3a74a4u: goto label_3a74a4;
        case 0x3a74a8u: goto label_3a74a8;
        case 0x3a74acu: goto label_3a74ac;
        case 0x3a74b0u: goto label_3a74b0;
        case 0x3a74b4u: goto label_3a74b4;
        case 0x3a74b8u: goto label_3a74b8;
        case 0x3a74bcu: goto label_3a74bc;
        case 0x3a74c0u: goto label_3a74c0;
        case 0x3a74c4u: goto label_3a74c4;
        case 0x3a74c8u: goto label_3a74c8;
        case 0x3a74ccu: goto label_3a74cc;
        case 0x3a74d0u: goto label_3a74d0;
        case 0x3a74d4u: goto label_3a74d4;
        case 0x3a74d8u: goto label_3a74d8;
        case 0x3a74dcu: goto label_3a74dc;
        case 0x3a74e0u: goto label_3a74e0;
        case 0x3a74e4u: goto label_3a74e4;
        case 0x3a74e8u: goto label_3a74e8;
        case 0x3a74ecu: goto label_3a74ec;
        case 0x3a74f0u: goto label_3a74f0;
        case 0x3a74f4u: goto label_3a74f4;
        case 0x3a74f8u: goto label_3a74f8;
        case 0x3a74fcu: goto label_3a74fc;
        case 0x3a7500u: goto label_3a7500;
        case 0x3a7504u: goto label_3a7504;
        case 0x3a7508u: goto label_3a7508;
        case 0x3a750cu: goto label_3a750c;
        case 0x3a7510u: goto label_3a7510;
        case 0x3a7514u: goto label_3a7514;
        case 0x3a7518u: goto label_3a7518;
        case 0x3a751cu: goto label_3a751c;
        case 0x3a7520u: goto label_3a7520;
        case 0x3a7524u: goto label_3a7524;
        case 0x3a7528u: goto label_3a7528;
        case 0x3a752cu: goto label_3a752c;
        case 0x3a7530u: goto label_3a7530;
        case 0x3a7534u: goto label_3a7534;
        case 0x3a7538u: goto label_3a7538;
        case 0x3a753cu: goto label_3a753c;
        case 0x3a7540u: goto label_3a7540;
        case 0x3a7544u: goto label_3a7544;
        case 0x3a7548u: goto label_3a7548;
        case 0x3a754cu: goto label_3a754c;
        case 0x3a7550u: goto label_3a7550;
        case 0x3a7554u: goto label_3a7554;
        case 0x3a7558u: goto label_3a7558;
        case 0x3a755cu: goto label_3a755c;
        case 0x3a7560u: goto label_3a7560;
        case 0x3a7564u: goto label_3a7564;
        case 0x3a7568u: goto label_3a7568;
        case 0x3a756cu: goto label_3a756c;
        case 0x3a7570u: goto label_3a7570;
        case 0x3a7574u: goto label_3a7574;
        case 0x3a7578u: goto label_3a7578;
        case 0x3a757cu: goto label_3a757c;
        case 0x3a7580u: goto label_3a7580;
        case 0x3a7584u: goto label_3a7584;
        case 0x3a7588u: goto label_3a7588;
        case 0x3a758cu: goto label_3a758c;
        case 0x3a7590u: goto label_3a7590;
        case 0x3a7594u: goto label_3a7594;
        case 0x3a7598u: goto label_3a7598;
        case 0x3a759cu: goto label_3a759c;
        case 0x3a75a0u: goto label_3a75a0;
        case 0x3a75a4u: goto label_3a75a4;
        case 0x3a75a8u: goto label_3a75a8;
        case 0x3a75acu: goto label_3a75ac;
        case 0x3a75b0u: goto label_3a75b0;
        case 0x3a75b4u: goto label_3a75b4;
        case 0x3a75b8u: goto label_3a75b8;
        case 0x3a75bcu: goto label_3a75bc;
        case 0x3a75c0u: goto label_3a75c0;
        case 0x3a75c4u: goto label_3a75c4;
        case 0x3a75c8u: goto label_3a75c8;
        case 0x3a75ccu: goto label_3a75cc;
        case 0x3a75d0u: goto label_3a75d0;
        case 0x3a75d4u: goto label_3a75d4;
        case 0x3a75d8u: goto label_3a75d8;
        case 0x3a75dcu: goto label_3a75dc;
        case 0x3a75e0u: goto label_3a75e0;
        case 0x3a75e4u: goto label_3a75e4;
        case 0x3a75e8u: goto label_3a75e8;
        case 0x3a75ecu: goto label_3a75ec;
        case 0x3a75f0u: goto label_3a75f0;
        case 0x3a75f4u: goto label_3a75f4;
        case 0x3a75f8u: goto label_3a75f8;
        case 0x3a75fcu: goto label_3a75fc;
        case 0x3a7600u: goto label_3a7600;
        case 0x3a7604u: goto label_3a7604;
        case 0x3a7608u: goto label_3a7608;
        case 0x3a760cu: goto label_3a760c;
        case 0x3a7610u: goto label_3a7610;
        case 0x3a7614u: goto label_3a7614;
        case 0x3a7618u: goto label_3a7618;
        case 0x3a761cu: goto label_3a761c;
        case 0x3a7620u: goto label_3a7620;
        case 0x3a7624u: goto label_3a7624;
        case 0x3a7628u: goto label_3a7628;
        case 0x3a762cu: goto label_3a762c;
        case 0x3a7630u: goto label_3a7630;
        case 0x3a7634u: goto label_3a7634;
        case 0x3a7638u: goto label_3a7638;
        case 0x3a763cu: goto label_3a763c;
        case 0x3a7640u: goto label_3a7640;
        case 0x3a7644u: goto label_3a7644;
        case 0x3a7648u: goto label_3a7648;
        case 0x3a764cu: goto label_3a764c;
        case 0x3a7650u: goto label_3a7650;
        case 0x3a7654u: goto label_3a7654;
        case 0x3a7658u: goto label_3a7658;
        case 0x3a765cu: goto label_3a765c;
        case 0x3a7660u: goto label_3a7660;
        case 0x3a7664u: goto label_3a7664;
        case 0x3a7668u: goto label_3a7668;
        case 0x3a766cu: goto label_3a766c;
        case 0x3a7670u: goto label_3a7670;
        case 0x3a7674u: goto label_3a7674;
        case 0x3a7678u: goto label_3a7678;
        case 0x3a767cu: goto label_3a767c;
        case 0x3a7680u: goto label_3a7680;
        case 0x3a7684u: goto label_3a7684;
        case 0x3a7688u: goto label_3a7688;
        case 0x3a768cu: goto label_3a768c;
        case 0x3a7690u: goto label_3a7690;
        case 0x3a7694u: goto label_3a7694;
        case 0x3a7698u: goto label_3a7698;
        case 0x3a769cu: goto label_3a769c;
        case 0x3a76a0u: goto label_3a76a0;
        case 0x3a76a4u: goto label_3a76a4;
        case 0x3a76a8u: goto label_3a76a8;
        case 0x3a76acu: goto label_3a76ac;
        case 0x3a76b0u: goto label_3a76b0;
        case 0x3a76b4u: goto label_3a76b4;
        case 0x3a76b8u: goto label_3a76b8;
        case 0x3a76bcu: goto label_3a76bc;
        case 0x3a76c0u: goto label_3a76c0;
        case 0x3a76c4u: goto label_3a76c4;
        case 0x3a76c8u: goto label_3a76c8;
        case 0x3a76ccu: goto label_3a76cc;
        case 0x3a76d0u: goto label_3a76d0;
        case 0x3a76d4u: goto label_3a76d4;
        case 0x3a76d8u: goto label_3a76d8;
        case 0x3a76dcu: goto label_3a76dc;
        case 0x3a76e0u: goto label_3a76e0;
        case 0x3a76e4u: goto label_3a76e4;
        case 0x3a76e8u: goto label_3a76e8;
        case 0x3a76ecu: goto label_3a76ec;
        case 0x3a76f0u: goto label_3a76f0;
        case 0x3a76f4u: goto label_3a76f4;
        case 0x3a76f8u: goto label_3a76f8;
        case 0x3a76fcu: goto label_3a76fc;
        case 0x3a7700u: goto label_3a7700;
        case 0x3a7704u: goto label_3a7704;
        case 0x3a7708u: goto label_3a7708;
        case 0x3a770cu: goto label_3a770c;
        case 0x3a7710u: goto label_3a7710;
        case 0x3a7714u: goto label_3a7714;
        case 0x3a7718u: goto label_3a7718;
        case 0x3a771cu: goto label_3a771c;
        case 0x3a7720u: goto label_3a7720;
        case 0x3a7724u: goto label_3a7724;
        case 0x3a7728u: goto label_3a7728;
        case 0x3a772cu: goto label_3a772c;
        case 0x3a7730u: goto label_3a7730;
        case 0x3a7734u: goto label_3a7734;
        case 0x3a7738u: goto label_3a7738;
        case 0x3a773cu: goto label_3a773c;
        case 0x3a7740u: goto label_3a7740;
        case 0x3a7744u: goto label_3a7744;
        case 0x3a7748u: goto label_3a7748;
        case 0x3a774cu: goto label_3a774c;
        case 0x3a7750u: goto label_3a7750;
        case 0x3a7754u: goto label_3a7754;
        case 0x3a7758u: goto label_3a7758;
        case 0x3a775cu: goto label_3a775c;
        case 0x3a7760u: goto label_3a7760;
        case 0x3a7764u: goto label_3a7764;
        case 0x3a7768u: goto label_3a7768;
        case 0x3a776cu: goto label_3a776c;
        case 0x3a7770u: goto label_3a7770;
        case 0x3a7774u: goto label_3a7774;
        case 0x3a7778u: goto label_3a7778;
        case 0x3a777cu: goto label_3a777c;
        case 0x3a7780u: goto label_3a7780;
        case 0x3a7784u: goto label_3a7784;
        case 0x3a7788u: goto label_3a7788;
        case 0x3a778cu: goto label_3a778c;
        case 0x3a7790u: goto label_3a7790;
        case 0x3a7794u: goto label_3a7794;
        case 0x3a7798u: goto label_3a7798;
        case 0x3a779cu: goto label_3a779c;
        case 0x3a77a0u: goto label_3a77a0;
        case 0x3a77a4u: goto label_3a77a4;
        case 0x3a77a8u: goto label_3a77a8;
        case 0x3a77acu: goto label_3a77ac;
        case 0x3a77b0u: goto label_3a77b0;
        case 0x3a77b4u: goto label_3a77b4;
        case 0x3a77b8u: goto label_3a77b8;
        case 0x3a77bcu: goto label_3a77bc;
        case 0x3a77c0u: goto label_3a77c0;
        case 0x3a77c4u: goto label_3a77c4;
        case 0x3a77c8u: goto label_3a77c8;
        case 0x3a77ccu: goto label_3a77cc;
        case 0x3a77d0u: goto label_3a77d0;
        case 0x3a77d4u: goto label_3a77d4;
        case 0x3a77d8u: goto label_3a77d8;
        case 0x3a77dcu: goto label_3a77dc;
        case 0x3a77e0u: goto label_3a77e0;
        case 0x3a77e4u: goto label_3a77e4;
        case 0x3a77e8u: goto label_3a77e8;
        case 0x3a77ecu: goto label_3a77ec;
        case 0x3a77f0u: goto label_3a77f0;
        case 0x3a77f4u: goto label_3a77f4;
        case 0x3a77f8u: goto label_3a77f8;
        case 0x3a77fcu: goto label_3a77fc;
        case 0x3a7800u: goto label_3a7800;
        case 0x3a7804u: goto label_3a7804;
        case 0x3a7808u: goto label_3a7808;
        case 0x3a780cu: goto label_3a780c;
        case 0x3a7810u: goto label_3a7810;
        case 0x3a7814u: goto label_3a7814;
        case 0x3a7818u: goto label_3a7818;
        case 0x3a781cu: goto label_3a781c;
        case 0x3a7820u: goto label_3a7820;
        case 0x3a7824u: goto label_3a7824;
        case 0x3a7828u: goto label_3a7828;
        case 0x3a782cu: goto label_3a782c;
        case 0x3a7830u: goto label_3a7830;
        case 0x3a7834u: goto label_3a7834;
        case 0x3a7838u: goto label_3a7838;
        case 0x3a783cu: goto label_3a783c;
        case 0x3a7840u: goto label_3a7840;
        case 0x3a7844u: goto label_3a7844;
        case 0x3a7848u: goto label_3a7848;
        case 0x3a784cu: goto label_3a784c;
        case 0x3a7850u: goto label_3a7850;
        case 0x3a7854u: goto label_3a7854;
        case 0x3a7858u: goto label_3a7858;
        case 0x3a785cu: goto label_3a785c;
        case 0x3a7860u: goto label_3a7860;
        case 0x3a7864u: goto label_3a7864;
        case 0x3a7868u: goto label_3a7868;
        case 0x3a786cu: goto label_3a786c;
        case 0x3a7870u: goto label_3a7870;
        case 0x3a7874u: goto label_3a7874;
        case 0x3a7878u: goto label_3a7878;
        case 0x3a787cu: goto label_3a787c;
        case 0x3a7880u: goto label_3a7880;
        case 0x3a7884u: goto label_3a7884;
        case 0x3a7888u: goto label_3a7888;
        case 0x3a788cu: goto label_3a788c;
        case 0x3a7890u: goto label_3a7890;
        case 0x3a7894u: goto label_3a7894;
        case 0x3a7898u: goto label_3a7898;
        case 0x3a789cu: goto label_3a789c;
        case 0x3a78a0u: goto label_3a78a0;
        case 0x3a78a4u: goto label_3a78a4;
        case 0x3a78a8u: goto label_3a78a8;
        case 0x3a78acu: goto label_3a78ac;
        case 0x3a78b0u: goto label_3a78b0;
        case 0x3a78b4u: goto label_3a78b4;
        case 0x3a78b8u: goto label_3a78b8;
        case 0x3a78bcu: goto label_3a78bc;
        case 0x3a78c0u: goto label_3a78c0;
        case 0x3a78c4u: goto label_3a78c4;
        case 0x3a78c8u: goto label_3a78c8;
        case 0x3a78ccu: goto label_3a78cc;
        case 0x3a78d0u: goto label_3a78d0;
        case 0x3a78d4u: goto label_3a78d4;
        case 0x3a78d8u: goto label_3a78d8;
        case 0x3a78dcu: goto label_3a78dc;
        case 0x3a78e0u: goto label_3a78e0;
        case 0x3a78e4u: goto label_3a78e4;
        case 0x3a78e8u: goto label_3a78e8;
        case 0x3a78ecu: goto label_3a78ec;
        case 0x3a78f0u: goto label_3a78f0;
        case 0x3a78f4u: goto label_3a78f4;
        case 0x3a78f8u: goto label_3a78f8;
        case 0x3a78fcu: goto label_3a78fc;
        case 0x3a7900u: goto label_3a7900;
        case 0x3a7904u: goto label_3a7904;
        case 0x3a7908u: goto label_3a7908;
        case 0x3a790cu: goto label_3a790c;
        case 0x3a7910u: goto label_3a7910;
        case 0x3a7914u: goto label_3a7914;
        case 0x3a7918u: goto label_3a7918;
        case 0x3a791cu: goto label_3a791c;
        case 0x3a7920u: goto label_3a7920;
        case 0x3a7924u: goto label_3a7924;
        case 0x3a7928u: goto label_3a7928;
        case 0x3a792cu: goto label_3a792c;
        case 0x3a7930u: goto label_3a7930;
        case 0x3a7934u: goto label_3a7934;
        case 0x3a7938u: goto label_3a7938;
        case 0x3a793cu: goto label_3a793c;
        case 0x3a7940u: goto label_3a7940;
        case 0x3a7944u: goto label_3a7944;
        case 0x3a7948u: goto label_3a7948;
        case 0x3a794cu: goto label_3a794c;
        case 0x3a7950u: goto label_3a7950;
        case 0x3a7954u: goto label_3a7954;
        case 0x3a7958u: goto label_3a7958;
        case 0x3a795cu: goto label_3a795c;
        case 0x3a7960u: goto label_3a7960;
        case 0x3a7964u: goto label_3a7964;
        case 0x3a7968u: goto label_3a7968;
        case 0x3a796cu: goto label_3a796c;
        case 0x3a7970u: goto label_3a7970;
        case 0x3a7974u: goto label_3a7974;
        case 0x3a7978u: goto label_3a7978;
        case 0x3a797cu: goto label_3a797c;
        case 0x3a7980u: goto label_3a7980;
        case 0x3a7984u: goto label_3a7984;
        case 0x3a7988u: goto label_3a7988;
        case 0x3a798cu: goto label_3a798c;
        case 0x3a7990u: goto label_3a7990;
        case 0x3a7994u: goto label_3a7994;
        case 0x3a7998u: goto label_3a7998;
        case 0x3a799cu: goto label_3a799c;
        case 0x3a79a0u: goto label_3a79a0;
        case 0x3a79a4u: goto label_3a79a4;
        case 0x3a79a8u: goto label_3a79a8;
        case 0x3a79acu: goto label_3a79ac;
        case 0x3a79b0u: goto label_3a79b0;
        case 0x3a79b4u: goto label_3a79b4;
        case 0x3a79b8u: goto label_3a79b8;
        case 0x3a79bcu: goto label_3a79bc;
        case 0x3a79c0u: goto label_3a79c0;
        case 0x3a79c4u: goto label_3a79c4;
        case 0x3a79c8u: goto label_3a79c8;
        case 0x3a79ccu: goto label_3a79cc;
        case 0x3a79d0u: goto label_3a79d0;
        case 0x3a79d4u: goto label_3a79d4;
        case 0x3a79d8u: goto label_3a79d8;
        case 0x3a79dcu: goto label_3a79dc;
        case 0x3a79e0u: goto label_3a79e0;
        case 0x3a79e4u: goto label_3a79e4;
        case 0x3a79e8u: goto label_3a79e8;
        case 0x3a79ecu: goto label_3a79ec;
        case 0x3a79f0u: goto label_3a79f0;
        case 0x3a79f4u: goto label_3a79f4;
        default: break;
    }

    ctx->pc = 0x3a6ee8u;

label_3a6ee8:
    // 0x3a6ee8: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x3a6ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_3a6eec:
    // 0x3a6eec: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x3a6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_3a6ef0:
    // 0x3a6ef0: 0x27a30264  addiu       $v1, $sp, 0x264
    ctx->pc = 0x3a6ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_3a6ef4:
    // 0x3a6ef4: 0x7fb202f0  sq          $s2, 0x2F0($sp)
    ctx->pc = 0x3a6ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 18));
label_3a6ef8:
    // 0x3a6ef8: 0x7fb502c0  sq          $s5, 0x2C0($sp)
    ctx->pc = 0x3a6ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 21));
label_3a6efc:
    // 0x3a6efc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a6efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a6f00:
    // 0x3a6f00: 0x7fb702a0  sq          $s7, 0x2A0($sp)
    ctx->pc = 0x3a6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 23));
label_3a6f04:
    // 0x3a6f04: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3a6f04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3a6f08:
    // 0x3a6f08: 0x7fbe0290  sq          $fp, 0x290($sp)
    ctx->pc = 0x3a6f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 30));
label_3a6f0c:
    // 0x3a6f0c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3a6f0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6f10:
    // 0x3a6f10: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x3a6f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
label_3a6f14:
    // 0x3a6f14: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3a6f14u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a6f18:
    // 0x3a6f18: 0x7fb10300  sq          $s1, 0x300($sp)
    ctx->pc = 0x3a6f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 17));
label_3a6f1c:
    // 0x3a6f1c: 0x7fb302e0  sq          $s3, 0x2E0($sp)
    ctx->pc = 0x3a6f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 19));
label_3a6f20:
    // 0x3a6f20: 0x7fb402d0  sq          $s4, 0x2D0($sp)
    ctx->pc = 0x3a6f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 20));
label_3a6f24:
    // 0x3a6f24: 0x7fb602b0  sq          $s6, 0x2B0($sp)
    ctx->pc = 0x3a6f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 22));
label_3a6f28:
    // 0x3a6f28: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x3a6f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_3a6f2c:
    // 0x3a6f2c: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x3a6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_3a6f30:
    // 0x3a6f30: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x3a6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
label_3a6f34:
    // 0x3a6f34: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x3a6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_3a6f38:
    // 0x3a6f38: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x3a6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_3a6f3c:
    // 0x3a6f3c: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x3a6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_3a6f40:
    // 0x3a6f40: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x3a6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
label_3a6f44:
    // 0x3a6f44: 0x0  nop
    ctx->pc = 0x3a6f44u;
    // NOP
label_3a6f48:
    // 0x3a6f48: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3a6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3a6f4c:
    // 0x3a6f4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3a6f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3a6f50:
    // 0x3a6f50: 0x8c44a62c  lw          $a0, -0x59D4($v0)
    ctx->pc = 0x3a6f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944300)));
label_3a6f54:
    // 0x3a6f54: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x3a6f54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3a6f58:
    // 0x3a6f58: 0x8c67ae28  lw          $a3, -0x51D8($v1)
    ctx->pc = 0x3a6f58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946344)));
label_3a6f5c:
    // 0x3a6f5c: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x3a6f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_3a6f60:
    // 0x3a6f60: 0xc0e9f42  jal         func_3A7D08
label_3a6f64:
    if (ctx->pc == 0x3A6F64u) {
        ctx->pc = 0x3A6F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F60u;
        // 0x3a6f64: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6F68u;
        goto label_3a6f68;
    }
    ctx->pc = 0x3A6F60u;
    SET_GPR_U32(ctx, 31, 0x3A6F68u);
    ctx->pc = 0x3A6F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6F60u;
    // 0x3a6f64: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7D08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7D08u, 0x3A6F60u, 0x3A6F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6F68u;
label_3a6f68:
    // 0x3a6f68: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x3a6f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3a6f6c:
    // 0x3a6f6c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3a6f6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a6f70:
    // 0x3a6f70: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x3a6f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_3a6f74:
    // 0x3a6f74: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x3a6f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_3a6f78:
    // 0x3a6f78: 0x10600292  beqz        $v1, . + 4 + (0x292 << 2)
label_3a6f7c:
    if (ctx->pc == 0x3A6F7Cu) {
        ctx->pc = 0x3A6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F78u;
        // 0x3a6f7c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6F80u;
        goto label_3a6f80;
    }
    ctx->pc = 0x3A6F78u;
    {
        const bool branch_taken_0x3a6f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F78u;
        // 0x3a6f7c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6f78) {
            ctx->pc = 0x3A79C4u;
            goto label_3a79c4;
        }
    }
    ctx->pc = 0x3A6F80u;
label_3a6f80:
    // 0x3a6f80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a6f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a6f84:
    // 0x3a6f84: 0x56c20020  bnel        $s6, $v0, . + 4 + (0x20 << 2)
label_3a6f88:
    if (ctx->pc == 0x3A6F88u) {
        ctx->pc = 0x3A6F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6F84u;
        // 0x3a6f88: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6F8Cu;
        goto label_3a6f8c;
    }
    ctx->pc = 0x3A6F84u;
    {
        const bool branch_taken_0x3a6f84 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a6f84) {
            ctx->pc = 0x3A6F88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6F84u;
            // 0x3a6f88: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7008u;
            goto label_3a7008;
        }
    }
    ctx->pc = 0x3A6F8Cu;
label_3a6f8c:
    // 0x3a6f8c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a6f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a6f90:
    // 0x3a6f90: 0x2444f039  addiu       $a0, $v0, -0xFC7
    ctx->pc = 0x3a6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
label_3a6f94:
    // 0x3a6f94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3a6f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3a6f98:
    // 0x3a6f98: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a6f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3a6f9c:
    // 0x3a6f9c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a6f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3a6fa0:
    // 0x3a6fa0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3a6fa4:
    if (ctx->pc == 0x3A6FA4u) {
        ctx->pc = 0x3A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FA0u;
        // 0x3a6fa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6FA8u;
        goto label_3a6fa8;
    }
    ctx->pc = 0x3A6FA0u;
    {
        const bool branch_taken_0x3a6fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FA0u;
        // 0x3a6fa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6fa0) {
            ctx->pc = 0x3A7004u;
            goto label_3a7004;
        }
    }
    ctx->pc = 0x3A6FA8u;
label_3a6fa8:
    // 0x3a6fa8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a6fac:
    if (ctx->pc == 0x3A6FACu) {
        ctx->pc = 0x3A6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FA8u;
        // 0x3a6fac: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6FB0u;
        goto label_3a6fb0;
    }
    ctx->pc = 0x3A6FA8u;
    {
        const bool branch_taken_0x3a6fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FA8u;
        // 0x3a6fac: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6fa8) {
            ctx->pc = 0x3A6FC8u;
            goto label_3a6fc8;
        }
    }
    ctx->pc = 0x3A6FB0u;
label_3a6fb0:
    // 0x3a6fb0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3a6fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a6fb4:
    // 0x3a6fb4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a6fb8:
    // 0x3a6fb8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3a6fb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3a6fbc:
    // 0x3a6fbc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a6fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3a6fc0:
    // 0x3a6fc0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3a6fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3a6fc4:
    // 0x3a6fc4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a6fc8:
    // 0x3a6fc8: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_3a6fcc:
    if (ctx->pc == 0x3A6FCCu) {
        ctx->pc = 0x3A6FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FC8u;
        // 0x3a6fcc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6FD0u;
        goto label_3a6fd0;
    }
    ctx->pc = 0x3A6FC8u;
    {
        const bool branch_taken_0x3a6fc8 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a6fc8) {
            ctx->pc = 0x3A6FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6FC8u;
            // 0x3a6fcc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6FE4u;
            goto label_3a6fe4;
        }
    }
    ctx->pc = 0x3A6FD0u;
label_3a6fd0:
    // 0x3a6fd0: 0xc0e9aaa  jal         func_3A6AA8
label_3a6fd4:
    if (ctx->pc == 0x3A6FD4u) {
        ctx->pc = 0x3A6FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FD0u;
        // 0x3a6fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6FD8u;
        goto label_3a6fd8;
    }
    ctx->pc = 0x3A6FD0u;
    SET_GPR_U32(ctx, 31, 0x3A6FD8u);
    ctx->pc = 0x3A6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6FD0u;
    // 0x3a6fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A6FD0u, 0x3A6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6FD8u;
label_3a6fd8:
    // 0x3a6fd8: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
label_3a6fdc:
    if (ctx->pc == 0x3A6FDCu) {
        ctx->pc = 0x3A6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FD8u;
        // 0x3a6fdc: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6FE0u;
        goto label_3a6fe0;
    }
    ctx->pc = 0x3A6FD8u;
    {
        const bool branch_taken_0x3a6fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FD8u;
        // 0x3a6fdc: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6fd8) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A6FE0u;
label_3a6fe0:
    // 0x3a6fe0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a6fe4:
    // 0x3a6fe4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3a6fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a6fe8:
    // 0x3a6fe8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3a6fec:
    // 0x3a6fec: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a6fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a6ff0:
    // 0x3a6ff0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3a6ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a6ff4:
    // 0x3a6ff4: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_3a6ff8:
    if (ctx->pc == 0x3A6FF8u) {
        ctx->pc = 0x3A6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FF4u;
        // 0x3a6ff8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A6FFCu;
        goto label_3a6ffc;
    }
    ctx->pc = 0x3A6FF4u;
    {
        const bool branch_taken_0x3a6ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a6ff4) {
            ctx->pc = 0x3A6FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A6FF4u;
            // 0x3a6ff8: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A6FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6fb0;
        }
    }
    ctx->pc = 0x3A6FFCu;
label_3a6ffc:
    // 0x3a6ffc: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_3a7000:
    if (ctx->pc == 0x3A7000u) {
        ctx->pc = 0x3A7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FFCu;
        // 0x3a7000: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7004u;
        goto label_3a7004;
    }
    ctx->pc = 0x3A6FFCu;
    {
        const bool branch_taken_0x3a6ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6FFCu;
        // 0x3a7000: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6ffc) {
            ctx->pc = 0x3A6F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f4c;
        }
    }
    ctx->pc = 0x3A7004u;
label_3a7004:
    // 0x3a7004: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x3a7004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_3a7008:
    // 0x3a7008: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3a7008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3a700c:
    // 0x3a700c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_3a7010:
    if (ctx->pc == 0x3A7010u) {
        ctx->pc = 0x3A7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A700Cu;
        // 0x3a7010: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7014u;
        goto label_3a7014;
    }
    ctx->pc = 0x3A700Cu;
    {
        const bool branch_taken_0x3a700c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A700Cu;
        // 0x3a7010: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a700c) {
            ctx->pc = 0x3A7054u;
            goto label_3a7054;
        }
    }
    ctx->pc = 0x3A7014u;
label_3a7014:
    // 0x3a7014: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a7014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7018:
    // 0x3a7018: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a7018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a701c:
    // 0x3a701c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x3a701cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3a7020:
    // 0x3a7020: 0x80500000  lb          $s0, 0x0($v0)
    ctx->pc = 0x3a7020u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a7024:
    // 0x3a7024: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a7024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a7028:
    // 0x3a7028: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x3a7028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_3a702c:
    // 0x3a702c: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x3a702cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_3a7030:
    // 0x3a7030: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_3a7034:
    if (ctx->pc == 0x3A7034u) {
        ctx->pc = 0x3A7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7030u;
        // 0x3a7034: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7038u;
        goto label_3a7038;
    }
    ctx->pc = 0x3A7030u;
    {
        const bool branch_taken_0x3a7030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7030u;
        // 0x3a7034: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7030) {
            ctx->pc = 0x3A7200u;
            goto label_3a7200;
        }
    }
    ctx->pc = 0x3A7038u;
label_3a7038:
    // 0x3a7038: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3a7038u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3a703c:
    // 0x3a703c: 0x2442f180  addiu       $v0, $v0, -0xE80
    ctx->pc = 0x3a703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963584));
label_3a7040:
    // 0x3a7040: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a7040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a7044:
    // 0x3a7044: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a7044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a7048:
    // 0x3a7048: 0x800008  jr          $a0
label_3a704c:
    if (ctx->pc == 0x3A704Cu) {
        ctx->pc = 0x3A7050u;
        goto label_3a7050;
    }
    ctx->pc = 0x3A7048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A7050u: goto label_3a7050;
            case 0x3A70BCu: goto label_3a70bc;
            case 0x3A70C4u: goto label_3a70c4;
            case 0x3A70CCu: goto label_3a70cc;
            case 0x3A70D4u: goto label_3a70d4;
            case 0x3A70DCu: goto label_3a70dc;
            case 0x3A70F0u: goto label_3a70f0;
            case 0x3A70F4u: goto label_3a70f4;
            case 0x3A7104u: goto label_3a7104;
            case 0x3A711Cu: goto label_3a711c;
            case 0x3A7120u: goto label_3a7120;
            case 0x3A7138u: goto label_3a7138;
            case 0x3A7150u: goto label_3a7150;
            case 0x3A715Cu: goto label_3a715c;
            case 0x3A7164u: goto label_3a7164;
            case 0x3A716Cu: goto label_3a716c;
            case 0x3A7188u: goto label_3a7188;
            case 0x3A7194u: goto label_3a7194;
            case 0x3A71B0u: goto label_3a71b0;
            case 0x3A71F8u: goto label_3a71f8;
            case 0x3A7200u: goto label_3a7200;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7048u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A7050u;
label_3a7050:
    // 0x3a7050: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x3a7050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3a7054:
    // 0x3a7054: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a7054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7058:
    // 0x3a7058: 0x1ac0ffbb  blez        $s6, . + 4 + (-0x45 << 2)
label_3a705c:
    if (ctx->pc == 0x3A705Cu) {
        ctx->pc = 0x3A705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7058u;
        // 0x3a705c: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7060u;
        goto label_3a7060;
    }
    ctx->pc = 0x3A7058u;
    {
        const bool branch_taken_0x3a7058 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x3A705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7058u;
        // 0x3a705c: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7058) {
            ctx->pc = 0x3A6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A7060u;
label_3a7060:
    // 0x3a7060: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7064:
    // 0x3a7064: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_3a7068:
    if (ctx->pc == 0x3A7068u) {
        ctx->pc = 0x3A7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7064u;
        // 0x3a7068: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A706Cu;
        goto label_3a706c;
    }
    ctx->pc = 0x3A7064u;
    {
        const bool branch_taken_0x3a7064 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a7064) {
            ctx->pc = 0x3A7068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7064u;
            // 0x3a7068: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7080u;
            goto label_3a7080;
        }
    }
    ctx->pc = 0x3A706Cu;
label_3a706c:
    // 0x3a706c: 0xc0e9aaa  jal         func_3A6AA8
label_3a7070:
    if (ctx->pc == 0x3A7070u) {
        ctx->pc = 0x3A7070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A706Cu;
        // 0x3a7070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7074u;
        goto label_3a7074;
    }
    ctx->pc = 0x3A706Cu;
    SET_GPR_U32(ctx, 31, 0x3A7074u);
    ctx->pc = 0x3A7070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A706Cu;
    // 0x3a7070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A706Cu, 0x3A7074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7074u;
label_3a7074:
    // 0x3a7074: 0x14400250  bnez        $v0, . + 4 + (0x250 << 2)
label_3a7078:
    if (ctx->pc == 0x3A7078u) {
        ctx->pc = 0x3A7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7074u;
        // 0x3a7078: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A707Cu;
        goto label_3a707c;
    }
    ctx->pc = 0x3A7074u;
    {
        const bool branch_taken_0x3a7074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7074u;
        // 0x3a7078: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7074) {
            ctx->pc = 0x3A79B8u;
            goto label_3a79b8;
        }
    }
    ctx->pc = 0x3A707Cu;
label_3a707c:
    // 0x3a707c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a7080:
    // 0x3a7080: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3a7080u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3a7084:
    // 0x3a7084: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3a7084u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a7088:
    // 0x3a7088: 0x1443024e  bne         $v0, $v1, . + 4 + (0x24E << 2)
label_3a708c:
    if (ctx->pc == 0x3A708Cu) {
        ctx->pc = 0x3A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7088u;
        // 0x3a708c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7090u;
        goto label_3a7090;
    }
    ctx->pc = 0x3A7088u;
    {
        const bool branch_taken_0x3a7088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7088u;
        // 0x3a708c: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7088) {
            ctx->pc = 0x3A79C4u;
            goto label_3a79c4;
        }
    }
    ctx->pc = 0x3A7090u;
label_3a7090:
    // 0x3a7090: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a7090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7094:
    // 0x3a7094: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a7094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a7098:
    // 0x3a7098: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3a7098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3a709c:
    // 0x3a709c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a709cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a70a0:
    // 0x3a70a0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3a70a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3a70a4:
    // 0x3a70a4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3a70a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3a70a8:
    // 0x3a70a8: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x3a70a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3a70ac:
    // 0x3a70ac: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3a70b0:
    if (ctx->pc == 0x3A70B0u) {
        ctx->pc = 0x3A70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70ACu;
        // 0x3a70b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A70B4u;
        goto label_3a70b4;
    }
    ctx->pc = 0x3A70ACu;
    {
        const bool branch_taken_0x3a70ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70ACu;
        // 0x3a70b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70ac) {
            ctx->pc = 0x3A7060u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7060;
        }
    }
    ctx->pc = 0x3A70B4u;
label_3a70b4:
    // 0x3a70b4: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
label_3a70b8:
    if (ctx->pc == 0x3A70B8u) {
        ctx->pc = 0x3A70B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70B4u;
        // 0x3a70b8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A70BCu;
        goto label_3a70bc;
    }
    ctx->pc = 0x3A70B4u;
    {
        const bool branch_taken_0x3a70b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70B4u;
        // 0x3a70b8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70b4) {
            ctx->pc = 0x3A6F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f4c;
        }
    }
    ctx->pc = 0x3A70BCu;
label_3a70bc:
    // 0x3a70bc: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_3a70c0:
    if (ctx->pc == 0x3A70C0u) {
        ctx->pc = 0x3A70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70BCu;
        // 0x3a70c0: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A70C4u;
        goto label_3a70c4;
    }
    ctx->pc = 0x3A70BCu;
    {
        const bool branch_taken_0x3a70bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70BCu;
        // 0x3a70c0: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70bc) {
            ctx->pc = 0x3A701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a701c;
        }
    }
    ctx->pc = 0x3A70C4u;
label_3a70c4:
    // 0x3a70c4: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_3a70c8:
    if (ctx->pc == 0x3A70C8u) {
        ctx->pc = 0x3A70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70C4u;
        // 0x3a70c8: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A70CCu;
        goto label_3a70cc;
    }
    ctx->pc = 0x3A70C4u;
    {
        const bool branch_taken_0x3a70c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70C4u;
        // 0x3a70c8: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70c4) {
            ctx->pc = 0x3A701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a701c;
        }
    }
    ctx->pc = 0x3A70CCu;
label_3a70cc:
    // 0x3a70cc: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_3a70d0:
    if (ctx->pc == 0x3A70D0u) {
        ctx->pc = 0x3A70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70CCu;
        // 0x3a70d0: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A70D4u;
        goto label_3a70d4;
    }
    ctx->pc = 0x3A70CCu;
    {
        const bool branch_taken_0x3a70cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70CCu;
        // 0x3a70d0: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70cc) {
            ctx->pc = 0x3A701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a701c;
        }
    }
    ctx->pc = 0x3A70D4u;
label_3a70d4:
    // 0x3a70d4: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_3a70d8:
    if (ctx->pc == 0x3A70D8u) {
        ctx->pc = 0x3A70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70D4u;
        // 0x3a70d8: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A70DCu;
        goto label_3a70dc;
    }
    ctx->pc = 0x3A70D4u;
    {
        const bool branch_taken_0x3a70d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70D4u;
        // 0x3a70d8: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70d4) {
            ctx->pc = 0x3A701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a701c;
        }
    }
    ctx->pc = 0x3A70DCu;
label_3a70dc:
    // 0x3a70dc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3a70dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3a70e0:
    // 0x3a70e0: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x3a70e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3a70e4:
    // 0x3a70e4: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3a70e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3a70e8:
    // 0x3a70e8: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_3a70ec:
    if (ctx->pc == 0x3A70ECu) {
        ctx->pc = 0x3A70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70E8u;
        // 0x3a70ec: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A70F0u;
        goto label_3a70f0;
    }
    ctx->pc = 0x3A70E8u;
    {
        const bool branch_taken_0x3a70e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A70ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70E8u;
        // 0x3a70ec: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70e8) {
            ctx->pc = 0x3A701Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a701c;
        }
    }
    ctx->pc = 0x3A70F0u;
label_3a70f0:
    // 0x3a70f0: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a70f0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a70f4:
    // 0x3a70f4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3a70f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3a70f8:
    // 0x3a70f8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3a70f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a70fc:
    // 0x3a70fc: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a7100:
    if (ctx->pc == 0x3A7100u) {
        ctx->pc = 0x3A7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70FCu;
        // 0x3a7100: 0x2442d0c0  addiu       $v0, $v0, -0x2F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7104u;
        goto label_3a7104;
    }
    ctx->pc = 0x3A70FCu;
    {
        const bool branch_taken_0x3a70fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A70FCu;
        // 0x3a7100: 0x2442d0c0  addiu       $v0, $v0, -0x2F40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a70fc) {
            ctx->pc = 0x3A7144u;
            goto label_3a7144;
        }
    }
    ctx->pc = 0x3A7104u;
label_3a7104:
    // 0x3a7104: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3a7104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3a7108:
    // 0x3a7108: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3a7108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a710c:
    // 0x3a710c: 0x2442d0c0  addiu       $v0, $v0, -0x2F40
    ctx->pc = 0x3a710cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955200));
label_3a7110:
    // 0x3a7110: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3a7110u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7114:
    // 0x3a7114: 0x10000045  b           . + 4 + (0x45 << 2)
label_3a7118:
    if (ctx->pc == 0x3A7118u) {
        ctx->pc = 0x3A7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7114u;
        // 0x3a7118: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A711Cu;
        goto label_3a711c;
    }
    ctx->pc = 0x3A7114u;
    {
        const bool branch_taken_0x3a7114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7114u;
        // 0x3a7118: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7114) {
            ctx->pc = 0x3A722Cu;
            goto label_3a722c;
        }
    }
    ctx->pc = 0x3A711Cu;
label_3a711c:
    // 0x3a711c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3a711cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3a7120:
    // 0x3a7120: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3a7120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3a7124:
    // 0x3a7124: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3a7124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a7128:
    // 0x3a7128: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x3a7128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
label_3a712c:
    // 0x3a712c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x3a712cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3a7130:
    // 0x3a7130: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3a7134:
    if (ctx->pc == 0x3A7134u) {
        ctx->pc = 0x3A7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7130u;
        // 0x3a7134: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7138u;
        goto label_3a7138;
    }
    ctx->pc = 0x3A7130u;
    {
        const bool branch_taken_0x3a7130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7130u;
        // 0x3a7134: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7130) {
            ctx->pc = 0x3A722Cu;
            goto label_3a722c;
        }
    }
    ctx->pc = 0x3A7138u;
label_3a7138:
    // 0x3a7138: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3a7138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3a713c:
    // 0x3a713c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3a713cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a7140:
    // 0x3a7140: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x3a7140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
label_3a7144:
    // 0x3a7144: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x3a7144u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3a7148:
    // 0x3a7148: 0x10000038  b           . + 4 + (0x38 << 2)
label_3a714c:
    if (ctx->pc == 0x3A714Cu) {
        ctx->pc = 0x3A714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7148u;
        // 0x3a714c: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7150u;
        goto label_3a7150;
    }
    ctx->pc = 0x3A7148u;
    {
        const bool branch_taken_0x3a7148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7148u;
        // 0x3a714c: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7148) {
            ctx->pc = 0x3A722Cu;
            goto label_3a722c;
        }
    }
    ctx->pc = 0x3A7150u;
label_3a7150:
    // 0x3a7150: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3a7150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3a7154:
    // 0x3a7154: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a7158:
    if (ctx->pc == 0x3A7158u) {
        ctx->pc = 0x3A7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7154u;
        // 0x3a7158: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A715Cu;
        goto label_3a715c;
    }
    ctx->pc = 0x3A7154u;
    {
        const bool branch_taken_0x3a7154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7154u;
        // 0x3a7158: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7154) {
            ctx->pc = 0x3A719Cu;
            goto label_3a719c;
        }
    }
    ctx->pc = 0x3A715Cu;
label_3a715c:
    // 0x3a715c: 0x10000033  b           . + 4 + (0x33 << 2)
label_3a7160:
    if (ctx->pc == 0x3A7160u) {
        ctx->pc = 0x3A7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A715Cu;
        // 0x3a7160: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7164u;
        goto label_3a7164;
    }
    ctx->pc = 0x3A715Cu;
    {
        const bool branch_taken_0x3a715c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A715Cu;
        // 0x3a7160: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a715c) {
            ctx->pc = 0x3A722Cu;
            goto label_3a722c;
        }
    }
    ctx->pc = 0x3A7164u;
label_3a7164:
    // 0x3a7164: 0x10000031  b           . + 4 + (0x31 << 2)
label_3a7168:
    if (ctx->pc == 0x3A7168u) {
        ctx->pc = 0x3A7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7164u;
        // 0x3a7168: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A716Cu;
        goto label_3a716c;
    }
    ctx->pc = 0x3A7164u;
    {
        const bool branch_taken_0x3a7164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7164u;
        // 0x3a7168: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7164) {
            ctx->pc = 0x3A722Cu;
            goto label_3a722c;
        }
    }
    ctx->pc = 0x3A716Cu;
label_3a716c:
    // 0x3a716c: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x3a716cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3a7170:
    // 0x3a7170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3a7170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3a7174:
    // 0x3a7174: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x3a7174u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_3a7178:
    // 0x3a7178: 0xc0e9e7e  jal         func_3A79F8
label_3a717c:
    if (ctx->pc == 0x3A717Cu) {
        ctx->pc = 0x3A717Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7178u;
        // 0x3a717c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7180u;
        goto label_3a7180;
    }
    ctx->pc = 0x3A7178u;
    SET_GPR_U32(ctx, 31, 0x3A7180u);
    ctx->pc = 0x3A717Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7178u;
    // 0x3a717c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A79F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A79F8u, 0x3A7178u, 0x3A7180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7180u;
label_3a7180:
    // 0x3a7180: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3a7184:
    if (ctx->pc == 0x3A7184u) {
        ctx->pc = 0x3A7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7180u;
        // 0x3a7184: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7188u;
        goto label_3a7188;
    }
    ctx->pc = 0x3A7180u;
    {
        const bool branch_taken_0x3a7180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7180u;
        // 0x3a7184: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7180) {
            ctx->pc = 0x3A722Cu;
            goto label_3a722c;
        }
    }
    ctx->pc = 0x3A7188u;
label_3a7188:
    // 0x3a7188: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x3a7188u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_3a718c:
    // 0x3a718c: 0x10000027  b           . + 4 + (0x27 << 2)
label_3a7190:
    if (ctx->pc == 0x3A7190u) {
        ctx->pc = 0x3A7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A718Cu;
        // 0x3a7190: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7194u;
        goto label_3a7194;
    }
    ctx->pc = 0x3A718Cu;
    {
        const bool branch_taken_0x3a718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A718Cu;
        // 0x3a7190: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a718c) {
            ctx->pc = 0x3A722Cu;
            goto label_3a722c;
        }
    }
    ctx->pc = 0x3A7194u;
label_3a7194:
    // 0x3a7194: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3a7194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3a7198:
    // 0x3a7198: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x3a7198u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_3a719c:
    // 0x3a719c: 0x24429228  addiu       $v0, $v0, -0x6DD8
    ctx->pc = 0x3a719cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939176));
label_3a71a0:
    // 0x3a71a0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3a71a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a71a4:
    // 0x3a71a4: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x3a71a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_3a71a8:
    // 0x3a71a8: 0x10000020  b           . + 4 + (0x20 << 2)
label_3a71ac:
    if (ctx->pc == 0x3A71ACu) {
        ctx->pc = 0x3A71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71A8u;
        // 0x3a71ac: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A71B0u;
        goto label_3a71b0;
    }
    ctx->pc = 0x3A71A8u;
    {
        const bool branch_taken_0x3a71a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A71ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71A8u;
        // 0x3a71ac: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71a8) {
            ctx->pc = 0x3A722Cu;
            goto label_3a722c;
        }
    }
    ctx->pc = 0x3A71B0u;
label_3a71b0:
    // 0x3a71b0: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x3a71b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3a71b4:
    // 0x3a71b4: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
label_3a71b8:
    if (ctx->pc == 0x3A71B8u) {
        ctx->pc = 0x3A71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71B4u;
        // 0x3a71b8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A71BCu;
        goto label_3a71bc;
    }
    ctx->pc = 0x3A71B4u;
    {
        const bool branch_taken_0x3a71b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71B4u;
        // 0x3a71b8: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71b4) {
            ctx->pc = 0x3A6F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f4c;
        }
    }
    ctx->pc = 0x3A71BCu;
label_3a71bc:
    // 0x3a71bc: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x3a71bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_3a71c0:
    // 0x3a71c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a71c4:
    if (ctx->pc == 0x3A71C4u) {
        ctx->pc = 0x3A71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71C0u;
        // 0x3a71c4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A71C8u;
        goto label_3a71c8;
    }
    ctx->pc = 0x3A71C0u;
    {
        const bool branch_taken_0x3a71c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A71C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71C0u;
        // 0x3a71c4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71c0) {
            ctx->pc = 0x3A71D8u;
            goto label_3a71d8;
        }
    }
    ctx->pc = 0x3A71C8u;
label_3a71c8:
    // 0x3a71c8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3a71c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3a71cc:
    // 0x3a71cc: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3a71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a71d0:
    // 0x3a71d0: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
label_3a71d4:
    if (ctx->pc == 0x3A71D4u) {
        ctx->pc = 0x3A71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71D0u;
        // 0x3a71d4: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A71D8u;
        goto label_3a71d8;
    }
    ctx->pc = 0x3A71D0u;
    {
        const bool branch_taken_0x3a71d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A71D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71D0u;
        // 0x3a71d4: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71d0) {
            ctx->pc = 0x3A6F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f4c;
        }
    }
    ctx->pc = 0x3A71D8u;
label_3a71d8:
    // 0x3a71d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a71dc:
    if (ctx->pc == 0x3A71DCu) {
        ctx->pc = 0x3A71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71D8u;
        // 0x3a71dc: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A71E0u;
        goto label_3a71e0;
    }
    ctx->pc = 0x3A71D8u;
    {
        const bool branch_taken_0x3a71d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A71DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71D8u;
        // 0x3a71dc: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71d8) {
            ctx->pc = 0x3A71ECu;
            goto label_3a71ec;
        }
    }
    ctx->pc = 0x3A71E0u;
label_3a71e0:
    // 0x3a71e0: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x3a71e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a71e4:
    // 0x3a71e4: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_3a71e8:
    if (ctx->pc == 0x3A71E8u) {
        ctx->pc = 0x3A71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71E4u;
        // 0x3a71e8: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A71ECu;
        goto label_3a71ec;
    }
    ctx->pc = 0x3A71E4u;
    {
        const bool branch_taken_0x3a71e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71E4u;
        // 0x3a71e8: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71e4) {
            ctx->pc = 0x3A6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A71ECu;
label_3a71ec:
    // 0x3a71ec: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3a71ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a71f0:
    // 0x3a71f0: 0x1000ff55  b           . + 4 + (-0xAB << 2)
label_3a71f4:
    if (ctx->pc == 0x3A71F4u) {
        ctx->pc = 0x3A71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71F0u;
        // 0x3a71f4: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A71F8u;
        goto label_3a71f8;
    }
    ctx->pc = 0x3A71F0u;
    {
        const bool branch_taken_0x3a71f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A71F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71F0u;
        // 0x3a71f4: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71f0) {
            ctx->pc = 0x3A6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A71F8u;
label_3a71f8:
    // 0x3a71f8: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_3a71fc:
    if (ctx->pc == 0x3A71FCu) {
        ctx->pc = 0x3A71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71F8u;
        // 0x3a71fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7200u;
        goto label_3a7200;
    }
    ctx->pc = 0x3A71F8u;
    {
        const bool branch_taken_0x3a71f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A71FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A71F8u;
        // 0x3a71fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a71f8) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A7200u;
label_3a7200:
    // 0x3a7200: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a7200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a7204:
    // 0x3a7204: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3a7204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_3a7208:
    // 0x3a7208: 0x2463d0c0  addiu       $v1, $v1, -0x2F40
    ctx->pc = 0x3a7208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955200));
label_3a720c:
    // 0x3a720c: 0x2442f039  addiu       $v0, $v0, -0xFC7
    ctx->pc = 0x3a720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
label_3a7210:
    // 0x3a7210: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3a7210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3a7214:
    // 0x3a7214: 0xafa30270  sw          $v1, 0x270($sp)
    ctx->pc = 0x3a7214u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 3));
label_3a7218:
    // 0x3a7218: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a7218u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a721c:
    // 0x3a721c: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x3a721cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3a7220:
    // 0x3a7220: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3a7220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a7224:
    // 0x3a7224: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3a7224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3a7228:
    // 0x3a7228: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x3a7228u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_3a722c:
    // 0x3a722c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7230:
    // 0x3a7230: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_3a7234:
    if (ctx->pc == 0x3A7234u) {
        ctx->pc = 0x3A7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7230u;
        // 0x3a7234: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7238u;
        goto label_3a7238;
    }
    ctx->pc = 0x3A7230u;
    {
        const bool branch_taken_0x3a7230 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A7234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7230u;
        // 0x3a7234: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7230) {
            ctx->pc = 0x3A724Cu;
            goto label_3a724c;
        }
    }
    ctx->pc = 0x3A7238u;
label_3a7238:
    // 0x3a7238: 0xc0e9aaa  jal         func_3A6AA8
label_3a723c:
    if (ctx->pc == 0x3A723Cu) {
        ctx->pc = 0x3A723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7238u;
        // 0x3a723c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7240u;
        goto label_3a7240;
    }
    ctx->pc = 0x3A7238u;
    SET_GPR_U32(ctx, 31, 0x3A7240u);
    ctx->pc = 0x3A723Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7238u;
    // 0x3a723c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A7238u, 0x3A7240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7240u;
label_3a7240:
    // 0x3a7240: 0x144001dd  bnez        $v0, . + 4 + (0x1DD << 2)
label_3a7244:
    if (ctx->pc == 0x3A7244u) {
        ctx->pc = 0x3A7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7240u;
        // 0x3a7244: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7248u;
        goto label_3a7248;
    }
    ctx->pc = 0x3A7240u;
    {
        const bool branch_taken_0x3a7240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7240u;
        // 0x3a7244: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7240) {
            ctx->pc = 0x3A79B8u;
            goto label_3a79b8;
        }
    }
    ctx->pc = 0x3A7248u;
label_3a7248:
    // 0x3a7248: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x3a7248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_3a724c:
    // 0x3a724c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_3a7250:
    if (ctx->pc == 0x3A7250u) {
        ctx->pc = 0x3A7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A724Cu;
        // 0x3a7250: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7254u;
        goto label_3a7254;
    }
    ctx->pc = 0x3A724Cu;
    {
        const bool branch_taken_0x3a724c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A724Cu;
        // 0x3a7250: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a724c) {
            ctx->pc = 0x3A72CCu;
            goto label_3a72cc;
        }
    }
    ctx->pc = 0x3A7254u;
label_3a7254:
    // 0x3a7254: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a7254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a7258:
    // 0x3a7258: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a7258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a725c:
    // 0x3a725c: 0x2445f039  addiu       $a1, $v0, -0xFC7
    ctx->pc = 0x3a725cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
label_3a7260:
    // 0x3a7260: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3a7260u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a7264:
    // 0x3a7264: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3a7264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3a7268:
    // 0x3a7268: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3a7268u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3a726c:
    // 0x3a726c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3a726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3a7270:
    // 0x3a7270: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3a7274:
    if (ctx->pc == 0x3A7274u) {
        ctx->pc = 0x3A7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7270u;
        // 0x3a7274: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7278u;
        goto label_3a7278;
    }
    ctx->pc = 0x3A7270u;
    {
        const bool branch_taken_0x3a7270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7270u;
        // 0x3a7274: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7270) {
            ctx->pc = 0x3A72CCu;
            goto label_3a72cc;
        }
    }
    ctx->pc = 0x3A7278u;
label_3a7278:
    // 0x3a7278: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3a7278u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3a727c:
    // 0x3a727c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a727cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7280:
    // 0x3a7280: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3a7280u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3a7284:
    // 0x3a7284: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7288:
    // 0x3a7288: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_3a728c:
    if (ctx->pc == 0x3A728Cu) {
        ctx->pc = 0x3A728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7288u;
        // 0x3a728c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7290u;
        goto label_3a7290;
    }
    ctx->pc = 0x3A7288u;
    {
        const bool branch_taken_0x3a7288 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3A728Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7288u;
        // 0x3a728c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7288) {
            ctx->pc = 0x3A729Cu;
            goto label_3a729c;
        }
    }
    ctx->pc = 0x3A7290u;
label_3a7290:
    // 0x3a7290: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3a7290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a7294:
    // 0x3a7294: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a7298:
    if (ctx->pc == 0x3A7298u) {
        ctx->pc = 0x3A7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7294u;
        // 0x3a7298: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A729Cu;
        goto label_3a729c;
    }
    ctx->pc = 0x3A7294u;
    {
        const bool branch_taken_0x3a7294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7294u;
        // 0x3a7298: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7294) {
            ctx->pc = 0x3A72ACu;
            goto label_3a72ac;
        }
    }
    ctx->pc = 0x3A729Cu;
label_3a729c:
    // 0x3a729c: 0xc0e9aaa  jal         func_3A6AA8
label_3a72a0:
    if (ctx->pc == 0x3A72A0u) {
        ctx->pc = 0x3A72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A729Cu;
        // 0x3a72a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A72A4u;
        goto label_3a72a4;
    }
    ctx->pc = 0x3A729Cu;
    SET_GPR_U32(ctx, 31, 0x3A72A4u);
    ctx->pc = 0x3A72A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A729Cu;
    // 0x3a72a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A729Cu, 0x3A72A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A72A4u;
label_3a72a4:
    // 0x3a72a4: 0x144001c4  bnez        $v0, . + 4 + (0x1C4 << 2)
label_3a72a8:
    if (ctx->pc == 0x3A72A8u) {
        ctx->pc = 0x3A72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72A4u;
        // 0x3a72a8: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A72ACu;
        goto label_3a72ac;
    }
    ctx->pc = 0x3A72A4u;
    {
        const bool branch_taken_0x3a72a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72A4u;
        // 0x3a72a8: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a72a4) {
            ctx->pc = 0x3A79B8u;
            goto label_3a79b8;
        }
    }
    ctx->pc = 0x3A72ACu;
label_3a72ac:
    // 0x3a72ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a72acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a72b0:
    // 0x3a72b0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3a72b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a72b4:
    // 0x3a72b4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a72b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a72b8:
    // 0x3a72b8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a72b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a72bc:
    // 0x3a72bc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3a72bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a72c0:
    // 0x3a72c0: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
label_3a72c4:
    if (ctx->pc == 0x3A72C4u) {
        ctx->pc = 0x3A72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72C0u;
        // 0x3a72c4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A72C8u;
        goto label_3a72c8;
    }
    ctx->pc = 0x3A72C0u;
    {
        const bool branch_taken_0x3a72c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a72c0) {
            ctx->pc = 0x3A72C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A72C0u;
            // 0x3a72c4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7280;
        }
    }
    ctx->pc = 0x3A72C8u;
label_3a72c8:
    // 0x3a72c8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x3a72c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3a72cc:
    // 0x3a72cc: 0x1040ff1f  beqz        $v0, . + 4 + (-0xE1 << 2)
label_3a72d0:
    if (ctx->pc == 0x3A72D0u) {
        ctx->pc = 0x3A72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72CCu;
        // 0x3a72d0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A72D4u;
        goto label_3a72d4;
    }
    ctx->pc = 0x3A72CCu;
    {
        const bool branch_taken_0x3a72cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A72D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72CCu;
        // 0x3a72d0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a72cc) {
            ctx->pc = 0x3A6F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f4c;
        }
    }
    ctx->pc = 0x3A72D4u;
label_3a72d4:
    // 0x3a72d4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a72d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a72d8:
    // 0x3a72d8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3a72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3a72dc:
    // 0x3a72dc: 0x2442f370  addiu       $v0, $v0, -0xC90
    ctx->pc = 0x3a72dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964080));
label_3a72e0:
    // 0x3a72e0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a72e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a72e4:
    // 0x3a72e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a72e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a72e8:
    // 0x3a72e8: 0x800008  jr          $a0
label_3a72ec:
    if (ctx->pc == 0x3A72ECu) {
        ctx->pc = 0x3A72F0u;
        goto label_3a72f0;
    }
    ctx->pc = 0x3A72E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A72F0u: goto label_3a72f0;
            case 0x3A7394u: goto label_3a7394;
            case 0x3A74A0u: goto label_3a74a0;
            case 0x3A75ACu: goto label_3a75ac;
            case 0x3A77E4u: goto label_3a77e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A72E8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A72F0u;
label_3a72f0:
    // 0x3a72f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a72f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a72f4:
    // 0x3a72f4: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x3a72f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3a72f8:
    // 0x3a72f8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3a72fc:
    if (ctx->pc == 0x3A72FCu) {
        ctx->pc = 0x3A72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72F8u;
        // 0x3a72fc: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7300u;
        goto label_3a7300;
    }
    ctx->pc = 0x3A72F8u;
    {
        const bool branch_taken_0x3a72f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A72F8u;
        // 0x3a72fc: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a72f8) {
            ctx->pc = 0x3A7364u;
            goto label_3a7364;
        }
    }
    ctx->pc = 0x3A7300u;
label_3a7300:
    // 0x3a7300: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a7300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7304:
    // 0x3a7304: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3a7304u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7308:
    // 0x3a7308: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x3a7308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3a730c:
    // 0x3a730c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3a7310:
    if (ctx->pc == 0x3A7310u) {
        ctx->pc = 0x3A7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A730Cu;
        // 0x3a7310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7314u;
        goto label_3a7314;
    }
    ctx->pc = 0x3A730Cu;
    {
        const bool branch_taken_0x3a730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A730Cu;
        // 0x3a7310: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a730c) {
            ctx->pc = 0x3A7344u;
            goto label_3a7344;
        }
    }
    ctx->pc = 0x3A7314u;
label_3a7314:
    // 0x3a7314: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a7314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a7318:
    // 0x3a7318: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3a7318u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3a731c:
    // 0x3a731c: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x3a731cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3a7320:
    // 0x3a7320: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3a7320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3a7324:
    // 0x3a7324: 0xc0e9aaa  jal         func_3A6AA8
label_3a7328:
    if (ctx->pc == 0x3A7328u) {
        ctx->pc = 0x3A7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7324u;
        // 0x3a7328: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A732Cu;
        goto label_3a732c;
    }
    ctx->pc = 0x3A7324u;
    SET_GPR_U32(ctx, 31, 0x3A732Cu);
    ctx->pc = 0x3A7328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7324u;
    // 0x3a7328: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A7324u, 0x3A732Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A732Cu;
label_3a732c:
    // 0x3a732c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_3a7330:
    if (ctx->pc == 0x3A7330u) {
        ctx->pc = 0x3A7330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A732Cu;
        // 0x3a7330: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7334u;
        goto label_3a7334;
    }
    ctx->pc = 0x3A732Cu;
    {
        const bool branch_taken_0x3a732c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a732c) {
            ctx->pc = 0x3A7330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A732Cu;
            // 0x3a7330: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7308u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7308;
        }
    }
    ctx->pc = 0x3A7334u;
label_3a7334:
    // 0x3a7334: 0x1220019f  beqz        $s1, . + 4 + (0x19F << 2)
label_3a7338:
    if (ctx->pc == 0x3A7338u) {
        ctx->pc = 0x3A7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7334u;
        // 0x3a7338: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A733Cu;
        goto label_3a733c;
    }
    ctx->pc = 0x3A7334u;
    {
        const bool branch_taken_0x3a7334 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7334u;
        // 0x3a7338: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7334) {
            ctx->pc = 0x3A79B4u;
            goto label_3a79b4;
        }
    }
    ctx->pc = 0x3A733Cu;
label_3a733c:
    // 0x3a733c: 0x1000ff03  b           . + 4 + (-0xFD << 2)
label_3a7340:
    if (ctx->pc == 0x3A7340u) {
        ctx->pc = 0x3A7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A733Cu;
        // 0x3a7340: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7344u;
        goto label_3a7344;
    }
    ctx->pc = 0x3A733Cu;
    {
        const bool branch_taken_0x3a733c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A733Cu;
        // 0x3a7340: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a733c) {
            ctx->pc = 0x3A6F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f4c;
        }
    }
    ctx->pc = 0x3A7344u;
label_3a7344:
    // 0x3a7344: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3a7344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a7348:
    // 0x3a7348: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x3a7348u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_3a734c:
    // 0x3a734c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3a734cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3a7350:
    // 0x3a7350: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x3a7350u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_3a7354:
    // 0x3a7354: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x3a7354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_3a7358:
    // 0x3a7358: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3a7358u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3a735c:
    // 0x3a735c: 0x1000fefa  b           . + 4 + (-0x106 << 2)
label_3a7360:
    if (ctx->pc == 0x3A7360u) {
        ctx->pc = 0x3A7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A735Cu;
        // 0x3a7360: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7364u;
        goto label_3a7364;
    }
    ctx->pc = 0x3A735Cu;
    {
        const bool branch_taken_0x3a735c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A735Cu;
        // 0x3a7360: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a735c) {
            ctx->pc = 0x3A6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A7364u;
label_3a7364:
    // 0x3a7364: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3a7364u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3a7368:
    // 0x3a7368: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3a7368u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a736c:
    // 0x3a736c: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3a736cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a7370:
    // 0x3a7370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3a7370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3a7374:
    // 0x3a7374: 0xc0e98c2  jal         func_3A6308
label_3a7378:
    if (ctx->pc == 0x3A7378u) {
        ctx->pc = 0x3A7378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7374u;
        // 0x3a7378: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A737Cu;
        goto label_3a737c;
    }
    ctx->pc = 0x3A7374u;
    SET_GPR_U32(ctx, 31, 0x3A737Cu);
    ctx->pc = 0x3A7378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7374u;
    // 0x3a7378: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6308u, 0x3A7374u, 0x3A737Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A737Cu;
label_3a737c:
    // 0x3a737c: 0x1040018d  beqz        $v0, . + 4 + (0x18D << 2)
label_3a7380:
    if (ctx->pc == 0x3A7380u) {
        ctx->pc = 0x3A7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A737Cu;
        // 0x3a7380: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7384u;
        goto label_3a7384;
    }
    ctx->pc = 0x3A737Cu;
    {
        const bool branch_taken_0x3a737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A737Cu;
        // 0x3a7380: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a737c) {
            ctx->pc = 0x3A79B4u;
            goto label_3a79b4;
        }
    }
    ctx->pc = 0x3A7384u;
label_3a7384:
    // 0x3a7384: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x3a7384u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_3a7388:
    // 0x3a7388: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a7388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a738c:
    // 0x3a738c: 0x1000feee  b           . + 4 + (-0x112 << 2)
label_3a7390:
    if (ctx->pc == 0x3A7390u) {
        ctx->pc = 0x3A7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A738Cu;
        // 0x3a7390: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7394u;
        goto label_3a7394;
    }
    ctx->pc = 0x3A738Cu;
    {
        const bool branch_taken_0x3a738c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A738Cu;
        // 0x3a7390: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a738c) {
            ctx->pc = 0x3A6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A7394u;
label_3a7394:
    // 0x3a7394: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a7394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a7398:
    // 0x3a7398: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x3a7398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3a739c:
    // 0x3a739c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a739cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3a73a0:
    // 0x3a73a0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3a73a4:
    if (ctx->pc == 0x3A73A4u) {
        ctx->pc = 0x3A73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73A0u;
        // 0x3a73a4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A73A8u;
        goto label_3a73a8;
    }
    ctx->pc = 0x3A73A0u;
    {
        const bool branch_taken_0x3a73a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73A0u;
        // 0x3a73a4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a73a0) {
            ctx->pc = 0x3A7410u;
            goto label_3a7410;
        }
    }
    ctx->pc = 0x3A73A8u;
label_3a73a8:
    // 0x3a73a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a73a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a73ac:
    // 0x3a73ac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3a73acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a73b0:
    // 0x3a73b0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a73b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a73b4:
    // 0x3a73b4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a73b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3a73b8:
    // 0x3a73b8: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x3a73b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3a73bc:
    // 0x3a73bc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_3a73c0:
    if (ctx->pc == 0x3A73C0u) {
        ctx->pc = 0x3A73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73BCu;
        // 0x3a73c0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A73C4u;
        goto label_3a73c4;
    }
    ctx->pc = 0x3A73BCu;
    {
        const bool branch_taken_0x3a73bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A73C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73BCu;
        // 0x3a73c0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a73bc) {
            ctx->pc = 0x3A7400u;
            goto label_3a7400;
        }
    }
    ctx->pc = 0x3A73C4u;
label_3a73c4:
    // 0x3a73c4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3a73c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a73c8:
    // 0x3a73c8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a73c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a73cc:
    // 0x3a73cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a73ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a73d0:
    // 0x3a73d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a73d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3a73d4:
    // 0x3a73d4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a73d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a73d8:
    // 0x3a73d8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_3a73dc:
    if (ctx->pc == 0x3A73DCu) {
        ctx->pc = 0x3A73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73D8u;
        // 0x3a73dc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A73E0u;
        goto label_3a73e0;
    }
    ctx->pc = 0x3A73D8u;
    {
        const bool branch_taken_0x3a73d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73D8u;
        // 0x3a73dc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a73d8) {
            ctx->pc = 0x3A7400u;
            goto label_3a7400;
        }
    }
    ctx->pc = 0x3A73E0u;
label_3a73e0:
    // 0x3a73e0: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
label_3a73e4:
    if (ctx->pc == 0x3A73E4u) {
        ctx->pc = 0x3A73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73E0u;
        // 0x3a73e4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A73E8u;
        goto label_3a73e8;
    }
    ctx->pc = 0x3A73E0u;
    {
        const bool branch_taken_0x3a73e0 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3a73e0) {
            ctx->pc = 0x3A73E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A73E0u;
            // 0x3a73e4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A73B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a73b0;
        }
    }
    ctx->pc = 0x3A73E8u;
label_3a73e8:
    // 0x3a73e8: 0xc0e9aaa  jal         func_3A6AA8
label_3a73ec:
    if (ctx->pc == 0x3A73ECu) {
        ctx->pc = 0x3A73ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73E8u;
        // 0x3a73ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A73F0u;
        goto label_3a73f0;
    }
    ctx->pc = 0x3A73E8u;
    SET_GPR_U32(ctx, 31, 0x3A73F0u);
    ctx->pc = 0x3A73ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A73E8u;
    // 0x3a73ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A73E8u, 0x3A73F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A73F0u;
label_3a73f0:
    // 0x3a73f0: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
label_3a73f4:
    if (ctx->pc == 0x3A73F4u) {
        ctx->pc = 0x3A73F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73F0u;
        // 0x3a73f4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A73F8u;
        goto label_3a73f8;
    }
    ctx->pc = 0x3A73F0u;
    {
        const bool branch_taken_0x3a73f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a73f0) {
            ctx->pc = 0x3A73F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A73F0u;
            // 0x3a73f4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A73B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a73b0;
        }
    }
    ctx->pc = 0x3A73F8u;
label_3a73f8:
    // 0x3a73f8: 0x1200016f  beqz        $s0, . + 4 + (0x16F << 2)
label_3a73fc:
    if (ctx->pc == 0x3A73FCu) {
        ctx->pc = 0x3A73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73F8u;
        // 0x3a73fc: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7400u;
        goto label_3a7400;
    }
    ctx->pc = 0x3A73F8u;
    {
        const bool branch_taken_0x3a73f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A73FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A73F8u;
        // 0x3a73fc: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a73f8) {
            ctx->pc = 0x3A79B8u;
            goto label_3a79b8;
        }
    }
    ctx->pc = 0x3A7400u;
label_3a7400:
    // 0x3a7400: 0x12000170  beqz        $s0, . + 4 + (0x170 << 2)
label_3a7404:
    if (ctx->pc == 0x3A7404u) {
        ctx->pc = 0x3A7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7400u;
        // 0x3a7404: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7408u;
        goto label_3a7408;
    }
    ctx->pc = 0x3A7400u;
    {
        const bool branch_taken_0x3a7400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7400u;
        // 0x3a7404: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7400) {
            ctx->pc = 0x3A79C4u;
            goto label_3a79c4;
        }
    }
    ctx->pc = 0x3A7408u;
label_3a7408:
    // 0x3a7408: 0x1000fed0  b           . + 4 + (-0x130 << 2)
label_3a740c:
    if (ctx->pc == 0x3A740Cu) {
        ctx->pc = 0x3A740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7408u;
        // 0x3a740c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7410u;
        goto label_3a7410;
    }
    ctx->pc = 0x3A7408u;
    {
        const bool branch_taken_0x3a7408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7408u;
        // 0x3a740c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7408) {
            ctx->pc = 0x3A6F4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f4c;
        }
    }
    ctx->pc = 0x3A7410u;
label_3a7410:
    // 0x3a7410: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3a7410u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3a7414:
    // 0x3a7414: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x3a7414u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a7418:
    // 0x3a7418: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3a7418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a741c:
    // 0x3a741c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3a741cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a7420:
    // 0x3a7420: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a7420u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a7424:
    // 0x3a7424: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3a7424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3a7428:
    // 0x3a7428: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x3a7428u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3a742c:
    // 0x3a742c: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_3a7430:
    if (ctx->pc == 0x3A7430u) {
        ctx->pc = 0x3A7430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A742Cu;
        // 0x3a7430: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7434u;
        goto label_3a7434;
    }
    ctx->pc = 0x3A742Cu;
    {
        const bool branch_taken_0x3a742c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a742c) {
            ctx->pc = 0x3A7430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A742Cu;
            // 0x3a7430: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7484u;
            goto label_3a7484;
        }
    }
    ctx->pc = 0x3A7434u;
label_3a7434:
    // 0x3a7434: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a7434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7438:
    // 0x3a7438: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3a7438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3a743c:
    // 0x3a743c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a743cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a7440:
    // 0x3a7440: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7444:
    // 0x3a7444: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3a7444u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3a7448:
    // 0x3a7448: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a7448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a744c:
    // 0x3a744c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3a744cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3a7450:
    // 0x3a7450: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3a7450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_3a7454:
    // 0x3a7454: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_3a7458:
    if (ctx->pc == 0x3A7458u) {
        ctx->pc = 0x3A7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7454u;
        // 0x3a7458: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A745Cu;
        goto label_3a745c;
    }
    ctx->pc = 0x3A7454u;
    {
        const bool branch_taken_0x3a7454 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7454u;
        // 0x3a7458: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7454) {
            ctx->pc = 0x3A7480u;
            goto label_3a7480;
        }
    }
    ctx->pc = 0x3A745Cu;
label_3a745c:
    // 0x3a745c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7460:
    // 0x3a7460: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_3a7464:
    if (ctx->pc == 0x3A7464u) {
        ctx->pc = 0x3A7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7460u;
        // 0x3a7464: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7468u;
        goto label_3a7468;
    }
    ctx->pc = 0x3A7460u;
    {
        const bool branch_taken_0x3a7460 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a7460) {
            ctx->pc = 0x3A7464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7460u;
            // 0x3a7464: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7420;
        }
    }
    ctx->pc = 0x3A7468u;
label_3a7468:
    // 0x3a7468: 0xc0e9aaa  jal         func_3A6AA8
label_3a746c:
    if (ctx->pc == 0x3A746Cu) {
        ctx->pc = 0x3A746Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7468u;
        // 0x3a746c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7470u;
        goto label_3a7470;
    }
    ctx->pc = 0x3A7468u;
    SET_GPR_U32(ctx, 31, 0x3A7470u);
    ctx->pc = 0x3A746Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7468u;
    // 0x3a746c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A7468u, 0x3A7470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7470u;
label_3a7470:
    // 0x3a7470: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_3a7474:
    if (ctx->pc == 0x3A7474u) {
        ctx->pc = 0x3A7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7470u;
        // 0x3a7474: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7478u;
        goto label_3a7478;
    }
    ctx->pc = 0x3A7470u;
    {
        const bool branch_taken_0x3a7470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7470) {
            ctx->pc = 0x3A7474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7470u;
            // 0x3a7474: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7420u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7420;
        }
    }
    ctx->pc = 0x3A7478u;
label_3a7478:
    // 0x3a7478: 0x1230014f  beq         $s1, $s0, . + 4 + (0x14F << 2)
label_3a747c:
    if (ctx->pc == 0x3A747Cu) {
        ctx->pc = 0x3A747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7478u;
        // 0x3a747c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7480u;
        goto label_3a7480;
    }
    ctx->pc = 0x3A7478u;
    {
        const bool branch_taken_0x3a7478 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3A747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7478u;
        // 0x3a747c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7478) {
            ctx->pc = 0x3A79B8u;
            goto label_3a79b8;
        }
    }
    ctx->pc = 0x3A7480u;
label_3a7480:
    // 0x3a7480: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x3a7480u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3a7484:
    // 0x3a7484: 0x12000150  beqz        $s0, . + 4 + (0x150 << 2)
label_3a7488:
    if (ctx->pc == 0x3A7488u) {
        ctx->pc = 0x3A7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7484u;
        // 0x3a7488: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A748Cu;
        goto label_3a748c;
    }
    ctx->pc = 0x3A7484u;
    {
        const bool branch_taken_0x3a7484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7484u;
        // 0x3a7488: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7484) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A748Cu;
label_3a748c:
    // 0x3a748c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3a748cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a7490:
    // 0x3a7490: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x3a7490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3a7494:
    // 0x3a7494: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a7494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a7498:
    // 0x3a7498: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3a749c:
    if (ctx->pc == 0x3A749Cu) {
        ctx->pc = 0x3A749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7498u;
        // 0x3a749c: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A74A0u;
        goto label_3a74a0;
    }
    ctx->pc = 0x3A7498u;
    {
        const bool branch_taken_0x3a7498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7498u;
        // 0x3a749c: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7498) {
            ctx->pc = 0x3A7514u;
            goto label_3a7514;
        }
    }
    ctx->pc = 0x3A74A0u;
label_3a74a0:
    // 0x3a74a0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a74a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3a74a4:
    // 0x3a74a4: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x3a74a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3a74a8:
    // 0x3a74a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a74a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3a74ac:
    // 0x3a74ac: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3a74b0:
    if (ctx->pc == 0x3A74B0u) {
        ctx->pc = 0x3A74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74ACu;
        // 0x3a74b0: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A74B4u;
        goto label_3a74b4;
    }
    ctx->pc = 0x3A74ACu;
    {
        const bool branch_taken_0x3a74ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A74B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74ACu;
        // 0x3a74b0: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a74ac) {
            ctx->pc = 0x3A751Cu;
            goto label_3a751c;
        }
    }
    ctx->pc = 0x3A74B4u;
label_3a74b4:
    // 0x3a74b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a74b8:
    // 0x3a74b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3a74b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a74bc:
    // 0x3a74bc: 0x2451f039  addiu       $s1, $v0, -0xFC7
    ctx->pc = 0x3a74bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
label_3a74c0:
    // 0x3a74c0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3a74c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a74c4:
    // 0x3a74c4: 0x0  nop
    ctx->pc = 0x3a74c4u;
    // NOP
label_3a74c8:
    // 0x3a74c8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3a74c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a74cc:
    // 0x3a74cc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3a74ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3a74d0:
    // 0x3a74d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a74d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a74d4:
    // 0x3a74d4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3a74d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a74d8:
    // 0x3a74d8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_3a74dc:
    if (ctx->pc == 0x3A74DCu) {
        ctx->pc = 0x3A74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74D8u;
        // 0x3a74dc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A74E0u;
        goto label_3a74e0;
    }
    ctx->pc = 0x3A74D8u;
    {
        const bool branch_taken_0x3a74d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74D8u;
        // 0x3a74dc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a74d8) {
            ctx->pc = 0x3A7514u;
            goto label_3a7514;
        }
    }
    ctx->pc = 0x3A74E0u;
label_3a74e0:
    // 0x3a74e0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3a74e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a74e4:
    // 0x3a74e4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3a74e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3a74e8:
    // 0x3a74e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a74e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3a74ec:
    // 0x3a74ec: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3a74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3a74f0:
    // 0x3a74f0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a74f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a74f4:
    // 0x3a74f4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_3a74f8:
    if (ctx->pc == 0x3A74F8u) {
        ctx->pc = 0x3A74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74F4u;
        // 0x3a74f8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A74FCu;
        goto label_3a74fc;
    }
    ctx->pc = 0x3A74F4u;
    {
        const bool branch_taken_0x3a74f4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74F4u;
        // 0x3a74f8: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a74f4) {
            ctx->pc = 0x3A7514u;
            goto label_3a7514;
        }
    }
    ctx->pc = 0x3A74FCu;
label_3a74fc:
    // 0x3a74fc: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
label_3a7500:
    if (ctx->pc == 0x3A7500u) {
        ctx->pc = 0x3A7500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A74FCu;
        // 0x3a7500: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7504u;
        goto label_3a7504;
    }
    ctx->pc = 0x3A74FCu;
    {
        const bool branch_taken_0x3a74fc = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3a74fc) {
            ctx->pc = 0x3A7500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A74FCu;
            // 0x3a7500: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A74C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a74c8;
        }
    }
    ctx->pc = 0x3A7504u;
label_3a7504:
    // 0x3a7504: 0xc0e9aaa  jal         func_3A6AA8
label_3a7508:
    if (ctx->pc == 0x3A7508u) {
        ctx->pc = 0x3A7508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7504u;
        // 0x3a7508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A750Cu;
        goto label_3a750c;
    }
    ctx->pc = 0x3A7504u;
    SET_GPR_U32(ctx, 31, 0x3A750Cu);
    ctx->pc = 0x3A7508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7504u;
    // 0x3a7508: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A7504u, 0x3A750Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A750Cu;
label_3a750c:
    // 0x3a750c: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
label_3a7510:
    if (ctx->pc == 0x3A7510u) {
        ctx->pc = 0x3A7510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A750Cu;
        // 0x3a7510: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7514u;
        goto label_3a7514;
    }
    ctx->pc = 0x3A750Cu;
    {
        const bool branch_taken_0x3a750c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a750c) {
            ctx->pc = 0x3A7510u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A750Cu;
            // 0x3a7510: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A74C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a74c8;
        }
    }
    ctx->pc = 0x3A7514u;
label_3a7514:
    // 0x3a7514: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
label_3a7518:
    if (ctx->pc == 0x3A7518u) {
        ctx->pc = 0x3A7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7514u;
        // 0x3a7518: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A751Cu;
        goto label_3a751c;
    }
    ctx->pc = 0x3A7514u;
    {
        const bool branch_taken_0x3a7514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7514u;
        // 0x3a7518: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7514) {
            ctx->pc = 0x3A6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A751Cu;
label_3a751c:
    // 0x3a751c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3a751cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3a7520:
    // 0x3a7520: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x3a7520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3a7524:
    // 0x3a7524: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x3a7524u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a7528:
    // 0x3a7528: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a7528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a752c:
    // 0x3a752c: 0x2456f039  addiu       $s6, $v0, -0xFC7
    ctx->pc = 0x3a752cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963257));
label_3a7530:
    // 0x3a7530: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x3a7530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3a7534:
    // 0x3a7534: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3a7534u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a7538:
    // 0x3a7538: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3a7538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a753c:
    // 0x3a753c: 0x0  nop
    ctx->pc = 0x3a753cu;
    // NOP
label_3a7540:
    // 0x3a7540: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3a7540u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a7544:
    // 0x3a7544: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3a7544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3a7548:
    // 0x3a7548: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3a7548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a754c:
    // 0x3a754c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3a754cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3a7550:
    // 0x3a7550: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_3a7554:
    if (ctx->pc == 0x3A7554u) {
        ctx->pc = 0x3A7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7550u;
        // 0x3a7554: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7558u;
        goto label_3a7558;
    }
    ctx->pc = 0x3A7550u;
    {
        const bool branch_taken_0x3a7550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7550u;
        // 0x3a7554: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7550) {
            ctx->pc = 0x3A7598u;
            goto label_3a7598;
        }
    }
    ctx->pc = 0x3A7558u;
label_3a7558:
    // 0x3a7558: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a7558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a755c:
    // 0x3a755c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a755cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a7560:
    // 0x3a7560: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7564:
    // 0x3a7564: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3a7564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3a7568:
    // 0x3a7568: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3a7568u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3a756c:
    // 0x3a756c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3a756cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3a7570:
    // 0x3a7570: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3a7570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_3a7574:
    // 0x3a7574: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_3a7578:
    if (ctx->pc == 0x3A7578u) {
        ctx->pc = 0x3A7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7574u;
        // 0x3a7578: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A757Cu;
        goto label_3a757c;
    }
    ctx->pc = 0x3A7574u;
    {
        const bool branch_taken_0x3a7574 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7574u;
        // 0x3a7578: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7574) {
            ctx->pc = 0x3A7598u;
            goto label_3a7598;
        }
    }
    ctx->pc = 0x3A757Cu;
label_3a757c:
    // 0x3a757c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a757cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7580:
    // 0x3a7580: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_3a7584:
    if (ctx->pc == 0x3A7584u) {
        ctx->pc = 0x3A7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7580u;
        // 0x3a7584: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7588u;
        goto label_3a7588;
    }
    ctx->pc = 0x3A7580u;
    {
        const bool branch_taken_0x3a7580 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3a7580) {
            ctx->pc = 0x3A7584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7580u;
            // 0x3a7584: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7540;
        }
    }
    ctx->pc = 0x3A7588u;
label_3a7588:
    // 0x3a7588: 0xc0e9aaa  jal         func_3A6AA8
label_3a758c:
    if (ctx->pc == 0x3A758Cu) {
        ctx->pc = 0x3A758Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7588u;
        // 0x3a758c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7590u;
        goto label_3a7590;
    }
    ctx->pc = 0x3A7588u;
    SET_GPR_U32(ctx, 31, 0x3A7590u);
    ctx->pc = 0x3A758Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7588u;
    // 0x3a758c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A7588u, 0x3A7590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7590u;
label_3a7590:
    // 0x3a7590: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_3a7594:
    if (ctx->pc == 0x3A7594u) {
        ctx->pc = 0x3A7594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7590u;
        // 0x3a7594: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7598u;
        goto label_3a7598;
    }
    ctx->pc = 0x3A7590u;
    {
        const bool branch_taken_0x3a7590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7590) {
            ctx->pc = 0x3A7594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7590u;
            // 0x3a7594: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7540;
        }
    }
    ctx->pc = 0x3A7598u;
label_3a7598:
    // 0x3a7598: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x3a7598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3a759c:
    // 0x3a759c: 0xafb3026c  sw          $s3, 0x26C($sp)
    ctx->pc = 0x3a759cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 19));
label_3a75a0:
    // 0x3a75a0: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x3a75a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_3a75a4:
    // 0x3a75a4: 0x1000fe68  b           . + 4 + (-0x198 << 2)
label_3a75a8:
    if (ctx->pc == 0x3A75A8u) {
        ctx->pc = 0x3A75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A75A4u;
        // 0x3a75a8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A75ACu;
        goto label_3a75ac;
    }
    ctx->pc = 0x3A75A4u;
    {
        const bool branch_taken_0x3a75a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A75A4u;
        // 0x3a75a8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a75a4) {
            ctx->pc = 0x3A6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A75ACu;
label_3a75ac:
    // 0x3a75ac: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a75acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a75b0:
    // 0x3a75b0: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x3a75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_3a75b4:
    // 0x3a75b4: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x3a75b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_3a75b8:
    // 0x3a75b8: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x3a75b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3a75bc:
    // 0x3a75bc: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x3a75bcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_3a75c0:
    // 0x3a75c0: 0x367302c0  ori         $s3, $s3, 0x2C0
    ctx->pc = 0x3a75c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
label_3a75c4:
    // 0x3a75c4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a75c4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3a75c8:
    // 0x3a75c8: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
label_3a75cc:
    if (ctx->pc == 0x3A75CCu) {
        ctx->pc = 0x3A75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A75C8u;
        // 0x3a75cc: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A75D0u;
        goto label_3a75d0;
    }
    ctx->pc = 0x3A75C8u;
    {
        const bool branch_taken_0x3a75c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A75C8u;
        // 0x3a75cc: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a75c8) {
            ctx->pc = 0x3A76F8u;
            goto label_3a76f8;
        }
    }
    ctx->pc = 0x3A75D0u;
label_3a75d0:
    // 0x3a75d0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a75d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a75d4:
    // 0x3a75d4: 0x0  nop
    ctx->pc = 0x3a75d4u;
    // NOP
label_3a75d8:
    // 0x3a75d8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x3a75d8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a75dc:
    // 0x3a75dc: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x3a75dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_3a75e0:
    // 0x3a75e0: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x3a75e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_3a75e4:
    // 0x3a75e4: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_3a75e8:
    if (ctx->pc == 0x3A75E8u) {
        ctx->pc = 0x3A75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A75E4u;
        // 0x3a75e8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A75ECu;
        goto label_3a75ec;
    }
    ctx->pc = 0x3A75E4u;
    {
        const bool branch_taken_0x3a75e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A75E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A75E4u;
        // 0x3a75e8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a75e4) {
            ctx->pc = 0x3A76F8u;
            goto label_3a76f8;
        }
    }
    ctx->pc = 0x3A75ECu;
label_3a75ec:
    // 0x3a75ec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a75ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a75f0:
    // 0x3a75f0: 0x2442f390  addiu       $v0, $v0, -0xC70
    ctx->pc = 0x3a75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964112));
label_3a75f4:
    // 0x3a75f4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a75f8:
    // 0x3a75f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a75f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a75fc:
    // 0x3a75fc: 0x800008  jr          $a0
label_3a7600:
    if (ctx->pc == 0x3A7600u) {
        ctx->pc = 0x3A7604u;
        goto label_3a7604;
    }
    ctx->pc = 0x3A75FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A7604u: goto label_3a7604;
            case 0x3A7628u: goto label_3a7628;
            case 0x3A7648u: goto label_3a7648;
            case 0x3A7670u: goto label_3a7670;
            case 0x3A7684u: goto label_3a7684;
            case 0x3A7698u: goto label_3a7698;
            case 0x3A76F8u: goto label_3a76f8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A75FCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A7604u;
label_3a7604:
    // 0x3a7604: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_3a7608:
    if (ctx->pc == 0x3A7608u) {
        ctx->pc = 0x3A7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7604u;
        // 0x3a7608: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A760Cu;
        goto label_3a760c;
    }
    ctx->pc = 0x3A7604u;
    {
        const bool branch_taken_0x3a7604 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7604u;
        // 0x3a7608: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7604) {
            ctx->pc = 0x3A7618u;
            goto label_3a7618;
        }
    }
    ctx->pc = 0x3A760Cu;
label_3a760c:
    // 0x3a760c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x3a760cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3a7610:
    // 0x3a7610: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x3a7610u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_3a7614:
    // 0x3a7614: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x3a7614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_3a7618:
    // 0x3a7618: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_3a761c:
    if (ctx->pc == 0x3A761Cu) {
        ctx->pc = 0x3A761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7618u;
        // 0x3a761c: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7620u;
        goto label_3a7620;
    }
    ctx->pc = 0x3A7618u;
    {
        const bool branch_taken_0x3a7618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7618u;
        // 0x3a761c: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7618) {
            ctx->pc = 0x3A76B0u;
            goto label_3a76b0;
        }
    }
    ctx->pc = 0x3A7620u;
label_3a7620:
    // 0x3a7620: 0x10000023  b           . + 4 + (0x23 << 2)
label_3a7624:
    if (ctx->pc == 0x3A7624u) {
        ctx->pc = 0x3A7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7620u;
        // 0x3a7624: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7628u;
        goto label_3a7628;
    }
    ctx->pc = 0x3A7620u;
    {
        const bool branch_taken_0x3a7620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7620u;
        // 0x3a7624: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7620) {
            ctx->pc = 0x3A76B0u;
            goto label_3a76b0;
        }
    }
    ctx->pc = 0x3A7628u;
label_3a7628:
    // 0x3a7628: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a7628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a762c:
    // 0x3a762c: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x3a762cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_3a7630:
    // 0x3a7630: 0x2442f150  addiu       $v0, $v0, -0xEB0
    ctx->pc = 0x3a7630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
label_3a7634:
    // 0x3a7634: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x3a7634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_3a7638:
    // 0x3a7638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a7638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a763c:
    // 0x3a763c: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x3a763cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_3a7640:
    // 0x3a7640: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3a7644:
    if (ctx->pc == 0x3A7644u) {
        ctx->pc = 0x3A7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7640u;
        // 0x3a7644: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7648u;
        goto label_3a7648;
    }
    ctx->pc = 0x3A7640u;
    {
        const bool branch_taken_0x3a7640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7640u;
        // 0x3a7644: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7640) {
            ctx->pc = 0x3A76B4u;
            goto label_3a76b4;
        }
    }
    ctx->pc = 0x3A7648u;
label_3a7648:
    // 0x3a7648: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a7648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_3a764c:
    // 0x3a764c: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x3a764cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_3a7650:
    // 0x3a7650: 0x2442f150  addiu       $v0, $v0, -0xEB0
    ctx->pc = 0x3a7650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
label_3a7654:
    // 0x3a7654: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a7654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a7658:
    // 0x3a7658: 0x847e0000  lh          $fp, 0x0($v1)
    ctx->pc = 0x3a7658u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3a765c:
    // 0x3a765c: 0x2bc20009  slti        $v0, $fp, 0x9
    ctx->pc = 0x3a765cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
label_3a7660:
    // 0x3a7660: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_3a7664:
    if (ctx->pc == 0x3A7664u) {
        ctx->pc = 0x3A7664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7660u;
        // 0x3a7664: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7668u;
        goto label_3a7668;
    }
    ctx->pc = 0x3A7660u;
    {
        const bool branch_taken_0x3a7660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7660u;
        // 0x3a7664: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7660) {
            ctx->pc = 0x3A76F8u;
            goto label_3a76f8;
        }
    }
    ctx->pc = 0x3A7668u;
label_3a7668:
    // 0x3a7668: 0x10000012  b           . + 4 + (0x12 << 2)
label_3a766c:
    if (ctx->pc == 0x3A766Cu) {
        ctx->pc = 0x3A766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7668u;
        // 0x3a766c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7670u;
        goto label_3a7670;
    }
    ctx->pc = 0x3A7668u;
    {
        const bool branch_taken_0x3a7668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A766Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7668u;
        // 0x3a766c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7668) {
            ctx->pc = 0x3A76B4u;
            goto label_3a76b4;
        }
    }
    ctx->pc = 0x3A7670u;
label_3a7670:
    // 0x3a7670: 0x2bc2000b  slti        $v0, $fp, 0xB
    ctx->pc = 0x3a7670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
label_3a7674:
    // 0x3a7674: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_3a7678:
    if (ctx->pc == 0x3A7678u) {
        ctx->pc = 0x3A7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7674u;
        // 0x3a7678: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A767Cu;
        goto label_3a767c;
    }
    ctx->pc = 0x3A7674u;
    {
        const bool branch_taken_0x3a7674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7674u;
        // 0x3a7678: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7674) {
            ctx->pc = 0x3A76F8u;
            goto label_3a76f8;
        }
    }
    ctx->pc = 0x3A767Cu;
label_3a767c:
    // 0x3a767c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3a7680:
    if (ctx->pc == 0x3A7680u) {
        ctx->pc = 0x3A7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A767Cu;
        // 0x3a7680: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7684u;
        goto label_3a7684;
    }
    ctx->pc = 0x3A767Cu;
    {
        const bool branch_taken_0x3a767c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A767Cu;
        // 0x3a7680: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a767c) {
            ctx->pc = 0x3A76B4u;
            goto label_3a76b4;
        }
    }
    ctx->pc = 0x3A7684u;
label_3a7684:
    // 0x3a7684: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x3a7684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_3a7688:
    // 0x3a7688: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3a768c:
    if (ctx->pc == 0x3A768Cu) {
        ctx->pc = 0x3A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7688u;
        // 0x3a768c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7690u;
        goto label_3a7690;
    }
    ctx->pc = 0x3A7688u;
    {
        const bool branch_taken_0x3a7688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7688u;
        // 0x3a768c: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7688) {
            ctx->pc = 0x3A76F8u;
            goto label_3a76f8;
        }
    }
    ctx->pc = 0x3A7690u;
label_3a7690:
    // 0x3a7690: 0x10000008  b           . + 4 + (0x8 << 2)
label_3a7694:
    if (ctx->pc == 0x3A7694u) {
        ctx->pc = 0x3A7694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7690u;
        // 0x3a7694: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7698u;
        goto label_3a7698;
    }
    ctx->pc = 0x3A7690u;
    {
        const bool branch_taken_0x3a7690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7690u;
        // 0x3a7694: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7690) {
            ctx->pc = 0x3A76B4u;
            goto label_3a76b4;
        }
    }
    ctx->pc = 0x3A7698u;
label_3a7698:
    // 0x3a7698: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x3a7698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_3a769c:
    // 0x3a769c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3a76a0:
    if (ctx->pc == 0x3A76A0u) {
        ctx->pc = 0x3A76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A769Cu;
        // 0x3a76a0: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A76A4u;
        goto label_3a76a4;
    }
    ctx->pc = 0x3A769Cu;
    {
        const bool branch_taken_0x3a769c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A76A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A769Cu;
        // 0x3a76a0: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a769c) {
            ctx->pc = 0x3A76F8u;
            goto label_3a76f8;
        }
    }
    ctx->pc = 0x3A76A4u;
label_3a76a4:
    // 0x3a76a4: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
label_3a76a8:
    if (ctx->pc == 0x3A76A8u) {
        ctx->pc = 0x3A76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76A4u;
        // 0x3a76a8: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A76ACu;
        goto label_3a76ac;
    }
    ctx->pc = 0x3A76A4u;
    {
        const bool branch_taken_0x3a76a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A76A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76A4u;
        // 0x3a76a8: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a76a4) {
            ctx->pc = 0x3A76F8u;
            goto label_3a76f8;
        }
    }
    ctx->pc = 0x3A76ACu;
label_3a76ac:
    // 0x3a76ac: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x3a76acu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3a76b0:
    // 0x3a76b0: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x3a76b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3a76b4:
    // 0x3a76b4: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x3a76b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_3a76b8:
    // 0x3a76b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a76b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a76bc:
    // 0x3a76bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a76bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a76c0:
    // 0x3a76c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a76c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a76c4:
    // 0x3a76c4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_3a76c8:
    if (ctx->pc == 0x3A76C8u) {
        ctx->pc = 0x3A76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76C4u;
        // 0x3a76c8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A76CCu;
        goto label_3a76cc;
    }
    ctx->pc = 0x3A76C4u;
    {
        const bool branch_taken_0x3a76c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3A76C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76C4u;
        // 0x3a76c8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a76c4) {
            ctx->pc = 0x3A76DCu;
            goto label_3a76dc;
        }
    }
    ctx->pc = 0x3A76CCu;
label_3a76cc:
    // 0x3a76cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a76d0:
    // 0x3a76d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a76d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a76d4:
    // 0x3a76d4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a76d8:
    if (ctx->pc == 0x3A76D8u) {
        ctx->pc = 0x3A76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76D4u;
        // 0x3a76d8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A76DCu;
        goto label_3a76dc;
    }
    ctx->pc = 0x3A76D4u;
    {
        const bool branch_taken_0x3a76d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A76D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76D4u;
        // 0x3a76d8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a76d4) {
            ctx->pc = 0x3A76ECu;
            goto label_3a76ec;
        }
    }
    ctx->pc = 0x3A76DCu;
label_3a76dc:
    // 0x3a76dc: 0xc0e9aaa  jal         func_3A6AA8
label_3a76e0:
    if (ctx->pc == 0x3A76E0u) {
        ctx->pc = 0x3A76E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76DCu;
        // 0x3a76e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A76E4u;
        goto label_3a76e4;
    }
    ctx->pc = 0x3A76DCu;
    SET_GPR_U32(ctx, 31, 0x3A76E4u);
    ctx->pc = 0x3A76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A76DCu;
    // 0x3a76e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A76DCu, 0x3A76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A76E4u;
label_3a76e4:
    // 0x3a76e4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3a76e8:
    if (ctx->pc == 0x3A76E8u) {
        ctx->pc = 0x3A76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76E4u;
        // 0x3a76e8: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A76ECu;
        goto label_3a76ec;
    }
    ctx->pc = 0x3A76E4u;
    {
        const bool branch_taken_0x3a76e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A76E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76E4u;
        // 0x3a76e8: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a76e4) {
            ctx->pc = 0x3A76FCu;
            goto label_3a76fc;
        }
    }
    ctx->pc = 0x3A76ECu;
label_3a76ec:
    // 0x3a76ec: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a76ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a76f0:
    // 0x3a76f0: 0x5680ffb9  bnel        $s4, $zero, . + 4 + (-0x47 << 2)
label_3a76f4:
    if (ctx->pc == 0x3A76F4u) {
        ctx->pc = 0x3A76F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76F0u;
        // 0x3a76f4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A76F8u;
        goto label_3a76f8;
    }
    ctx->pc = 0x3A76F0u;
    {
        const bool branch_taken_0x3a76f0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a76f0) {
            ctx->pc = 0x3A76F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A76F0u;
            // 0x3a76f4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A75D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a75d8;
        }
    }
    ctx->pc = 0x3A76F8u;
label_3a76f8:
    // 0x3a76f8: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x3a76f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_3a76fc:
    // 0x3a76fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3a7700:
    if (ctx->pc == 0x3A7700u) {
        ctx->pc = 0x3A7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76FCu;
        // 0x3a7700: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7704u;
        goto label_3a7704;
    }
    ctx->pc = 0x3A76FCu;
    {
        const bool branch_taken_0x3a76fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A76FCu;
        // 0x3a7700: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a76fc) {
            ctx->pc = 0x3A7720u;
            goto label_3a7720;
        }
    }
    ctx->pc = 0x3A7704u;
label_3a7704:
    // 0x3a7704: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_3a7708:
    if (ctx->pc == 0x3A7708u) {
        ctx->pc = 0x3A7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7704u;
        // 0x3a7708: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A770Cu;
        goto label_3a770c;
    }
    ctx->pc = 0x3A7704u;
    {
        const bool branch_taken_0x3a7704 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7704u;
        // 0x3a7708: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7704) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A770Cu;
label_3a770c:
    // 0x3a770c: 0x8224ffff  lb          $a0, -0x1($s1)
    ctx->pc = 0x3a770cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_3a7710:
    // 0x3a7710: 0xc0eb966  jal         func_3AE598
label_3a7714:
    if (ctx->pc == 0x3A7714u) {
        ctx->pc = 0x3A7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7710u;
        // 0x3a7714: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7718u;
        goto label_3a7718;
    }
    ctx->pc = 0x3A7710u;
    SET_GPR_U32(ctx, 31, 0x3A7718u);
    ctx->pc = 0x3A7714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7710u;
    // 0x3a7714: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE598u, 0x3A7710u, 0x3A7718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7718u;
label_3a7718:
    // 0x3a7718: 0x100000ab  b           . + 4 + (0xAB << 2)
label_3a771c:
    if (ctx->pc == 0x3A771Cu) {
        ctx->pc = 0x3A771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7718u;
        // 0x3a771c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7720u;
        goto label_3a7720;
    }
    ctx->pc = 0x3A7718u;
    {
        const bool branch_taken_0x3a7718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A771Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7718u;
        // 0x3a771c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7718) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A7720u;
label_3a7720:
    // 0x3a7720: 0x8230ffff  lb          $s0, -0x1($s1)
    ctx->pc = 0x3a7720u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_3a7724:
    // 0x3a7724: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x3a7724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3a7728:
    // 0x3a7728: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_3a772c:
    if (ctx->pc == 0x3A772Cu) {
        ctx->pc = 0x3A772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7728u;
        // 0x3a772c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7730u;
        goto label_3a7730;
    }
    ctx->pc = 0x3A7728u;
    {
        const bool branch_taken_0x3a7728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A772Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7728u;
        // 0x3a772c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7728) {
            ctx->pc = 0x3A7738u;
            goto label_3a7738;
        }
    }
    ctx->pc = 0x3A7730u;
label_3a7730:
    // 0x3a7730: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_3a7734:
    if (ctx->pc == 0x3A7734u) {
        ctx->pc = 0x3A7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7730u;
        // 0x3a7734: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7738u;
        goto label_3a7738;
    }
    ctx->pc = 0x3A7730u;
    {
        const bool branch_taken_0x3a7730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A7734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7730u;
        // 0x3a7734: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7730) {
            ctx->pc = 0x3A774Cu;
            goto label_3a774c;
        }
    }
    ctx->pc = 0x3A7738u;
label_3a7738:
    // 0x3a7738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a7738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a773c:
    // 0x3a773c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a773cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a7740:
    // 0x3a7740: 0xc0eb966  jal         func_3AE598
label_3a7744:
    if (ctx->pc == 0x3A7744u) {
        ctx->pc = 0x3A7744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7740u;
        // 0x3a7744: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7748u;
        goto label_3a7748;
    }
    ctx->pc = 0x3A7740u;
    SET_GPR_U32(ctx, 31, 0x3A7748u);
    ctx->pc = 0x3A7744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7740u;
    // 0x3a7744: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE598u, 0x3A7740u, 0x3A7748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7748u;
label_3a7748:
    // 0x3a7748: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x3a7748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3a774c:
    // 0x3a774c: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_3a7750:
    if (ctx->pc == 0x3A7750u) {
        ctx->pc = 0x3A7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A774Cu;
        // 0x3a7750: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7754u;
        goto label_3a7754;
    }
    ctx->pc = 0x3A774Cu;
    {
        const bool branch_taken_0x3a774c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A774Cu;
        // 0x3a7750: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a774c) {
            ctx->pc = 0x3A79ACu;
            goto label_3a79ac;
        }
    }
    ctx->pc = 0x3A7754u;
label_3a7754:
    // 0x3a7754: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3a7754u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a7758:
    // 0x3a7758: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3a7758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3a775c:
    // 0x3a775c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a775cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a7760:
    // 0x3a7760: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x3a7760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_3a7764:
    // 0x3a7764: 0x60f809  jalr        $v1
label_3a7768:
    if (ctx->pc == 0x3A7768u) {
        ctx->pc = 0x3A7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7764u;
        // 0x3a7768: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A776Cu;
        goto label_3a776c;
    }
    ctx->pc = 0x3A7764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A776Cu);
        ctx->pc = 0x3A7768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7764u;
        // 0x3a7768: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7764u, 0x3A776Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A776Cu;
label_3a776c:
    // 0x3a776c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3a776cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7770:
    // 0x3a7770: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x3a7770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_3a7774:
    // 0x3a7774: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3a7778:
    if (ctx->pc == 0x3A7778u) {
        ctx->pc = 0x3A7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7774u;
        // 0x3a7778: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A777Cu;
        goto label_3a777c;
    }
    ctx->pc = 0x3A7774u;
    {
        const bool branch_taken_0x3a7774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7774u;
        // 0x3a7778: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7774) {
            ctx->pc = 0x3A7794u;
            goto label_3a7794;
        }
    }
    ctx->pc = 0x3A777Cu;
label_3a777c:
    // 0x3a777c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3a777cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3a7780:
    // 0x3a7780: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3a7780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3a7784:
    // 0x3a7784: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3a7784u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3a7788:
    // 0x3a7788: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x3a7788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a778c:
    // 0x3a778c: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a7790:
    if (ctx->pc == 0x3A7790u) {
        ctx->pc = 0x3A7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A778Cu;
        // 0x3a7790: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7794u;
        goto label_3a7794;
    }
    ctx->pc = 0x3A778Cu;
    {
        const bool branch_taken_0x3a778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A778Cu;
        // 0x3a7790: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a778c) {
            ctx->pc = 0x3A77D4u;
            goto label_3a77d4;
        }
    }
    ctx->pc = 0x3A7794u;
label_3a7794:
    // 0x3a7794: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a7798:
    if (ctx->pc == 0x3A7798u) {
        ctx->pc = 0x3A7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7794u;
        // 0x3a7798: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A779Cu;
        goto label_3a779c;
    }
    ctx->pc = 0x3A7794u;
    {
        const bool branch_taken_0x3a7794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7794u;
        // 0x3a7798: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7794) {
            ctx->pc = 0x3A77ACu;
            goto label_3a77ac;
        }
    }
    ctx->pc = 0x3A779Cu;
label_3a779c:
    // 0x3a779c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3a779cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3a77a0:
    // 0x3a77a0: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3a77a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a77a4:
    // 0x3a77a4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3a77a8:
    if (ctx->pc == 0x3A77A8u) {
        ctx->pc = 0x3A77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77A4u;
        // 0x3a77a8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A77ACu;
        goto label_3a77ac;
    }
    ctx->pc = 0x3A77A4u;
    {
        const bool branch_taken_0x3a77a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A77A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77A4u;
        // 0x3a77a8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77a4) {
            ctx->pc = 0x3A77D4u;
            goto label_3a77d4;
        }
    }
    ctx->pc = 0x3A77ACu;
label_3a77ac:
    // 0x3a77ac: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3a77acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_3a77b0:
    // 0x3a77b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3a77b4:
    if (ctx->pc == 0x3A77B4u) {
        ctx->pc = 0x3A77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77B0u;
        // 0x3a77b4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A77B8u;
        goto label_3a77b8;
    }
    ctx->pc = 0x3A77B0u;
    {
        const bool branch_taken_0x3a77b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A77B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77B0u;
        // 0x3a77b4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77b0) {
            ctx->pc = 0x3A77C4u;
            goto label_3a77c4;
        }
    }
    ctx->pc = 0x3A77B8u;
label_3a77b8:
    // 0x3a77b8: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x3a77b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a77bc:
    // 0x3a77bc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a77c0:
    if (ctx->pc == 0x3A77C0u) {
        ctx->pc = 0x3A77C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77BCu;
        // 0x3a77c0: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A77C4u;
        goto label_3a77c4;
    }
    ctx->pc = 0x3A77BCu;
    {
        const bool branch_taken_0x3a77bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A77C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77BCu;
        // 0x3a77c0: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77bc) {
            ctx->pc = 0x3A77D4u;
            goto label_3a77d4;
        }
    }
    ctx->pc = 0x3A77C4u;
label_3a77c4:
    // 0x3a77c4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3a77c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_3a77c8:
    // 0x3a77c8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a77c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3a77cc:
    // 0x3a77cc: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3a77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a77d0:
    // 0x3a77d0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3a77d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3a77d4:
    // 0x3a77d4: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x3a77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3a77d8:
    // 0x3a77d8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a77d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a77dc:
    // 0x3a77dc: 0x10000072  b           . + 4 + (0x72 << 2)
label_3a77e0:
    if (ctx->pc == 0x3A77E0u) {
        ctx->pc = 0x3A77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77DCu;
        // 0x3a77e0: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A77E4u;
        goto label_3a77e4;
    }
    ctx->pc = 0x3A77DCu;
    {
        const bool branch_taken_0x3a77dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A77E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A77DCu;
        // 0x3a77e0: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a77dc) {
            ctx->pc = 0x3A79A8u;
            goto label_3a79a8;
        }
    }
    ctx->pc = 0x3A77E4u;
label_3a77e4:
    // 0x3a77e4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a77e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a77e8:
    // 0x3a77e8: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x3a77e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_3a77ec:
    // 0x3a77ec: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x3a77ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_3a77f0:
    // 0x3a77f0: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x3a77f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3a77f4:
    // 0x3a77f4: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x3a77f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_3a77f8:
    // 0x3a77f8: 0x367303c0  ori         $s3, $s3, 0x3C0
    ctx->pc = 0x3a77f8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
label_3a77fc:
    // 0x3a77fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a77fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3a7800:
    // 0x3a7800: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_3a7804:
    if (ctx->pc == 0x3A7804u) {
        ctx->pc = 0x3A7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7800u;
        // 0x3a7804: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7808u;
        goto label_3a7808;
    }
    ctx->pc = 0x3A7800u;
    {
        const bool branch_taken_0x3a7800 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7800u;
        // 0x3a7804: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7800) {
            ctx->pc = 0x3A78CCu;
            goto label_3a78cc;
        }
    }
    ctx->pc = 0x3A7808u;
label_3a7808:
    // 0x3a7808: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a7808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a780c:
    // 0x3a780c: 0x0  nop
    ctx->pc = 0x3a780cu;
    // NOP
label_3a7810:
    // 0x3a7810: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x3a7810u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a7814:
    // 0x3a7814: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x3a7814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_3a7818:
    // 0x3a7818: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x3a7818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_3a781c:
    // 0x3a781c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_3a7820:
    if (ctx->pc == 0x3A7820u) {
        ctx->pc = 0x3A7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A781Cu;
        // 0x3a7820: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7824u;
        goto label_3a7824;
    }
    ctx->pc = 0x3A781Cu;
    {
        const bool branch_taken_0x3a781c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A781Cu;
        // 0x3a7820: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a781c) {
            ctx->pc = 0x3A78CCu;
            goto label_3a78cc;
        }
    }
    ctx->pc = 0x3A7824u;
label_3a7824:
    // 0x3a7824: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3a7824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3a7828:
    // 0x3a7828: 0x2442f4d0  addiu       $v0, $v0, -0xB30
    ctx->pc = 0x3a7828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964432));
label_3a782c:
    // 0x3a782c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3a782cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3a7830:
    // 0x3a7830: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3a7830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3a7834:
    // 0x3a7834: 0x800008  jr          $a0
label_3a7838:
    if (ctx->pc == 0x3A7838u) {
        ctx->pc = 0x3A783Cu;
        goto label_3a783c;
    }
    ctx->pc = 0x3A7834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3A783Cu: goto label_3a783c;
            case 0x3A7848u: goto label_3a7848;
            case 0x3A785Cu: goto label_3a785c;
            case 0x3A7870u: goto label_3a7870;
            case 0x3A78CCu: goto label_3a78cc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7834u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3A783Cu;
label_3a783c:
    // 0x3a783c: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x3a783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_3a7840:
    // 0x3a7840: 0x10000011  b           . + 4 + (0x11 << 2)
label_3a7844:
    if (ctx->pc == 0x3A7844u) {
        ctx->pc = 0x3A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7840u;
        // 0x3a7844: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7848u;
        goto label_3a7848;
    }
    ctx->pc = 0x3A7840u;
    {
        const bool branch_taken_0x3a7840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7840u;
        // 0x3a7844: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7840) {
            ctx->pc = 0x3A7888u;
            goto label_3a7888;
        }
    }
    ctx->pc = 0x3A7848u;
label_3a7848:
    // 0x3a7848: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x3a7848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_3a784c:
    // 0x3a784c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3a7850:
    if (ctx->pc == 0x3A7850u) {
        ctx->pc = 0x3A7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A784Cu;
        // 0x3a7850: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7854u;
        goto label_3a7854;
    }
    ctx->pc = 0x3A784Cu;
    {
        const bool branch_taken_0x3a784c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A784Cu;
        // 0x3a7850: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a784c) {
            ctx->pc = 0x3A78CCu;
            goto label_3a78cc;
        }
    }
    ctx->pc = 0x3A7854u;
label_3a7854:
    // 0x3a7854: 0x1000000c  b           . + 4 + (0xC << 2)
label_3a7858:
    if (ctx->pc == 0x3A7858u) {
        ctx->pc = 0x3A7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7854u;
        // 0x3a7858: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A785Cu;
        goto label_3a785c;
    }
    ctx->pc = 0x3A7854u;
    {
        const bool branch_taken_0x3a7854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7854u;
        // 0x3a7858: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7854) {
            ctx->pc = 0x3A7888u;
            goto label_3a7888;
        }
    }
    ctx->pc = 0x3A785Cu;
label_3a785c:
    // 0x3a785c: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x3a785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_3a7860:
    // 0x3a7860: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3a7864:
    if (ctx->pc == 0x3A7864u) {
        ctx->pc = 0x3A7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7860u;
        // 0x3a7864: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7868u;
        goto label_3a7868;
    }
    ctx->pc = 0x3A7860u;
    {
        const bool branch_taken_0x3a7860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7860u;
        // 0x3a7864: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7860) {
            ctx->pc = 0x3A78CCu;
            goto label_3a78cc;
        }
    }
    ctx->pc = 0x3A7868u;
label_3a7868:
    // 0x3a7868: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a786c:
    if (ctx->pc == 0x3A786Cu) {
        ctx->pc = 0x3A786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7868u;
        // 0x3a786c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7870u;
        goto label_3a7870;
    }
    ctx->pc = 0x3A7868u;
    {
        const bool branch_taken_0x3a7868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A786Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7868u;
        // 0x3a786c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7868) {
            ctx->pc = 0x3A7888u;
            goto label_3a7888;
        }
    }
    ctx->pc = 0x3A7870u;
label_3a7870:
    // 0x3a7870: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x3a7870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_3a7874:
    // 0x3a7874: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3a7874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3a7878:
    // 0x3a7878: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_3a787c:
    if (ctx->pc == 0x3A787Cu) {
        ctx->pc = 0x3A787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7878u;
        // 0x3a787c: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7880u;
        goto label_3a7880;
    }
    ctx->pc = 0x3A7878u;
    {
        const bool branch_taken_0x3a7878 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A787Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7878u;
        // 0x3a787c: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7878) {
            ctx->pc = 0x3A78CCu;
            goto label_3a78cc;
        }
    }
    ctx->pc = 0x3A7880u;
label_3a7880:
    // 0x3a7880: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3a7880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3a7884:
    // 0x3a7884: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x3a7884u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_3a7888:
    // 0x3a7888: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x3a7888u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_3a788c:
    // 0x3a788c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a788cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3a7890:
    // 0x3a7890: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3a7890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3a7894:
    // 0x3a7894: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3a7894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3a7898:
    // 0x3a7898: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_3a789c:
    if (ctx->pc == 0x3A789Cu) {
        ctx->pc = 0x3A789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7898u;
        // 0x3a789c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78A0u;
        goto label_3a78a0;
    }
    ctx->pc = 0x3A7898u;
    {
        const bool branch_taken_0x3a7898 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x3A789Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7898u;
        // 0x3a789c: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7898) {
            ctx->pc = 0x3A78B0u;
            goto label_3a78b0;
        }
    }
    ctx->pc = 0x3A78A0u;
label_3a78a0:
    // 0x3a78a0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3a78a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3a78a4:
    // 0x3a78a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a78a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a78a8:
    // 0x3a78a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a78ac:
    if (ctx->pc == 0x3A78ACu) {
        ctx->pc = 0x3A78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78A8u;
        // 0x3a78ac: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78B0u;
        goto label_3a78b0;
    }
    ctx->pc = 0x3A78A8u;
    {
        const bool branch_taken_0x3a78a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A78ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78A8u;
        // 0x3a78ac: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78a8) {
            ctx->pc = 0x3A78C0u;
            goto label_3a78c0;
        }
    }
    ctx->pc = 0x3A78B0u;
label_3a78b0:
    // 0x3a78b0: 0xc0e9aaa  jal         func_3A6AA8
label_3a78b4:
    if (ctx->pc == 0x3A78B4u) {
        ctx->pc = 0x3A78B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78B0u;
        // 0x3a78b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78B8u;
        goto label_3a78b8;
    }
    ctx->pc = 0x3A78B0u;
    SET_GPR_U32(ctx, 31, 0x3A78B8u);
    ctx->pc = 0x3A78B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78B0u;
    // 0x3a78b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AA8u, 0x3A78B0u, 0x3A78B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78B8u;
label_3a78b8:
    // 0x3a78b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3a78bc:
    if (ctx->pc == 0x3A78BCu) {
        ctx->pc = 0x3A78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78B8u;
        // 0x3a78bc: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78C0u;
        goto label_3a78c0;
    }
    ctx->pc = 0x3A78B8u;
    {
        const bool branch_taken_0x3a78b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A78BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78B8u;
        // 0x3a78bc: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78b8) {
            ctx->pc = 0x3A78D0u;
            goto label_3a78d0;
        }
    }
    ctx->pc = 0x3A78C0u;
label_3a78c0:
    // 0x3a78c0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a78c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a78c4:
    // 0x3a78c4: 0x5680ffd2  bnel        $s4, $zero, . + 4 + (-0x2E << 2)
label_3a78c8:
    if (ctx->pc == 0x3A78C8u) {
        ctx->pc = 0x3A78C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78C4u;
        // 0x3a78c8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78CCu;
        goto label_3a78cc;
    }
    ctx->pc = 0x3A78C4u;
    {
        const bool branch_taken_0x3a78c4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a78c4) {
            ctx->pc = 0x3A78C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A78C4u;
            // 0x3a78c8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a7810;
        }
    }
    ctx->pc = 0x3A78CCu;
label_3a78cc:
    // 0x3a78cc: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x3a78ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_3a78d0:
    // 0x3a78d0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3a78d4:
    if (ctx->pc == 0x3A78D4u) {
        ctx->pc = 0x3A78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78D0u;
        // 0x3a78d4: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78D8u;
        goto label_3a78d8;
    }
    ctx->pc = 0x3A78D0u;
    {
        const bool branch_taken_0x3a78d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A78D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78D0u;
        // 0x3a78d4: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78d0) {
            ctx->pc = 0x3A7948u;
            goto label_3a7948;
        }
    }
    ctx->pc = 0x3A78D8u;
label_3a78d8:
    // 0x3a78d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3a78dc:
    if (ctx->pc == 0x3A78DCu) {
        ctx->pc = 0x3A78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78D8u;
        // 0x3a78dc: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78E0u;
        goto label_3a78e0;
    }
    ctx->pc = 0x3A78D8u;
    {
        const bool branch_taken_0x3a78d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A78DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78D8u;
        // 0x3a78dc: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78d8) {
            ctx->pc = 0x3A7910u;
            goto label_3a7910;
        }
    }
    ctx->pc = 0x3A78E0u;
label_3a78e0:
    // 0x3a78e0: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_3a78e4:
    if (ctx->pc == 0x3A78E4u) {
        ctx->pc = 0x3A78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78E0u;
        // 0x3a78e4: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78E8u;
        goto label_3a78e8;
    }
    ctx->pc = 0x3A78E0u;
    {
        const bool branch_taken_0x3a78e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A78E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78E0u;
        // 0x3a78e4: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a78e0) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A78E8u;
label_3a78e8:
    // 0x3a78e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a78e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a78ec:
    // 0x3a78ec: 0x0  nop
    ctx->pc = 0x3a78ecu;
    // NOP
label_3a78f0:
    // 0x3a78f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a78f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a78f4:
    // 0x3a78f4: 0xc0eb966  jal         func_3AE598
label_3a78f8:
    if (ctx->pc == 0x3A78F8u) {
        ctx->pc = 0x3A78F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A78F4u;
        // 0x3a78f8: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A78FCu;
        goto label_3a78fc;
    }
    ctx->pc = 0x3A78F4u;
    SET_GPR_U32(ctx, 31, 0x3A78FCu);
    ctx->pc = 0x3A78F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A78F4u;
    // 0x3a78f8: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE598u, 0x3A78F4u, 0x3A78FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A78FCu;
label_3a78fc:
    // 0x3a78fc: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x3a78fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3a7900:
    // 0x3a7900: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_3a7904:
    if (ctx->pc == 0x3A7904u) {
        ctx->pc = 0x3A7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7900u;
        // 0x3a7904: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7908u;
        goto label_3a7908;
    }
    ctx->pc = 0x3A7900u;
    {
        const bool branch_taken_0x3a7900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7900u;
        // 0x3a7904: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7900) {
            ctx->pc = 0x3A78F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a78f0;
        }
    }
    ctx->pc = 0x3A7908u;
label_3a7908:
    // 0x3a7908: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3a790c:
    if (ctx->pc == 0x3A790Cu) {
        ctx->pc = 0x3A790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7908u;
        // 0x3a790c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7910u;
        goto label_3a7910;
    }
    ctx->pc = 0x3A7908u;
    {
        const bool branch_taken_0x3a7908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7908u;
        // 0x3a790c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7908) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A7910u;
label_3a7910:
    // 0x3a7910: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a7910u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a7914:
    // 0x3a7914: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x3a7914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_3a7918:
    // 0x3a7918: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3a7918u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3a791c:
    // 0x3a791c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_3a7920:
    if (ctx->pc == 0x3A7920u) {
        ctx->pc = 0x3A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A791Cu;
        // 0x3a7920: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7924u;
        goto label_3a7924;
    }
    ctx->pc = 0x3A791Cu;
    {
        const bool branch_taken_0x3a791c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A791Cu;
        // 0x3a7920: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a791c) {
            ctx->pc = 0x3A793Cu;
            goto label_3a793c;
        }
    }
    ctx->pc = 0x3A7924u;
label_3a7924:
    // 0x3a7924: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3a7928:
    if (ctx->pc == 0x3A7928u) {
        ctx->pc = 0x3A7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7924u;
        // 0x3a7928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A792Cu;
        goto label_3a792c;
    }
    ctx->pc = 0x3A7924u;
    {
        const bool branch_taken_0x3a7924 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A7928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7924u;
        // 0x3a7928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7924) {
            ctx->pc = 0x3A793Cu;
            goto label_3a793c;
        }
    }
    ctx->pc = 0x3A792Cu;
label_3a792c:
    // 0x3a792c: 0xc0eb966  jal         func_3AE598
label_3a7930:
    if (ctx->pc == 0x3A7930u) {
        ctx->pc = 0x3A7930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A792Cu;
        // 0x3a7930: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7934u;
        goto label_3a7934;
    }
    ctx->pc = 0x3A792Cu;
    SET_GPR_U32(ctx, 31, 0x3A7934u);
    ctx->pc = 0x3A7930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A792Cu;
    // 0x3a7930: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE598u, 0x3A792Cu, 0x3A7934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7934u;
label_3a7934:
    // 0x3a7934: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a7934u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a7938:
    // 0x3a7938: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3a7938u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3a793c:
    // 0x3a793c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3a7940:
    // 0x3a7940: 0xc0eb966  jal         func_3AE598
label_3a7944:
    if (ctx->pc == 0x3A7944u) {
        ctx->pc = 0x3A7944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7940u;
        // 0x3a7944: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7948u;
        goto label_3a7948;
    }
    ctx->pc = 0x3A7940u;
    SET_GPR_U32(ctx, 31, 0x3A7948u);
    ctx->pc = 0x3A7944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7940u;
    // 0x3a7944: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE598u, 0x3A7940u, 0x3A7948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7948u;
label_3a7948:
    // 0x3a7948: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x3a7948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3a794c:
    // 0x3a794c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_3a7950:
    if (ctx->pc == 0x3A7950u) {
        ctx->pc = 0x3A7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A794Cu;
        // 0x3a7950: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7954u;
        goto label_3a7954;
    }
    ctx->pc = 0x3A794Cu;
    {
        const bool branch_taken_0x3a794c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A7950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A794Cu;
        // 0x3a7950: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a794c) {
            ctx->pc = 0x3A79ACu;
            goto label_3a79ac;
        }
    }
    ctx->pc = 0x3A7954u;
label_3a7954:
    // 0x3a7954: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3a7954u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3a7958:
    // 0x3a7958: 0xc0e9f0a  jal         func_3A7C28
label_3a795c:
    if (ctx->pc == 0x3A795Cu) {
        ctx->pc = 0x3A795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7958u;
        // 0x3a795c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7960u;
        goto label_3a7960;
    }
    ctx->pc = 0x3A7958u;
    SET_GPR_U32(ctx, 31, 0x3A7960u);
    ctx->pc = 0x3A795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A7958u;
    // 0x3a795c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C28u, 0x3A7958u, 0x3A7960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7960u;
label_3a7960:
    // 0x3a7960: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a7960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a7964:
    // 0x3a7964: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3a7964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_3a7968:
    // 0x3a7968: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3a796c:
    if (ctx->pc == 0x3A796Cu) {
        ctx->pc = 0x3A796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7968u;
        // 0x3a796c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7970u;
        goto label_3a7970;
    }
    ctx->pc = 0x3A7968u;
    {
        const bool branch_taken_0x3a7968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a7968) {
            ctx->pc = 0x3A796Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A7968u;
            // 0x3a796c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A7980u;
            goto label_3a7980;
        }
    }
    ctx->pc = 0x3A7970u;
label_3a7970:
    // 0x3a7970: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x3a7970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_3a7974:
    // 0x3a7974: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3a7978:
    if (ctx->pc == 0x3A7978u) {
        ctx->pc = 0x3A797Cu;
        goto label_3a797c;
    }
    ctx->pc = 0x3A7974u;
    {
        const bool branch_taken_0x3a7974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a7974) {
            ctx->pc = 0x3A798Cu;
            goto label_3a798c;
        }
    }
    ctx->pc = 0x3A797Cu;
label_3a797c:
    // 0x3a797c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3a797cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3a7980:
    // 0x3a7980: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x3a7980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a7984:
    // 0x3a7984: 0x10000005  b           . + 4 + (0x5 << 2)
label_3a7988:
    if (ctx->pc == 0x3A7988u) {
        ctx->pc = 0x3A7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7984u;
        // 0x3a7988: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A798Cu;
        goto label_3a798c;
    }
    ctx->pc = 0x3A7984u;
    {
        const bool branch_taken_0x3a7984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7984u;
        // 0x3a7988: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7984) {
            ctx->pc = 0x3A799Cu;
            goto label_3a799c;
        }
    }
    ctx->pc = 0x3A798Cu;
label_3a798c:
    // 0x3a798c: 0xc0c7ab8  jal         func_31EAE0
label_3a7990:
    if (ctx->pc == 0x3A7990u) {
        ctx->pc = 0x3A7990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A798Cu;
        // 0x3a7990: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7994u;
        goto label_3a7994;
    }
    ctx->pc = 0x3A798Cu;
    SET_GPR_U32(ctx, 31, 0x3A7994u);
    ctx->pc = 0x3A7990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A798Cu;
    // 0x3a7990: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3A798Cu, 0x3A7994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A7994u;
label_3a7994:
    // 0x3a7994: 0x8eb0fff8  lw          $s0, -0x8($s5)
    ctx->pc = 0x3a7994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3a7998:
    // 0x3a7998: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3a7998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_3a799c:
    // 0x3a799c: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x3a799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3a79a0:
    // 0x3a79a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a79a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3a79a4:
    // 0x3a79a4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x3a79a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_3a79a8:
    // 0x3a79a8: 0x2361023  subu        $v0, $s1, $s6
    ctx->pc = 0x3a79a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_3a79ac:
    // 0x3a79ac: 0x1000fd66  b           . + 4 + (-0x29A << 2)
label_3a79b0:
    if (ctx->pc == 0x3A79B0u) {
        ctx->pc = 0x3A79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79ACu;
        // 0x3a79b0: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A79B4u;
        goto label_3a79b4;
    }
    ctx->pc = 0x3A79ACu;
    {
        const bool branch_taken_0x3a79ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A79B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79ACu;
        // 0x3a79b0: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a79ac) {
            ctx->pc = 0x3A6F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a6f48;
        }
    }
    ctx->pc = 0x3A79B4u;
label_3a79b4:
    // 0x3a79b4: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x3a79b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3a79b8:
    // 0x3a79b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a79b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3a79bc:
    // 0x3a79bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3a79c0:
    if (ctx->pc == 0x3A79C0u) {
        ctx->pc = 0x3A79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79BCu;
        // 0x3a79c0: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A79C4u;
        goto label_3a79c4;
    }
    ctx->pc = 0x3A79BCu;
    {
        const bool branch_taken_0x3a79bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A79C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79BCu;
        // 0x3a79c0: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a79bc) {
            ctx->pc = 0x3A79C8u;
            goto label_3a79c8;
        }
    }
    ctx->pc = 0x3A79C4u;
label_3a79c4:
    // 0x3a79c4: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x3a79c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3a79c8:
    // 0x3a79c8: 0x7bb00310  lq          $s0, 0x310($sp)
    ctx->pc = 0x3a79c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_3a79cc:
    // 0x3a79cc: 0x7bb10300  lq          $s1, 0x300($sp)
    ctx->pc = 0x3a79ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_3a79d0:
    // 0x3a79d0: 0x7bb202f0  lq          $s2, 0x2F0($sp)
    ctx->pc = 0x3a79d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_3a79d4:
    // 0x3a79d4: 0x7bb302e0  lq          $s3, 0x2E0($sp)
    ctx->pc = 0x3a79d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_3a79d8:
    // 0x3a79d8: 0x7bb402d0  lq          $s4, 0x2D0($sp)
    ctx->pc = 0x3a79d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_3a79dc:
    // 0x3a79dc: 0x7bb502c0  lq          $s5, 0x2C0($sp)
    ctx->pc = 0x3a79dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_3a79e0:
    // 0x3a79e0: 0x7bb602b0  lq          $s6, 0x2B0($sp)
    ctx->pc = 0x3a79e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_3a79e4:
    // 0x3a79e4: 0x7bb702a0  lq          $s7, 0x2A0($sp)
    ctx->pc = 0x3a79e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_3a79e8:
    // 0x3a79e8: 0x7bbe0290  lq          $fp, 0x290($sp)
    ctx->pc = 0x3a79e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_3a79ec:
    // 0x3a79ec: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x3a79ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_3a79f0:
    // 0x3a79f0: 0x3e00008  jr          $ra
label_3a79f4:
    if (ctx->pc == 0x3A79F4u) {
        ctx->pc = 0x3A79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79F0u;
        // 0x3a79f4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A79F8u;
        goto label_fallthrough_0x3a79f0;
    }
    ctx->pc = 0x3A79F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A79F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A79F0u;
        // 0x3a79f4: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A79F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a79f0:
    ctx->pc = 0x3A79F8u;
}
