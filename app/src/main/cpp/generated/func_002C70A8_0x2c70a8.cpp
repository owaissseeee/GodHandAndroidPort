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

// Function: func_002C70A8
// Address: 0x2c70a8 - 0x2c7850
void func_002C70A8_0x2c70a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C70A8_0x2c70a8");
#endif

    switch (ctx->pc) {
        case 0x2c70a8u: goto label_2c70a8;
        case 0x2c70acu: goto label_2c70ac;
        case 0x2c70b0u: goto label_2c70b0;
        case 0x2c70b4u: goto label_2c70b4;
        case 0x2c70b8u: goto label_2c70b8;
        case 0x2c70bcu: goto label_2c70bc;
        case 0x2c70c0u: goto label_2c70c0;
        case 0x2c70c4u: goto label_2c70c4;
        case 0x2c70c8u: goto label_2c70c8;
        case 0x2c70ccu: goto label_2c70cc;
        case 0x2c70d0u: goto label_2c70d0;
        case 0x2c70d4u: goto label_2c70d4;
        case 0x2c70d8u: goto label_2c70d8;
        case 0x2c70dcu: goto label_2c70dc;
        case 0x2c70e0u: goto label_2c70e0;
        case 0x2c70e4u: goto label_2c70e4;
        case 0x2c70e8u: goto label_2c70e8;
        case 0x2c70ecu: goto label_2c70ec;
        case 0x2c70f0u: goto label_2c70f0;
        case 0x2c70f4u: goto label_2c70f4;
        case 0x2c70f8u: goto label_2c70f8;
        case 0x2c70fcu: goto label_2c70fc;
        case 0x2c7100u: goto label_2c7100;
        case 0x2c7104u: goto label_2c7104;
        case 0x2c7108u: goto label_2c7108;
        case 0x2c710cu: goto label_2c710c;
        case 0x2c7110u: goto label_2c7110;
        case 0x2c7114u: goto label_2c7114;
        case 0x2c7118u: goto label_2c7118;
        case 0x2c711cu: goto label_2c711c;
        case 0x2c7120u: goto label_2c7120;
        case 0x2c7124u: goto label_2c7124;
        case 0x2c7128u: goto label_2c7128;
        case 0x2c712cu: goto label_2c712c;
        case 0x2c7130u: goto label_2c7130;
        case 0x2c7134u: goto label_2c7134;
        case 0x2c7138u: goto label_2c7138;
        case 0x2c713cu: goto label_2c713c;
        case 0x2c7140u: goto label_2c7140;
        case 0x2c7144u: goto label_2c7144;
        case 0x2c7148u: goto label_2c7148;
        case 0x2c714cu: goto label_2c714c;
        case 0x2c7150u: goto label_2c7150;
        case 0x2c7154u: goto label_2c7154;
        case 0x2c7158u: goto label_2c7158;
        case 0x2c715cu: goto label_2c715c;
        case 0x2c7160u: goto label_2c7160;
        case 0x2c7164u: goto label_2c7164;
        case 0x2c7168u: goto label_2c7168;
        case 0x2c716cu: goto label_2c716c;
        case 0x2c7170u: goto label_2c7170;
        case 0x2c7174u: goto label_2c7174;
        case 0x2c7178u: goto label_2c7178;
        case 0x2c717cu: goto label_2c717c;
        case 0x2c7180u: goto label_2c7180;
        case 0x2c7184u: goto label_2c7184;
        case 0x2c7188u: goto label_2c7188;
        case 0x2c718cu: goto label_2c718c;
        case 0x2c7190u: goto label_2c7190;
        case 0x2c7194u: goto label_2c7194;
        case 0x2c7198u: goto label_2c7198;
        case 0x2c719cu: goto label_2c719c;
        case 0x2c71a0u: goto label_2c71a0;
        case 0x2c71a4u: goto label_2c71a4;
        case 0x2c71a8u: goto label_2c71a8;
        case 0x2c71acu: goto label_2c71ac;
        case 0x2c71b0u: goto label_2c71b0;
        case 0x2c71b4u: goto label_2c71b4;
        case 0x2c71b8u: goto label_2c71b8;
        case 0x2c71bcu: goto label_2c71bc;
        case 0x2c71c0u: goto label_2c71c0;
        case 0x2c71c4u: goto label_2c71c4;
        case 0x2c71c8u: goto label_2c71c8;
        case 0x2c71ccu: goto label_2c71cc;
        case 0x2c71d0u: goto label_2c71d0;
        case 0x2c71d4u: goto label_2c71d4;
        case 0x2c71d8u: goto label_2c71d8;
        case 0x2c71dcu: goto label_2c71dc;
        case 0x2c71e0u: goto label_2c71e0;
        case 0x2c71e4u: goto label_2c71e4;
        case 0x2c71e8u: goto label_2c71e8;
        case 0x2c71ecu: goto label_2c71ec;
        case 0x2c71f0u: goto label_2c71f0;
        case 0x2c71f4u: goto label_2c71f4;
        case 0x2c71f8u: goto label_2c71f8;
        case 0x2c71fcu: goto label_2c71fc;
        case 0x2c7200u: goto label_2c7200;
        case 0x2c7204u: goto label_2c7204;
        case 0x2c7208u: goto label_2c7208;
        case 0x2c720cu: goto label_2c720c;
        case 0x2c7210u: goto label_2c7210;
        case 0x2c7214u: goto label_2c7214;
        case 0x2c7218u: goto label_2c7218;
        case 0x2c721cu: goto label_2c721c;
        case 0x2c7220u: goto label_2c7220;
        case 0x2c7224u: goto label_2c7224;
        case 0x2c7228u: goto label_2c7228;
        case 0x2c722cu: goto label_2c722c;
        case 0x2c7230u: goto label_2c7230;
        case 0x2c7234u: goto label_2c7234;
        case 0x2c7238u: goto label_2c7238;
        case 0x2c723cu: goto label_2c723c;
        case 0x2c7240u: goto label_2c7240;
        case 0x2c7244u: goto label_2c7244;
        case 0x2c7248u: goto label_2c7248;
        case 0x2c724cu: goto label_2c724c;
        case 0x2c7250u: goto label_2c7250;
        case 0x2c7254u: goto label_2c7254;
        case 0x2c7258u: goto label_2c7258;
        case 0x2c725cu: goto label_2c725c;
        case 0x2c7260u: goto label_2c7260;
        case 0x2c7264u: goto label_2c7264;
        case 0x2c7268u: goto label_2c7268;
        case 0x2c726cu: goto label_2c726c;
        case 0x2c7270u: goto label_2c7270;
        case 0x2c7274u: goto label_2c7274;
        case 0x2c7278u: goto label_2c7278;
        case 0x2c727cu: goto label_2c727c;
        case 0x2c7280u: goto label_2c7280;
        case 0x2c7284u: goto label_2c7284;
        case 0x2c7288u: goto label_2c7288;
        case 0x2c728cu: goto label_2c728c;
        case 0x2c7290u: goto label_2c7290;
        case 0x2c7294u: goto label_2c7294;
        case 0x2c7298u: goto label_2c7298;
        case 0x2c729cu: goto label_2c729c;
        case 0x2c72a0u: goto label_2c72a0;
        case 0x2c72a4u: goto label_2c72a4;
        case 0x2c72a8u: goto label_2c72a8;
        case 0x2c72acu: goto label_2c72ac;
        case 0x2c72b0u: goto label_2c72b0;
        case 0x2c72b4u: goto label_2c72b4;
        case 0x2c72b8u: goto label_2c72b8;
        case 0x2c72bcu: goto label_2c72bc;
        case 0x2c72c0u: goto label_2c72c0;
        case 0x2c72c4u: goto label_2c72c4;
        case 0x2c72c8u: goto label_2c72c8;
        case 0x2c72ccu: goto label_2c72cc;
        case 0x2c72d0u: goto label_2c72d0;
        case 0x2c72d4u: goto label_2c72d4;
        case 0x2c72d8u: goto label_2c72d8;
        case 0x2c72dcu: goto label_2c72dc;
        case 0x2c72e0u: goto label_2c72e0;
        case 0x2c72e4u: goto label_2c72e4;
        case 0x2c72e8u: goto label_2c72e8;
        case 0x2c72ecu: goto label_2c72ec;
        case 0x2c72f0u: goto label_2c72f0;
        case 0x2c72f4u: goto label_2c72f4;
        case 0x2c72f8u: goto label_2c72f8;
        case 0x2c72fcu: goto label_2c72fc;
        case 0x2c7300u: goto label_2c7300;
        case 0x2c7304u: goto label_2c7304;
        case 0x2c7308u: goto label_2c7308;
        case 0x2c730cu: goto label_2c730c;
        case 0x2c7310u: goto label_2c7310;
        case 0x2c7314u: goto label_2c7314;
        case 0x2c7318u: goto label_2c7318;
        case 0x2c731cu: goto label_2c731c;
        case 0x2c7320u: goto label_2c7320;
        case 0x2c7324u: goto label_2c7324;
        case 0x2c7328u: goto label_2c7328;
        case 0x2c732cu: goto label_2c732c;
        case 0x2c7330u: goto label_2c7330;
        case 0x2c7334u: goto label_2c7334;
        case 0x2c7338u: goto label_2c7338;
        case 0x2c733cu: goto label_2c733c;
        case 0x2c7340u: goto label_2c7340;
        case 0x2c7344u: goto label_2c7344;
        case 0x2c7348u: goto label_2c7348;
        case 0x2c734cu: goto label_2c734c;
        case 0x2c7350u: goto label_2c7350;
        case 0x2c7354u: goto label_2c7354;
        case 0x2c7358u: goto label_2c7358;
        case 0x2c735cu: goto label_2c735c;
        case 0x2c7360u: goto label_2c7360;
        case 0x2c7364u: goto label_2c7364;
        case 0x2c7368u: goto label_2c7368;
        case 0x2c736cu: goto label_2c736c;
        case 0x2c7370u: goto label_2c7370;
        case 0x2c7374u: goto label_2c7374;
        case 0x2c7378u: goto label_2c7378;
        case 0x2c737cu: goto label_2c737c;
        case 0x2c7380u: goto label_2c7380;
        case 0x2c7384u: goto label_2c7384;
        case 0x2c7388u: goto label_2c7388;
        case 0x2c738cu: goto label_2c738c;
        case 0x2c7390u: goto label_2c7390;
        case 0x2c7394u: goto label_2c7394;
        case 0x2c7398u: goto label_2c7398;
        case 0x2c739cu: goto label_2c739c;
        case 0x2c73a0u: goto label_2c73a0;
        case 0x2c73a4u: goto label_2c73a4;
        case 0x2c73a8u: goto label_2c73a8;
        case 0x2c73acu: goto label_2c73ac;
        case 0x2c73b0u: goto label_2c73b0;
        case 0x2c73b4u: goto label_2c73b4;
        case 0x2c73b8u: goto label_2c73b8;
        case 0x2c73bcu: goto label_2c73bc;
        case 0x2c73c0u: goto label_2c73c0;
        case 0x2c73c4u: goto label_2c73c4;
        case 0x2c73c8u: goto label_2c73c8;
        case 0x2c73ccu: goto label_2c73cc;
        case 0x2c73d0u: goto label_2c73d0;
        case 0x2c73d4u: goto label_2c73d4;
        case 0x2c73d8u: goto label_2c73d8;
        case 0x2c73dcu: goto label_2c73dc;
        case 0x2c73e0u: goto label_2c73e0;
        case 0x2c73e4u: goto label_2c73e4;
        case 0x2c73e8u: goto label_2c73e8;
        case 0x2c73ecu: goto label_2c73ec;
        case 0x2c73f0u: goto label_2c73f0;
        case 0x2c73f4u: goto label_2c73f4;
        case 0x2c73f8u: goto label_2c73f8;
        case 0x2c73fcu: goto label_2c73fc;
        case 0x2c7400u: goto label_2c7400;
        case 0x2c7404u: goto label_2c7404;
        case 0x2c7408u: goto label_2c7408;
        case 0x2c740cu: goto label_2c740c;
        case 0x2c7410u: goto label_2c7410;
        case 0x2c7414u: goto label_2c7414;
        case 0x2c7418u: goto label_2c7418;
        case 0x2c741cu: goto label_2c741c;
        case 0x2c7420u: goto label_2c7420;
        case 0x2c7424u: goto label_2c7424;
        case 0x2c7428u: goto label_2c7428;
        case 0x2c742cu: goto label_2c742c;
        case 0x2c7430u: goto label_2c7430;
        case 0x2c7434u: goto label_2c7434;
        case 0x2c7438u: goto label_2c7438;
        case 0x2c743cu: goto label_2c743c;
        case 0x2c7440u: goto label_2c7440;
        case 0x2c7444u: goto label_2c7444;
        case 0x2c7448u: goto label_2c7448;
        case 0x2c744cu: goto label_2c744c;
        case 0x2c7450u: goto label_2c7450;
        case 0x2c7454u: goto label_2c7454;
        case 0x2c7458u: goto label_2c7458;
        case 0x2c745cu: goto label_2c745c;
        case 0x2c7460u: goto label_2c7460;
        case 0x2c7464u: goto label_2c7464;
        case 0x2c7468u: goto label_2c7468;
        case 0x2c746cu: goto label_2c746c;
        case 0x2c7470u: goto label_2c7470;
        case 0x2c7474u: goto label_2c7474;
        case 0x2c7478u: goto label_2c7478;
        case 0x2c747cu: goto label_2c747c;
        case 0x2c7480u: goto label_2c7480;
        case 0x2c7484u: goto label_2c7484;
        case 0x2c7488u: goto label_2c7488;
        case 0x2c748cu: goto label_2c748c;
        case 0x2c7490u: goto label_2c7490;
        case 0x2c7494u: goto label_2c7494;
        case 0x2c7498u: goto label_2c7498;
        case 0x2c749cu: goto label_2c749c;
        case 0x2c74a0u: goto label_2c74a0;
        case 0x2c74a4u: goto label_2c74a4;
        case 0x2c74a8u: goto label_2c74a8;
        case 0x2c74acu: goto label_2c74ac;
        case 0x2c74b0u: goto label_2c74b0;
        case 0x2c74b4u: goto label_2c74b4;
        case 0x2c74b8u: goto label_2c74b8;
        case 0x2c74bcu: goto label_2c74bc;
        case 0x2c74c0u: goto label_2c74c0;
        case 0x2c74c4u: goto label_2c74c4;
        case 0x2c74c8u: goto label_2c74c8;
        case 0x2c74ccu: goto label_2c74cc;
        case 0x2c74d0u: goto label_2c74d0;
        case 0x2c74d4u: goto label_2c74d4;
        case 0x2c74d8u: goto label_2c74d8;
        case 0x2c74dcu: goto label_2c74dc;
        case 0x2c74e0u: goto label_2c74e0;
        case 0x2c74e4u: goto label_2c74e4;
        case 0x2c74e8u: goto label_2c74e8;
        case 0x2c74ecu: goto label_2c74ec;
        case 0x2c74f0u: goto label_2c74f0;
        case 0x2c74f4u: goto label_2c74f4;
        case 0x2c74f8u: goto label_2c74f8;
        case 0x2c74fcu: goto label_2c74fc;
        case 0x2c7500u: goto label_2c7500;
        case 0x2c7504u: goto label_2c7504;
        case 0x2c7508u: goto label_2c7508;
        case 0x2c750cu: goto label_2c750c;
        case 0x2c7510u: goto label_2c7510;
        case 0x2c7514u: goto label_2c7514;
        case 0x2c7518u: goto label_2c7518;
        case 0x2c751cu: goto label_2c751c;
        case 0x2c7520u: goto label_2c7520;
        case 0x2c7524u: goto label_2c7524;
        case 0x2c7528u: goto label_2c7528;
        case 0x2c752cu: goto label_2c752c;
        case 0x2c7530u: goto label_2c7530;
        case 0x2c7534u: goto label_2c7534;
        case 0x2c7538u: goto label_2c7538;
        case 0x2c753cu: goto label_2c753c;
        case 0x2c7540u: goto label_2c7540;
        case 0x2c7544u: goto label_2c7544;
        case 0x2c7548u: goto label_2c7548;
        case 0x2c754cu: goto label_2c754c;
        case 0x2c7550u: goto label_2c7550;
        case 0x2c7554u: goto label_2c7554;
        case 0x2c7558u: goto label_2c7558;
        case 0x2c755cu: goto label_2c755c;
        case 0x2c7560u: goto label_2c7560;
        case 0x2c7564u: goto label_2c7564;
        case 0x2c7568u: goto label_2c7568;
        case 0x2c756cu: goto label_2c756c;
        case 0x2c7570u: goto label_2c7570;
        case 0x2c7574u: goto label_2c7574;
        case 0x2c7578u: goto label_2c7578;
        case 0x2c757cu: goto label_2c757c;
        case 0x2c7580u: goto label_2c7580;
        case 0x2c7584u: goto label_2c7584;
        case 0x2c7588u: goto label_2c7588;
        case 0x2c758cu: goto label_2c758c;
        case 0x2c7590u: goto label_2c7590;
        case 0x2c7594u: goto label_2c7594;
        case 0x2c7598u: goto label_2c7598;
        case 0x2c759cu: goto label_2c759c;
        case 0x2c75a0u: goto label_2c75a0;
        case 0x2c75a4u: goto label_2c75a4;
        case 0x2c75a8u: goto label_2c75a8;
        case 0x2c75acu: goto label_2c75ac;
        case 0x2c75b0u: goto label_2c75b0;
        case 0x2c75b4u: goto label_2c75b4;
        case 0x2c75b8u: goto label_2c75b8;
        case 0x2c75bcu: goto label_2c75bc;
        case 0x2c75c0u: goto label_2c75c0;
        case 0x2c75c4u: goto label_2c75c4;
        case 0x2c75c8u: goto label_2c75c8;
        case 0x2c75ccu: goto label_2c75cc;
        case 0x2c75d0u: goto label_2c75d0;
        case 0x2c75d4u: goto label_2c75d4;
        case 0x2c75d8u: goto label_2c75d8;
        case 0x2c75dcu: goto label_2c75dc;
        case 0x2c75e0u: goto label_2c75e0;
        case 0x2c75e4u: goto label_2c75e4;
        case 0x2c75e8u: goto label_2c75e8;
        case 0x2c75ecu: goto label_2c75ec;
        case 0x2c75f0u: goto label_2c75f0;
        case 0x2c75f4u: goto label_2c75f4;
        case 0x2c75f8u: goto label_2c75f8;
        case 0x2c75fcu: goto label_2c75fc;
        case 0x2c7600u: goto label_2c7600;
        case 0x2c7604u: goto label_2c7604;
        case 0x2c7608u: goto label_2c7608;
        case 0x2c760cu: goto label_2c760c;
        case 0x2c7610u: goto label_2c7610;
        case 0x2c7614u: goto label_2c7614;
        case 0x2c7618u: goto label_2c7618;
        case 0x2c761cu: goto label_2c761c;
        case 0x2c7620u: goto label_2c7620;
        case 0x2c7624u: goto label_2c7624;
        case 0x2c7628u: goto label_2c7628;
        case 0x2c762cu: goto label_2c762c;
        case 0x2c7630u: goto label_2c7630;
        case 0x2c7634u: goto label_2c7634;
        case 0x2c7638u: goto label_2c7638;
        case 0x2c763cu: goto label_2c763c;
        case 0x2c7640u: goto label_2c7640;
        case 0x2c7644u: goto label_2c7644;
        case 0x2c7648u: goto label_2c7648;
        case 0x2c764cu: goto label_2c764c;
        case 0x2c7650u: goto label_2c7650;
        case 0x2c7654u: goto label_2c7654;
        case 0x2c7658u: goto label_2c7658;
        case 0x2c765cu: goto label_2c765c;
        case 0x2c7660u: goto label_2c7660;
        case 0x2c7664u: goto label_2c7664;
        case 0x2c7668u: goto label_2c7668;
        case 0x2c766cu: goto label_2c766c;
        case 0x2c7670u: goto label_2c7670;
        case 0x2c7674u: goto label_2c7674;
        case 0x2c7678u: goto label_2c7678;
        case 0x2c767cu: goto label_2c767c;
        case 0x2c7680u: goto label_2c7680;
        case 0x2c7684u: goto label_2c7684;
        case 0x2c7688u: goto label_2c7688;
        case 0x2c768cu: goto label_2c768c;
        case 0x2c7690u: goto label_2c7690;
        case 0x2c7694u: goto label_2c7694;
        case 0x2c7698u: goto label_2c7698;
        case 0x2c769cu: goto label_2c769c;
        case 0x2c76a0u: goto label_2c76a0;
        case 0x2c76a4u: goto label_2c76a4;
        case 0x2c76a8u: goto label_2c76a8;
        case 0x2c76acu: goto label_2c76ac;
        case 0x2c76b0u: goto label_2c76b0;
        case 0x2c76b4u: goto label_2c76b4;
        case 0x2c76b8u: goto label_2c76b8;
        case 0x2c76bcu: goto label_2c76bc;
        case 0x2c76c0u: goto label_2c76c0;
        case 0x2c76c4u: goto label_2c76c4;
        case 0x2c76c8u: goto label_2c76c8;
        case 0x2c76ccu: goto label_2c76cc;
        case 0x2c76d0u: goto label_2c76d0;
        case 0x2c76d4u: goto label_2c76d4;
        case 0x2c76d8u: goto label_2c76d8;
        case 0x2c76dcu: goto label_2c76dc;
        case 0x2c76e0u: goto label_2c76e0;
        case 0x2c76e4u: goto label_2c76e4;
        case 0x2c76e8u: goto label_2c76e8;
        case 0x2c76ecu: goto label_2c76ec;
        case 0x2c76f0u: goto label_2c76f0;
        case 0x2c76f4u: goto label_2c76f4;
        case 0x2c76f8u: goto label_2c76f8;
        case 0x2c76fcu: goto label_2c76fc;
        case 0x2c7700u: goto label_2c7700;
        case 0x2c7704u: goto label_2c7704;
        case 0x2c7708u: goto label_2c7708;
        case 0x2c770cu: goto label_2c770c;
        case 0x2c7710u: goto label_2c7710;
        case 0x2c7714u: goto label_2c7714;
        case 0x2c7718u: goto label_2c7718;
        case 0x2c771cu: goto label_2c771c;
        case 0x2c7720u: goto label_2c7720;
        case 0x2c7724u: goto label_2c7724;
        case 0x2c7728u: goto label_2c7728;
        case 0x2c772cu: goto label_2c772c;
        case 0x2c7730u: goto label_2c7730;
        case 0x2c7734u: goto label_2c7734;
        case 0x2c7738u: goto label_2c7738;
        case 0x2c773cu: goto label_2c773c;
        case 0x2c7740u: goto label_2c7740;
        case 0x2c7744u: goto label_2c7744;
        case 0x2c7748u: goto label_2c7748;
        case 0x2c774cu: goto label_2c774c;
        case 0x2c7750u: goto label_2c7750;
        case 0x2c7754u: goto label_2c7754;
        case 0x2c7758u: goto label_2c7758;
        case 0x2c775cu: goto label_2c775c;
        case 0x2c7760u: goto label_2c7760;
        case 0x2c7764u: goto label_2c7764;
        case 0x2c7768u: goto label_2c7768;
        case 0x2c776cu: goto label_2c776c;
        case 0x2c7770u: goto label_2c7770;
        case 0x2c7774u: goto label_2c7774;
        case 0x2c7778u: goto label_2c7778;
        case 0x2c777cu: goto label_2c777c;
        case 0x2c7780u: goto label_2c7780;
        case 0x2c7784u: goto label_2c7784;
        case 0x2c7788u: goto label_2c7788;
        case 0x2c778cu: goto label_2c778c;
        case 0x2c7790u: goto label_2c7790;
        case 0x2c7794u: goto label_2c7794;
        case 0x2c7798u: goto label_2c7798;
        case 0x2c779cu: goto label_2c779c;
        case 0x2c77a0u: goto label_2c77a0;
        case 0x2c77a4u: goto label_2c77a4;
        case 0x2c77a8u: goto label_2c77a8;
        case 0x2c77acu: goto label_2c77ac;
        case 0x2c77b0u: goto label_2c77b0;
        case 0x2c77b4u: goto label_2c77b4;
        case 0x2c77b8u: goto label_2c77b8;
        case 0x2c77bcu: goto label_2c77bc;
        case 0x2c77c0u: goto label_2c77c0;
        case 0x2c77c4u: goto label_2c77c4;
        case 0x2c77c8u: goto label_2c77c8;
        case 0x2c77ccu: goto label_2c77cc;
        case 0x2c77d0u: goto label_2c77d0;
        case 0x2c77d4u: goto label_2c77d4;
        case 0x2c77d8u: goto label_2c77d8;
        case 0x2c77dcu: goto label_2c77dc;
        case 0x2c77e0u: goto label_2c77e0;
        case 0x2c77e4u: goto label_2c77e4;
        case 0x2c77e8u: goto label_2c77e8;
        case 0x2c77ecu: goto label_2c77ec;
        case 0x2c77f0u: goto label_2c77f0;
        case 0x2c77f4u: goto label_2c77f4;
        case 0x2c77f8u: goto label_2c77f8;
        case 0x2c77fcu: goto label_2c77fc;
        case 0x2c7800u: goto label_2c7800;
        case 0x2c7804u: goto label_2c7804;
        case 0x2c7808u: goto label_2c7808;
        case 0x2c780cu: goto label_2c780c;
        case 0x2c7810u: goto label_2c7810;
        case 0x2c7814u: goto label_2c7814;
        case 0x2c7818u: goto label_2c7818;
        case 0x2c781cu: goto label_2c781c;
        case 0x2c7820u: goto label_2c7820;
        case 0x2c7824u: goto label_2c7824;
        case 0x2c7828u: goto label_2c7828;
        case 0x2c782cu: goto label_2c782c;
        case 0x2c7830u: goto label_2c7830;
        case 0x2c7834u: goto label_2c7834;
        case 0x2c7838u: goto label_2c7838;
        case 0x2c783cu: goto label_2c783c;
        case 0x2c7840u: goto label_2c7840;
        case 0x2c7844u: goto label_2c7844;
        case 0x2c7848u: goto label_2c7848;
        case 0x2c784cu: goto label_2c784c;
        default: break;
    }

    ctx->pc = 0x2c70a8u;

