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

// Function: func_002F1D58
// Address: 0x2f1d58 - 0x2f2250
void func_002F1D58_0x2f1d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F1D58_0x2f1d58");
#endif

    switch (ctx->pc) {
        case 0x2f1d58u: goto label_2f1d58;
        case 0x2f1d5cu: goto label_2f1d5c;
        case 0x2f1d60u: goto label_2f1d60;
        case 0x2f1d64u: goto label_2f1d64;
        case 0x2f1d68u: goto label_2f1d68;
        case 0x2f1d6cu: goto label_2f1d6c;
        case 0x2f1d70u: goto label_2f1d70;
        case 0x2f1d74u: goto label_2f1d74;
        case 0x2f1d78u: goto label_2f1d78;
        case 0x2f1d7cu: goto label_2f1d7c;
        case 0x2f1d80u: goto label_2f1d80;
        case 0x2f1d84u: goto label_2f1d84;
        case 0x2f1d88u: goto label_2f1d88;
        case 0x2f1d8cu: goto label_2f1d8c;
        case 0x2f1d90u: goto label_2f1d90;
        case 0x2f1d94u: goto label_2f1d94;
        case 0x2f1d98u: goto label_2f1d98;
        case 0x2f1d9cu: goto label_2f1d9c;
        case 0x2f1da0u: goto label_2f1da0;
        case 0x2f1da4u: goto label_2f1da4;
        case 0x2f1da8u: goto label_2f1da8;
        case 0x2f1dacu: goto label_2f1dac;
        case 0x2f1db0u: goto label_2f1db0;
        case 0x2f1db4u: goto label_2f1db4;
        case 0x2f1db8u: goto label_2f1db8;
        case 0x2f1dbcu: goto label_2f1dbc;
        case 0x2f1dc0u: goto label_2f1dc0;
        case 0x2f1dc4u: goto label_2f1dc4;
        case 0x2f1dc8u: goto label_2f1dc8;
        case 0x2f1dccu: goto label_2f1dcc;
        case 0x2f1dd0u: goto label_2f1dd0;
        case 0x2f1dd4u: goto label_2f1dd4;
        case 0x2f1dd8u: goto label_2f1dd8;
        case 0x2f1ddcu: goto label_2f1ddc;
        case 0x2f1de0u: goto label_2f1de0;
        case 0x2f1de4u: goto label_2f1de4;
        case 0x2f1de8u: goto label_2f1de8;
        case 0x2f1decu: goto label_2f1dec;
        case 0x2f1df0u: goto label_2f1df0;
        case 0x2f1df4u: goto label_2f1df4;
        case 0x2f1df8u: goto label_2f1df8;
        case 0x2f1dfcu: goto label_2f1dfc;
        case 0x2f1e00u: goto label_2f1e00;
        case 0x2f1e04u: goto label_2f1e04;
        case 0x2f1e08u: goto label_2f1e08;
        case 0x2f1e0cu: goto label_2f1e0c;
        case 0x2f1e10u: goto label_2f1e10;
        case 0x2f1e14u: goto label_2f1e14;
        case 0x2f1e18u: goto label_2f1e18;
        case 0x2f1e1cu: goto label_2f1e1c;
        case 0x2f1e20u: goto label_2f1e20;
        case 0x2f1e24u: goto label_2f1e24;
        case 0x2f1e28u: goto label_2f1e28;
        case 0x2f1e2cu: goto label_2f1e2c;
        case 0x2f1e30u: goto label_2f1e30;
        case 0x2f1e34u: goto label_2f1e34;
        case 0x2f1e38u: goto label_2f1e38;
        case 0x2f1e3cu: goto label_2f1e3c;
        case 0x2f1e40u: goto label_2f1e40;
        case 0x2f1e44u: goto label_2f1e44;
        case 0x2f1e48u: goto label_2f1e48;
        case 0x2f1e4cu: goto label_2f1e4c;
        case 0x2f1e50u: goto label_2f1e50;
        case 0x2f1e54u: goto label_2f1e54;
        case 0x2f1e58u: goto label_2f1e58;
        case 0x2f1e5cu: goto label_2f1e5c;
        case 0x2f1e60u: goto label_2f1e60;
        case 0x2f1e64u: goto label_2f1e64;
        case 0x2f1e68u: goto label_2f1e68;
        case 0x2f1e6cu: goto label_2f1e6c;
        case 0x2f1e70u: goto label_2f1e70;
        case 0x2f1e74u: goto label_2f1e74;
        case 0x2f1e78u: goto label_2f1e78;
        case 0x2f1e7cu: goto label_2f1e7c;
        case 0x2f1e80u: goto label_2f1e80;
        case 0x2f1e84u: goto label_2f1e84;
        case 0x2f1e88u: goto label_2f1e88;
        case 0x2f1e8cu: goto label_2f1e8c;
        case 0x2f1e90u: goto label_2f1e90;
        case 0x2f1e94u: goto label_2f1e94;
        case 0x2f1e98u: goto label_2f1e98;
        case 0x2f1e9cu: goto label_2f1e9c;
        case 0x2f1ea0u: goto label_2f1ea0;
        case 0x2f1ea4u: goto label_2f1ea4;
        case 0x2f1ea8u: goto label_2f1ea8;
        case 0x2f1eacu: goto label_2f1eac;
        case 0x2f1eb0u: goto label_2f1eb0;
        case 0x2f1eb4u: goto label_2f1eb4;
        case 0x2f1eb8u: goto label_2f1eb8;
        case 0x2f1ebcu: goto label_2f1ebc;
        case 0x2f1ec0u: goto label_2f1ec0;
        case 0x2f1ec4u: goto label_2f1ec4;
        case 0x2f1ec8u: goto label_2f1ec8;
        case 0x2f1eccu: goto label_2f1ecc;
        case 0x2f1ed0u: goto label_2f1ed0;
        case 0x2f1ed4u: goto label_2f1ed4;
        case 0x2f1ed8u: goto label_2f1ed8;
        case 0x2f1edcu: goto label_2f1edc;
        case 0x2f1ee0u: goto label_2f1ee0;
        case 0x2f1ee4u: goto label_2f1ee4;
        case 0x2f1ee8u: goto label_2f1ee8;
        case 0x2f1eecu: goto label_2f1eec;
        case 0x2f1ef0u: goto label_2f1ef0;
        case 0x2f1ef4u: goto label_2f1ef4;
        case 0x2f1ef8u: goto label_2f1ef8;
        case 0x2f1efcu: goto label_2f1efc;
        case 0x2f1f00u: goto label_2f1f00;
        case 0x2f1f04u: goto label_2f1f04;
        case 0x2f1f08u: goto label_2f1f08;
        case 0x2f1f0cu: goto label_2f1f0c;
        case 0x2f1f10u: goto label_2f1f10;
        case 0x2f1f14u: goto label_2f1f14;
        case 0x2f1f18u: goto label_2f1f18;
        case 0x2f1f1cu: goto label_2f1f1c;
        case 0x2f1f20u: goto label_2f1f20;
        case 0x2f1f24u: goto label_2f1f24;
        case 0x2f1f28u: goto label_2f1f28;
        case 0x2f1f2cu: goto label_2f1f2c;
        case 0x2f1f30u: goto label_2f1f30;
        case 0x2f1f34u: goto label_2f1f34;
        case 0x2f1f38u: goto label_2f1f38;
        case 0x2f1f3cu: goto label_2f1f3c;
        case 0x2f1f40u: goto label_2f1f40;
        case 0x2f1f44u: goto label_2f1f44;
        case 0x2f1f48u: goto label_2f1f48;
        case 0x2f1f4cu: goto label_2f1f4c;
        case 0x2f1f50u: goto label_2f1f50;
        case 0x2f1f54u: goto label_2f1f54;
        case 0x2f1f58u: goto label_2f1f58;
        case 0x2f1f5cu: goto label_2f1f5c;
        case 0x2f1f60u: goto label_2f1f60;
        case 0x2f1f64u: goto label_2f1f64;
        case 0x2f1f68u: goto label_2f1f68;
        case 0x2f1f6cu: goto label_2f1f6c;
        case 0x2f1f70u: goto label_2f1f70;
        case 0x2f1f74u: goto label_2f1f74;
        case 0x2f1f78u: goto label_2f1f78;
        case 0x2f1f7cu: goto label_2f1f7c;
        case 0x2f1f80u: goto label_2f1f80;
        case 0x2f1f84u: goto label_2f1f84;
        case 0x2f1f88u: goto label_2f1f88;
        case 0x2f1f8cu: goto label_2f1f8c;
        case 0x2f1f90u: goto label_2f1f90;
        case 0x2f1f94u: goto label_2f1f94;
        case 0x2f1f98u: goto label_2f1f98;
        case 0x2f1f9cu: goto label_2f1f9c;
        case 0x2f1fa0u: goto label_2f1fa0;
        case 0x2f1fa4u: goto label_2f1fa4;
        case 0x2f1fa8u: goto label_2f1fa8;
        case 0x2f1facu: goto label_2f1fac;
        case 0x2f1fb0u: goto label_2f1fb0;
        case 0x2f1fb4u: goto label_2f1fb4;
        case 0x2f1fb8u: goto label_2f1fb8;
        case 0x2f1fbcu: goto label_2f1fbc;
        case 0x2f1fc0u: goto label_2f1fc0;
        case 0x2f1fc4u: goto label_2f1fc4;
        case 0x2f1fc8u: goto label_2f1fc8;
        case 0x2f1fccu: goto label_2f1fcc;
        case 0x2f1fd0u: goto label_2f1fd0;
        case 0x2f1fd4u: goto label_2f1fd4;
        case 0x2f1fd8u: goto label_2f1fd8;
        case 0x2f1fdcu: goto label_2f1fdc;
        case 0x2f1fe0u: goto label_2f1fe0;
        case 0x2f1fe4u: goto label_2f1fe4;
        case 0x2f1fe8u: goto label_2f1fe8;
        case 0x2f1fecu: goto label_2f1fec;
        case 0x2f1ff0u: goto label_2f1ff0;
        case 0x2f1ff4u: goto label_2f1ff4;
        case 0x2f1ff8u: goto label_2f1ff8;
        case 0x2f1ffcu: goto label_2f1ffc;
        case 0x2f2000u: goto label_2f2000;
        case 0x2f2004u: goto label_2f2004;
        case 0x2f2008u: goto label_2f2008;
        case 0x2f200cu: goto label_2f200c;
        case 0x2f2010u: goto label_2f2010;
        case 0x2f2014u: goto label_2f2014;
        case 0x2f2018u: goto label_2f2018;
        case 0x2f201cu: goto label_2f201c;
        case 0x2f2020u: goto label_2f2020;
        case 0x2f2024u: goto label_2f2024;
        case 0x2f2028u: goto label_2f2028;
        case 0x2f202cu: goto label_2f202c;
        case 0x2f2030u: goto label_2f2030;
        case 0x2f2034u: goto label_2f2034;
        case 0x2f2038u: goto label_2f2038;
        case 0x2f203cu: goto label_2f203c;
        case 0x2f2040u: goto label_2f2040;
        case 0x2f2044u: goto label_2f2044;
        case 0x2f2048u: goto label_2f2048;
        case 0x2f204cu: goto label_2f204c;
        case 0x2f2050u: goto label_2f2050;
        case 0x2f2054u: goto label_2f2054;
        case 0x2f2058u: goto label_2f2058;
        case 0x2f205cu: goto label_2f205c;
        case 0x2f2060u: goto label_2f2060;
        case 0x2f2064u: goto label_2f2064;
        case 0x2f2068u: goto label_2f2068;
        case 0x2f206cu: goto label_2f206c;
        case 0x2f2070u: goto label_2f2070;
        case 0x2f2074u: goto label_2f2074;
        case 0x2f2078u: goto label_2f2078;
        case 0x2f207cu: goto label_2f207c;
        case 0x2f2080u: goto label_2f2080;
        case 0x2f2084u: goto label_2f2084;
        case 0x2f2088u: goto label_2f2088;
        case 0x2f208cu: goto label_2f208c;
        case 0x2f2090u: goto label_2f2090;
        case 0x2f2094u: goto label_2f2094;
        case 0x2f2098u: goto label_2f2098;
        case 0x2f209cu: goto label_2f209c;
        case 0x2f20a0u: goto label_2f20a0;
        case 0x2f20a4u: goto label_2f20a4;
        case 0x2f20a8u: goto label_2f20a8;
        case 0x2f20acu: goto label_2f20ac;
        case 0x2f20b0u: goto label_2f20b0;
        case 0x2f20b4u: goto label_2f20b4;
        case 0x2f20b8u: goto label_2f20b8;
        case 0x2f20bcu: goto label_2f20bc;
        case 0x2f20c0u: goto label_2f20c0;
        case 0x2f20c4u: goto label_2f20c4;
        case 0x2f20c8u: goto label_2f20c8;
        case 0x2f20ccu: goto label_2f20cc;
        case 0x2f20d0u: goto label_2f20d0;
        case 0x2f20d4u: goto label_2f20d4;
        case 0x2f20d8u: goto label_2f20d8;
        case 0x2f20dcu: goto label_2f20dc;
        case 0x2f20e0u: goto label_2f20e0;
        case 0x2f20e4u: goto label_2f20e4;
        case 0x2f20e8u: goto label_2f20e8;
        case 0x2f20ecu: goto label_2f20ec;
        case 0x2f20f0u: goto label_2f20f0;
        case 0x2f20f4u: goto label_2f20f4;
        case 0x2f20f8u: goto label_2f20f8;
        case 0x2f20fcu: goto label_2f20fc;
        case 0x2f2100u: goto label_2f2100;
        case 0x2f2104u: goto label_2f2104;
        case 0x2f2108u: goto label_2f2108;
        case 0x2f210cu: goto label_2f210c;
        case 0x2f2110u: goto label_2f2110;
        case 0x2f2114u: goto label_2f2114;
        case 0x2f2118u: goto label_2f2118;
        case 0x2f211cu: goto label_2f211c;
        case 0x2f2120u: goto label_2f2120;
        case 0x2f2124u: goto label_2f2124;
        case 0x2f2128u: goto label_2f2128;
        case 0x2f212cu: goto label_2f212c;
        case 0x2f2130u: goto label_2f2130;
        case 0x2f2134u: goto label_2f2134;
        case 0x2f2138u: goto label_2f2138;
        case 0x2f213cu: goto label_2f213c;
        case 0x2f2140u: goto label_2f2140;
        case 0x2f2144u: goto label_2f2144;
        case 0x2f2148u: goto label_2f2148;
        case 0x2f214cu: goto label_2f214c;
        case 0x2f2150u: goto label_2f2150;
        case 0x2f2154u: goto label_2f2154;
        case 0x2f2158u: goto label_2f2158;
        case 0x2f215cu: goto label_2f215c;
        case 0x2f2160u: goto label_2f2160;
        case 0x2f2164u: goto label_2f2164;
        case 0x2f2168u: goto label_2f2168;
        case 0x2f216cu: goto label_2f216c;
        case 0x2f2170u: goto label_2f2170;
        case 0x2f2174u: goto label_2f2174;
        case 0x2f2178u: goto label_2f2178;
        case 0x2f217cu: goto label_2f217c;
        case 0x2f2180u: goto label_2f2180;
        case 0x2f2184u: goto label_2f2184;
        case 0x2f2188u: goto label_2f2188;
        case 0x2f218cu: goto label_2f218c;
        case 0x2f2190u: goto label_2f2190;
        case 0x2f2194u: goto label_2f2194;
        case 0x2f2198u: goto label_2f2198;
        case 0x2f219cu: goto label_2f219c;
        case 0x2f21a0u: goto label_2f21a0;
        case 0x2f21a4u: goto label_2f21a4;
        case 0x2f21a8u: goto label_2f21a8;
        case 0x2f21acu: goto label_2f21ac;
        case 0x2f21b0u: goto label_2f21b0;
        case 0x2f21b4u: goto label_2f21b4;
        case 0x2f21b8u: goto label_2f21b8;
        case 0x2f21bcu: goto label_2f21bc;
        case 0x2f21c0u: goto label_2f21c0;
        case 0x2f21c4u: goto label_2f21c4;
        case 0x2f21c8u: goto label_2f21c8;
        case 0x2f21ccu: goto label_2f21cc;
        case 0x2f21d0u: goto label_2f21d0;
        case 0x2f21d4u: goto label_2f21d4;
        case 0x2f21d8u: goto label_2f21d8;
        case 0x2f21dcu: goto label_2f21dc;
        case 0x2f21e0u: goto label_2f21e0;
        case 0x2f21e4u: goto label_2f21e4;
        case 0x2f21e8u: goto label_2f21e8;
        case 0x2f21ecu: goto label_2f21ec;
        case 0x2f21f0u: goto label_2f21f0;
        case 0x2f21f4u: goto label_2f21f4;
        case 0x2f21f8u: goto label_2f21f8;
        case 0x2f21fcu: goto label_2f21fc;
        case 0x2f2200u: goto label_2f2200;
        case 0x2f2204u: goto label_2f2204;
        case 0x2f2208u: goto label_2f2208;
        case 0x2f220cu: goto label_2f220c;
        case 0x2f2210u: goto label_2f2210;
        case 0x2f2214u: goto label_2f2214;
        case 0x2f2218u: goto label_2f2218;
        case 0x2f221cu: goto label_2f221c;
        case 0x2f2220u: goto label_2f2220;
        case 0x2f2224u: goto label_2f2224;
        case 0x2f2228u: goto label_2f2228;
        case 0x2f222cu: goto label_2f222c;
        case 0x2f2230u: goto label_2f2230;
        case 0x2f2234u: goto label_2f2234;
        case 0x2f2238u: goto label_2f2238;
        case 0x2f223cu: goto label_2f223c;
        case 0x2f2240u: goto label_2f2240;
        case 0x2f2244u: goto label_2f2244;
        case 0x2f2248u: goto label_2f2248;
        case 0x2f224cu: goto label_2f224c;
        default: break;
    }

    ctx->pc = 0x2f1d58u;

