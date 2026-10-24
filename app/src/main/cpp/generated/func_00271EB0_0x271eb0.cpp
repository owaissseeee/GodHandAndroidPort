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

// Function: func_00271EB0
// Address: 0x271eb0 - 0x272570
void func_00271EB0_0x271eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00271EB0_0x271eb0");
#endif

    switch (ctx->pc) {
        case 0x271eb0u: goto label_271eb0;
        case 0x271eb4u: goto label_271eb4;
        case 0x271eb8u: goto label_271eb8;
        case 0x271ebcu: goto label_271ebc;
        case 0x271ec0u: goto label_271ec0;
        case 0x271ec4u: goto label_271ec4;
        case 0x271ec8u: goto label_271ec8;
        case 0x271eccu: goto label_271ecc;
        case 0x271ed0u: goto label_271ed0;
        case 0x271ed4u: goto label_271ed4;
        case 0x271ed8u: goto label_271ed8;
        case 0x271edcu: goto label_271edc;
        case 0x271ee0u: goto label_271ee0;
        case 0x271ee4u: goto label_271ee4;
        case 0x271ee8u: goto label_271ee8;
        case 0x271eecu: goto label_271eec;
        case 0x271ef0u: goto label_271ef0;
        case 0x271ef4u: goto label_271ef4;
        case 0x271ef8u: goto label_271ef8;
        case 0x271efcu: goto label_271efc;
        case 0x271f00u: goto label_271f00;
        case 0x271f04u: goto label_271f04;
        case 0x271f08u: goto label_271f08;
        case 0x271f0cu: goto label_271f0c;
        case 0x271f10u: goto label_271f10;
        case 0x271f14u: goto label_271f14;
        case 0x271f18u: goto label_271f18;
        case 0x271f1cu: goto label_271f1c;
        case 0x271f20u: goto label_271f20;
        case 0x271f24u: goto label_271f24;
        case 0x271f28u: goto label_271f28;
        case 0x271f2cu: goto label_271f2c;
        case 0x271f30u: goto label_271f30;
        case 0x271f34u: goto label_271f34;
        case 0x271f38u: goto label_271f38;
        case 0x271f3cu: goto label_271f3c;
        case 0x271f40u: goto label_271f40;
        case 0x271f44u: goto label_271f44;
        case 0x271f48u: goto label_271f48;
        case 0x271f4cu: goto label_271f4c;
        case 0x271f50u: goto label_271f50;
        case 0x271f54u: goto label_271f54;
        case 0x271f58u: goto label_271f58;
        case 0x271f5cu: goto label_271f5c;
        case 0x271f60u: goto label_271f60;
        case 0x271f64u: goto label_271f64;
        case 0x271f68u: goto label_271f68;
        case 0x271f6cu: goto label_271f6c;
        case 0x271f70u: goto label_271f70;
        case 0x271f74u: goto label_271f74;
        case 0x271f78u: goto label_271f78;
        case 0x271f7cu: goto label_271f7c;
        case 0x271f80u: goto label_271f80;
        case 0x271f84u: goto label_271f84;
        case 0x271f88u: goto label_271f88;
        case 0x271f8cu: goto label_271f8c;
        case 0x271f90u: goto label_271f90;
        case 0x271f94u: goto label_271f94;
        case 0x271f98u: goto label_271f98;
        case 0x271f9cu: goto label_271f9c;
        case 0x271fa0u: goto label_271fa0;
        case 0x271fa4u: goto label_271fa4;
        case 0x271fa8u: goto label_271fa8;
        case 0x271facu: goto label_271fac;
        case 0x271fb0u: goto label_271fb0;
        case 0x271fb4u: goto label_271fb4;
        case 0x271fb8u: goto label_271fb8;
        case 0x271fbcu: goto label_271fbc;
        case 0x271fc0u: goto label_271fc0;
        case 0x271fc4u: goto label_271fc4;
        case 0x271fc8u: goto label_271fc8;
        case 0x271fccu: goto label_271fcc;
        case 0x271fd0u: goto label_271fd0;
        case 0x271fd4u: goto label_271fd4;
        case 0x271fd8u: goto label_271fd8;
        case 0x271fdcu: goto label_271fdc;
        case 0x271fe0u: goto label_271fe0;
        case 0x271fe4u: goto label_271fe4;
        case 0x271fe8u: goto label_271fe8;
        case 0x271fecu: goto label_271fec;
        case 0x271ff0u: goto label_271ff0;
        case 0x271ff4u: goto label_271ff4;
        case 0x271ff8u: goto label_271ff8;
        case 0x271ffcu: goto label_271ffc;
        case 0x272000u: goto label_272000;
        case 0x272004u: goto label_272004;
        case 0x272008u: goto label_272008;
        case 0x27200cu: goto label_27200c;
        case 0x272010u: goto label_272010;
        case 0x272014u: goto label_272014;
        case 0x272018u: goto label_272018;
        case 0x27201cu: goto label_27201c;
        case 0x272020u: goto label_272020;
        case 0x272024u: goto label_272024;
        case 0x272028u: goto label_272028;
        case 0x27202cu: goto label_27202c;
        case 0x272030u: goto label_272030;
        case 0x272034u: goto label_272034;
        case 0x272038u: goto label_272038;
        case 0x27203cu: goto label_27203c;
        case 0x272040u: goto label_272040;
        case 0x272044u: goto label_272044;
        case 0x272048u: goto label_272048;
        case 0x27204cu: goto label_27204c;
        case 0x272050u: goto label_272050;
        case 0x272054u: goto label_272054;
        case 0x272058u: goto label_272058;
        case 0x27205cu: goto label_27205c;
        case 0x272060u: goto label_272060;
        case 0x272064u: goto label_272064;
        case 0x272068u: goto label_272068;
        case 0x27206cu: goto label_27206c;
        case 0x272070u: goto label_272070;
        case 0x272074u: goto label_272074;
        case 0x272078u: goto label_272078;
        case 0x27207cu: goto label_27207c;
        case 0x272080u: goto label_272080;
        case 0x272084u: goto label_272084;
        case 0x272088u: goto label_272088;
        case 0x27208cu: goto label_27208c;
        case 0x272090u: goto label_272090;
        case 0x272094u: goto label_272094;
        case 0x272098u: goto label_272098;
        case 0x27209cu: goto label_27209c;
        case 0x2720a0u: goto label_2720a0;
        case 0x2720a4u: goto label_2720a4;
        case 0x2720a8u: goto label_2720a8;
        case 0x2720acu: goto label_2720ac;
        case 0x2720b0u: goto label_2720b0;
        case 0x2720b4u: goto label_2720b4;
        case 0x2720b8u: goto label_2720b8;
        case 0x2720bcu: goto label_2720bc;
        case 0x2720c0u: goto label_2720c0;
        case 0x2720c4u: goto label_2720c4;
        case 0x2720c8u: goto label_2720c8;
        case 0x2720ccu: goto label_2720cc;
        case 0x2720d0u: goto label_2720d0;
        case 0x2720d4u: goto label_2720d4;
        case 0x2720d8u: goto label_2720d8;
        case 0x2720dcu: goto label_2720dc;
        case 0x2720e0u: goto label_2720e0;
        case 0x2720e4u: goto label_2720e4;
        case 0x2720e8u: goto label_2720e8;
        case 0x2720ecu: goto label_2720ec;
        case 0x2720f0u: goto label_2720f0;
        case 0x2720f4u: goto label_2720f4;
        case 0x2720f8u: goto label_2720f8;
        case 0x2720fcu: goto label_2720fc;
        case 0x272100u: goto label_272100;
        case 0x272104u: goto label_272104;
        case 0x272108u: goto label_272108;
        case 0x27210cu: goto label_27210c;
        case 0x272110u: goto label_272110;
        case 0x272114u: goto label_272114;
        case 0x272118u: goto label_272118;
        case 0x27211cu: goto label_27211c;
        case 0x272120u: goto label_272120;
        case 0x272124u: goto label_272124;
        case 0x272128u: goto label_272128;
        case 0x27212cu: goto label_27212c;
        case 0x272130u: goto label_272130;
        case 0x272134u: goto label_272134;
        case 0x272138u: goto label_272138;
        case 0x27213cu: goto label_27213c;
        case 0x272140u: goto label_272140;
        case 0x272144u: goto label_272144;
        case 0x272148u: goto label_272148;
        case 0x27214cu: goto label_27214c;
        case 0x272150u: goto label_272150;
        case 0x272154u: goto label_272154;
        case 0x272158u: goto label_272158;
        case 0x27215cu: goto label_27215c;
        case 0x272160u: goto label_272160;
        case 0x272164u: goto label_272164;
        case 0x272168u: goto label_272168;
        case 0x27216cu: goto label_27216c;
        case 0x272170u: goto label_272170;
        case 0x272174u: goto label_272174;
        case 0x272178u: goto label_272178;
        case 0x27217cu: goto label_27217c;
        case 0x272180u: goto label_272180;
        case 0x272184u: goto label_272184;
        case 0x272188u: goto label_272188;
        case 0x27218cu: goto label_27218c;
        case 0x272190u: goto label_272190;
        case 0x272194u: goto label_272194;
        case 0x272198u: goto label_272198;
        case 0x27219cu: goto label_27219c;
        case 0x2721a0u: goto label_2721a0;
        case 0x2721a4u: goto label_2721a4;
        case 0x2721a8u: goto label_2721a8;
        case 0x2721acu: goto label_2721ac;
        case 0x2721b0u: goto label_2721b0;
        case 0x2721b4u: goto label_2721b4;
        case 0x2721b8u: goto label_2721b8;
        case 0x2721bcu: goto label_2721bc;
        case 0x2721c0u: goto label_2721c0;
        case 0x2721c4u: goto label_2721c4;
        case 0x2721c8u: goto label_2721c8;
        case 0x2721ccu: goto label_2721cc;
        case 0x2721d0u: goto label_2721d0;
        case 0x2721d4u: goto label_2721d4;
        case 0x2721d8u: goto label_2721d8;
        case 0x2721dcu: goto label_2721dc;
        case 0x2721e0u: goto label_2721e0;
        case 0x2721e4u: goto label_2721e4;
        case 0x2721e8u: goto label_2721e8;
        case 0x2721ecu: goto label_2721ec;
        case 0x2721f0u: goto label_2721f0;
        case 0x2721f4u: goto label_2721f4;
        case 0x2721f8u: goto label_2721f8;
        case 0x2721fcu: goto label_2721fc;
        case 0x272200u: goto label_272200;
        case 0x272204u: goto label_272204;
        case 0x272208u: goto label_272208;
        case 0x27220cu: goto label_27220c;
        case 0x272210u: goto label_272210;
        case 0x272214u: goto label_272214;
        case 0x272218u: goto label_272218;
        case 0x27221cu: goto label_27221c;
        case 0x272220u: goto label_272220;
        case 0x272224u: goto label_272224;
        case 0x272228u: goto label_272228;
        case 0x27222cu: goto label_27222c;
        case 0x272230u: goto label_272230;
        case 0x272234u: goto label_272234;
        case 0x272238u: goto label_272238;
        case 0x27223cu: goto label_27223c;
        case 0x272240u: goto label_272240;
        case 0x272244u: goto label_272244;
        case 0x272248u: goto label_272248;
        case 0x27224cu: goto label_27224c;
        case 0x272250u: goto label_272250;
        case 0x272254u: goto label_272254;
        case 0x272258u: goto label_272258;
        case 0x27225cu: goto label_27225c;
        case 0x272260u: goto label_272260;
        case 0x272264u: goto label_272264;
        case 0x272268u: goto label_272268;
        case 0x27226cu: goto label_27226c;
        case 0x272270u: goto label_272270;
        case 0x272274u: goto label_272274;
        case 0x272278u: goto label_272278;
        case 0x27227cu: goto label_27227c;
        case 0x272280u: goto label_272280;
        case 0x272284u: goto label_272284;
        case 0x272288u: goto label_272288;
        case 0x27228cu: goto label_27228c;
        case 0x272290u: goto label_272290;
        case 0x272294u: goto label_272294;
        case 0x272298u: goto label_272298;
        case 0x27229cu: goto label_27229c;
        case 0x2722a0u: goto label_2722a0;
        case 0x2722a4u: goto label_2722a4;
        case 0x2722a8u: goto label_2722a8;
        case 0x2722acu: goto label_2722ac;
        case 0x2722b0u: goto label_2722b0;
        case 0x2722b4u: goto label_2722b4;
        case 0x2722b8u: goto label_2722b8;
        case 0x2722bcu: goto label_2722bc;
        case 0x2722c0u: goto label_2722c0;
        case 0x2722c4u: goto label_2722c4;
        case 0x2722c8u: goto label_2722c8;
        case 0x2722ccu: goto label_2722cc;
        case 0x2722d0u: goto label_2722d0;
        case 0x2722d4u: goto label_2722d4;
        case 0x2722d8u: goto label_2722d8;
        case 0x2722dcu: goto label_2722dc;
        case 0x2722e0u: goto label_2722e0;
        case 0x2722e4u: goto label_2722e4;
        case 0x2722e8u: goto label_2722e8;
        case 0x2722ecu: goto label_2722ec;
        case 0x2722f0u: goto label_2722f0;
        case 0x2722f4u: goto label_2722f4;
        case 0x2722f8u: goto label_2722f8;
        case 0x2722fcu: goto label_2722fc;
        case 0x272300u: goto label_272300;
        case 0x272304u: goto label_272304;
        case 0x272308u: goto label_272308;
        case 0x27230cu: goto label_27230c;
        case 0x272310u: goto label_272310;
        case 0x272314u: goto label_272314;
        case 0x272318u: goto label_272318;
        case 0x27231cu: goto label_27231c;
        case 0x272320u: goto label_272320;
        case 0x272324u: goto label_272324;
        case 0x272328u: goto label_272328;
        case 0x27232cu: goto label_27232c;
        case 0x272330u: goto label_272330;
        case 0x272334u: goto label_272334;
        case 0x272338u: goto label_272338;
        case 0x27233cu: goto label_27233c;
        case 0x272340u: goto label_272340;
        case 0x272344u: goto label_272344;
        case 0x272348u: goto label_272348;
        case 0x27234cu: goto label_27234c;
        case 0x272350u: goto label_272350;
        case 0x272354u: goto label_272354;
        case 0x272358u: goto label_272358;
        case 0x27235cu: goto label_27235c;
        case 0x272360u: goto label_272360;
        case 0x272364u: goto label_272364;
        case 0x272368u: goto label_272368;
        case 0x27236cu: goto label_27236c;
        case 0x272370u: goto label_272370;
        case 0x272374u: goto label_272374;
        case 0x272378u: goto label_272378;
        case 0x27237cu: goto label_27237c;
        case 0x272380u: goto label_272380;
        case 0x272384u: goto label_272384;
        case 0x272388u: goto label_272388;
        case 0x27238cu: goto label_27238c;
        case 0x272390u: goto label_272390;
        case 0x272394u: goto label_272394;
        case 0x272398u: goto label_272398;
        case 0x27239cu: goto label_27239c;
        case 0x2723a0u: goto label_2723a0;
        case 0x2723a4u: goto label_2723a4;
        case 0x2723a8u: goto label_2723a8;
        case 0x2723acu: goto label_2723ac;
        case 0x2723b0u: goto label_2723b0;
        case 0x2723b4u: goto label_2723b4;
        case 0x2723b8u: goto label_2723b8;
        case 0x2723bcu: goto label_2723bc;
        case 0x2723c0u: goto label_2723c0;
        case 0x2723c4u: goto label_2723c4;
        case 0x2723c8u: goto label_2723c8;
        case 0x2723ccu: goto label_2723cc;
        case 0x2723d0u: goto label_2723d0;
        case 0x2723d4u: goto label_2723d4;
        case 0x2723d8u: goto label_2723d8;
        case 0x2723dcu: goto label_2723dc;
        case 0x2723e0u: goto label_2723e0;
        case 0x2723e4u: goto label_2723e4;
        case 0x2723e8u: goto label_2723e8;
        case 0x2723ecu: goto label_2723ec;
        case 0x2723f0u: goto label_2723f0;
        case 0x2723f4u: goto label_2723f4;
        case 0x2723f8u: goto label_2723f8;
        case 0x2723fcu: goto label_2723fc;
        case 0x272400u: goto label_272400;
        case 0x272404u: goto label_272404;
        case 0x272408u: goto label_272408;
        case 0x27240cu: goto label_27240c;
        case 0x272410u: goto label_272410;
        case 0x272414u: goto label_272414;
        case 0x272418u: goto label_272418;
        case 0x27241cu: goto label_27241c;
        case 0x272420u: goto label_272420;
        case 0x272424u: goto label_272424;
        case 0x272428u: goto label_272428;
        case 0x27242cu: goto label_27242c;
        case 0x272430u: goto label_272430;
        case 0x272434u: goto label_272434;
        case 0x272438u: goto label_272438;
        case 0x27243cu: goto label_27243c;
        case 0x272440u: goto label_272440;
        case 0x272444u: goto label_272444;
        case 0x272448u: goto label_272448;
        case 0x27244cu: goto label_27244c;
        case 0x272450u: goto label_272450;
        case 0x272454u: goto label_272454;
        case 0x272458u: goto label_272458;
        case 0x27245cu: goto label_27245c;
        case 0x272460u: goto label_272460;
        case 0x272464u: goto label_272464;
        case 0x272468u: goto label_272468;
        case 0x27246cu: goto label_27246c;
        case 0x272470u: goto label_272470;
        case 0x272474u: goto label_272474;
        case 0x272478u: goto label_272478;
        case 0x27247cu: goto label_27247c;
        case 0x272480u: goto label_272480;
        case 0x272484u: goto label_272484;
        case 0x272488u: goto label_272488;
        case 0x27248cu: goto label_27248c;
        case 0x272490u: goto label_272490;
        case 0x272494u: goto label_272494;
        case 0x272498u: goto label_272498;
        case 0x27249cu: goto label_27249c;
        case 0x2724a0u: goto label_2724a0;
        case 0x2724a4u: goto label_2724a4;
        case 0x2724a8u: goto label_2724a8;
        case 0x2724acu: goto label_2724ac;
        case 0x2724b0u: goto label_2724b0;
        case 0x2724b4u: goto label_2724b4;
        case 0x2724b8u: goto label_2724b8;
        case 0x2724bcu: goto label_2724bc;
        case 0x2724c0u: goto label_2724c0;
        case 0x2724c4u: goto label_2724c4;
        case 0x2724c8u: goto label_2724c8;
        case 0x2724ccu: goto label_2724cc;
        case 0x2724d0u: goto label_2724d0;
        case 0x2724d4u: goto label_2724d4;
        case 0x2724d8u: goto label_2724d8;
        case 0x2724dcu: goto label_2724dc;
        case 0x2724e0u: goto label_2724e0;
        case 0x2724e4u: goto label_2724e4;
        case 0x2724e8u: goto label_2724e8;
        case 0x2724ecu: goto label_2724ec;
        case 0x2724f0u: goto label_2724f0;
        case 0x2724f4u: goto label_2724f4;
        case 0x2724f8u: goto label_2724f8;
        case 0x2724fcu: goto label_2724fc;
        case 0x272500u: goto label_272500;
        case 0x272504u: goto label_272504;
        case 0x272508u: goto label_272508;
        case 0x27250cu: goto label_27250c;
        case 0x272510u: goto label_272510;
        case 0x272514u: goto label_272514;
        case 0x272518u: goto label_272518;
        case 0x27251cu: goto label_27251c;
        case 0x272520u: goto label_272520;
        case 0x272524u: goto label_272524;
        case 0x272528u: goto label_272528;
        case 0x27252cu: goto label_27252c;
        case 0x272530u: goto label_272530;
        case 0x272534u: goto label_272534;
        case 0x272538u: goto label_272538;
        case 0x27253cu: goto label_27253c;
        case 0x272540u: goto label_272540;
        case 0x272544u: goto label_272544;
        case 0x272548u: goto label_272548;
        case 0x27254cu: goto label_27254c;
        case 0x272550u: goto label_272550;
        case 0x272554u: goto label_272554;
        case 0x272558u: goto label_272558;
        case 0x27255cu: goto label_27255c;
        case 0x272560u: goto label_272560;
        case 0x272564u: goto label_272564;
        case 0x272568u: goto label_272568;
        case 0x27256cu: goto label_27256c;
        default: break;
    }

    ctx->pc = 0x271eb0u;