label_2c70a8:
    // 0x2c70a8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x2c70a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_2c70ac:
    // 0x2c70ac: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x2c70acu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
label_2c70b0:
    // 0x2c70b0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2c70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_2c70b4:
    // 0x2c70b4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2c70b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_2c70b8:
    // 0x2c70b8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c70b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c70bc:
    // 0x2c70bc: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2c70bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_2c70c0:
    // 0x2c70c0: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2c70c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c70c4:
    // 0x2c70c4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2c70c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_2c70c8:
    // 0x2c70c8: 0x3173ffff  andi        $s3, $t3, 0xFFFF
    ctx->pc = 0x2c70c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
label_2c70cc:
    // 0x2c70cc: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2c70ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_2c70d0:
    // 0x2c70d0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c70d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c70d4:
    // 0x2c70d4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2c70d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2c70d8:
    // 0x2c70d8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c70d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c70dc:
    // 0x2c70dc: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2c70dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_2c70e0:
    // 0x2c70e0: 0xab403  sra         $s6, $t2, 16
    ctx->pc = 0x2c70e0u;
    SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 10), 16));
label_2c70e4:
    // 0x2c70e4: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x2c70e4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2c70e8:
    // 0x2c70e8: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x2c70e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c70ec:
    // 0x2c70ec: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x2c70ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2c70f0:
    // 0x2c70f0: 0x46008646  mov.s       $f25, $f16
    ctx->pc = 0x2c70f0u;
    ctx->f[25] = FPU_MOV_S(ctx->f[16]);