label_2f1d58:
    // 0x2f1d58: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f1d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2f1d5c:
    // 0x2f1d5c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2f1d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2f1d60:
    // 0x2f1d60: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2f1d60u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2f1d64:
    // 0x2f1d64: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f1d64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2f1d68:
    // 0x2f1d68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2f1d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_2f1d6c:
    // 0x2f1d6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2f1d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_2f1d70:
    // 0x2f1d70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f1d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f1d74:
    // 0x2f1d74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f1d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2f1d78:
    // 0x2f1d78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f1d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f1d7c:
    // 0x2f1d7c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f1d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f1d80:
    // 0x2f1d80: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x2f1d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1d84:
    // 0x2f1d84: 0x8e250110  lw          $a1, 0x110($s1)
    ctx->pc = 0x2f1d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2f1d88:
    // 0x2f1d88: 0xe6200300  swc1        $f0, 0x300($s1)
    ctx->pc = 0x2f1d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 768), bits); }
label_2f1d8c:
    // 0x2f1d8c: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x2f1d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
label_2f1d90:
    // 0x2f1d90: 0x3421adfd  ori         $at, $at, 0xADFD
    ctx->pc = 0x2f1d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44541);
label_2f1d94:
    // 0x2f1d94: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2f1d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2f1d98:
    // 0x2f1d98: 0x90a2012e  lbu         $v0, 0x12E($a1)
    ctx->pc = 0x2f1d98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 302)));