label_271eb0:
    // 0x271eb0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x271eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_271eb4:
    // 0x271eb4: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x271eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_271eb8:
    // 0x271eb8: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x271eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_271ebc:
    // 0x271ebc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x271ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_271ec0:
    // 0x271ec0: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x271ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_271ec4:
    // 0x271ec4: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x271ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_271ec8:
    // 0x271ec8: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x271ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_271ecc:
    // 0x271ecc: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x271eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_271ed0:
    // 0x271ed0: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x271ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_271ed4:
    // 0x271ed4: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x271ed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_271ed8:
    // 0x271ed8: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x271ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_271edc:
    // 0x271edc: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x271edcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_271ee0:
    // 0x271ee0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x271ee0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_271ee4:
    // 0x271ee4: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x271ee4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_271ee8:
    // 0x271ee8: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x271ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_271eec:
    // 0x271eec: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x271eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
label_271ef0:
    // 0x271ef0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x271ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_271ef4:
    // 0x271ef4: 0x27b400b0  addiu       $s4, $sp, 0xB0
    ctx->pc = 0x271ef4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_271ef8:
    // 0x271ef8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x271ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_271efc:
    // 0x271efc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x271efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_271f00:
    // 0x271f00: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x271f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_271f04:
    // 0x271f04: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x271f04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_271f08:
    // 0x271f08: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x271f08u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_271f0c:
    // 0x271f0c: 0x27b600d0  addiu       $s6, $sp, 0xD0
    ctx->pc = 0x271f0cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_271f10:
    // 0x271f10: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x271f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_271f14:
    // 0x271f14: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_271f18:
    // 0x271f18: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x271f18u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271f1c:
    // 0x271f1c: 0x0  nop
    ctx->pc = 0x271f1cu;
    // NOP