label_2c70f4:
    // 0x2c70f4: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x2c70f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_2c70f8:
    // 0x2c70f8: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x2c70f8u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
label_2c70fc:
    // 0x2c70fc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2c70fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_2c7100:
    // 0x2c7100: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x2c7100u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
label_2c7104:
    // 0x2c7104: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2c7104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_2c7108:
    // 0x2c7108: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c7108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c710c:
    // 0x2c710c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x2c710cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_2c7110:
    // 0x2c7110: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x2c7110u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_2c7114:
    // 0x2c7114: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_2c7118:
    if (ctx->pc == 0x2C7118u) {
        ctx->pc = 0x2C7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7114u;
        // 0x2c7118: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C711Cu;
        goto label_2c711c;
    }
    ctx->pc = 0x2C7114u;
    {
        const bool branch_taken_0x2c7114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7114u;
        // 0x2c7118: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7114) {
            ctx->pc = 0x2C7130u;
            goto label_2c7130;
        }
    }
    ctx->pc = 0x2C711Cu;
label_2c711c:
    // 0x2c711c: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2c711cu;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7120:
    // 0x2c7120: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x2c7120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2c7124:
    // 0x2c7124: 0x2f02000a  sltiu       $v0, $t8, 0xA
    ctx->pc = 0x2c7124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 24) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2c7128:
    // 0x2c7128: 0x10000002  b           . + 4 + (0x2 << 2)
label_2c712c:
    if (ctx->pc == 0x2C712Cu) {
        ctx->pc = 0x2C712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7128u;
        // 0x2c712c: 0x62c00a  movz        $t8, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7130u;
        goto label_2c7130;
    }
    ctx->pc = 0x2C7128u;
    {
        const bool branch_taken_0x2c7128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7128u;
        // 0x2c712c: 0x62c00a  movz        $t8, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 24, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7128) {
            ctx->pc = 0x2C7134u;
            goto label_2c7134;
        }
    }
    ctx->pc = 0x2C7130u;
label_2c7130:
    // 0x2c7130: 0x24180001  addiu       $t8, $zero, 0x1
    ctx->pc = 0x2c7130u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7134:
    // 0x2c7134: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c7134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7138:
    // 0x2c7138: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c7138u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c713c:
    // 0x2c713c: 0x13000008  beqz        $t8, . + 4 + (0x8 << 2)
label_2c7140:
    if (ctx->pc == 0x2C7140u) {
        ctx->pc = 0x2C7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C713Cu;
        // 0x2c7140: 0x2e590005  sltiu       $t9, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7144u;
        goto label_2c7144;
    }
    ctx->pc = 0x2C713Cu;
    {
        const bool branch_taken_0x2c713c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C713Cu;
        // 0x2c7140: 0x2e590005  sltiu       $t9, $s2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c713c) {
            ctx->pc = 0x2C7160u;
            goto label_2c7160;
        }
    }
    ctx->pc = 0x2C7144u;
label_2c7144:
    // 0x2c7144: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2c7144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c7148:
    // 0x2c7148: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2c7148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2c714c:
    // 0x2c714c: 0x78102b  sltu        $v0, $v1, $t8
    ctx->pc = 0x2c714cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
label_2c7150:
    // 0x2c7150: 0x0  nop
    ctx->pc = 0x2c7150u;
    // NOP
label_2c7154:
    // 0x2c7154: 0x0  nop
    ctx->pc = 0x2c7154u;
    // NOP
label_2c7158:
    // 0x2c7158: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2c715c:
    if (ctx->pc == 0x2C715Cu) {
        ctx->pc = 0x2C715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7158u;
        // 0x2c715c: 0x852018  mult        $a0, $a0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7160u;
        goto label_2c7160;
    }
    ctx->pc = 0x2C7158u;
    {
        const bool branch_taken_0x2c7158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7158u;
        // 0x2c715c: 0x852018  mult        $a0, $a0, $a1 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7158) {
            ctx->pc = 0x2C7148u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c7148;
        }
    }
    ctx->pc = 0x2C7160u;
label_2c7160:
    // 0x2c7160: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x2c7160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_2c7164:
    // 0x2c7164: 0x224102a  slt         $v0, $s1, $a0
    ctx->pc = 0x2c7164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2c7168:
    // 0x2c7168: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x2c7168u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_2c716c:
    // 0x2c716c: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_2c7170:
    if (ctx->pc == 0x2C7170u) {
        ctx->pc = 0x2C7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C716Cu;
        // 0x2c7170: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7174u;
        goto label_2c7174;
    }
    ctx->pc = 0x2C716Cu;
    {
        const bool branch_taken_0x2c716c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x2C7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C716Cu;
        // 0x2c7170: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c716c) {
            ctx->pc = 0x2C7180u;
            goto label_2c7180;
        }
    }
    ctx->pc = 0x2C7174u;
label_2c7174:
    // 0x2c7174: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c7178:
    // 0x2c7178: 0x118823  negu        $s1, $s1
    ctx->pc = 0x2c7178u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_2c717c:
    // 0x2c717c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c717cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2c7180:
    // 0x2c7180: 0x6200065  bltz        $s1, . + 4 + (0x65 << 2)
label_2c7184:
    if (ctx->pc == 0x2C7184u) {
        ctx->pc = 0x2C7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7180u;
        // 0x2c7184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7188u;
        goto label_2c7188;
    }
    ctx->pc = 0x2C7180u;
    {
        const bool branch_taken_0x2c7180 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x2C7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7180u;
        // 0x2c7184: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7180) {
            ctx->pc = 0x2C7318u;
            goto label_2c7318;
        }
    }
    ctx->pc = 0x2C7188u;
label_2c7188:
    // 0x2c7188: 0x3c060098  lui         $a2, 0x98
    ctx->pc = 0x2c7188u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)152 << 16));
label_2c718c:
    // 0x2c718c: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x2c718cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_2c7190:
    // 0x2c7190: 0x34c69680  ori         $a2, $a2, 0x9680
    ctx->pc = 0x2c7190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)38528);
label_2c7194:
    // 0x2c7194: 0x34844240  ori         $a0, $a0, 0x4240
    ctx->pc = 0x2c7194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
label_2c7198:
    // 0x2c7198: 0x226001a  div         $zero, $s1, $a2
    ctx->pc = 0x2c7198u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c719c:
    // 0x2c719c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2c719cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2c71a0:
    // 0x2c71a0: 0x34a586a0  ori         $a1, $a1, 0x86A0
    ctx->pc = 0x2c71a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)34464);