label_2f1d9c:
    // 0x2f1d9c: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2f1d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_2f1da0:
    // 0x2f1da0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f1da0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2f1da4:
    // 0x2f1da4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x2f1da4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_2f1da8:
    // 0x2f1da8: 0xae2202b4  sw          $v0, 0x2B4($s1)
    ctx->pc = 0x2f1da8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
label_2f1dac:
    // 0x2f1dac: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x2f1dacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_2f1db0:
    // 0x2f1db0: 0x80a2018c  lb          $v0, 0x18C($a1)
    ctx->pc = 0x2f1db0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 396)));
label_2f1db4:
    // 0x2f1db4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2f1db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_2f1db8:
    // 0x2f1db8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2f1db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_2f1dbc:
    // 0x2f1dbc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f1dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2f1dc0:
    // 0x2f1dc0: 0xae2202dc  sw          $v0, 0x2DC($s1)
    ctx->pc = 0x2f1dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 732), GPR_U32(ctx, 2));
label_2f1dc4:
    // 0x2f1dc4: 0x90a3018d  lbu         $v1, 0x18D($a1)
    ctx->pc = 0x2f1dc4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 397)));
label_2f1dc8:
    // 0x2f1dc8: 0xae2302e0  sw          $v1, 0x2E0($s1)
    ctx->pc = 0x2f1dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 736), GPR_U32(ctx, 3));
label_2f1dcc:
    // 0x2f1dcc: 0x80a2018e  lb          $v0, 0x18E($a1)
    ctx->pc = 0x2f1dccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 398)));
label_2f1dd0:
    // 0x2f1dd0: 0xae2202b8  sw          $v0, 0x2B8($s1)
    ctx->pc = 0x2f1dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 2));
label_2f1dd4:
    // 0x2f1dd4: 0x90a3018f  lbu         $v1, 0x18F($a1)
    ctx->pc = 0x2f1dd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 399)));
label_2f1dd8:
    // 0x2f1dd8: 0xa22302e8  sb          $v1, 0x2E8($s1)
    ctx->pc = 0x2f1dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 744), (uint8_t)GPR_U32(ctx, 3));
label_2f1ddc:
    // 0x2f1ddc: 0x80a20190  lb          $v0, 0x190($a1)
    ctx->pc = 0x2f1ddcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 400)));
label_2f1de0:
    // 0x2f1de0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1de0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1de4:
    // 0x2f1de4: 0x0  nop
    ctx->pc = 0x2f1de4u;
    // NOP
label_2f1de8:
    // 0x2f1de8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f1dec:
    // 0x2f1dec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f1decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2f1df0:
    // 0x2f1df0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f1df4:
    // 0x2f1df4: 0xe62002ec  swc1        $f0, 0x2EC($s1)
    ctx->pc = 0x2f1df4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 748), bits); }
label_2f1df8:
    // 0x2f1df8: 0x80a20191  lb          $v0, 0x191($a1)
    ctx->pc = 0x2f1df8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 401)));
label_2f1dfc:
    // 0x2f1dfc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1dfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1e00:
    // 0x2f1e00: 0x0  nop
    ctx->pc = 0x2f1e00u;
    // NOP
label_2f1e04:
    // 0x2f1e04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1e04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f1e08:
    // 0x2f1e08: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f1e08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2f1e0c:
    // 0x2f1e0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f1e0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2f1e10:
    // 0x2f1e10: 0xe62002f0  swc1        $f0, 0x2F0($s1)
    ctx->pc = 0x2f1e10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 752), bits); }
label_2f1e14:
    // 0x2f1e14: 0x80a20192  lb          $v0, 0x192($a1)
    ctx->pc = 0x2f1e14u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 402)));
label_2f1e18:
    // 0x2f1e18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1e18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1e1c:
    // 0x2f1e1c: 0x0  nop
    ctx->pc = 0x2f1e1cu;
    // NOP
label_2f1e20:
    // 0x2f1e20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f1e24:
    // 0x2f1e24: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2f1e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2f1e28:
    // 0x2f1e28: 0xe62002f4  swc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2f1e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 756), bits); }
label_2f1e2c:
    // 0x2f1e2c: 0x80a20193  lb          $v0, 0x193($a1)
    ctx->pc = 0x2f1e2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 403)));
label_2f1e30:
    // 0x2f1e30: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f1e30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2f1e34:
    // 0x2f1e34: 0x0  nop
    ctx->pc = 0x2f1e34u;
    // NOP
label_2f1e38:
    // 0x2f1e38: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f1e38u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2f1e3c:
    // 0x2f1e3c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x2f1e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_2f1e40:
    // 0x2f1e40: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x2f1e40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_2f1e44:
    // 0x2f1e44: 0xe62002f8  swc1        $f0, 0x2F8($s1)
    ctx->pc = 0x2f1e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 760), bits); }