label_271f20:
    // 0x271f20: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x271f20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_271f24:
    // 0x271f24: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x271f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_271f28:
    // 0x271f28: 0x0  nop
    ctx->pc = 0x271f28u;
    // NOP
label_271f2c:
    // 0x271f2c: 0x0  nop
    ctx->pc = 0x271f2cu;
    // NOP
label_271f30:
    // 0x271f30: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
label_271f34:
    if (ctx->pc == 0x271F34u) {
        ctx->pc = 0x271F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F30u;
        // 0x271f34: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F38u;
        goto label_271f38;
    }
    ctx->pc = 0x271F30u;
    {
        const bool branch_taken_0x271f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x271F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F30u;
        // 0x271f34: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f30) {
            ctx->pc = 0x271F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271f20;
        }
    }
    ctx->pc = 0x271F38u;
label_271f38:
    // 0x271f38: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x271f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_271f3c:
    // 0x271f3c: 0x26220490  addiu       $v0, $s1, 0x490
    ctx->pc = 0x271f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1168));
label_271f40:
    // 0x271f40: 0xfba000c0  sqc2        $vf0, 0xC0($sp)
    ctx->pc = 0x271f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[0]));
label_271f44:
    // 0x271f44: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x271f44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_271f48:
    // 0x271f48: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x271f48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_271f4c:
    // 0x271f4c: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x271f4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_271f50:
    // 0x271f50: 0xfba400c0  sqc2        $vf4, 0xC0($sp)
    ctx->pc = 0x271f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[4]));
label_271f54:
    // 0x271f54: 0xd8c40000  lqc2        $vf4, 0x0($a2)
    ctx->pc = 0x271f54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_271f58:
    // 0x271f58: 0xfba400b0  sqc2        $vf4, 0xB0($sp)
    ctx->pc = 0x271f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[4]));
label_271f5c:
    // 0x271f5c: 0x10940007  beq         $a0, $s4, . + 4 + (0x7 << 2)
label_271f60:
    if (ctx->pc == 0x271F60u) {
        ctx->pc = 0x271F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F5Cu;
        // 0x271f60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F64u;
        goto label_271f64;
    }
    ctx->pc = 0x271F5Cu;
    {
        const bool branch_taken_0x271f5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        ctx->pc = 0x271F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F5Cu;
        // 0x271f60: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f5c) {
            ctx->pc = 0x271F7Cu;
            goto label_271f7c;
        }
    }
    ctx->pc = 0x271F64u;
label_271f64:
    // 0x271f64: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x271f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f68:
    // 0x271f68: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x271f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_271f6c:
    // 0x271f6c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x271f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_271f70:
    // 0x271f70: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x271f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_271f74:
    // 0x271f74: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x271f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_271f78:
    // 0x271f78: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x271f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_271f7c:
    // 0x271f7c: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x271f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_271f80:
    // 0x271f80: 0xc07e060  jal         func_1F8180
label_271f84:
    if (ctx->pc == 0x271F84u) {
        ctx->pc = 0x271F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F80u;
        // 0x271f84: 0xc7ad0038  lwc1        $f13, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F88u;
        goto label_271f88;
    }
    ctx->pc = 0x271F80u;
    SET_GPR_U32(ctx, 31, 0x271F88u);
    ctx->pc = 0x271F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F80u;
    // 0x271f84: 0xc7ad0038  lwc1        $f13, 0x38($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x271F80u, 0x271F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F88u;
label_271f88:
    // 0x271f88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271f88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_271f8c:
    // 0x271f8c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271f90:
    // 0x271f90: 0xc051e62  jal         func_147988
label_271f94:
    if (ctx->pc == 0x271F94u) {
        ctx->pc = 0x271F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271F90u;
        // 0x271f94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271F98u;
        goto label_271f98;
    }
    ctx->pc = 0x271F90u;
    SET_GPR_U32(ctx, 31, 0x271F98u);
    ctx->pc = 0x271F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271F90u;
    // 0x271f94: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x271F90u, 0x271F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271F98u;