label_2c71a4:
    // 0x2c71a4: 0x3c0705f5  lui         $a3, 0x5F5
    ctx->pc = 0x2c71a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1525 << 16));
label_2c71a8:
    // 0x2c71a8: 0x34e7e100  ori         $a3, $a3, 0xE100
    ctx->pc = 0x2c71a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)57600);
label_2c71ac:
    // 0x2c71ac: 0x3c0205f5  lui         $v0, 0x5F5
    ctx->pc = 0x2c71acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1525 << 16));
label_2c71b0:
    // 0x2c71b0: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
label_2c71b4:
    if (ctx->pc == 0x2C71B4u) {
        ctx->pc = 0x2C71B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C71B0u;
        // 0x2c71b4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C71B8u;
        goto label_2c71b8;
    }
    ctx->pc = 0x2C71B0u;
    {
        const bool branch_taken_0x2c71b0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c71b0) {
            ctx->pc = 0x2C71B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C71B0u;
            // 0x2c71b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C71B8u;
            goto label_2c71b8;
        }
    }
    ctx->pc = 0x2C71B8u;
label_2c71b8:
    // 0x2c71b8: 0x3442e100  ori         $v0, $v0, 0xE100
    ctx->pc = 0x2c71b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57600);
label_2c71bc:
    // 0x2c71bc: 0x3c030098  lui         $v1, 0x98
    ctx->pc = 0x2c71bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)152 << 16));
label_2c71c0:
    // 0x2c71c0: 0x34639680  ori         $v1, $v1, 0x9680
    ctx->pc = 0x2c71c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38528);
label_2c71c4:
    // 0x2c71c4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2c71c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_2c71c8:
    // 0x2c71c8: 0x34424240  ori         $v0, $v0, 0x4240
    ctx->pc = 0x2c71c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
label_2c71cc:
    // 0x2c71cc: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2c71ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2c71d0:
    // 0x2c71d0: 0x346386a0  ori         $v1, $v1, 0x86A0
    ctx->pc = 0x2c71d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34464);
label_2c71d4:
    // 0x2c71d4: 0x24092710  addiu       $t1, $zero, 0x2710
    ctx->pc = 0x2c71d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2c71d8:
    // 0x2c71d8: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x2c71d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_2c71dc:
    // 0x2c71dc: 0x240a03e8  addiu       $t2, $zero, 0x3E8
    ctx->pc = 0x2c71dcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c71e0:
    // 0x2c71e0: 0x240b03e8  addiu       $t3, $zero, 0x3E8
    ctx->pc = 0x2c71e0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2c71e4:
    // 0x2c71e4: 0x24080064  addiu       $t0, $zero, 0x64
    ctx->pc = 0x2c71e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2c71e8:
    // 0x2c71e8: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x2c71e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2c71ec:
    // 0x2c71ec: 0x240d000a  addiu       $t5, $zero, 0xA
    ctx->pc = 0x2c71ecu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c71f0:
    // 0x2c71f0: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x2c71f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2c71f4:
    // 0x2c71f4: 0x7810  mfhi        $t7
    ctx->pc = 0x2c71f4u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_2c71f8:
    // 0x2c71f8: 0x224001a  div         $zero, $s1, $a0
    ctx->pc = 0x2c71f8u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c71fc:
    // 0x2c71fc: 0x8010  mfhi        $s0
    ctx->pc = 0x2c71fcu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_2c7200:
    // 0x2c7200: 0x225001a  div         $zero, $s1, $a1
    ctx->pc = 0x2c7200u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c7204:
    // 0x2c7204: 0x1810  mfhi        $v1
    ctx->pc = 0x2c7204u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2c7208:
    // 0x2c7208: 0x229001a  div         $zero, $s1, $t1
    ctx->pc = 0x2c7208u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c720c:
    // 0x2c720c: 0x5810  mfhi        $t3
    ctx->pc = 0x2c720cu;
    SET_GPR_U64(ctx, 11, ctx->hi);
label_2c7210:
    // 0x2c7210: 0x22a001a  div         $zero, $s1, $t2
    ctx->pc = 0x2c7210u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c7214:
    // 0x2c7214: 0x7010  mfhi        $t6
    ctx->pc = 0x2c7214u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2c7218:
    // 0x2c7218: 0x227001a  div         $zero, $s1, $a3
    ctx->pc = 0x2c7218u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c721c:
    // 0x2c721c: 0x1010  mfhi        $v0
    ctx->pc = 0x2c721cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2c7220:
    // 0x2c7220: 0x3812  mflo        $a3
    ctx->pc = 0x2c7220u;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_2c7224:
    // 0x2c7224: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x2c7224u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
label_2c7228:
    // 0x2c7228: 0x73e03  sra         $a3, $a3, 24
    ctx->pc = 0x2c7228u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
label_2c722c:
    // 0x2c722c: 0x228001a  div         $zero, $s1, $t0
    ctx->pc = 0x2c722cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c7230:
    // 0x2c7230: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x2c7230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_2c7234:
    // 0x2c7234: 0x6010  mfhi        $t4
    ctx->pc = 0x2c7234u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2c7238:
    // 0x2c7238: 0x1e4001a  div         $zero, $t7, $a0
    ctx->pc = 0x2c7238u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 15);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c723c:
    // 0x2c723c: 0x2012  mflo        $a0
    ctx->pc = 0x2c723cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2c7240:
    // 0x2c7240: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x2c7240u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c7244:
    // 0x2c7244: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x2c7244u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2c7248:
    // 0x2c7248: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x2c7248u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
label_2c724c:
    // 0x2c724c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2c724cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2c7250:
    // 0x2c7250: 0x3012  mflo        $a2
    ctx->pc = 0x2c7250u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_2c7254:
    // 0x2c7254: 0x205001a  div         $zero, $s0, $a1
    ctx->pc = 0x2c7254u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c7258:
    // 0x2c7258: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x2c7258u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_2c725c:
    // 0x2c725c: 0x6f603  sra         $fp, $a2, 24
    ctx->pc = 0x2c725cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 6), 24));
label_2c7260:
    // 0x2c7260: 0x2812  mflo        $a1
    ctx->pc = 0x2c7260u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_2c7264:
    // 0x2c7264: 0x69001a  div         $zero, $v1, $t1
    ctx->pc = 0x2c7264u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c7268:
    // 0x2c7268: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c7268u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c726c:
    // 0x2c726c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x2c726cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
label_2c7270:
    // 0x2c7270: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x2c7270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_2c7274:
    // 0x2c7274: 0x4812  mflo        $t1
    ctx->pc = 0x2c7274u;
    SET_GPR_U64(ctx, 9, ctx->lo);
label_2c7278:
    // 0x2c7278: 0x16a001a  div         $zero, $t3, $t2
    ctx->pc = 0x2c7278u;
    { int32_t divisor = GPR_S32(ctx, 10);    int32_t dividend = GPR_S32(ctx, 11);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c727c:
    // 0x2c727c: 0x94e00  sll         $t1, $t1, 24
    ctx->pc = 0x2c727cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 24));
label_2c7280:
    // 0x2c7280: 0x94e03  sra         $t1, $t1, 24
    ctx->pc = 0x2c7280u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 24));
label_2c7284:
    // 0x2c7284: 0xafa90010  sw          $t1, 0x10($sp)
    ctx->pc = 0x2c7284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 9));
label_2c7288:
    // 0x2c7288: 0x5012  mflo        $t2
    ctx->pc = 0x2c7288u;
    SET_GPR_U64(ctx, 10, ctx->lo);
label_2c728c:
    // 0x2c728c: 0x1c8001a  div         $zero, $t6, $t0
    ctx->pc = 0x2c728cu;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 14);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c7290:
    // 0x2c7290: 0xa5600  sll         $t2, $t2, 24
    ctx->pc = 0x2c7290u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 24));
label_2c7294:
    // 0x2c7294: 0xa5603  sra         $t2, $t2, 24
    ctx->pc = 0x2c7294u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 24));
label_2c7298:
    // 0x2c7298: 0xafaa0014  sw          $t2, 0x14($sp)
    ctx->pc = 0x2c7298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 10));
label_2c729c:
    // 0x2c729c: 0x4012  mflo        $t0
    ctx->pc = 0x2c729cu;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_2c72a0:
    // 0x2c72a0: 0x18d001a  div         $zero, $t4, $t5
    ctx->pc = 0x2c72a0u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c72a4:
    // 0x2c72a4: 0x84600  sll         $t0, $t0, 24
    ctx->pc = 0x2c72a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 24));
label_2c72a8:
    // 0x2c72a8: 0x84603  sra         $t0, $t0, 24
    ctx->pc = 0x2c72a8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 24));
label_2c72ac:
    // 0x2c72ac: 0xafa80018  sw          $t0, 0x18($sp)
    ctx->pc = 0x2c72acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
label_2c72b0:
    // 0x2c72b0: 0x1812  mflo        $v1
    ctx->pc = 0x2c72b0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_2c72b4:
    // 0x2c72b4: 0x22d001a  div         $zero, $s1, $t5
    ctx->pc = 0x2c72b4u;
    { int32_t divisor = GPR_S32(ctx, 13);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2c72b8:
    // 0x2c72b8: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x2c72b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_2c72bc:
    // 0x2c72bc: 0x1010  mfhi        $v0
    ctx->pc = 0x2c72bcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2c72c0:
    // 0x2c72c0: 0x16e00013  bnez        $s7, . + 4 + (0x13 << 2)
label_2c72c4:
    if (ctx->pc == 0x2C72C4u) {
        ctx->pc = 0x2C72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72C0u;
        // 0x2c72c4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72C8u;
        goto label_2c72c8;
    }
    ctx->pc = 0x2C72C0u;
    {
        const bool branch_taken_0x2c72c0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72C0u;
        // 0x2c72c4: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72c0) {
            ctx->pc = 0x2C7310u;
            goto label_2c7310;
        }
    }
    ctx->pc = 0x2C72C8u;
label_2c72c8:
    // 0x2c72c8: 0x14e0001e  bnez        $a3, . + 4 + (0x1E << 2)