label_2f1e48:
    // 0x2f1e48: 0xc4a1013c  lwc1        $f1, 0x13C($a1)
    ctx->pc = 0x2f1e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1e4c:
    // 0x2f1e4c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f1e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2f1e50:
    // 0x2f1e50: 0xe62102bc  swc1        $f1, 0x2BC($s1)
    ctx->pc = 0x2f1e50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 700), bits); }
label_2f1e54:
    // 0x2f1e54: 0xc4a00140  lwc1        $f0, 0x140($a1)
    ctx->pc = 0x2f1e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1e58:
    // 0x2f1e58: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f1e58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2f1e5c:
    // 0x2f1e5c: 0xe62002c4  swc1        $f0, 0x2C4($s1)
    ctx->pc = 0x2f1e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 708), bits); }
label_2f1e60:
    // 0x2f1e60: 0xc4a10144  lwc1        $f1, 0x144($a1)
    ctx->pc = 0x2f1e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1e64:
    // 0x2f1e64: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2f1e64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_2f1e68:
    // 0x2f1e68: 0xe62102cc  swc1        $f1, 0x2CC($s1)
    ctx->pc = 0x2f1e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 716), bits); }
label_2f1e6c:
    // 0x2f1e6c: 0xc4a00148  lwc1        $f0, 0x148($a1)
    ctx->pc = 0x2f1e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1e70:
    // 0x2f1e70: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f1e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_2f1e74:
    // 0x2f1e74: 0xe62002c0  swc1        $f0, 0x2C0($s1)
    ctx->pc = 0x2f1e74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
label_2f1e78:
    // 0x2f1e78: 0xc4a1014c  lwc1        $f1, 0x14C($a1)
    ctx->pc = 0x2f1e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1e7c:
    // 0x2f1e7c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2f1e7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2f1e80:
    // 0x2f1e80: 0xe62102c8  swc1        $f1, 0x2C8($s1)
    ctx->pc = 0x2f1e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 712), bits); }
label_2f1e84:
    // 0x2f1e84: 0xc4a00150  lwc1        $f0, 0x150($a1)
    ctx->pc = 0x2f1e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1e88:
    // 0x2f1e88: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2f1e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2f1e8c:
    // 0x2f1e8c: 0xc0bc6d8  jal         func_2F1B60
label_2f1e90:
    if (ctx->pc == 0x2F1E90u) {
        ctx->pc = 0x2F1E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E8Cu;
        // 0x2f1e90: 0xe62002d0  swc1        $f0, 0x2D0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E94u;
        goto label_2f1e94;
    }
    ctx->pc = 0x2F1E8Cu;
    SET_GPR_U32(ctx, 31, 0x2F1E94u);
    ctx->pc = 0x2F1E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1E8Cu;
    // 0x2f1e90: 0xe62002d0  swc1        $f0, 0x2D0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 720), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1B60u, 0x2F1E8Cu, 0x2F1E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1E94u;
label_2f1e94:
    // 0x2f1e94: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
label_2f1e98:
    if (ctx->pc == 0x2F1E98u) {
        ctx->pc = 0x2F1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E94u;
        // 0x2f1e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1E9Cu;
        goto label_2f1e9c;
    }
    ctx->pc = 0x2F1E94u;
    {
        const bool branch_taken_0x2f1e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1E94u;
        // 0x2f1e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1e94) {
            ctx->pc = 0x2F2238u;
            goto label_2f2238;
        }
    }
    ctx->pc = 0x2F1E9Cu;
label_2f1e9c:
    // 0x2f1e9c: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f1e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1ea0:
    // 0x2f1ea0: 0x106000e6  beqz        $v1, . + 4 + (0xE6 << 2)
label_2f1ea4:
    if (ctx->pc == 0x2F1EA4u) {
        ctx->pc = 0x2F1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EA0u;
        // 0x2f1ea4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EA8u;
        goto label_2f1ea8;
    }
    ctx->pc = 0x2F1EA0u;
    {
        const bool branch_taken_0x2f1ea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EA0u;
        // 0x2f1ea4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ea0) {
            ctx->pc = 0x2F223Cu;
            goto label_2f223c;
        }
    }
    ctx->pc = 0x2F1EA8u;
label_2f1ea8:
    // 0x2f1ea8: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2f1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2f1eac:
    // 0x2f1eac: 0x80420196  lb          $v0, 0x196($v0)
    ctx->pc = 0x2f1eacu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 406)));
label_2f1eb0:
    // 0x2f1eb0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2f1eb4:
    if (ctx->pc == 0x2F1EB4u) {
        ctx->pc = 0x2F1EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EB0u;
        // 0x2f1eb4: 0xa06202b5  sb          $v0, 0x2B5($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 693), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EB8u;
        goto label_2f1eb8;
    }
    ctx->pc = 0x2F1EB0u;
    {
        const bool branch_taken_0x2f1eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f1eb0) {
            ctx->pc = 0x2F1EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F1EB0u;
            // 0x2f1eb4: 0xa06202b5  sb          $v0, 0x2B5($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 693), (uint8_t)GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F1EB8u;
            goto label_2f1eb8;
        }
    }
    ctx->pc = 0x2F1EB8u;
label_2f1eb8:
    // 0x2f1eb8: 0x8e220110  lw          $v0, 0x110($s1)
    ctx->pc = 0x2f1eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
label_2f1ebc:
    // 0x2f1ebc: 0x80430197  lb          $v1, 0x197($v0)
    ctx->pc = 0x2f1ebcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 407)));
label_2f1ec0:
    // 0x2f1ec0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_2f1ec4:
    if (ctx->pc == 0x2F1EC4u) {
        ctx->pc = 0x2F1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EC0u;
        // 0x2f1ec4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1EC8u;
        goto label_2f1ec8;
    }
    ctx->pc = 0x2F1EC0u;
    {
        const bool branch_taken_0x2f1ec0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1EC0u;
        // 0x2f1ec4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1ec0) {
            ctx->pc = 0x2F1EE4u;
            goto label_2f1ee4;
        }
    }
    ctx->pc = 0x2F1EC8u;
label_2f1ec8:
    // 0x2f1ec8: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f1ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1ecc:
    // 0x2f1ecc: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x2f1eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_2f1ed0:
    // 0x2f1ed0: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2f1ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
label_2f1ed4:
    // 0x2f1ed4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f1ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f1ed8:
    // 0x2f1ed8: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x2f1ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_2f1edc:
    // 0x2f1edc: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f1edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1ee0:
    // 0x2f1ee0: 0xa46502ae  sh          $a1, 0x2AE($v1)
    ctx->pc = 0x2f1ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 686), (uint16_t)GPR_U32(ctx, 5));
label_2f1ee4:
    // 0x2f1ee4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2f1ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2f1ee8:
    // 0x2f1ee8: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2f1ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
label_2f1eec:
    // 0x2f1eec: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2f1eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2f1ef0:
    // 0x2f1ef0: 0x8e3002b0  lw          $s0, 0x2B0($s1)
    ctx->pc = 0x2f1ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1ef4:
    // 0x2f1ef4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f1ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f1ef8:
    // 0x2f1ef8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f1ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1efc:
    // 0x2f1efc: 0xae22011c  sw          $v0, 0x11C($s1)
    ctx->pc = 0x2f1efcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 284), GPR_U32(ctx, 2));
label_2f1f00:
    // 0x2f1f00: 0xc0ad858  jal         func_2B6160
label_2f1f04:
    if (ctx->pc == 0x2F1F04u) {
        ctx->pc = 0x2F1F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F00u;
        // 0x2f1f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F08u;
        goto label_2f1f08;
    }
    ctx->pc = 0x2F1F00u;
    SET_GPR_U32(ctx, 31, 0x2F1F08u);
    ctx->pc = 0x2F1F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F00u;
    // 0x2f1f04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F1F00u, 0x2F1F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F08u;