label_271f98:
    // 0x271f98: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x271f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_271f9c:
    // 0x271f9c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x271f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_271fa0:
    // 0x271fa0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x271fa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_271fa4:
    // 0x271fa4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x271fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_271fa8:
    // 0x271fa8: 0xc0b687e  jal         func_2DA1F8
label_271fac:
    if (ctx->pc == 0x271FACu) {
        ctx->pc = 0x271FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FA8u;
        // 0x271fac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FB0u;
        goto label_271fb0;
    }
    ctx->pc = 0x271FA8u;
    SET_GPR_U32(ctx, 31, 0x271FB0u);
    ctx->pc = 0x271FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271FA8u;
    // 0x271fac: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA1F8u, 0x271FA8u, 0x271FB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271FB0u;
label_271fb0:
    // 0x271fb0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x271fb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_271fb4:
    // 0x271fb4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x271fb4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_271fb8:
    // 0x271fb8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x271fb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_271fbc:
    // 0x271fbc: 0x0  nop
    ctx->pc = 0x271fbcu;
    // NOP
label_271fc0:
    // 0x271fc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_271fc4:
    if (ctx->pc == 0x271FC4u) {
        ctx->pc = 0x271FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FC0u;
        // 0x271fc4: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FC8u;
        goto label_271fc8;
    }
    ctx->pc = 0x271FC0u;
    {
        const bool branch_taken_0x271fc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x271fc0) {
            ctx->pc = 0x271FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271FC0u;
            // 0x271fc4: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x271FC8u;
            goto label_271fc8;
        }
    }
    ctx->pc = 0x271FC8u;
label_271fc8:
    // 0x271fc8: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x271fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_271fcc:
    // 0x271fcc: 0x24020264  addiu       $v0, $zero, 0x264
    ctx->pc = 0x271fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 612));
label_271fd0:
    // 0x271fd0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_271fd4:
    if (ctx->pc == 0x271FD4u) {
        ctx->pc = 0x271FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FD0u;
        // 0x271fd4: 0x24020265  addiu       $v0, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        ctx->pc = 0x271FD8u;
        goto label_271fd8;
    }
    ctx->pc = 0x271FD0u;
    {
        const bool branch_taken_0x271fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x271FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271FD0u;
        // 0x271fd4: 0x24020265  addiu       $v0, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271fd0) {
            ctx->pc = 0x271FF4u;
            goto label_271ff4;
        }
    }
    ctx->pc = 0x271FD8u;
label_271fd8:
    // 0x271fd8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_271fdc:
    if (ctx->pc == 0x271FDCu) {
        ctx->pc = 0x271FE0u;
        goto label_271fe0;
    }
    ctx->pc = 0x271FD8u;
    {
        const bool branch_taken_0x271fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x271fd8) {
            ctx->pc = 0x272028u;
            goto label_272028;
        }
    }
    ctx->pc = 0x271FE0u;
label_271fe0:
    // 0x271fe0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x271fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_271fe4:
    // 0x271fe4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x271fe4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_271fe8:
    // 0x271fe8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x271fe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_271fec:
    // 0x271fec: 0x10000019  b           . + 4 + (0x19 << 2)
label_271ff0:
    if (ctx->pc == 0x271FF0u) {
        ctx->pc = 0x271FF4u;
        goto label_271ff4;
    }
    ctx->pc = 0x271FECu;
    {
        const bool branch_taken_0x271fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271fec) {
            ctx->pc = 0x272054u;
            goto label_272054;
        }
    }
    ctx->pc = 0x271FF4u;
label_271ff4:
    // 0x271ff4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x271ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_271ff8:
    // 0x271ff8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x271ff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_271ffc:
    // 0x271ffc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272000:
    // 0x272000: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x272000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_272004:
    // 0x272004: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x272004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_272008:
    // 0x272008: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x272008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27200c:
    // 0x27200c: 0x0  nop
    ctx->pc = 0x27200cu;
    // NOP
label_272010:
    // 0x272010: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_272014:
    if (ctx->pc == 0x272014u) {
        ctx->pc = 0x272018u;
        goto label_272018;
    }
    ctx->pc = 0x272010u;
    {
        const bool branch_taken_0x272010 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272010) {
            ctx->pc = 0x272054u;
            goto label_272054;
        }
    }
    ctx->pc = 0x272018u;
label_272018:
    // 0x272018: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x272018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_27201c:
    // 0x27201c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27201cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_272020:
    // 0x272020: 0x1000000c  b           . + 4 + (0xC << 2)
label_272024:
    if (ctx->pc == 0x272024u) {
        ctx->pc = 0x272028u;
        goto label_272028;
    }
    ctx->pc = 0x272020u;
    {
        const bool branch_taken_0x272020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x272020) {
            ctx->pc = 0x272054u;
            goto label_272054;
        }
    }
    ctx->pc = 0x272028u;
label_272028:
    // 0x272028: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x272028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_27202c:
    // 0x27202c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x27202cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_272030:
    // 0x272030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_272034:
    // 0x272034: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x272034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_272038:
    // 0x272038: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x272038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_27203c:
    // 0x27203c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x27203cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272040:
    // 0x272040: 0x0  nop
    ctx->pc = 0x272040u;
    // NOP
label_272044:
    // 0x272044: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_272048:
    if (ctx->pc == 0x272048u) {
        ctx->pc = 0x27204Cu;
        goto label_27204c;
    }
    ctx->pc = 0x272044u;
    {
        const bool branch_taken_0x272044 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272044) {
            ctx->pc = 0x272054u;
            goto label_272054;
        }
    }
    ctx->pc = 0x27204Cu;
label_27204c:
    // 0x27204c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x27204cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_272050:
    // 0x272050: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x272050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_272054:
    // 0x272054: 0x52b00008  beql        $s5, $s0, . + 4 + (0x8 << 2)
label_272058:
    if (ctx->pc == 0x272058u) {
        ctx->pc = 0x272058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272054u;
        // 0x272058: 0xc6200118  lwc1        $f0, 0x118($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27205Cu;
        goto label_27205c;
    }
    ctx->pc = 0x272054u;
    {
        const bool branch_taken_0x272054 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 16));
        if (branch_taken_0x272054) {
            ctx->pc = 0x272058u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272054u;
            // 0x272058: 0xc6200118  lwc1        $f0, 0x118($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x272078u;
            goto label_272078;
        }
    }
    ctx->pc = 0x27205Cu;
label_27205c:
    // 0x27205c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x27205cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272060:
    // 0x272060: 0xc6210490  lwc1        $f1, 0x490($s1)
    ctx->pc = 0x272060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272064:
    // 0x272064: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x272064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_272068:
    // 0x272068: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x272068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_27206c:
    // 0x27206c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x27206cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_272070:
    // 0x272070: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x272070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_272074:
    // 0x272074: 0xc6200118  lwc1        $f0, 0x118($s1)
    ctx->pc = 0x272074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272078:
    // 0x272078: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x272078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27207c:
    // 0x27207c: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x27207cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_272080:
    // 0x272080: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x272080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_272084:
    // 0x272084: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x272084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_272088:
    // 0x272088: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x272088u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27208c:
    // 0x27208c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x27208cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_272090:
    // 0x272090: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x272090u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_272094:
    // 0x272094: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x272094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_272098:
    // 0x272098: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x272098u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_27209c:
    // 0x27209c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x27209cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2720a0:
    // 0x2720a0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2720a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2720a4:
    // 0x2720a4: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x2720a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_2720a8:
    // 0x2720a8: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x2720a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_2720ac:
    // 0x2720ac: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x2720acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_2720b0:
    // 0x2720b0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x2720b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_2720b4:
    // 0x2720b4: 0xc0c28ac  jal         func_30A2B0
label_2720b8:
    if (ctx->pc == 0x2720B8u) {
        ctx->pc = 0x2720B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2720B4u;
        // 0x2720b8: 0xe7a10054  swc1        $f1, 0x54($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2720BCu;
        goto label_2720bc;
    }
    ctx->pc = 0x2720B4u;
    SET_GPR_U32(ctx, 31, 0x2720BCu);
    ctx->pc = 0x2720B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2720B4u;
    // 0x2720b8: 0xe7a10054  swc1        $f1, 0x54($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2720B4u, 0x2720BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2720BCu;