label_2c72cc:
    if (ctx->pc == 0x2C72CCu) {
        ctx->pc = 0x2C72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72C8u;
        // 0x2c72cc: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72D0u;
        goto label_2c72d0;
    }
    ctx->pc = 0x2C72C8u;
    {
        const bool branch_taken_0x2c72c8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72C8u;
        // 0x2c72cc: 0x24100009  addiu       $s0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72c8) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C72D0u;
label_2c72d0:
    // 0x2c72d0: 0x17c0001c  bnez        $fp, . + 4 + (0x1C << 2)
label_2c72d4:
    if (ctx->pc == 0x2C72D4u) {
        ctx->pc = 0x2C72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72D0u;
        // 0x2c72d4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72D8u;
        goto label_2c72d8;
    }
    ctx->pc = 0x2C72D0u;
    {
        const bool branch_taken_0x2c72d0 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72D0u;
        // 0x2c72d4: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72d0) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C72D8u;
label_2c72d8:
    // 0x2c72d8: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
label_2c72dc:
    if (ctx->pc == 0x2C72DCu) {
        ctx->pc = 0x2C72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72D8u;
        // 0x2c72dc: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72E0u;
        goto label_2c72e0;
    }
    ctx->pc = 0x2C72D8u;
    {
        const bool branch_taken_0x2c72d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72D8u;
        // 0x2c72dc: 0x24100007  addiu       $s0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72d8) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C72E0u;
label_2c72e0:
    // 0x2c72e0: 0x14a00018  bnez        $a1, . + 4 + (0x18 << 2)
label_2c72e4:
    if (ctx->pc == 0x2C72E4u) {
        ctx->pc = 0x2C72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72E0u;
        // 0x2c72e4: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72E8u;
        goto label_2c72e8;
    }
    ctx->pc = 0x2C72E0u;
    {
        const bool branch_taken_0x2c72e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72E0u;
        // 0x2c72e4: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72e0) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C72E8u;
label_2c72e8:
    // 0x2c72e8: 0x15200016  bnez        $t1, . + 4 + (0x16 << 2)
label_2c72ec:
    if (ctx->pc == 0x2C72ECu) {
        ctx->pc = 0x2C72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72E8u;
        // 0x2c72ec: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72F0u;
        goto label_2c72f0;
    }
    ctx->pc = 0x2C72E8u;
    {
        const bool branch_taken_0x2c72e8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72E8u;
        // 0x2c72ec: 0x24100005  addiu       $s0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72e8) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C72F0u;
label_2c72f0:
    // 0x2c72f0: 0x15400014  bnez        $t2, . + 4 + (0x14 << 2)
label_2c72f4:
    if (ctx->pc == 0x2C72F4u) {
        ctx->pc = 0x2C72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72F0u;
        // 0x2c72f4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C72F8u;
        goto label_2c72f8;
    }
    ctx->pc = 0x2C72F0u;
    {
        const bool branch_taken_0x2c72f0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72F0u;
        // 0x2c72f4: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72f0) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C72F8u;
label_2c72f8:
    // 0x2c72f8: 0x15000012  bnez        $t0, . + 4 + (0x12 << 2)
label_2c72fc:
    if (ctx->pc == 0x2C72FCu) {
        ctx->pc = 0x2C72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72F8u;
        // 0x2c72fc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7300u;
        goto label_2c7300;
    }
    ctx->pc = 0x2C72F8u;
    {
        const bool branch_taken_0x2c72f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C72F8u;
        // 0x2c72fc: 0x24100003  addiu       $s0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c72f8) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C7300u;
label_2c7300:
    // 0x2c7300: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_2c7304:
    if (ctx->pc == 0x2C7304u) {
        ctx->pc = 0x2C7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7300u;
        // 0x2c7304: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7308u;
        goto label_2c7308;
    }
    ctx->pc = 0x2C7300u;
    {
        const bool branch_taken_0x2c7300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7300u;
        // 0x2c7304: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7300) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C7308u;
label_2c7308:
    // 0x2c7308: 0x1000000e  b           . + 4 + (0xE << 2)
label_2c730c:
    if (ctx->pc == 0x2C730Cu) {
        ctx->pc = 0x2C730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7308u;
        // 0x2c730c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7310u;
        goto label_2c7310;
    }
    ctx->pc = 0x2C7308u;
    {
        const bool branch_taken_0x2c7308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7308u;
        // 0x2c730c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7308) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C7310u;
label_2c7310:
    // 0x2c7310: 0x1000000c  b           . + 4 + (0xC << 2)
label_2c7314:
    if (ctx->pc == 0x2C7314u) {
        ctx->pc = 0x2C7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7310u;
        // 0x2c7314: 0x300802d  daddu       $s0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7318u;
        goto label_2c7318;
    }
    ctx->pc = 0x2C7310u;
    {
        const bool branch_taken_0x2c7310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7310u;
        // 0x2c7314: 0x300802d  daddu       $s0, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7310) {
            ctx->pc = 0x2C7344u;
            goto label_2c7344;
        }
    }
    ctx->pc = 0x2C7318u;
label_2c7318:
    // 0x2c7318: 0x111600  sll         $v0, $s1, 24
    ctx->pc = 0x2c7318u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 24));
label_2c731c:
    // 0x2c731c: 0x2f603  sra         $fp, $v0, 24
    ctx->pc = 0x2c731cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 24));
label_2c7320:
    // 0x2c7320: 0xafbe000c  sw          $fp, 0xC($sp)
    ctx->pc = 0x2c7320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 30));
label_2c7324:
    // 0x2c7324: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x2c7324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c7328:
    // 0x2c7328: 0xafbe0004  sw          $fp, 0x4($sp)
    ctx->pc = 0x2c7328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 30));
label_2c732c:
    // 0x2c732c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x2c732cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_2c7330:
    // 0x2c7330: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2c7330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2c7334:
    // 0x2c7334: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x2c7334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_2c7338:
    // 0x2c7338: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x2c7338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_2c733c:
    // 0x2c733c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2c733cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2c7340:
    // 0x2c7340: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2c7340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2c7344:
    // 0x2c7344: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2c7344u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2c7348:
    // 0x2c7348: 0x13200059  beqz        $t9, . + 4 + (0x59 << 2)
label_2c734c:
    if (ctx->pc == 0x2C734Cu) {
        ctx->pc = 0x2C734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7348u;
        // 0x2c734c: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7350u;
        goto label_2c7350;
    }
    ctx->pc = 0x2C7348u;
    {
        const bool branch_taken_0x2c7348 = (GPR_U64(ctx, 25) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7348u;
        // 0x2c734c: 0x46006d46  mov.s       $f21, $f13 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7348) {
            ctx->pc = 0x2C74B0u;
            goto label_2c74b0;
        }
    }
    ctx->pc = 0x2C7350u;
label_2c7350:
    // 0x2c7350: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2c7350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
label_2c7354:
    // 0x2c7354: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2c7354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2c7358:
    // 0x2c7358: 0x2442c380  addiu       $v0, $v0, -0x3C80
    ctx->pc = 0x2c7358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951808));
label_2c735c:
    // 0x2c735c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c7360:
    // 0x2c7360: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c7360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c7364:
    // 0x2c7364: 0x800008  jr          $a0
label_2c7368:
    if (ctx->pc == 0x2C7368u) {
        ctx->pc = 0x2C736Cu;
        goto label_2c736c;
    }
    ctx->pc = 0x2C7364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7364u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C736Cu;
label_2c736c:
    // 0x2c736c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_2c7370:
    if (ctx->pc == 0x2C7370u) {
        ctx->pc = 0x2C7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C736Cu;
        // 0x2c7370: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7374u;
        goto label_2c7374;
    }
    ctx->pc = 0x2C736Cu;
    {
        const bool branch_taken_0x2c736c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2C7370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C736Cu;
        // 0x2c7370: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c736c) {
            ctx->pc = 0x2C7388u;
            goto label_2c7388;
        }
    }
    ctx->pc = 0x2C7374u;
label_2c7374:
    // 0x2c7374: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x2c7374u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c7378:
    // 0x2c7378: 0x0  nop
    ctx->pc = 0x2c7378u;
    // NOP
label_2c737c:
    // 0x2c737c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c737cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2c7380:
    // 0x2c7380: 0x10000007  b           . + 4 + (0x7 << 2)
label_2c7384:
    if (ctx->pc == 0x2C7384u) {
        ctx->pc = 0x2C7388u;
        goto label_2c7388;
    }
    ctx->pc = 0x2C7380u;
    {
        const bool branch_taken_0x2c7380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7380) {
            ctx->pc = 0x2C73A0u;
            goto label_2c73a0;
        }
    }
    ctx->pc = 0x2C7388u;
label_2c7388:
    // 0x2c7388: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2c7388u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_2c738c:
    // 0x2c738c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c7390:
    // 0x2c7390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c7390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c7394:
    // 0x2c7394: 0x0  nop
    ctx->pc = 0x2c7394u;
    // NOP
label_2c7398:
    // 0x2c7398: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2c7398u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2c739c:
    // 0x2c739c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2c739cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2c73a0:
    // 0x2c73a0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c73a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c73a4:
    // 0x2c73a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c73a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c73a8:
    // 0x2c73a8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2c73a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_2c73ac:
    // 0x2c73ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c73acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2c73b0:
    // 0x2c73b0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c73b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2c73b4:
    // 0x2c73b4: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2c73b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2c73b8:
    // 0x2c73b8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2c73bc:
    if (ctx->pc == 0x2C73BCu) {
        ctx->pc = 0x2C73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73B8u;
        // 0x2c73bc: 0x46006501  sub.s       $f20, $f12, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C73C0u;
        goto label_2c73c0;
    }
    ctx->pc = 0x2C73B8u;
    {
        const bool branch_taken_0x2c73b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73B8u;
        // 0x2c73bc: 0x46006501  sub.s       $f20, $f12, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73b8) {
            ctx->pc = 0x2C74B0u;
            goto label_2c74b0;
        }
    }
    ctx->pc = 0x2C73C0u;
label_2c73c0:
    // 0x2c73c0: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_2c73c4:
    if (ctx->pc == 0x2C73C4u) {
        ctx->pc = 0x2C73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73C0u;
        // 0x2c73c4: 0x4619b880  add.s       $f2, $f23, $f25 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C73C8u;
        goto label_2c73c8;
    }
    ctx->pc = 0x2C73C0u;
    {
        const bool branch_taken_0x2c73c0 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2C73C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C73C0u;
        // 0x2c73c4: 0x4619b880  add.s       $f2, $f23, $f25 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c73c0) {
            ctx->pc = 0x2C73DCu;
            goto label_2c73dc;
        }
    }
    ctx->pc = 0x2C73C8u;
label_2c73c8:
    // 0x2c73c8: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2c73c8u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c73cc:
    // 0x2c73cc: 0x0  nop
    ctx->pc = 0x2c73ccu;
    // NOP
label_2c73d0:
    // 0x2c73d0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c73d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2c73d4:
    // 0x2c73d4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c73d8:
    if (ctx->pc == 0x2C73D8u) {
        ctx->pc = 0x2C73DCu;
        goto label_2c73dc;
    }
    ctx->pc = 0x2C73D4u;
    {
        const bool branch_taken_0x2c73d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c73d4) {
            ctx->pc = 0x2C73F8u;
            goto label_2c73f8;
        }
    }
    ctx->pc = 0x2C73DCu;
label_2c73dc:
    // 0x2c73dc: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2c73dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2c73e0:
    // 0x2c73e0: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2c73e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_2c73e4:
    // 0x2c73e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c73e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c73e8:
    // 0x2c73e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c73e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c73ec:
    // 0x2c73ec: 0x0  nop
    ctx->pc = 0x2c73ecu;
    // NOP
label_2c73f0:
    // 0x2c73f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c73f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2c73f4:
    // 0x2c73f4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c73f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c73f8:
    // 0x2c73f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c73f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c73fc:
    // 0x2c73fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c73fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c7400:
    // 0x2c7400: 0x0  nop
    ctx->pc = 0x2c7400u;
    // NOP
label_2c7404:
    // 0x2c7404: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c7404u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c7408:
    // 0x2c7408: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2c7408u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_2c740c:
    // 0x2c740c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2c740cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2c7410:
    // 0x2c7410: 0x46006d41  sub.s       $f21, $f13, $f0
    ctx->pc = 0x2c7410u;
    ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
label_2c7414:
    // 0x2c7414: 0x10000026  b           . + 4 + (0x26 << 2)