label_2f1f08:
    // 0x2f1f08: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2f1f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_2f1f0c:
    // 0x2f1f0c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_2f1f10:
    if (ctx->pc == 0x2F1F10u) {
        ctx->pc = 0x2F1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F0Cu;
        // 0x2f1f10: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F14u;
        goto label_2f1f14;
    }
    ctx->pc = 0x2F1F0Cu;
    {
        const bool branch_taken_0x2f1f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F0Cu;
        // 0x2f1f10: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f0c) {
            ctx->pc = 0x2F1F28u;
            goto label_2f1f28;
        }
    }
    ctx->pc = 0x2F1F14u;
label_2f1f14:
    // 0x2f1f14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f1f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2f1f18:
    // 0x2f1f18: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f1f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1f1c:
    // 0x2f1f1c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f1f1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f1f20:
    // 0x2f1f20: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f1f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1f24:
    // 0x2f1f24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f1f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f1f28:
    // 0x2f1f28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f1f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f2c:
    // 0x2f1f2c: 0xc0ad8b8  jal         func_2B62E0
label_2f1f30:
    if (ctx->pc == 0x2F1F30u) {
        ctx->pc = 0x2F1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F2Cu;
        // 0x2f1f30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F34u;
        goto label_2f1f34;
    }
    ctx->pc = 0x2F1F2Cu;
    SET_GPR_U32(ctx, 31, 0x2F1F34u);
    ctx->pc = 0x2F1F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F2Cu;
    // 0x2f1f30: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2F1F2Cu, 0x2F1F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F34u;
label_2f1f34:
    // 0x2f1f34: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f1f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1f38:
    // 0x2f1f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f1f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f3c:
    // 0x2f1f3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f1f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f40:
    // 0x2f1f40: 0xc0ad876  jal         func_2B61D8
label_2f1f44:
    if (ctx->pc == 0x2F1F44u) {
        ctx->pc = 0x2F1F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F40u;
        // 0x2f1f44: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F48u;
        goto label_2f1f48;
    }
    ctx->pc = 0x2F1F40u;
    SET_GPR_U32(ctx, 31, 0x2F1F48u);
    ctx->pc = 0x2F1F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F40u;
    // 0x2f1f44: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2F1F40u, 0x2F1F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F48u;
label_2f1f48:
    // 0x2f1f48: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f1f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1f4c:
    // 0x2f1f4c: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2f1f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
label_2f1f50:
    // 0x2f1f50: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
label_2f1f54:
    if (ctx->pc == 0x2F1F54u) {
        ctx->pc = 0x2F1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F50u;
        // 0x2f1f54: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F58u;
        goto label_2f1f58;
    }
    ctx->pc = 0x2F1F50u;
    {
        const bool branch_taken_0x2f1f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F1F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F50u;
        // 0x2f1f54: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f50) {
            ctx->pc = 0x2F1F6Cu;
            goto label_2f1f6c;
        }
    }
    ctx->pc = 0x2F1F58u;
label_2f1f58:
    // 0x2f1f58: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2f1f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
label_2f1f5c:
    // 0x2f1f5c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f1f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1f60:
    // 0x2f1f60: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f1f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f1f64:
    // 0x2f1f64: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f1f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1f68:
    // 0x2f1f68: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f1f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f1f6c:
    // 0x2f1f6c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f1f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2f1f70:
    // 0x2f1f70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f1f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f1f74:
    // 0x2f1f74: 0xc0ad834  jal         func_2B60D0
label_2f1f78:
    if (ctx->pc == 0x2F1F78u) {
        ctx->pc = 0x2F1F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F74u;
        // 0x2f1f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F7Cu;
        goto label_2f1f7c;
    }
    ctx->pc = 0x2F1F74u;
    SET_GPR_U32(ctx, 31, 0x2F1F7Cu);
    ctx->pc = 0x2F1F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1F74u;
    // 0x2f1f78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2F1F74u, 0x2F1F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1F7Cu;
label_2f1f7c:
    // 0x2f1f7c: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f1f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1f80:
    // 0x2f1f80: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2f1f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_2f1f84:
    // 0x2f1f84: 0x10500006  beq         $v0, $s0, . + 4 + (0x6 << 2)
label_2f1f88:
    if (ctx->pc == 0x2F1F88u) {
        ctx->pc = 0x2F1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F84u;
        // 0x2f1f88: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1F8Cu;
        goto label_2f1f8c;
    }
    ctx->pc = 0x2F1F84u;
    {
        const bool branch_taken_0x2f1f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F1F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1F84u;
        // 0x2f1f88: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1f84) {
            ctx->pc = 0x2F1FA0u;
            goto label_2f1fa0;
        }
    }
    ctx->pc = 0x2F1F8Cu;
label_2f1f8c:
    // 0x2f1f8c: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2f1f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
label_2f1f90:
    // 0x2f1f90: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f1f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2f1f94:
    // 0x2f1f94: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f1f94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2f1f98:
    // 0x2f1f98: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2f1f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1f9c:
    // 0x2f1f9c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f1f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f1fa0:
    // 0x2f1fa0: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f1fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1fa4:
    // 0x2f1fa4: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x2f1fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1fa8:
    // 0x2f1fa8: 0xe4400240  swc1        $f0, 0x240($v0)
    ctx->pc = 0x2f1fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 576), bits); }
label_2f1fac:
    // 0x2f1fac: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f1facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1fb0:
    // 0x2f1fb0: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x2f1fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1fb4:
    // 0x2f1fb4: 0xe4600244  swc1        $f0, 0x244($v1)
    ctx->pc = 0x2f1fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 580), bits); }
label_2f1fb8:
    // 0x2f1fb8: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1fbc:
    // 0x2f1fbc: 0xc6200190  lwc1        $f0, 0x190($s1)
    ctx->pc = 0x2f1fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1fc0:
    // 0x2f1fc0: 0xe4400248  swc1        $f0, 0x248($v0)
    ctx->pc = 0x2f1fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 584), bits); }
label_2f1fc4:
    // 0x2f1fc4: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f1fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f1fc8:
    // 0x2f1fc8: 0xc6200194  lwc1        $f0, 0x194($s1)
    ctx->pc = 0x2f1fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f1fcc:
    // 0x2f1fcc: 0xe460024c  swc1        $f0, 0x24C($v1)
    ctx->pc = 0x2f1fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
label_2f1fd0:
    // 0x2f1fd0: 0x92270247  lbu         $a3, 0x247($s1)
    ctx->pc = 0x2f1fd0u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 583)));
label_2f1fd4:
    // 0x2f1fd4: 0x2ce20009  sltiu       $v0, $a3, 0x9
    ctx->pc = 0x2f1fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2f1fd8:
    // 0x2f1fd8: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_2f1fdc:
    if (ctx->pc == 0x2F1FDCu) {
        ctx->pc = 0x2F1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FD8u;
        // 0x2f1fdc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FE0u;
        goto label_2f1fe0;
    }
    ctx->pc = 0x2F1FD8u;
    {
        const bool branch_taken_0x2f1fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FD8u;
        // 0x2f1fdc: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f1fd8) {
            ctx->pc = 0x2F20ACu;
            goto label_2f20ac;
        }
    }
    ctx->pc = 0x2F1FE0u;
label_2f1fe0:
    // 0x2f1fe0: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2f1fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2f1fe4:
    // 0x2f1fe4: 0x2442ee10  addiu       $v0, $v0, -0x11F0
    ctx->pc = 0x2f1fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962704));
label_2f1fe8:
    // 0x2f1fe8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2f1fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f1fec:
    // 0x2f1fec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2f1fecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2f1ff0:
    // 0x2f1ff0: 0x800008  jr          $a0
label_2f1ff4:
    if (ctx->pc == 0x2F1FF4u) {
        ctx->pc = 0x2F1FF8u;
        goto label_2f1ff8;
    }
    ctx->pc = 0x2F1FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F1FF8u: goto label_2f1ff8;
            case 0x2F200Cu: goto label_2f200c;
            case 0x2F2020u: goto label_2f2020;
            case 0x2F2034u: goto label_2f2034;
            case 0x2F2048u: goto label_2f2048;
            case 0x2F205Cu: goto label_2f205c;
            case 0x2F2070u: goto label_2f2070;
            case 0x2F2084u: goto label_2f2084;
            case 0x2F2098u: goto label_2f2098;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1FF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2F1FF8u;