label_2720bc:
    // 0x2720bc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x2720bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_2720c0:
    // 0x2720c0: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2720c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2720c4:
    // 0x2720c4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x2720c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2720c8:
    // 0x2720c8: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x2720c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_2720cc:
    // 0x2720cc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2720ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_2720d0:
    // 0x2720d0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2720d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2720d4:
    // 0x2720d4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2720d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2720d8:
    // 0x2720d8: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2720d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2720dc:
    // 0x2720dc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2720dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2720e0:
    // 0x2720e0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2720e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2720e4:
    // 0x2720e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2720e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2720e8:
    // 0x2720e8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x2720e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_2720ec:
    // 0x2720ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2720ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2720f0:
    // 0x2720f0: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x2720f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
label_2720f4:
    // 0x2720f4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2720f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2720f8:
    // 0x2720f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2720f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2720fc:
    // 0x2720fc: 0x24090124  addiu       $t1, $zero, 0x124
    ctx->pc = 0x2720fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_272100:
    // 0x272100: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x272100u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272104:
    // 0x272104: 0xc04c784  jal         func_131E10
label_272108:
    if (ctx->pc == 0x272108u) {
        ctx->pc = 0x272108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272104u;
        // 0x272108: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27210Cu;
        goto label_27210c;
    }
    ctx->pc = 0x272104u;
    SET_GPR_U32(ctx, 31, 0x27210Cu);
    ctx->pc = 0x272108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272104u;
    // 0x272108: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x272104u, 0x27210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27210Cu;
label_27210c:
    // 0x27210c: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_272110:
    if (ctx->pc == 0x272110u) {
        ctx->pc = 0x272110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27210Cu;
        // 0x272110: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272114u;
        goto label_272114;
    }
    ctx->pc = 0x27210Cu;
    {
        const bool branch_taken_0x27210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x272110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27210Cu;
        // 0x272110: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27210c) {
            ctx->pc = 0x27220Cu;
            goto label_27220c;
        }
    }
    ctx->pc = 0x272114u;
label_272114:
    // 0x272114: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x272114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_272118:
    // 0x272118: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x272118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_27211c:
    // 0x27211c: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_272120:
    if (ctx->pc == 0x272120u) {
        ctx->pc = 0x272120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27211Cu;
        // 0x272120: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272124u;
        goto label_272124;
    }
    ctx->pc = 0x27211Cu;
    {
        const bool branch_taken_0x27211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x272120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27211Cu;
        // 0x272120: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27211c) {
            ctx->pc = 0x2722A0u;
            goto label_2722a0;
        }
    }
    ctx->pc = 0x272124u;
label_272124:
    // 0x272124: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x272124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_272128:
    // 0x272128: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x272128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_27212c:
    // 0x27212c: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x27212cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
label_272130:
    // 0x272130: 0x24030409  addiu       $v1, $zero, 0x409
    ctx->pc = 0x272130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
label_272134:
    // 0x272134: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_272138:
    if (ctx->pc == 0x272138u) {
        ctx->pc = 0x272138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272134u;
        // 0x272138: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27213Cu;
        goto label_27213c;
    }
    ctx->pc = 0x272134u;
    {
        const bool branch_taken_0x272134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x272138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272134u;
        // 0x272138: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272134) {
            ctx->pc = 0x2721BCu;
            goto label_2721bc;
        }
    }
    ctx->pc = 0x27213Cu;
label_27213c:
    // 0x27213c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x27213cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_272140:
    // 0x272140: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x272140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
label_272144:
    // 0x272144: 0x90830015  lbu         $v1, 0x15($a0)
    ctx->pc = 0x272144u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
label_272148:
    // 0x272148: 0x319fa  dsrl        $v1, $v1, 7
    ctx->pc = 0x272148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 7);
label_27214c:
    // 0x27214c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_272150:
    if (ctx->pc == 0x272150u) {
        ctx->pc = 0x272150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27214Cu;
        // 0x272150: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272154u;
        goto label_272154;
    }
    ctx->pc = 0x27214Cu;
    {
        const bool branch_taken_0x27214c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27214Cu;
        // 0x272150: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27214c) {
            ctx->pc = 0x2721BCu;
            goto label_2721bc;
        }
    }
    ctx->pc = 0x272154u;
label_272154:
    // 0x272154: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x272154u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
label_272158:
    // 0x272158: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272158u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27215c:
    // 0x27215c: 0x3c01c204  lui         $at, 0xC204
    ctx->pc = 0x27215cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49668 << 16));
label_272160:
    // 0x272160: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x272160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_272164:
    // 0x272164: 0x3c01c188  lui         $at, 0xC188
    ctx->pc = 0x272164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49544 << 16));
label_272168:
    // 0x272168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27216c:
    // 0x27216c: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x27216cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_272170:
    // 0x272170: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x272170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_272174:
    // 0x272174: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x272174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_272178:
    // 0x272178: 0xc07dfac  jal         func_1F7EB0
label_27217c:
    if (ctx->pc == 0x27217Cu) {
        ctx->pc = 0x27217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272178u;
        // 0x27217c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272180u;
        goto label_272180;
    }
    ctx->pc = 0x272178u;
    SET_GPR_U32(ctx, 31, 0x272180u);
    ctx->pc = 0x27217Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272178u;
    // 0x27217c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x272178u, 0x272180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272180u;
label_272180:
    // 0x272180: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x272180u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_272184:
    // 0x272184: 0x3c014261  lui         $at, 0x4261
    ctx->pc = 0x272184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16993 << 16));
label_272188:
    // 0x272188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27218c:
    // 0x27218c: 0x0  nop
    ctx->pc = 0x27218cu;
    // NOP
label_272190:
    // 0x272190: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x272190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_272194:
    // 0x272194: 0x0  nop
    ctx->pc = 0x272194u;
    // NOP
label_272198:
    // 0x272198: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_27219c:
    if (ctx->pc == 0x27219Cu) {
        ctx->pc = 0x2721A0u;
        goto label_2721a0;
    }
    ctx->pc = 0x272198u;
    {
        const bool branch_taken_0x272198 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x272198) {
            ctx->pc = 0x2721BCu;
            goto label_2721bc;
        }
    }
    ctx->pc = 0x2721A0u;
label_2721a0:
    // 0x2721a0: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x2721a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_2721a4:
    // 0x2721a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2721a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2721a8:
    // 0x2721a8: 0x0  nop
    ctx->pc = 0x2721a8u;
    // NOP
label_2721ac:
    // 0x2721ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2721acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2721b0:
    // 0x2721b0: 0x0  nop
    ctx->pc = 0x2721b0u;
    // NOP
label_2721b4:
    // 0x2721b4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2721b8:
    if (ctx->pc == 0x2721B8u) {
        ctx->pc = 0x2721B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721B4u;
        // 0x2721b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721BCu;
        goto label_2721bc;
    }
    ctx->pc = 0x2721B4u;
    {
        const bool branch_taken_0x2721b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2721b4) {
            ctx->pc = 0x2721B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2721B4u;
            // 0x2721b8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2721BCu;
            goto label_2721bc;
        }
    }
    ctx->pc = 0x2721BCu;
label_2721bc:
    // 0x2721bc: 0x16000085  bnez        $s0, . + 4 + (0x85 << 2)
label_2721c0:
    if (ctx->pc == 0x2721C0u) {
        ctx->pc = 0x2721C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721BCu;
        // 0x2721c0: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721C4u;
        goto label_2721c4;
    }
    ctx->pc = 0x2721BCu;
    {
        const bool branch_taken_0x2721bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2721C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721BCu;
        // 0x2721c0: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721bc) {
            ctx->pc = 0x2723D4u;
            goto label_2723d4;
        }
    }
    ctx->pc = 0x2721C4u;
label_2721c4:
    // 0x2721c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2721c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2721c8:
    // 0x2721c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2721c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2721cc:
    // 0x2721cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2721ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2721d0:
    // 0x2721d0: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x2721d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2721d4:
    // 0x2721d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2721d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2721d8:
    // 0x2721d8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2721d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2721dc:
    // 0x2721dc: 0x40f809  jalr        $v0
label_2721e0:
    if (ctx->pc == 0x2721E0u) {
        ctx->pc = 0x2721E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721DCu;
        // 0x2721e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2721E4u;
        goto label_2721e4;
    }
    ctx->pc = 0x2721DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2721E4u);
        ctx->pc = 0x2721E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721DCu;
        // 0x2721e0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2721DCu, 0x2721E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2721E4u;
label_2721e4:
    // 0x2721e4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2721e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_2721e8:
    // 0x2721e8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2721e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2721ec:
    // 0x2721ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2721ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2721f0:
    // 0x2721f0: 0x0  nop
    ctx->pc = 0x2721f0u;
    // NOP
label_2721f4:
    // 0x2721f4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2721f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2721f8:
    // 0x2721f8: 0x0  nop
    ctx->pc = 0x2721f8u;
    // NOP
label_2721fc:
    // 0x2721fc: 0x450100bd  bc1t        . + 4 + (0xBD << 2)