label_2c7418:
    if (ctx->pc == 0x2C7418u) {
        ctx->pc = 0x2C7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7414u;
        // 0x2c7418: 0x46016501  sub.s       $f20, $f12, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C741Cu;
        goto label_2c741c;
    }
    ctx->pc = 0x2C7414u;
    {
        const bool branch_taken_0x2c7414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7414u;
        // 0x2c7418: 0x46016501  sub.s       $f20, $f12, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7414) {
            ctx->pc = 0x2C74B0u;
            goto label_2c74b0;
        }
    }
    ctx->pc = 0x2C741Cu;
label_2c741c:
    // 0x2c741c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
label_2c7420:
    if (ctx->pc == 0x2C7420u) {
        ctx->pc = 0x2C7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C741Cu;
        // 0x2c7420: 0x4619b880  add.s       $f2, $f23, $f25 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7424u;
        goto label_2c7424;
    }
    ctx->pc = 0x2C741Cu;
    {
        const bool branch_taken_0x2c741c = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x2C7420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C741Cu;
        // 0x2c7420: 0x4619b880  add.s       $f2, $f23, $f25 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c741c) {
            ctx->pc = 0x2C7438u;
            goto label_2c7438;
        }
    }
    ctx->pc = 0x2C7424u;
label_2c7424:
    // 0x2c7424: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x2c7424u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c7428:
    // 0x2c7428: 0x0  nop
    ctx->pc = 0x2c7428u;
    // NOP
label_2c742c:
    // 0x2c742c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c742cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2c7430:
    // 0x2c7430: 0x10000008  b           . + 4 + (0x8 << 2)
label_2c7434:
    if (ctx->pc == 0x2C7434u) {
        ctx->pc = 0x2C7438u;
        goto label_2c7438;
    }
    ctx->pc = 0x2C7430u;
    {
        const bool branch_taken_0x2c7430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7430) {
            ctx->pc = 0x2C7454u;
            goto label_2c7454;
        }
    }
    ctx->pc = 0x2C7438u;
label_2c7438:
    // 0x2c7438: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x2c7438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
label_2c743c:
    // 0x2c743c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x2c743cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
label_2c7440:
    // 0x2c7440: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c7440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2c7444:
    // 0x2c7444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2c7444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2c7448:
    // 0x2c7448: 0x0  nop
    ctx->pc = 0x2c7448u;
    // NOP
label_2c744c:
    // 0x2c744c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2c744cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_2c7450:
    // 0x2c7450: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2c7450u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2c7454:
    // 0x2c7454: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7454u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c7458:
    // 0x2c7458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c745c:
    // 0x2c745c: 0x0  nop
    ctx->pc = 0x2c745cu;
    // NOP
label_2c7460:
    // 0x2c7460: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2c7460u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2c7464:
    // 0x2c7464: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2c7464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_2c7468:
    // 0x2c7468: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2c7468u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2c746c:
    // 0x2c746c: 0x46006d40  add.s       $f21, $f13, $f0
    ctx->pc = 0x2c746cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
label_2c7470:
    // 0x2c7470: 0x1000000f  b           . + 4 + (0xF << 2)
label_2c7474:
    if (ctx->pc == 0x2C7474u) {
        ctx->pc = 0x2C7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7470u;
        // 0x2c7474: 0x46016501  sub.s       $f20, $f12, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7478u;
        goto label_2c7478;
    }
    ctx->pc = 0x2C7470u;
    {
        const bool branch_taken_0x2c7470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7470u;
        // 0x2c7474: 0x46016501  sub.s       $f20, $f12, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7470) {
            ctx->pc = 0x2C74B0u;
            goto label_2c74b0;
        }
    }
    ctx->pc = 0x2C7478u;
label_2c7478:
    // 0x2c7478: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7478u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c747c:
    // 0x2c747c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c747cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c7480:
    // 0x2c7480: 0x0  nop
    ctx->pc = 0x2c7480u;
    // NOP
label_2c7484:
    // 0x2c7484: 0x4600c042  mul.s       $f1, $f24, $f0
    ctx->pc = 0x2c7484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_2c7488:
    // 0x2c7488: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2c7488u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2c748c:
    // 0x2c748c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2c7490:
    if (ctx->pc == 0x2C7490u) {
        ctx->pc = 0x2C7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C748Cu;
        // 0x2c7490: 0x46016d41  sub.s       $f21, $f13, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7494u;
        goto label_2c7494;
    }
    ctx->pc = 0x2C748Cu;
    {
        const bool branch_taken_0x2c748c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C748Cu;
        // 0x2c7490: 0x46016d41  sub.s       $f21, $f13, $f1 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c748c) {
            ctx->pc = 0x2C74ACu;
            goto label_2c74ac;
        }
    }
    ctx->pc = 0x2C7494u;
label_2c7494:
    // 0x2c7494: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2c7494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2c7498:
    // 0x2c7498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c7498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2c749c:
    // 0x2c749c: 0x0  nop
    ctx->pc = 0x2c749cu;
    // NOP
label_2c74a0:
    // 0x2c74a0: 0x4600c042  mul.s       $f1, $f24, $f0
    ctx->pc = 0x2c74a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_2c74a4:
    // 0x2c74a4: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x2c74a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_2c74a8:
    // 0x2c74a8: 0x46016d40  add.s       $f21, $f13, $f1
    ctx->pc = 0x2c74a8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[13], ctx->f[1]);
label_2c74ac:
    // 0x2c74ac: 0x46006500  add.s       $f20, $f12, $f0
    ctx->pc = 0x2c74acu;
    ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_2c74b0:
    // 0x2c74b0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2c74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c74b4:
    // 0x2c74b4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2c74b8:
    if (ctx->pc == 0x2C74B8u) {
        ctx->pc = 0x2C74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74B4u;
        // 0x2c74b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C74BCu;
        goto label_2c74bc;
    }
    ctx->pc = 0x2C74B4u;
    {
        const bool branch_taken_0x2c74b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C74B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74B4u;
        // 0x2c74b8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c74b4) {
            ctx->pc = 0x2C74ECu;
            goto label_2c74ec;
        }
    }
    ctx->pc = 0x2C74BCu;
label_2c74bc:
    // 0x2c74bc: 0x4619bb00  add.s       $f12, $f23, $f25
    ctx->pc = 0x2c74bcu;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
label_2c74c0:
    // 0x2c74c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c74c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c74c4:
    // 0x2c74c4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2c74c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2c74c8:
    // 0x2c74c8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c74c8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c74cc:
    // 0x2c74cc: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c74ccu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c74d0:
    // 0x2c74d0: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c74d0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c74d4:
    // 0x2c74d4: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x2c74d4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
label_2c74d8:
    // 0x2c74d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c74d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c74dc:
    // 0x2c74dc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c74dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c74e0:
    // 0x2c74e0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c74e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c74e4:
    // 0x2c74e4: 0xc0b1b52  jal         func_2C6D48
label_2c74e8:
    if (ctx->pc == 0x2C74E8u) {
        ctx->pc = 0x2C74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74E4u;
        // 0x2c74e8: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C74ECu;
        goto label_2c74ec;
    }
    ctx->pc = 0x2C74E4u;
    SET_GPR_U32(ctx, 31, 0x2C74ECu);
    ctx->pc = 0x2C74E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C74E4u;
    // 0x2c74e8: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C74E4u, 0x2C74ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C74ECu;
label_2c74ec:
    // 0x2c74ec: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x2c74ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2c74f0:
    // 0x2c74f0: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x2c74f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2c74f4:
    // 0x2c74f4: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_2c74f8:
    if (ctx->pc == 0x2C74F8u) {
        ctx->pc = 0x2C74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74F4u;
        // 0x2c74f8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C74FCu;
        goto label_2c74fc;
    }
    ctx->pc = 0x2C74F4u;
    {
        const bool branch_taken_0x2c74f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C74F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C74F4u;
        // 0x2c74f8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c74f4) {
            ctx->pc = 0x2C7808u;
            goto label_2c7808;
        }
    }
    ctx->pc = 0x2C74FCu;
label_2c74fc:
    // 0x2c74fc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c74fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2c7500:
    // 0x2c7500: 0x2442c3a0  addiu       $v0, $v0, -0x3C60
    ctx->pc = 0x2c7500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951840));
label_2c7504:
    // 0x2c7504: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2c7504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2c7508:
    // 0x2c7508: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2c7508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c750c:
    // 0x2c750c: 0x800008  jr          $a0
label_2c7510:
    if (ctx->pc == 0x2C7510u) {
        ctx->pc = 0x2C7510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C750Cu;
        // 0x2c7510: 0x4619bd80  add.s       $f22, $f23, $f25 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7514u;
        goto label_2c7514;
    }
    ctx->pc = 0x2C750Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x2C7510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C750Cu;
        // 0x2c7510: 0x4619bd80  add.s       $f22, $f23, $f25 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C7514u: goto label_2c7514;
            case 0x2C756Cu: goto label_2c756c;
            case 0x2C75C8u: goto label_2c75c8;
            case 0x2C7624u: goto label_2c7624;
            case 0x2C7680u: goto label_2c7680;
            case 0x2C76D4u: goto label_2c76d4;
            case 0x2C7728u: goto label_2c7728;
            case 0x2C777Cu: goto label_2c777c;
            case 0x2C77D0u: goto label_2c77d0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C750Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2C7514u;
label_2c7514:
    // 0x2c7514: 0x3c0205f5  lui         $v0, 0x5F5
    ctx->pc = 0x2c7514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1525 << 16));
label_2c7518:
    // 0x2c7518: 0x3442e0ff  ori         $v0, $v0, 0xE0FF
    ctx->pc = 0x2c7518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57599);
label_2c751c:
    // 0x2c751c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2c751cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c7520:
    // 0x2c7520: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2c7524:
    if (ctx->pc == 0x2C7524u) {
        ctx->pc = 0x2C7524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7520u;
        // 0x2c7524: 0x4619b800  add.s       $f0, $f23, $f25 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7528u;
        goto label_2c7528;
    }
    ctx->pc = 0x2C7520u;
    {
        const bool branch_taken_0x2c7520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c7520) {
            ctx->pc = 0x2C7524u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7520u;
            // 0x2c7524: 0x4619b800  add.s       $f0, $f23, $f25 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7534u;
            goto label_2c7534;
        }
    }
    ctx->pc = 0x2C7528u;
label_2c7528:
    // 0x2c7528: 0x12e00010  beqz        $s7, . + 4 + (0x10 << 2)
label_2c752c:
    if (ctx->pc == 0x2C752Cu) {
        ctx->pc = 0x2C752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7528u;
        // 0x2c752c: 0x4619bd80  add.s       $f22, $f23, $f25 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7530u;
        goto label_2c7530;
    }
    ctx->pc = 0x2C7528u;
    {
        const bool branch_taken_0x2c7528 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C752Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7528u;
        // 0x2c752c: 0x4619bd80  add.s       $f22, $f23, $f25 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7528) {
            ctx->pc = 0x2C756Cu;
            goto label_2c756c;
        }
    }
    ctx->pc = 0x2C7530u;
label_2c7530:
    // 0x2c7530: 0x4619b800  add.s       $f0, $f23, $f25
    ctx->pc = 0x2c7530u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
label_2c7534:
    // 0x2c7534: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2c7534u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c7538:
    // 0x2c7538: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c7538u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c753c:
    // 0x2c753c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c7540:
    // 0x2c7540: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c7540u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c7544:
    // 0x2c7544: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c7544u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c7548:
    // 0x2c7548: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x2c7548u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_2c754c:
    // 0x2c754c: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c754cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c7550:
    // 0x2c7550: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c7550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7554:
    // 0x2c7554: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c7554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7558:
    // 0x2c7558: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c7558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c755c:
    // 0x2c755c: 0x460ca300  add.s       $f12, $f20, $f12
    ctx->pc = 0x2c755cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