label_2f1ff8:
    // 0x2f1ff8: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f1ff8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f1ffc:
    // 0x2f1ffc: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f1ffcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f2000:
    // 0x2f2000: 0x36100044  ori         $s0, $s0, 0x44
    ctx->pc = 0x2f2000u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)68);
label_2f2004:
    // 0x2f2004: 0x10000030  b           . + 4 + (0x30 << 2)
label_2f2008:
    if (ctx->pc == 0x2F2008u) {
        ctx->pc = 0x2F2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2004u;
        // 0x2f2008: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F200Cu;
        goto label_2f200c;
    }
    ctx->pc = 0x2F2004u;
    {
        const bool branch_taken_0x2f2004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2004u;
        // 0x2f2008: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2004) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F200Cu;
label_2f200c:
    // 0x2f200c: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f200cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f2010:
    // 0x2f2010: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f2010u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f2014:
    // 0x2f2014: 0x36100048  ori         $s0, $s0, 0x48
    ctx->pc = 0x2f2014u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)72);
label_2f2018:
    // 0x2f2018: 0x1000002b  b           . + 4 + (0x2B << 2)
label_2f201c:
    if (ctx->pc == 0x2F201Cu) {
        ctx->pc = 0x2F201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2018u;
        // 0x2f201c: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2020u;
        goto label_2f2020;
    }
    ctx->pc = 0x2F2018u;
    {
        const bool branch_taken_0x2f2018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2018u;
        // 0x2f201c: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2018) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F2020u;
label_2f2020:
    // 0x2f2020: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f2020u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f2024:
    // 0x2f2024: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f2024u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f2028:
    // 0x2f2028: 0x361000a1  ori         $s0, $s0, 0xA1
    ctx->pc = 0x2f2028u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)161);
label_2f202c:
    // 0x2f202c: 0x10000026  b           . + 4 + (0x26 << 2)
label_2f2030:
    if (ctx->pc == 0x2F2030u) {
        ctx->pc = 0x2F2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F202Cu;
        // 0x2f2030: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2034u;
        goto label_2f2034;
    }
    ctx->pc = 0x2F202Cu;
    {
        const bool branch_taken_0x2f202c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F202Cu;
        // 0x2f2030: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f202c) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F2034u;
label_2f2034:
    // 0x2f2034: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f2034u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f2038:
    // 0x2f2038: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f2038u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f203c:
    // 0x2f203c: 0x36100041  ori         $s0, $s0, 0x41
    ctx->pc = 0x2f203cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65);
label_2f2040:
    // 0x2f2040: 0x10000021  b           . + 4 + (0x21 << 2)
label_2f2044:
    if (ctx->pc == 0x2F2044u) {
        ctx->pc = 0x2F2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2040u;
        // 0x2f2044: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2048u;
        goto label_2f2048;
    }
    ctx->pc = 0x2F2040u;
    {
        const bool branch_taken_0x2f2040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2040u;
        // 0x2f2044: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2040) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F2048u;
label_2f2048:
    // 0x2f2048: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f2048u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f204c:
    // 0x2f204c: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f204cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f2050:
    // 0x2f2050: 0x36100068  ori         $s0, $s0, 0x68
    ctx->pc = 0x2f2050u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)104);
label_2f2054:
    // 0x2f2054: 0x1000001c  b           . + 4 + (0x1C << 2)
label_2f2058:
    if (ctx->pc == 0x2F2058u) {
        ctx->pc = 0x2F2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2054u;
        // 0x2f2058: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F205Cu;
        goto label_2f205c;
    }
    ctx->pc = 0x2F2054u;
    {
        const bool branch_taken_0x2f2054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2054u;
        // 0x2f2058: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2054) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F205Cu;
label_2f205c:
    // 0x2f205c: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f205cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f2060:
    // 0x2f2060: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f2060u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f2064:
    // 0x2f2064: 0x361000a4  ori         $s0, $s0, 0xA4
    ctx->pc = 0x2f2064u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)164);
label_2f2068:
    // 0x2f2068: 0x10000017  b           . + 4 + (0x17 << 2)
label_2f206c:
    if (ctx->pc == 0x2F206Cu) {
        ctx->pc = 0x2F206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2068u;
        // 0x2f206c: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2070u;
        goto label_2f2070;
    }
    ctx->pc = 0x2F2068u;
    {
        const bool branch_taken_0x2f2068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2068u;
        // 0x2f206c: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2068) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F2070u;
label_2f2070:
    // 0x2f2070: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f2070u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f2074:
    // 0x2f2074: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f2074u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f2078:
    // 0x2f2078: 0x36100009  ori         $s0, $s0, 0x9
    ctx->pc = 0x2f2078u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)9);
label_2f207c:
    // 0x2f207c: 0x10000012  b           . + 4 + (0x12 << 2)
label_2f2080:
    if (ctx->pc == 0x2F2080u) {
        ctx->pc = 0x2F2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F207Cu;
        // 0x2f2080: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2084u;
        goto label_2f2084;
    }
    ctx->pc = 0x2F207Cu;
    {
        const bool branch_taken_0x2f207c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F207Cu;
        // 0x2f2080: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f207c) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F2084u;
label_2f2084:
    // 0x2f2084: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f2084u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f2088:
    // 0x2f2088: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f2088u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f208c:
    // 0x2f208c: 0x36100042  ori         $s0, $s0, 0x42
    ctx->pc = 0x2f208cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)66);
label_2f2090:
    // 0x2f2090: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f2094:
    if (ctx->pc == 0x2F2094u) {
        ctx->pc = 0x2F2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2090u;
        // 0x2f2094: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2098u;
        goto label_2f2098;
    }
    ctx->pc = 0x2F2090u;
    {
        const bool branch_taken_0x2f2090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2090u;
        // 0x2f2094: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2090) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F2098u;
label_2f2098:
    // 0x2f2098: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x2f2098u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f209c:
    // 0x2f209c: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2f209cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2f20a0:
    // 0x2f20a0: 0x36100006  ori         $s0, $s0, 0x6
    ctx->pc = 0x2f20a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)6);
label_2f20a4:
    // 0x2f20a4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f20a8:
    if (ctx->pc == 0x2F20A8u) {
        ctx->pc = 0x2F20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20A4u;
        // 0x2f20a8: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20ACu;
        goto label_2f20ac;
    }
    ctx->pc = 0x2F20A4u;
    {
        const bool branch_taken_0x2f20a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F20A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20A4u;
        // 0x2f20a8: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f20a4) {
            ctx->pc = 0x2F20C8u;
            goto label_2f20c8;
        }
    }
    ctx->pc = 0x2F20ACu;
label_2f20ac:
    // 0x2f20ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f20acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f20b0:
    // 0x2f20b0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f20b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f20b4:
    // 0x2f20b4: 0x90860102  lbu         $a2, 0x102($a0)
    ctx->pc = 0x2f20b4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 258)));
label_2f20b8:
    // 0x2f20b8: 0xc0b67da  jal         func_2D9F68
label_2f20bc:
    if (ctx->pc == 0x2F20BCu) {
        ctx->pc = 0x2F20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20B8u;
        // 0x2f20bc: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20C0u;
        goto label_2f20c0;
    }
    ctx->pc = 0x2F20B8u;
    SET_GPR_U32(ctx, 31, 0x2F20C0u);
    ctx->pc = 0x2F20BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20B8u;
    // 0x2f20bc: 0x24a5edc0  addiu       $a1, $a1, -0x1240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F20B8u, 0x2F20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F20C0u;
label_2f20c0:
    // 0x2f20c0: 0x1000005d  b           . + 4 + (0x5D << 2)
label_2f20c4:
    if (ctx->pc == 0x2F20C4u) {
        ctx->pc = 0x2F20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20C0u;
        // 0x2f20c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20C8u;
        goto label_2f20c8;
    }
    ctx->pc = 0x2F20C0u;
    {
        const bool branch_taken_0x2f20c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20C0u;
        // 0x2f20c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f20c0) {
            ctx->pc = 0x2F2238u;
            goto label_2f2238;
        }
    }
    ctx->pc = 0x2F20C8u;