label_272200:
    if (ctx->pc == 0x272200u) {
        ctx->pc = 0x272200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721FCu;
        // 0x272200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272204u;
        goto label_272204;
    }
    ctx->pc = 0x2721FCu;
    {
        const bool branch_taken_0x2721fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x272200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2721FCu;
        // 0x272200: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2721fc) {
            ctx->pc = 0x2724F4u;
            goto label_2724f4;
        }
    }
    ctx->pc = 0x272204u;
label_272204:
    // 0x272204: 0x100000c3  b           . + 4 + (0xC3 << 2)
label_272208:
    if (ctx->pc == 0x272208u) {
        ctx->pc = 0x272208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272204u;
        // 0x272208: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27220Cu;
        goto label_27220c;
    }
    ctx->pc = 0x272204u;
    {
        const bool branch_taken_0x272204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272204u;
        // 0x272208: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272204) {
            ctx->pc = 0x272514u;
            goto label_272514;
        }
    }
    ctx->pc = 0x27220Cu;
label_27220c:
    // 0x27220c: 0xc6200118  lwc1        $f0, 0x118($s1)
    ctx->pc = 0x27220cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_272210:
    // 0x272210: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x272210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272214:
    // 0x272214: 0x3c01be99  lui         $at, 0xBE99
    ctx->pc = 0x272214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48793 << 16));
label_272218:
    // 0x272218: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x272218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_27221c:
    // 0x27221c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27221cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_272220:
    // 0x272220: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x272220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_272224:
    // 0x272224: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x272224u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_272228:
    // 0x272228: 0xe7b60064  swc1        $f22, 0x64($sp)
    ctx->pc = 0x272228u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_27222c:
    // 0x27222c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x27222cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_272230:
    // 0x272230: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x272230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272234:
    // 0x272234: 0xc0c28ac  jal         func_30A2B0
label_272238:
    if (ctx->pc == 0x272238u) {
        ctx->pc = 0x272238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272234u;
        // 0x272238: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27223Cu;
        goto label_27223c;
    }
    ctx->pc = 0x272234u;
    SET_GPR_U32(ctx, 31, 0x27223Cu);
    ctx->pc = 0x272238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272234u;
    // 0x272238: 0xe7a00068  swc1        $f0, 0x68($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x272234u, 0x27223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27223Cu;
label_27223c:
    // 0x27223c: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x27223cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_272240:
    // 0x272240: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x272240u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_272244:
    // 0x272244: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x272244u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_272248:
    // 0x272248: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x272248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_27224c:
    // 0x27224c: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x27224cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
label_272250:
    // 0x272250: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x272250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_272254:
    // 0x272254: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x272254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_272258:
    // 0x272258: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x272258u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27225c:
    // 0x27225c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x27225cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_272260:
    // 0x272260: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x272260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_272264:
    // 0x272264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272268:
    // 0x272268: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x272268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_27226c:
    // 0x27226c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27226cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272270:
    // 0x272270: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x272270u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_272274:
    // 0x272274: 0x24090124  addiu       $t1, $zero, 0x124
    ctx->pc = 0x272274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
label_272278:
    // 0x272278: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x272278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_27227c:
    // 0x27227c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x27227cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272280:
    // 0x272280: 0xc04c784  jal         func_131E10
label_272284:
    if (ctx->pc == 0x272284u) {
        ctx->pc = 0x272284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272280u;
        // 0x272284: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272288u;
        goto label_272288;
    }
    ctx->pc = 0x272280u;
    SET_GPR_U32(ctx, 31, 0x272288u);
    ctx->pc = 0x272284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272280u;
    // 0x272284: 0xafb00020  sw          $s0, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x272280u, 0x272288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272288u;
label_272288:
    // 0x272288: 0x104000a9  beqz        $v0, . + 4 + (0xA9 << 2)
label_27228c:
    if (ctx->pc == 0x27228Cu) {
        ctx->pc = 0x27228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272288u;
        // 0x27228c: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272290u;
        goto label_272290;
    }
    ctx->pc = 0x272288u;
    {
        const bool branch_taken_0x272288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272288u;
        // 0x27228c: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272288) {
            ctx->pc = 0x272530u;
            goto label_272530;
        }
    }
    ctx->pc = 0x272290u;
label_272290:
    // 0x272290: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x272290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_272294:
    // 0x272294: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x272294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_272298:
    // 0x272298: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_27229c:
    if (ctx->pc == 0x27229Cu) {
        ctx->pc = 0x27229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272298u;
        // 0x27229c: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722A0u;
        goto label_2722a0;
    }
    ctx->pc = 0x272298u;
    {
        const bool branch_taken_0x272298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272298u;
        // 0x27229c: 0xc7ac0040  lwc1        $f12, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x272298) {
            ctx->pc = 0x272334u;
            goto label_272334;
        }
    }
    ctx->pc = 0x2722A0u;
label_2722a0:
    // 0x2722a0: 0xc07e060  jal         func_1F8180
label_2722a4:
    if (ctx->pc == 0x2722A4u) {
        ctx->pc = 0x2722A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722A0u;
        // 0x2722a4: 0xc7ad0048  lwc1        $f13, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722A8u;
        goto label_2722a8;
    }
    ctx->pc = 0x2722A0u;
    SET_GPR_U32(ctx, 31, 0x2722A8u);
    ctx->pc = 0x2722A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2722A0u;
    // 0x2722a4: 0xc7ad0048  lwc1        $f13, 0x48($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2722A0u, 0x2722A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722A8u;
label_2722a8:
    // 0x2722a8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2722a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_2722ac:
    // 0x2722ac: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2722acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2722b0:
    // 0x2722b0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2722b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2722b4:
    // 0x2722b4: 0x0  nop
    ctx->pc = 0x2722b4u;
    // NOP
label_2722b8:
    // 0x2722b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2722b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2722bc:
    // 0x2722bc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2722bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2722c0:
    // 0x2722c0: 0xc07df52  jal         func_1F7D48
label_2722c4:
    if (ctx->pc == 0x2722C4u) {
        ctx->pc = 0x2722C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722C0u;
        // 0x2722c4: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722C8u;
        goto label_2722c8;
    }
    ctx->pc = 0x2722C0u;
    SET_GPR_U32(ctx, 31, 0x2722C8u);
    ctx->pc = 0x2722C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2722C0u;
    // 0x2722c4: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2722C0u, 0x2722C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2722C8u;
label_2722c8:
    // 0x2722c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2722c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2722cc:
    // 0x2722cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2722ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2722d0:
    // 0x2722d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2722d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2722d4:
    // 0x2722d4: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x2722d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_2722d8:
    // 0x2722d8: 0x24020223  addiu       $v0, $zero, 0x223
    ctx->pc = 0x2722d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 547));
label_2722dc:
    // 0x2722dc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x2722dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_2722e0:
    // 0x2722e0: 0xe6211710  swc1        $f1, 0x1710($s1)
    ctx->pc = 0x2722e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5904), bits); }
label_2722e4:
    // 0x2722e4: 0xa23002f4  sb          $s0, 0x2F4($s1)
    ctx->pc = 0x2722e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 16));
label_2722e8:
    // 0x2722e8: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x2722e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
label_2722ec:
    // 0x2722ec: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x2722ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_2722f0:
    // 0x2722f0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2722f4:
    if (ctx->pc == 0x2722F4u) {
        ctx->pc = 0x2722F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722F0u;
        // 0x2722f4: 0xa23002f7  sb          $s0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2722F8u;
        goto label_2722f8;
    }
    ctx->pc = 0x2722F0u;
    {
        const bool branch_taken_0x2722f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2722F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2722F0u;
        // 0x2722f4: 0xa23002f7  sb          $s0, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2722f0) {
            ctx->pc = 0x272304u;
            goto label_272304;
        }
    }
    ctx->pc = 0x2722F8u;
label_2722f8:
    // 0x2722f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2722f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2722fc:
    // 0x2722fc: 0xae201710  sw          $zero, 0x1710($s1)
    ctx->pc = 0x2722fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5904), GPR_U32(ctx, 0));
label_272300:
    // 0x272300: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x272300u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_272304:
    // 0x272304: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x272304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_272308:
    // 0x272308: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x272308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27230c:
    // 0x27230c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x27230cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
label_272310:
    // 0x272310: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x272310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272314:
    // 0x272314: 0x24060107  addiu       $a2, $zero, 0x107
    ctx->pc = 0x272314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
label_272318:
    // 0x272318: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27231c:
    // 0x27231c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27231cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272320:
    // 0x272320: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x272320u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272324:
    // 0x272324: 0xc0b2e92  jal         func_2CBA48