label_2c7560:
    // 0x2c7560: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x2c7560u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_2c7564:
    // 0x2c7564: 0xc0b1b52  jal         func_2C6D48
label_2c7568:
    if (ctx->pc == 0x2C7568u) {
        ctx->pc = 0x2C7568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7564u;
        // 0x2c7568: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C756Cu;
        goto label_2c756c;
    }
    ctx->pc = 0x2C7564u;
    SET_GPR_U32(ctx, 31, 0x2C756Cu);
    ctx->pc = 0x2C7568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7564u;
    // 0x2c7568: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C7564u, 0x2C756Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C756Cu;
label_2c756c:
    // 0x2c756c: 0x3c020098  lui         $v0, 0x98
    ctx->pc = 0x2c756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)152 << 16));
label_2c7570:
    // 0x2c7570: 0x3442967f  ori         $v0, $v0, 0x967F
    ctx->pc = 0x2c7570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38527);
label_2c7574:
    // 0x2c7574: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2c7574u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c7578:
    // 0x2c7578: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c757c:
    if (ctx->pc == 0x2C757Cu) {
        ctx->pc = 0x2C757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7578u;
        // 0x2c757c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7580u;
        goto label_2c7580;
    }
    ctx->pc = 0x2C7578u;
    {
        const bool branch_taken_0x2c7578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7578u;
        // 0x2c757c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7578) {
            ctx->pc = 0x2C7588u;
            goto label_2c7588;
        }
    }
    ctx->pc = 0x2C7580u;
label_2c7580:
    // 0x2c7580: 0x52e00012  beql        $s7, $zero, . + 4 + (0x12 << 2)
label_2c7584:
    if (ctx->pc == 0x2C7584u) {
        ctx->pc = 0x2C7584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7580u;
        // 0x2c7584: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7588u;
        goto label_2c7588;
    }
    ctx->pc = 0x2C7580u;
    {
        const bool branch_taken_0x2c7580 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7580) {
            ctx->pc = 0x2C7584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7580u;
            // 0x2c7584: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C75CCu;
            goto label_2c75cc;
        }
    }
    ctx->pc = 0x2C7588u;
label_2c7588:
    // 0x2c7588: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2c7588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c758c:
    // 0x2c758c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c758cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7590:
    // 0x2c7590: 0x0  nop
    ctx->pc = 0x2c7590u;
    // NOP
label_2c7594:
    // 0x2c7594: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c7594u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2c7598:
    // 0x2c7598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c7598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c759c:
    // 0x2c759c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c75a0:
    // 0x2c75a0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c75a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c75a4:
    // 0x2c75a4: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c75a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c75a8:
    // 0x2c75a8: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c75a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c75ac:
    // 0x2c75ac: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x2c75acu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_2c75b0:
    // 0x2c75b0: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c75b0u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c75b4:
    // 0x2c75b4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c75b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c75b8:
    // 0x2c75b8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c75b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c75bc:
    // 0x2c75bc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c75bcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c75c0:
    // 0x2c75c0: 0xc0b1b52  jal         func_2C6D48
label_2c75c4:
    if (ctx->pc == 0x2C75C4u) {
        ctx->pc = 0x2C75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75C0u;
        // 0x2c75c4: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C75C8u;
        goto label_2c75c8;
    }
    ctx->pc = 0x2C75C0u;
    SET_GPR_U32(ctx, 31, 0x2C75C8u);
    ctx->pc = 0x2C75C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C75C0u;
    // 0x2c75c4: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C75C0u, 0x2C75C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C75C8u;
label_2c75c8:
    // 0x2c75c8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x2c75c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_2c75cc:
    // 0x2c75cc: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x2c75ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_2c75d0:
    // 0x2c75d0: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2c75d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c75d4:
    // 0x2c75d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c75d8:
    if (ctx->pc == 0x2C75D8u) {
        ctx->pc = 0x2C75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75D4u;
        // 0x2c75d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C75DCu;
        goto label_2c75dc;
    }
    ctx->pc = 0x2C75D4u;
    {
        const bool branch_taken_0x2c75d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C75D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75D4u;
        // 0x2c75d8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c75d4) {
            ctx->pc = 0x2C75E4u;
            goto label_2c75e4;
        }
    }
    ctx->pc = 0x2C75DCu;
label_2c75dc:
    // 0x2c75dc: 0x52e00012  beql        $s7, $zero, . + 4 + (0x12 << 2)
label_2c75e0:
    if (ctx->pc == 0x2C75E0u) {
        ctx->pc = 0x2C75E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C75DCu;
        // 0x2c75e0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C75E4u;
        goto label_2c75e4;
    }
    ctx->pc = 0x2C75DCu;
    {
        const bool branch_taken_0x2c75dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c75dc) {
            ctx->pc = 0x2C75E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C75DCu;
            // 0x2c75e0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7628u;
            goto label_2c7628;
        }
    }
    ctx->pc = 0x2C75E4u;
label_2c75e4:
    // 0x2c75e4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2c75e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2c75e8:
    // 0x2c75e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c75e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c75ec:
    // 0x2c75ec: 0x0  nop
    ctx->pc = 0x2c75ecu;
    // NOP
label_2c75f0:
    // 0x2c75f0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c75f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2c75f4:
    // 0x2c75f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c75f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c75f8:
    // 0x2c75f8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c75f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c75fc:
    // 0x2c75fc: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c75fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c7600:
    // 0x2c7600: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7600u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7604:
    // 0x2c7604: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c7604u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c7608:
    // 0x2c7608: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x2c7608u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_2c760c:
    // 0x2c760c: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c760cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c7610:
    // 0x2c7610: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c7610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7614:
    // 0x2c7614: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c7614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7618:
    // 0x2c7618: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c7618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c761c:
    // 0x2c761c: 0xc0b1b52  jal         func_2C6D48
label_2c7620:
    if (ctx->pc == 0x2C7620u) {
        ctx->pc = 0x2C7620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C761Cu;
        // 0x2c7620: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7624u;
        goto label_2c7624;
    }
    ctx->pc = 0x2C761Cu;
    SET_GPR_U32(ctx, 31, 0x2C7624u);
    ctx->pc = 0x2C7620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C761Cu;
    // 0x2c7620: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C761Cu, 0x2C7624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7624u;
label_2c7624:
    // 0x2c7624: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2c7624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2c7628:
    // 0x2c7628: 0x3442869f  ori         $v0, $v0, 0x869F
    ctx->pc = 0x2c7628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_2c762c:
    // 0x2c762c: 0x51102a  slt         $v0, $v0, $s1
    ctx->pc = 0x2c762cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2c7630:
    // 0x2c7630: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2c7634:
    if (ctx->pc == 0x2C7634u) {
        ctx->pc = 0x2C7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7630u;
        // 0x2c7634: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7638u;
        goto label_2c7638;
    }
    ctx->pc = 0x2C7630u;
    {
        const bool branch_taken_0x2c7630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7630u;
        // 0x2c7634: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7630) {
            ctx->pc = 0x2C7640u;
            goto label_2c7640;
        }
    }
    ctx->pc = 0x2C7638u;
label_2c7638:
    // 0x2c7638: 0x52e00012  beql        $s7, $zero, . + 4 + (0x12 << 2)
label_2c763c:
    if (ctx->pc == 0x2C763Cu) {
        ctx->pc = 0x2C763Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7638u;
        // 0x2c763c: 0x2a222710  slti        $v0, $s1, 0x2710 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7640u;
        goto label_2c7640;
    }
    ctx->pc = 0x2C7638u;
    {
        const bool branch_taken_0x2c7638 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7638) {
            ctx->pc = 0x2C763Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7638u;
            // 0x2c763c: 0x2a222710  slti        $v0, $s1, 0x2710 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10000) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7684u;
            goto label_2c7684;
        }
    }
    ctx->pc = 0x2C7640u;
label_2c7640:
    // 0x2c7640: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x2c7640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2c7644:
    // 0x2c7644: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c7644u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7648:
    // 0x2c7648: 0x0  nop
    ctx->pc = 0x2c7648u;
    // NOP
label_2c764c:
    // 0x2c764c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c764cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2c7650:
    // 0x2c7650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c7650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c7654:
    // 0x2c7654: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c7658:
    // 0x2c7658: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c7658u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c765c:
    // 0x2c765c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c765cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7660:
    // 0x2c7660: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c7660u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c7664:
    // 0x2c7664: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x2c7664u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_2c7668:
    // 0x2c7668: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c7668u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c766c:
    // 0x2c766c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c766cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7670:
    // 0x2c7670: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c7670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7674:
    // 0x2c7674: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c7674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7678:
    // 0x2c7678: 0xc0b1b52  jal         func_2C6D48
label_2c767c:
    if (ctx->pc == 0x2C767Cu) {
        ctx->pc = 0x2C767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7678u;
        // 0x2c767c: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7680u;
        goto label_2c7680;
    }
    ctx->pc = 0x2C7678u;
    SET_GPR_U32(ctx, 31, 0x2C7680u);
    ctx->pc = 0x2C767Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7678u;
    // 0x2c767c: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C7678u, 0x2C7680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7680u;
label_2c7680:
    // 0x2c7680: 0x2a222710  slti        $v0, $s1, 0x2710
    ctx->pc = 0x2c7680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10000) ? 1 : 0);
label_2c7684:
    // 0x2c7684: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c7688:
    if (ctx->pc == 0x2C7688u) {
        ctx->pc = 0x2C7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7684u;
        // 0x2c7688: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C768Cu;
        goto label_2c768c;
    }
    ctx->pc = 0x2C7684u;
    {
        const bool branch_taken_0x2c7684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7684u;
        // 0x2c7688: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7684) {
            ctx->pc = 0x2C7694u;
            goto label_2c7694;
        }
    }
    ctx->pc = 0x2C768Cu;
label_2c768c:
    // 0x2c768c: 0x52e00012  beql        $s7, $zero, . + 4 + (0x12 << 2)
label_2c7690:
    if (ctx->pc == 0x2C7690u) {
        ctx->pc = 0x2C7690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C768Cu;
        // 0x2c7690: 0x2a2203e8  slti        $v0, $s1, 0x3E8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7694u;
        goto label_2c7694;
    }
    ctx->pc = 0x2C768Cu;
    {
        const bool branch_taken_0x2c768c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c768c) {
            ctx->pc = 0x2C7690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C768Cu;
            // 0x2c7690: 0x2a2203e8  slti        $v0, $s1, 0x3E8 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C76D8u;
            goto label_2c76d8;
        }
    }
    ctx->pc = 0x2C7694u;
label_2c7694:
    // 0x2c7694: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2c7694u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7698:
    // 0x2c7698: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c7698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c769c:
    // 0x2c769c: 0x0  nop
    ctx->pc = 0x2c769cu;
    // NOP
label_2c76a0:
    // 0x2c76a0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c76a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2c76a4:
    // 0x2c76a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c76a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c76a8:
    // 0x2c76a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c76a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c76ac:
    // 0x2c76ac: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c76acu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c76b0:
    // 0x2c76b0: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c76b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c76b4:
    // 0x2c76b4: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c76b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c76b8:
    // 0x2c76b8: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x2c76b8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_2c76bc:
    // 0x2c76bc: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c76bcu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c76c0:
    // 0x2c76c0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c76c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c76c4:
    // 0x2c76c4: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c76c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c76c8:
    // 0x2c76c8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c76c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c76cc:
    // 0x2c76cc: 0xc0b1b52  jal         func_2C6D48