label_2f20c8:
    // 0x2f20c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f20c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f20cc:
    // 0x2f20cc: 0xc0535c0  jal         func_14D700
label_2f20d0:
    if (ctx->pc == 0x2F20D0u) {
        ctx->pc = 0x2F20D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20CCu;
        // 0x2f20d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20D4u;
        goto label_2f20d4;
    }
    ctx->pc = 0x2F20CCu;
    SET_GPR_U32(ctx, 31, 0x2F20D4u);
    ctx->pc = 0x2F20D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20CCu;
    // 0x2f20d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D700u, 0x2F20CCu, 0x2F20D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F20D4u;
label_2f20d4:
    // 0x2f20d4: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f20d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f20d8:
    // 0x2f20d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f20d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f20dc:
    // 0x2f20dc: 0xc0535c0  jal         func_14D700
label_2f20e0:
    if (ctx->pc == 0x2F20E0u) {
        ctx->pc = 0x2F20E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20DCu;
        // 0x2f20e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20E4u;
        goto label_2f20e4;
    }
    ctx->pc = 0x2F20DCu;
    SET_GPR_U32(ctx, 31, 0x2F20E4u);
    ctx->pc = 0x2F20E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F20DCu;
    // 0x2f20e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D700u, 0x2F20DCu, 0x2F20E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F20E4u;
label_2f20e4:
    // 0x2f20e4: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2f20e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2f20e8:
    // 0x2f20e8: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2f20e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_2f20ec:
    // 0x2f20ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2f20ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2f20f0:
    // 0x2f20f0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2f20f4:
    if (ctx->pc == 0x2F20F4u) {
        ctx->pc = 0x2F20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F20F0u;
        // 0x2f20f4: 0x8e23011c  lw          $v1, 0x11C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F20F8u;
        goto label_2f20f8;
    }
    ctx->pc = 0x2F20F0u;
    {
        const bool branch_taken_0x2f20f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f20f0) {
            ctx->pc = 0x2F20F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F20F0u;
            // 0x2f20f4: 0x8e23011c  lw          $v1, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F210Cu;
            goto label_2f210c;
        }
    }
    ctx->pc = 0x2F20F8u;
label_2f20f8:
    // 0x2f20f8: 0x3c050005  lui         $a1, 0x5
    ctx->pc = 0x2f20f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)5 << 16));
label_2f20fc:
    // 0x2f20fc: 0x34a51011  ori         $a1, $a1, 0x1011
    ctx->pc = 0x2f20fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4113);
label_2f2100:
    // 0x2f2100: 0xc0539de  jal         func_14E778
label_2f2104:
    if (ctx->pc == 0x2F2104u) {
        ctx->pc = 0x2F2104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2100u;
        // 0x2f2104: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2108u;
        goto label_2f2108;
    }
    ctx->pc = 0x2F2100u;
    SET_GPR_U32(ctx, 31, 0x2F2108u);
    ctx->pc = 0x2F2104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2100u;
    // 0x2f2104: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E778u, 0x2F2100u, 0x2F2108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2108u;
label_2f2108:
    // 0x2f2108: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x2f2108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2f210c:
    // 0x2f210c: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x2f210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
label_2f2110:
    // 0x2f2110: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2f2114:
    if (ctx->pc == 0x2F2114u) {
        ctx->pc = 0x2F2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2110u;
        // 0x2f2114: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2118u;
        goto label_2f2118;
    }
    ctx->pc = 0x2F2110u;
    {
        const bool branch_taken_0x2f2110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2110u;
        // 0x2f2114: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2110) {
            ctx->pc = 0x2F2138u;
            goto label_2f2138;
        }
    }
    ctx->pc = 0x2F2118u;
label_2f2118:
    // 0x2f2118: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2f211c:
    if (ctx->pc == 0x2F211Cu) {
        ctx->pc = 0x2F211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2118u;
        // 0x2f211c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2120u;
        goto label_2f2120;
    }
    ctx->pc = 0x2F2118u;
    {
        const bool branch_taken_0x2f2118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F211Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2118u;
        // 0x2f211c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2118) {
            ctx->pc = 0x2F212Cu;
            goto label_2f212c;
        }
    }
    ctx->pc = 0x2F2120u;
label_2f2120:
    // 0x2f2120: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f2120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f2124:
    // 0x2f2124: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f2128:
    if (ctx->pc == 0x2F2128u) {
        ctx->pc = 0x2F2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2124u;
        // 0x2f2128: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F212Cu;
        goto label_2f212c;
    }
    ctx->pc = 0x2F2124u;
    {
        const bool branch_taken_0x2f2124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2124u;
        // 0x2f2128: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2124) {
            ctx->pc = 0x2F2148u;
            goto label_2f2148;
        }
    }
    ctx->pc = 0x2F212Cu;
label_2f212c:
    // 0x2f212c: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f212cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f2130:
    // 0x2f2130: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f2134:
    if (ctx->pc == 0x2F2134u) {
        ctx->pc = 0x2F2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2130u;
        // 0x2f2134: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2138u;
        goto label_2f2138;
    }
    ctx->pc = 0x2F2130u;
    {
        const bool branch_taken_0x2f2130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2130u;
        // 0x2f2134: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2130) {
            ctx->pc = 0x2F2148u;
            goto label_2f2148;
        }
    }
    ctx->pc = 0x2F2138u;
label_2f2138:
    // 0x2f2138: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f213c:
    if (ctx->pc == 0x2F213Cu) {
        ctx->pc = 0x2F213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2138u;
        // 0x2f213c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2140u;
        goto label_2f2140;
    }
    ctx->pc = 0x2F2138u;
    {
        const bool branch_taken_0x2f2138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2138u;
        // 0x2f213c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2138) {
            ctx->pc = 0x2F2150u;
            goto label_2f2150;
        }
    }
    ctx->pc = 0x2F2140u;
label_2f2140:
    // 0x2f2140: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f2140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f2144:
    // 0x2f2144: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f2144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f2148:
    // 0x2f2148: 0xa44302ac  sh          $v1, 0x2AC($v0)
    ctx->pc = 0x2f2148u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 684), (uint16_t)GPR_U32(ctx, 3));
label_2f214c:
    // 0x2f214c: 0xac4402c0  sw          $a0, 0x2C0($v0)
    ctx->pc = 0x2f214cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 704), GPR_U32(ctx, 4));
label_2f2150:
    // 0x2f2150: 0x8e2602b8  lw          $a2, 0x2B8($s1)
    ctx->pc = 0x2f2150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 696)));
label_2f2154:
    // 0x2f2154: 0x10c0000f  beqz        $a2, . + 4 + (0xF << 2)
label_2f2158:
    if (ctx->pc == 0x2F2158u) {
        ctx->pc = 0x2F2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2154u;
        // 0x2f2158: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F215Cu;
        goto label_2f215c;
    }
    ctx->pc = 0x2F2154u;
    {
        const bool branch_taken_0x2f2154 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2154u;
        // 0x2f2158: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2154) {
            ctx->pc = 0x2F2194u;
            goto label_2f2194;
        }
    }
    ctx->pc = 0x2F215Cu;
label_2f215c:
    // 0x2f215c: 0x8e2502b4  lw          $a1, 0x2B4($s1)
    ctx->pc = 0x2f215cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 692)));
label_2f2160:
    // 0x2f2160: 0x24841dc8  addiu       $a0, $a0, 0x1DC8
    ctx->pc = 0x2f2160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7624));
label_2f2164:
    // 0x2f2164: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2f2164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_2f2168:
    // 0x2f2168: 0xc0c1b32  jal         func_306CC8
label_2f216c:
    if (ctx->pc == 0x2F216Cu) {
        ctx->pc = 0x2F216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2168u;
        // 0x2f216c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2170u;
        goto label_2f2170;
    }
    ctx->pc = 0x2F2168u;
    SET_GPR_U32(ctx, 31, 0x2F2170u);
    ctx->pc = 0x2F216Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2168u;
    // 0x2f216c: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306CC8u, 0x2F2168u, 0x2F2170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2170u;