label_272328:
    if (ctx->pc == 0x272328u) {
        ctx->pc = 0x272328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272324u;
        // 0x272328: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27232Cu;
        goto label_27232c;
    }
    ctx->pc = 0x272324u;
    SET_GPR_U32(ctx, 31, 0x27232Cu);
    ctx->pc = 0x272328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272324u;
    // 0x272328: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x272324u, 0x27232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27232Cu;
label_27232c:
    // 0x27232c: 0x10000081  b           . + 4 + (0x81 << 2)
label_272330:
    if (ctx->pc == 0x272330u) {
        ctx->pc = 0x272330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27232Cu;
        // 0x272330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272334u;
        goto label_272334;
    }
    ctx->pc = 0x27232Cu;
    {
        const bool branch_taken_0x27232c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27232Cu;
        // 0x272330: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27232c) {
            ctx->pc = 0x272534u;
            goto label_272534;
        }
    }
    ctx->pc = 0x272334u;
label_272334:
    // 0x272334: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x272334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
label_272338:
    // 0x272338: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x272338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_27233c:
    // 0x27233c: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x27233cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 31312)));
label_272340:
    // 0x272340: 0x24030409  addiu       $v1, $zero, 0x409
    ctx->pc = 0x272340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1033));
label_272344:
    // 0x272344: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_272348:
    if (ctx->pc == 0x272348u) {
        ctx->pc = 0x272348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272344u;
        // 0x272348: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27234Cu;
        goto label_27234c;
    }
    ctx->pc = 0x272344u;
    {
        const bool branch_taken_0x272344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x272348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272344u;
        // 0x272348: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272344) {
            ctx->pc = 0x2723CCu;
            goto label_2723cc;
        }
    }
    ctx->pc = 0x27234Cu;
label_27234c:
    // 0x27234c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x27234cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_272350:
    // 0x272350: 0x8c449b70  lw          $a0, -0x6490($v0)
    ctx->pc = 0x272350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941552)));
label_272354:
    // 0x272354: 0x90830015  lbu         $v1, 0x15($a0)
    ctx->pc = 0x272354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 21)));
label_272358:
    // 0x272358: 0x319fa  dsrl        $v1, $v1, 7
    ctx->pc = 0x272358u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 7);
label_27235c:
    // 0x27235c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_272360:
    if (ctx->pc == 0x272360u) {
        ctx->pc = 0x272360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27235Cu;
        // 0x272360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272364u;
        goto label_272364;
    }
    ctx->pc = 0x27235Cu;
    {
        const bool branch_taken_0x27235c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27235Cu;
        // 0x272360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27235c) {
            ctx->pc = 0x2723CCu;
            goto label_2723cc;
        }
    }
    ctx->pc = 0x272364u;
label_272364:
    // 0x272364: 0x3c01c080  lui         $at, 0xC080
    ctx->pc = 0x272364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49280 << 16));
label_272368:
    // 0x272368: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272368u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27236c:
    // 0x27236c: 0x3c01c204  lui         $at, 0xC204
    ctx->pc = 0x27236cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49668 << 16));
label_272370:
    // 0x272370: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x272370u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_272374:
    // 0x272374: 0x3c01c188  lui         $at, 0xC188
    ctx->pc = 0x272374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49544 << 16));
label_272378:
    // 0x272378: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27237c:
    // 0x27237c: 0x8e2500f0  lw          $a1, 0xF0($s1)
    ctx->pc = 0x27237cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_272380:
    // 0x272380: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x272380u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_272384:
    // 0x272384: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x272384u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_272388:
    // 0x272388: 0xc07dfac  jal         func_1F7EB0
label_27238c:
    if (ctx->pc == 0x27238Cu) {
        ctx->pc = 0x27238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272388u;
        // 0x27238c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272390u;
        goto label_272390;
    }
    ctx->pc = 0x272388u;
    SET_GPR_U32(ctx, 31, 0x272390u);
    ctx->pc = 0x27238Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272388u;
    // 0x27238c: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x272388u, 0x272390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272390u;
label_272390:
    // 0x272390: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x272390u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_272394:
    // 0x272394: 0x3c014261  lui         $at, 0x4261
    ctx->pc = 0x272394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16993 << 16));
label_272398:
    // 0x272398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27239c:
    // 0x27239c: 0x0  nop
    ctx->pc = 0x27239cu;
    // NOP
label_2723a0:
    // 0x2723a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2723a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2723a4:
    // 0x2723a4: 0x0  nop
    ctx->pc = 0x2723a4u;
    // NOP
label_2723a8:
    // 0x2723a8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2723ac:
    if (ctx->pc == 0x2723ACu) {
        ctx->pc = 0x2723B0u;
        goto label_2723b0;
    }
    ctx->pc = 0x2723A8u;
    {
        const bool branch_taken_0x2723a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2723a8) {
            ctx->pc = 0x2723CCu;
            goto label_2723cc;
        }
    }
    ctx->pc = 0x2723B0u;
label_2723b0:
    // 0x2723b0: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x2723b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_2723b4:
    // 0x2723b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2723b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2723b8:
    // 0x2723b8: 0x0  nop
    ctx->pc = 0x2723b8u;
    // NOP
label_2723bc:
    // 0x2723bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2723bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2723c0:
    // 0x2723c0: 0x0  nop
    ctx->pc = 0x2723c0u;
    // NOP
label_2723c4:
    // 0x2723c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2723c8:
    if (ctx->pc == 0x2723C8u) {
        ctx->pc = 0x2723C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723C4u;
        // 0x2723c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2723CCu;
        goto label_2723cc;
    }
    ctx->pc = 0x2723C4u;
    {
        const bool branch_taken_0x2723c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2723c4) {
            ctx->pc = 0x2723C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2723C4u;
            // 0x2723c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2723CCu;
            goto label_2723cc;
        }
    }
    ctx->pc = 0x2723CCu;
label_2723cc:
    // 0x2723cc: 0x12000039  beqz        $s0, . + 4 + (0x39 << 2)
label_2723d0:
    if (ctx->pc == 0x2723D0u) {
        ctx->pc = 0x2723D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723CCu;
        // 0x2723d0: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2723D4u;
        goto label_2723d4;
    }
    ctx->pc = 0x2723CCu;
    {
        const bool branch_taken_0x2723cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2723D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723CCu;
        // 0x2723d0: 0x8e230214  lw          $v1, 0x214($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2723cc) {
            ctx->pc = 0x2724B4u;
            goto label_2724b4;
        }
    }
    ctx->pc = 0x2723D4u;
label_2723d4:
    // 0x2723d4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2723d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2723d8:
    // 0x2723d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2723d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2723dc:
    // 0x2723dc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2723dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2723e0:
    // 0x2723e0: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x2723e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2723e4:
    // 0x2723e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2723e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2723e8:
    // 0x2723e8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2723e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2723ec:
    // 0x2723ec: 0x40f809  jalr        $v0
label_2723f0:
    if (ctx->pc == 0x2723F0u) {
        ctx->pc = 0x2723F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723ECu;
        // 0x2723f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2723F4u;
        goto label_2723f4;
    }
    ctx->pc = 0x2723ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2723F4u);
        ctx->pc = 0x2723F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723ECu;
        // 0x2723f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2723ECu, 0x2723F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2723F4u;
label_2723f4:
    // 0x2723f4: 0xc7ac0040  lwc1        $f12, 0x40($sp)
    ctx->pc = 0x2723f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2723f8:
    // 0x2723f8: 0xc07e060  jal         func_1F8180
label_2723fc:
    if (ctx->pc == 0x2723FCu) {
        ctx->pc = 0x2723FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2723F8u;
        // 0x2723fc: 0xc7ad0048  lwc1        $f13, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272400u;
        goto label_272400;
    }
    ctx->pc = 0x2723F8u;
    SET_GPR_U32(ctx, 31, 0x272400u);
    ctx->pc = 0x2723FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2723F8u;
    // 0x2723fc: 0xc7ad0048  lwc1        $f13, 0x48($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x2723F8u, 0x272400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272400u;
label_272400:
    // 0x272400: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x272400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_272404:
    // 0x272404: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x272404u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_272408:
    // 0x272408: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x272408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27240c:
    // 0x27240c: 0x0  nop
    ctx->pc = 0x27240cu;
    // NOP
label_272410:
    // 0x272410: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x272410u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_272414:
    // 0x272414: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x272414u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_272418:
    // 0x272418: 0xc07df52  jal         func_1F7D48
label_27241c:
    if (ctx->pc == 0x27241Cu) {
        ctx->pc = 0x27241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272418u;
        // 0x27241c: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x272420u;
        goto label_272420;
    }
    ctx->pc = 0x272418u;
    SET_GPR_U32(ctx, 31, 0x272420u);
    ctx->pc = 0x27241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272418u;
    // 0x27241c: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x272418u, 0x272420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272420u;