label_2c76d0:
    if (ctx->pc == 0x2C76D0u) {
        ctx->pc = 0x2C76D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76CCu;
        // 0x2c76d0: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76D4u;
        goto label_2c76d4;
    }
    ctx->pc = 0x2C76CCu;
    SET_GPR_U32(ctx, 31, 0x2C76D4u);
    ctx->pc = 0x2C76D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C76CCu;
    // 0x2c76d0: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C76CCu, 0x2C76D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C76D4u;
label_2c76d4:
    // 0x2c76d4: 0x2a2203e8  slti        $v0, $s1, 0x3E8
    ctx->pc = 0x2c76d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)1000) ? 1 : 0);
label_2c76d8:
    // 0x2c76d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c76dc:
    if (ctx->pc == 0x2C76DCu) {
        ctx->pc = 0x2C76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76D8u;
        // 0x2c76dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76E0u;
        goto label_2c76e0;
    }
    ctx->pc = 0x2C76D8u;
    {
        const bool branch_taken_0x2c76d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C76DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76D8u;
        // 0x2c76dc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c76d8) {
            ctx->pc = 0x2C76E8u;
            goto label_2c76e8;
        }
    }
    ctx->pc = 0x2C76E0u;
label_2c76e0:
    // 0x2c76e0: 0x52e00012  beql        $s7, $zero, . + 4 + (0x12 << 2)
label_2c76e4:
    if (ctx->pc == 0x2C76E4u) {
        ctx->pc = 0x2C76E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C76E0u;
        // 0x2c76e4: 0x2a220064  slti        $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C76E8u;
        goto label_2c76e8;
    }
    ctx->pc = 0x2C76E0u;
    {
        const bool branch_taken_0x2c76e0 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c76e0) {
            ctx->pc = 0x2C76E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C76E0u;
            // 0x2c76e4: 0x2a220064  slti        $v0, $s1, 0x64 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C772Cu;
            goto label_2c772c;
        }
    }
    ctx->pc = 0x2C76E8u;
label_2c76e8:
    // 0x2c76e8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2c76e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2c76ec:
    // 0x2c76ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c76ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c76f0:
    // 0x2c76f0: 0x0  nop
    ctx->pc = 0x2c76f0u;
    // NOP
label_2c76f4:
    // 0x2c76f4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c76f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2c76f8:
    // 0x2c76f8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c76f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c76fc:
    // 0x2c76fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c7700:
    // 0x2c7700: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c7700u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c7704:
    // 0x2c7704: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7704u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c7708:
    // 0x2c7708: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c7708u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c770c:
    // 0x2c770c: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x2c770cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_2c7710:
    // 0x2c7710: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c7710u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c7714:
    // 0x2c7714: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c7714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7718:
    // 0x2c7718: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c7718u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c771c:
    // 0x2c771c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c771cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7720:
    // 0x2c7720: 0xc0b1b52  jal         func_2C6D48
label_2c7724:
    if (ctx->pc == 0x2C7724u) {
        ctx->pc = 0x2C7724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7720u;
        // 0x2c7724: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7728u;
        goto label_2c7728;
    }
    ctx->pc = 0x2C7720u;
    SET_GPR_U32(ctx, 31, 0x2C7728u);
    ctx->pc = 0x2C7724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7720u;
    // 0x2c7724: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C7720u, 0x2C7728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7728u;
label_2c7728:
    // 0x2c7728: 0x2a220064  slti        $v0, $s1, 0x64
    ctx->pc = 0x2c7728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)100) ? 1 : 0);
label_2c772c:
    // 0x2c772c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c7730:
    if (ctx->pc == 0x2C7730u) {
        ctx->pc = 0x2C7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C772Cu;
        // 0x2c7730: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7734u;
        goto label_2c7734;
    }
    ctx->pc = 0x2C772Cu;
    {
        const bool branch_taken_0x2c772c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C772Cu;
        // 0x2c7730: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c772c) {
            ctx->pc = 0x2C773Cu;
            goto label_2c773c;
        }
    }
    ctx->pc = 0x2C7734u;
label_2c7734:
    // 0x2c7734: 0x52e00012  beql        $s7, $zero, . + 4 + (0x12 << 2)
label_2c7738:
    if (ctx->pc == 0x2C7738u) {
        ctx->pc = 0x2C7738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7734u;
        // 0x2c7738: 0x2a22000a  slti        $v0, $s1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C773Cu;
        goto label_2c773c;
    }
    ctx->pc = 0x2C7734u;
    {
        const bool branch_taken_0x2c7734 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7734) {
            ctx->pc = 0x2C7738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C7734u;
            // 0x2c7738: 0x2a22000a  slti        $v0, $s1, 0xA (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C7780u;
            goto label_2c7780;
        }
    }
    ctx->pc = 0x2C773Cu;
label_2c773c:
    // 0x2c773c: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2c773cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7740:
    // 0x2c7740: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c7740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7744:
    // 0x2c7744: 0x0  nop
    ctx->pc = 0x2c7744u;
    // NOP
label_2c7748:
    // 0x2c7748: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c7748u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2c774c:
    // 0x2c774c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c774cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c7750:
    // 0x2c7750: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c7750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c7754:
    // 0x2c7754: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c7754u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c7758:
    // 0x2c7758: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c7758u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c775c:
    // 0x2c775c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c775cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c7760:
    // 0x2c7760: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x2c7760u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_2c7764:
    // 0x2c7764: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c7764u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c7768:
    // 0x2c7768: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c7768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c776c:
    // 0x2c776c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c776cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c7770:
    // 0x2c7770: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c7770u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7774:
    // 0x2c7774: 0xc0b1b52  jal         func_2C6D48
label_2c7778:
    if (ctx->pc == 0x2C7778u) {
        ctx->pc = 0x2C7778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7774u;
        // 0x2c7778: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C777Cu;
        goto label_2c777c;
    }
    ctx->pc = 0x2C7774u;
    SET_GPR_U32(ctx, 31, 0x2C777Cu);
    ctx->pc = 0x2C7778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7774u;
    // 0x2c7778: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C7774u, 0x2C777Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C777Cu;
label_2c777c:
    // 0x2c777c: 0x2a22000a  slti        $v0, $s1, 0xA
    ctx->pc = 0x2c777cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_2c7780:
    // 0x2c7780: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2c7784:
    if (ctx->pc == 0x2C7784u) {
        ctx->pc = 0x2C7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7780u;
        // 0x2c7784: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7788u;
        goto label_2c7788;
    }
    ctx->pc = 0x2C7780u;
    {
        const bool branch_taken_0x2c7780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C7784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7780u;
        // 0x2c7784: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7780) {
            ctx->pc = 0x2C7790u;
            goto label_2c7790;
        }
    }
    ctx->pc = 0x2C7788u;
label_2c7788:
    // 0x2c7788: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
label_2c778c:
    if (ctx->pc == 0x2C778Cu) {
        ctx->pc = 0x2C7790u;
        goto label_2c7790;
    }
    ctx->pc = 0x2C7788u;
    {
        const bool branch_taken_0x2c7788 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7788) {
            ctx->pc = 0x2C77D0u;
            goto label_2c77d0;
        }
    }
    ctx->pc = 0x2C7790u;
label_2c7790:
    // 0x2c7790: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x2c7790u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_2c7794:
    // 0x2c7794: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2c7794u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c7798:
    // 0x2c7798: 0x0  nop
    ctx->pc = 0x2c7798u;
    // NOP
label_2c779c:
    // 0x2c779c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c779cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2c77a0:
    // 0x2c77a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c77a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c77a4:
    // 0x2c77a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2c77a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2c77a8:
    // 0x2c77a8: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c77a8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c77ac:
    // 0x2c77ac: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x2c77acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2c77b0:
    // 0x2c77b0: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c77b0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c77b4:
    // 0x2c77b4: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x2c77b4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_2c77b8:
    // 0x2c77b8: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c77b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c77bc:
    // 0x2c77bc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c77bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c77c0:
    // 0x2c77c0: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c77c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c77c4:
    // 0x2c77c4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c77c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c77c8:
    // 0x2c77c8: 0xc0b1b52  jal         func_2C6D48
label_2c77cc:
    if (ctx->pc == 0x2C77CCu) {
        ctx->pc = 0x2C77CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C77C8u;
        // 0x2c77cc: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C77D0u;
        goto label_2c77d0;
    }
    ctx->pc = 0x2C77C8u;
    SET_GPR_U32(ctx, 31, 0x2C77D0u);
    ctx->pc = 0x2C77CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C77C8u;
    // 0x2c77cc: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C77C8u, 0x2C77D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C77D0u;
label_2c77d0:
    // 0x2c77d0: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x2c77d0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2c77d4:
    // 0x2c77d4: 0x0  nop
    ctx->pc = 0x2c77d4u;
    // NOP
label_2c77d8:
    // 0x2c77d8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2c77d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_2c77dc:
    // 0x2c77dc: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2c77dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2c77e0:
    // 0x2c77e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2c77e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c77e4:
    // 0x2c77e4: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2c77e4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_2c77e8:
    // 0x2c77e8: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x2c77e8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
label_2c77ec:
    // 0x2c77ec: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x2c77ecu;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
label_2c77f0:
    // 0x2c77f0: 0x460cb302  mul.s       $f12, $f22, $f12
    ctx->pc = 0x2c77f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[12]);
label_2c77f4:
    // 0x2c77f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2c77f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c77f8:
    // 0x2c77f8: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2c77f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c77fc:
    // 0x2c77fc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2c77fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c7800:
    // 0x2c7800: 0xc0b1b52  jal         func_2C6D48
label_2c7804:
    if (ctx->pc == 0x2C7804u) {
        ctx->pc = 0x2C7804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7800u;
        // 0x2c7804: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7808u;
        goto label_2c7808;
    }
    ctx->pc = 0x2C7800u;
    SET_GPR_U32(ctx, 31, 0x2C7808u);
    ctx->pc = 0x2C7804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C7800u;
    // 0x2c7804: 0x460ca300  add.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6D48u, 0x2C7800u, 0x2C7808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7808u;
label_2c7808:
    // 0x2c7808: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x2c7808u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2c780c:
    // 0x2c780c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x2c780cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2c7810:
    // 0x2c7810: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x2c7810u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2c7814:
    // 0x2c7814: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x2c7814u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2c7818:
    // 0x2c7818: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x2c7818u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2c781c:
    // 0x2c781c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x2c781cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2c7820:
    // 0x2c7820: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2c7820u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2c7824:
    // 0x2c7824: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x2c7824u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2c7828:
    // 0x2c7828: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x2c7828u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2c782c:
    // 0x2c782c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c782cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7830:
    // 0x2c7830: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x2c7830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2c7834:
    // 0x2c7834: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x2c7834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2c7838:
    // 0x2c7838: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x2c7838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2c783c:
    // 0x2c783c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x2c783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2c7840:
    // 0x2c7840: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x2c7840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2c7844:
    // 0x2c7844: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x2c7844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2c7848:
    // 0x2c7848: 0x3e00008  jr          $ra
label_2c784c:
    if (ctx->pc == 0x2C784Cu) {
        ctx->pc = 0x2C784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7848u;
        // 0x2c784c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2C7850u;
        goto label_fallthrough_0x2c7848;
    }
    ctx->pc = 0x2C7848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C784Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C7848u;
        // 0x2c784c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2c7848:
    ctx->pc = 0x2C7850u;
}