label_2f2170:
    // 0x2f2170: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f2174:
    if (ctx->pc == 0x2F2174u) {
        ctx->pc = 0x2F2174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2170u;
        // 0x2f2174: 0x8e2302b0  lw          $v1, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2178u;
        goto label_2f2178;
    }
    ctx->pc = 0x2F2170u;
    {
        const bool branch_taken_0x2f2170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2170) {
            ctx->pc = 0x2F2174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2170u;
            // 0x2f2174: 0x8e2302b0  lw          $v1, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F218Cu;
            goto label_2f218c;
        }
    }
    ctx->pc = 0x2F2178u;
label_2f2178:
    // 0x2f2178: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f2178u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_2f217c:
    // 0x2f217c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f217cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f2180:
    // 0x2f2180: 0xc0b67da  jal         func_2D9F68
label_2f2184:
    if (ctx->pc == 0x2F2184u) {
        ctx->pc = 0x2F2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2180u;
        // 0x2f2184: 0x24a5ede8  addiu       $a1, $a1, -0x1218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2188u;
        goto label_2f2188;
    }
    ctx->pc = 0x2F2180u;
    SET_GPR_U32(ctx, 31, 0x2F2188u);
    ctx->pc = 0x2F2184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2180u;
    // 0x2f2184: 0x24a5ede8  addiu       $a1, $a1, -0x1218 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F2180u, 0x2F2188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2188u;
label_2f2188:
    // 0x2f2188: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f2188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f218c:
    // 0x2f218c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2f218cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2f2190:
    // 0x2f2190: 0xac6204d0  sw          $v0, 0x4D0($v1)
    ctx->pc = 0x2f2190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1232), GPR_U32(ctx, 2));
label_2f2194:
    // 0x2f2194: 0xc62002ec  lwc1        $f0, 0x2EC($s1)
    ctx->pc = 0x2f2194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2198:
    // 0x2f2198: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2f219c:
    // 0x2f219c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f219cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f21a0:
    // 0x2f21a0: 0x0  nop
    ctx->pc = 0x2f21a0u;
    // NOP
label_2f21a4:
    // 0x2f21a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f21a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f21a8:
    // 0x2f21a8: 0x0  nop
    ctx->pc = 0x2f21a8u;
    // NOP
label_2f21ac:
    // 0x2f21ac: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_2f21b0:
    if (ctx->pc == 0x2F21B0u) {
        ctx->pc = 0x2F21B4u;
        goto label_2f21b4;
    }
    ctx->pc = 0x2F21ACu;
    {
        const bool branch_taken_0x2f21ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f21ac) {
            ctx->pc = 0x2F21F8u;
            goto label_2f21f8;
        }
    }
    ctx->pc = 0x2F21B4u;
label_2f21b4:
    // 0x2f21b4: 0xc62002f0  lwc1        $f0, 0x2F0($s1)
    ctx->pc = 0x2f21b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f21b8:
    // 0x2f21b8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f21b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f21bc:
    // 0x2f21bc: 0x0  nop
    ctx->pc = 0x2f21bcu;
    // NOP
label_2f21c0:
    // 0x2f21c0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2f21c4:
    if (ctx->pc == 0x2F21C4u) {
        ctx->pc = 0x2F21C8u;
        goto label_2f21c8;
    }
    ctx->pc = 0x2F21C0u;
    {
        const bool branch_taken_0x2f21c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f21c0) {
            ctx->pc = 0x2F21F8u;
            goto label_2f21f8;
        }
    }
    ctx->pc = 0x2F21C8u;
label_2f21c8:
    // 0x2f21c8: 0xc62002f4  lwc1        $f0, 0x2F4($s1)
    ctx->pc = 0x2f21c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f21cc:
    // 0x2f21cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f21ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2f21d0:
    // 0x2f21d0: 0x0  nop
    ctx->pc = 0x2f21d0u;
    // NOP
label_2f21d4:
    // 0x2f21d4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f21d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f21d8:
    // 0x2f21d8: 0x0  nop
    ctx->pc = 0x2f21d8u;
    // NOP
label_2f21dc:
    // 0x2f21dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2f21e0:
    if (ctx->pc == 0x2F21E0u) {
        ctx->pc = 0x2F21E4u;
        goto label_2f21e4;
    }
    ctx->pc = 0x2F21DCu;
    {
        const bool branch_taken_0x2f21dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f21dc) {
            ctx->pc = 0x2F21F8u;
            goto label_2f21f8;
        }
    }
    ctx->pc = 0x2F21E4u;
label_2f21e4:
    // 0x2f21e4: 0xc62002f8  lwc1        $f0, 0x2F8($s1)
    ctx->pc = 0x2f21e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f21e8:
    // 0x2f21e8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f21e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2f21ec:
    // 0x2f21ec: 0x0  nop
    ctx->pc = 0x2f21ecu;
    // NOP
label_2f21f0:
    // 0x2f21f0: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_2f21f4:
    if (ctx->pc == 0x2F21F4u) {
        ctx->pc = 0x2F21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21F0u;
        // 0x2f21f4: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F21F8u;
        goto label_2f21f8;
    }
    ctx->pc = 0x2F21F0u;
    {
        const bool branch_taken_0x2f21f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f21f0) {
            ctx->pc = 0x2F21F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F21F0u;
            // 0x2f21f4: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F220Cu;
            goto label_2f220c;
        }
    }
    ctx->pc = 0x2F21F8u;
label_2f21f8:
    // 0x2f21f8: 0xc0535f4  jal         func_14D7D0
label_2f21fc:
    if (ctx->pc == 0x2F21FCu) {
        ctx->pc = 0x2F21FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F21F8u;
        // 0x2f21fc: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2200u;
        goto label_2f2200;
    }
    ctx->pc = 0x2F21F8u;
    SET_GPR_U32(ctx, 31, 0x2F2200u);
    ctx->pc = 0x2F21FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F21F8u;
    // 0x2f21fc: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14D7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D7D0u, 0x2F21F8u, 0x2F2200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2200u;
label_2f2200:
    // 0x2f2200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2204:
    // 0x2f2204: 0xa22202e9  sb          $v0, 0x2E9($s1)
    ctx->pc = 0x2f2204u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 745), (uint8_t)GPR_U32(ctx, 2));
label_2f2208:
    // 0x2f2208: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f2208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f220c:
    // 0x2f220c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f220cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
label_2f2210:
    // 0x2f2210: 0x8c820254  lw          $v0, 0x254($a0)
    ctx->pc = 0x2f2210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 596)));
label_2f2214:
    // 0x2f2214: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f2214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2f2218:
    // 0x2f2218: 0xac820254  sw          $v0, 0x254($a0)
    ctx->pc = 0x2f2218u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 596), GPR_U32(ctx, 2));
label_2f221c:
    // 0x2f221c: 0x8e2502b0  lw          $a1, 0x2B0($s1)
    ctx->pc = 0x2f221cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f2220:
    // 0x2f2220: 0x8ca20214  lw          $v0, 0x214($a1)
    ctx->pc = 0x2f2220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_2f2224:
    // 0x2f2224: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2f2224u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2f2228:
    // 0x2f2228: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x2f2228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2f222c:
    // 0x2f222c: 0x60f809  jalr        $v1
label_2f2230:
    if (ctx->pc == 0x2F2230u) {
        ctx->pc = 0x2F2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F222Cu;
        // 0x2f2230: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2234u;
        goto label_2f2234;
    }
    ctx->pc = 0x2F222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2234u);
        ctx->pc = 0x2F2230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F222Cu;
        // 0x2f2230: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F222Cu, 0x2F2234u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2234u;
label_2f2234:
    // 0x2f2234: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2238:
    // 0x2f2238: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2f2238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2f223c:
    // 0x2f223c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2f223cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f2240:
    // 0x2f2240: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f2240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2244:
    // 0x2f2244: 0x3e00008  jr          $ra
label_2f2248:
    if (ctx->pc == 0x2F2248u) {
        ctx->pc = 0x2F2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2244u;
        // 0x2f2248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F224Cu;
        goto label_2f224c;
    }
    ctx->pc = 0x2F2244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2244u;
        // 0x2f2248: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F224Cu;
label_2f224c:
    // 0x2f224c: 0x0  nop
    ctx->pc = 0x2f224cu;
    // NOP
    ctx->pc = 0x2f2250u;
}