label_272420:
    // 0x272420: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x272420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_272424:
    // 0x272424: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x272424u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_272428:
    // 0x272428: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x272428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27242c:
    // 0x27242c: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x27242cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_272430:
    // 0x272430: 0x24050057  addiu       $a1, $zero, 0x57
    ctx->pc = 0x272430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_272434:
    // 0x272434: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x272434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_272438:
    // 0x272438: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27243c:
    // 0x27243c: 0xc0c1a0e  jal         func_306838
label_272440:
    if (ctx->pc == 0x272440u) {
        ctx->pc = 0x272440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27243Cu;
        // 0x272440: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272444u;
        goto label_272444;
    }
    ctx->pc = 0x27243Cu;
    SET_GPR_U32(ctx, 31, 0x272444u);
    ctx->pc = 0x272440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27243Cu;
    // 0x272440: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306838u, 0x27243Cu, 0x272444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272444u;
label_272444:
    // 0x272444: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x272444u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_272448:
    // 0x272448: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x272448u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_27244c:
    // 0x27244c: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x27244cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
label_272450:
    // 0x272450: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x272450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272454:
    // 0x272454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x272454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272458:
    // 0x272458: 0x240600d2  addiu       $a2, $zero, 0xD2
    ctx->pc = 0x272458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_27245c:
    // 0x27245c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27245cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272460:
    // 0x272460: 0xc0b2e5a  jal         func_2CB968
label_272464:
    if (ctx->pc == 0x272464u) {
        ctx->pc = 0x272464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272460u;
        // 0x272464: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272468u;
        goto label_272468;
    }
    ctx->pc = 0x272460u;
    SET_GPR_U32(ctx, 31, 0x272468u);
    ctx->pc = 0x272464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x272460u;
    // 0x272464: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x272460u, 0x272468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272468u;
label_272468:
    // 0x272468: 0x8e2700f0  lw          $a3, 0xF0($s1)
    ctx->pc = 0x272468u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_27246c:
    // 0x27246c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27246cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_272470:
    // 0x272470: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x272470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272474:
    // 0x272474: 0x240600d3  addiu       $a2, $zero, 0xD3
    ctx->pc = 0x272474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 211));
label_272478:
    // 0x272478: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x272478u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27247c:
    // 0x27247c: 0xc0b2e5a  jal         func_2CB968
label_272480:
    if (ctx->pc == 0x272480u) {
        ctx->pc = 0x272480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27247Cu;
        // 0x272480: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272484u;
        goto label_272484;
    }
    ctx->pc = 0x27247Cu;
    SET_GPR_U32(ctx, 31, 0x272484u);
    ctx->pc = 0x272480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27247Cu;
    // 0x272480: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x27247Cu, 0x272484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x272484u;
label_272484:
    // 0x272484: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x272484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_272488:
    // 0x272488: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x272488u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27248c:
    // 0x27248c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27248cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_272490:
    // 0x272490: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x272490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_272494:
    // 0x272494: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x272494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272498:
    // 0x272498: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x272498u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_27249c:
    // 0x27249c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27249cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2724a0:
    // 0x2724a0: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x2724a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
label_2724a4:
    // 0x2724a4: 0xa22402f5  sb          $a0, 0x2F5($s1)
    ctx->pc = 0x2724a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 4));
label_2724a8:
    // 0x2724a8: 0xa22502f7  sb          $a1, 0x2F7($s1)
    ctx->pc = 0x2724a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 5));
label_2724ac:
    // 0x2724ac: 0x10000021  b           . + 4 + (0x21 << 2)
label_2724b0:
    if (ctx->pc == 0x2724B0u) {
        ctx->pc = 0x2724B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724ACu;
        // 0x2724b0: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724B4u;
        goto label_2724b4;
    }
    ctx->pc = 0x2724ACu;
    {
        const bool branch_taken_0x2724ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2724B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724ACu;
        // 0x2724b0: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724ac) {
            ctx->pc = 0x272534u;
            goto label_272534;
        }
    }
    ctx->pc = 0x2724B4u;
label_2724b4:
    // 0x2724b4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2724b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2724b8:
    // 0x2724b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2724b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2724bc:
    // 0x2724bc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2724bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2724c0:
    // 0x2724c0: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x2724c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_2724c4:
    // 0x2724c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2724c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2724c8:
    // 0x2724c8: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x2724c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_2724cc:
    // 0x2724cc: 0x40f809  jalr        $v0
label_2724d0:
    if (ctx->pc == 0x2724D0u) {
        ctx->pc = 0x2724D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724CCu;
        // 0x2724d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724D4u;
        goto label_2724d4;
    }
    ctx->pc = 0x2724CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2724D4u);
        ctx->pc = 0x2724D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724CCu;
        // 0x2724d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2724CCu, 0x2724D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2724D4u;
label_2724d4:
    // 0x2724d4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x2724d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_2724d8:
    // 0x2724d8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2724d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2724dc:
    // 0x2724dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2724dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2724e0:
    // 0x2724e0: 0x0  nop
    ctx->pc = 0x2724e0u;
    // NOP
label_2724e4:
    // 0x2724e4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2724e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2724e8:
    // 0x2724e8: 0x0  nop
    ctx->pc = 0x2724e8u;
    // NOP
label_2724ec:
    // 0x2724ec: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_2724f0:
    if (ctx->pc == 0x2724F0u) {
        ctx->pc = 0x2724F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724ECu;
        // 0x2724f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2724F4u;
        goto label_2724f4;
    }
    ctx->pc = 0x2724ECu;
    {
        const bool branch_taken_0x2724ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2724F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2724ECu;
        // 0x2724f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2724ec) {
            ctx->pc = 0x272510u;
            goto label_272510;
        }
    }
    ctx->pc = 0x2724F4u;
label_2724f4:
    // 0x2724f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2724f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2724f8:
    // 0x2724f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2724f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2724fc:
    // 0x2724fc: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x2724fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_272500:
    // 0x272500: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x272500u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_272504:
    // 0x272504: 0xa22402f6  sb          $a0, 0x2F6($s1)
    ctx->pc = 0x272504u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 4));
label_272508:
    // 0x272508: 0x10000007  b           . + 4 + (0x7 << 2)
label_27250c:
    if (ctx->pc == 0x27250Cu) {
        ctx->pc = 0x27250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272508u;
        // 0x27250c: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272510u;
        goto label_272510;
    }
    ctx->pc = 0x272508u;
    {
        const bool branch_taken_0x272508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27250Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272508u;
        // 0x27250c: 0xa22202f4  sb          $v0, 0x2F4($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272508) {
            ctx->pc = 0x272528u;
            goto label_272528;
        }
    }
    ctx->pc = 0x272510u;
label_272510:
    // 0x272510: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x272510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_272514:
    // 0x272514: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x272514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_272518:
    // 0x272518: 0xa22202f4  sb          $v0, 0x2F4($s1)
    ctx->pc = 0x272518u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 2));
label_27251c:
    // 0x27251c: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x27251cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
label_272520:
    // 0x272520: 0xa22402f6  sb          $a0, 0x2F6($s1)
    ctx->pc = 0x272520u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 4));
label_272524:
    // 0x272524: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x272524u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_272528:
    // 0x272528: 0x10000002  b           . + 4 + (0x2 << 2)
label_27252c:
    if (ctx->pc == 0x27252Cu) {
        ctx->pc = 0x27252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272528u;
        // 0x27252c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x272530u;
        goto label_272530;
    }
    ctx->pc = 0x272528u;
    {
        const bool branch_taken_0x272528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272528u;
        // 0x27252c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272528) {
            ctx->pc = 0x272534u;
            goto label_272534;
        }
    }
    ctx->pc = 0x272530u;
label_272530:
    // 0x272530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x272530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_272534:
    // 0x272534: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x272534u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_272538:
    // 0x272538: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x272538u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_27253c:
    // 0x27253c: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x27253cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_272540:
    // 0x272540: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x272540u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_272544:
    // 0x272544: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x272544u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_272548:
    // 0x272548: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x272548u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_27254c:
    // 0x27254c: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x27254cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_272550:
    // 0x272550: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x272550u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_272554:
    // 0x272554: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x272554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_272558:
    // 0x272558: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x272558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27255c:
    // 0x27255c: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x27255cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_272560:
    // 0x272560: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x272560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_272564:
    // 0x272564: 0x3e00008  jr          $ra
label_272568:
    if (ctx->pc == 0x272568u) {
        ctx->pc = 0x272568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272564u;
        // 0x272568: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27256Cu;
        goto label_27256c;
    }
    ctx->pc = 0x272564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x272568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272564u;
        // 0x272568: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x272564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27256Cu;
label_27256c:
    // 0x27256c: 0x0  nop
    ctx->pc = 0x27256cu;
    // NOP
    ctx->pc = 0x272570u;
}
