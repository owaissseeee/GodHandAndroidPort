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

// Function: func_00112CB8
// Address: 0x112cb8 - 0x113228
void func_00112CB8_0x112cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00112CB8_0x112cb8");
#endif

    switch (ctx->pc) {
        case 0x112cb8u: goto label_112cb8;
        case 0x112cbcu: goto label_112cbc;
        case 0x112cc0u: goto label_112cc0;
        case 0x112cc4u: goto label_112cc4;
        case 0x112cc8u: goto label_112cc8;
        case 0x112cccu: goto label_112ccc;
        case 0x112cd0u: goto label_112cd0;
        case 0x112cd4u: goto label_112cd4;
        case 0x112cd8u: goto label_112cd8;
        case 0x112cdcu: goto label_112cdc;
        case 0x112ce0u: goto label_112ce0;
        case 0x112ce4u: goto label_112ce4;
        case 0x112ce8u: goto label_112ce8;
        case 0x112cecu: goto label_112cec;
        case 0x112cf0u: goto label_112cf0;
        case 0x112cf4u: goto label_112cf4;
        case 0x112cf8u: goto label_112cf8;
        case 0x112cfcu: goto label_112cfc;
        case 0x112d00u: goto label_112d00;
        case 0x112d04u: goto label_112d04;
        case 0x112d08u: goto label_112d08;
        case 0x112d0cu: goto label_112d0c;
        case 0x112d10u: goto label_112d10;
        case 0x112d14u: goto label_112d14;
        case 0x112d18u: goto label_112d18;
        case 0x112d1cu: goto label_112d1c;
        case 0x112d20u: goto label_112d20;
        case 0x112d24u: goto label_112d24;
        case 0x112d28u: goto label_112d28;
        case 0x112d2cu: goto label_112d2c;
        case 0x112d30u: goto label_112d30;
        case 0x112d34u: goto label_112d34;
        case 0x112d38u: goto label_112d38;
        case 0x112d3cu: goto label_112d3c;
        case 0x112d40u: goto label_112d40;
        case 0x112d44u: goto label_112d44;
        case 0x112d48u: goto label_112d48;
        case 0x112d4cu: goto label_112d4c;
        case 0x112d50u: goto label_112d50;
        case 0x112d54u: goto label_112d54;
        case 0x112d58u: goto label_112d58;
        case 0x112d5cu: goto label_112d5c;
        case 0x112d60u: goto label_112d60;
        case 0x112d64u: goto label_112d64;
        case 0x112d68u: goto label_112d68;
        case 0x112d6cu: goto label_112d6c;
        case 0x112d70u: goto label_112d70;
        case 0x112d74u: goto label_112d74;
        case 0x112d78u: goto label_112d78;
        case 0x112d7cu: goto label_112d7c;
        case 0x112d80u: goto label_112d80;
        case 0x112d84u: goto label_112d84;
        case 0x112d88u: goto label_112d88;
        case 0x112d8cu: goto label_112d8c;
        case 0x112d90u: goto label_112d90;
        case 0x112d94u: goto label_112d94;
        case 0x112d98u: goto label_112d98;
        case 0x112d9cu: goto label_112d9c;
        case 0x112da0u: goto label_112da0;
        case 0x112da4u: goto label_112da4;
        case 0x112da8u: goto label_112da8;
        case 0x112dacu: goto label_112dac;
        case 0x112db0u: goto label_112db0;
        case 0x112db4u: goto label_112db4;
        case 0x112db8u: goto label_112db8;
        case 0x112dbcu: goto label_112dbc;
        case 0x112dc0u: goto label_112dc0;
        case 0x112dc4u: goto label_112dc4;
        case 0x112dc8u: goto label_112dc8;
        case 0x112dccu: goto label_112dcc;
        case 0x112dd0u: goto label_112dd0;
        case 0x112dd4u: goto label_112dd4;
        case 0x112dd8u: goto label_112dd8;
        case 0x112ddcu: goto label_112ddc;
        case 0x112de0u: goto label_112de0;
        case 0x112de4u: goto label_112de4;
        case 0x112de8u: goto label_112de8;
        case 0x112decu: goto label_112dec;
        case 0x112df0u: goto label_112df0;
        case 0x112df4u: goto label_112df4;
        case 0x112df8u: goto label_112df8;
        case 0x112dfcu: goto label_112dfc;
        case 0x112e00u: goto label_112e00;
        case 0x112e04u: goto label_112e04;
        case 0x112e08u: goto label_112e08;
        case 0x112e0cu: goto label_112e0c;
        case 0x112e10u: goto label_112e10;
        case 0x112e14u: goto label_112e14;
        case 0x112e18u: goto label_112e18;
        case 0x112e1cu: goto label_112e1c;
        case 0x112e20u: goto label_112e20;
        case 0x112e24u: goto label_112e24;
        case 0x112e28u: goto label_112e28;
        case 0x112e2cu: goto label_112e2c;
        case 0x112e30u: goto label_112e30;
        case 0x112e34u: goto label_112e34;
        case 0x112e38u: goto label_112e38;
        case 0x112e3cu: goto label_112e3c;
        case 0x112e40u: goto label_112e40;
        case 0x112e44u: goto label_112e44;
        case 0x112e48u: goto label_112e48;
        case 0x112e4cu: goto label_112e4c;
        case 0x112e50u: goto label_112e50;
        case 0x112e54u: goto label_112e54;
        case 0x112e58u: goto label_112e58;
        case 0x112e5cu: goto label_112e5c;
        case 0x112e60u: goto label_112e60;
        case 0x112e64u: goto label_112e64;
        case 0x112e68u: goto label_112e68;
        case 0x112e6cu: goto label_112e6c;
        case 0x112e70u: goto label_112e70;
        case 0x112e74u: goto label_112e74;
        case 0x112e78u: goto label_112e78;
        case 0x112e7cu: goto label_112e7c;
        case 0x112e80u: goto label_112e80;
        case 0x112e84u: goto label_112e84;
        case 0x112e88u: goto label_112e88;
        case 0x112e8cu: goto label_112e8c;
        case 0x112e90u: goto label_112e90;
        case 0x112e94u: goto label_112e94;
        case 0x112e98u: goto label_112e98;
        case 0x112e9cu: goto label_112e9c;
        case 0x112ea0u: goto label_112ea0;
        case 0x112ea4u: goto label_112ea4;
        case 0x112ea8u: goto label_112ea8;
        case 0x112eacu: goto label_112eac;
        case 0x112eb0u: goto label_112eb0;
        case 0x112eb4u: goto label_112eb4;
        case 0x112eb8u: goto label_112eb8;
        case 0x112ebcu: goto label_112ebc;
        case 0x112ec0u: goto label_112ec0;
        case 0x112ec4u: goto label_112ec4;
        case 0x112ec8u: goto label_112ec8;
        case 0x112eccu: goto label_112ecc;
        case 0x112ed0u: goto label_112ed0;
        case 0x112ed4u: goto label_112ed4;
        case 0x112ed8u: goto label_112ed8;
        case 0x112edcu: goto label_112edc;
        case 0x112ee0u: goto label_112ee0;
        case 0x112ee4u: goto label_112ee4;
        case 0x112ee8u: goto label_112ee8;
        case 0x112eecu: goto label_112eec;
        case 0x112ef0u: goto label_112ef0;
        case 0x112ef4u: goto label_112ef4;
        case 0x112ef8u: goto label_112ef8;
        case 0x112efcu: goto label_112efc;
        case 0x112f00u: goto label_112f00;
        case 0x112f04u: goto label_112f04;
        case 0x112f08u: goto label_112f08;
        case 0x112f0cu: goto label_112f0c;
        case 0x112f10u: goto label_112f10;
        case 0x112f14u: goto label_112f14;
        case 0x112f18u: goto label_112f18;
        case 0x112f1cu: goto label_112f1c;
        case 0x112f20u: goto label_112f20;
        case 0x112f24u: goto label_112f24;
        case 0x112f28u: goto label_112f28;
        case 0x112f2cu: goto label_112f2c;
        case 0x112f30u: goto label_112f30;
        case 0x112f34u: goto label_112f34;
        case 0x112f38u: goto label_112f38;
        case 0x112f3cu: goto label_112f3c;
        case 0x112f40u: goto label_112f40;
        case 0x112f44u: goto label_112f44;
        case 0x112f48u: goto label_112f48;
        case 0x112f4cu: goto label_112f4c;
        case 0x112f50u: goto label_112f50;
        case 0x112f54u: goto label_112f54;
        case 0x112f58u: goto label_112f58;
        case 0x112f5cu: goto label_112f5c;
        case 0x112f60u: goto label_112f60;
        case 0x112f64u: goto label_112f64;
        case 0x112f68u: goto label_112f68;
        case 0x112f6cu: goto label_112f6c;
        case 0x112f70u: goto label_112f70;
        case 0x112f74u: goto label_112f74;
        case 0x112f78u: goto label_112f78;
        case 0x112f7cu: goto label_112f7c;
        case 0x112f80u: goto label_112f80;
        case 0x112f84u: goto label_112f84;
        case 0x112f88u: goto label_112f88;
        case 0x112f8cu: goto label_112f8c;
        case 0x112f90u: goto label_112f90;
        case 0x112f94u: goto label_112f94;
        case 0x112f98u: goto label_112f98;
        case 0x112f9cu: goto label_112f9c;
        case 0x112fa0u: goto label_112fa0;
        case 0x112fa4u: goto label_112fa4;
        case 0x112fa8u: goto label_112fa8;
        case 0x112facu: goto label_112fac;
        case 0x112fb0u: goto label_112fb0;
        case 0x112fb4u: goto label_112fb4;
        case 0x112fb8u: goto label_112fb8;
        case 0x112fbcu: goto label_112fbc;
        case 0x112fc0u: goto label_112fc0;
        case 0x112fc4u: goto label_112fc4;
        case 0x112fc8u: goto label_112fc8;
        case 0x112fccu: goto label_112fcc;
        case 0x112fd0u: goto label_112fd0;
        case 0x112fd4u: goto label_112fd4;
        case 0x112fd8u: goto label_112fd8;
        case 0x112fdcu: goto label_112fdc;
        case 0x112fe0u: goto label_112fe0;
        case 0x112fe4u: goto label_112fe4;
        case 0x112fe8u: goto label_112fe8;
        case 0x112fecu: goto label_112fec;
        case 0x112ff0u: goto label_112ff0;
        case 0x112ff4u: goto label_112ff4;
        case 0x112ff8u: goto label_112ff8;
        case 0x112ffcu: goto label_112ffc;
        case 0x113000u: goto label_113000;
        case 0x113004u: goto label_113004;
        case 0x113008u: goto label_113008;
        case 0x11300cu: goto label_11300c;
        case 0x113010u: goto label_113010;
        case 0x113014u: goto label_113014;
        case 0x113018u: goto label_113018;
        case 0x11301cu: goto label_11301c;
        case 0x113020u: goto label_113020;
        case 0x113024u: goto label_113024;
        case 0x113028u: goto label_113028;
        case 0x11302cu: goto label_11302c;
        case 0x113030u: goto label_113030;
        case 0x113034u: goto label_113034;
        case 0x113038u: goto label_113038;
        case 0x11303cu: goto label_11303c;
        case 0x113040u: goto label_113040;
        case 0x113044u: goto label_113044;
        case 0x113048u: goto label_113048;
        case 0x11304cu: goto label_11304c;
        case 0x113050u: goto label_113050;
        case 0x113054u: goto label_113054;
        case 0x113058u: goto label_113058;
        case 0x11305cu: goto label_11305c;
        case 0x113060u: goto label_113060;
        case 0x113064u: goto label_113064;
        case 0x113068u: goto label_113068;
        case 0x11306cu: goto label_11306c;
        case 0x113070u: goto label_113070;
        case 0x113074u: goto label_113074;
        case 0x113078u: goto label_113078;
        case 0x11307cu: goto label_11307c;
        case 0x113080u: goto label_113080;
        case 0x113084u: goto label_113084;
        case 0x113088u: goto label_113088;
        case 0x11308cu: goto label_11308c;
        case 0x113090u: goto label_113090;
        case 0x113094u: goto label_113094;
        case 0x113098u: goto label_113098;
        case 0x11309cu: goto label_11309c;
        case 0x1130a0u: goto label_1130a0;
        case 0x1130a4u: goto label_1130a4;
        case 0x1130a8u: goto label_1130a8;
        case 0x1130acu: goto label_1130ac;
        case 0x1130b0u: goto label_1130b0;
        case 0x1130b4u: goto label_1130b4;
        case 0x1130b8u: goto label_1130b8;
        case 0x1130bcu: goto label_1130bc;
        case 0x1130c0u: goto label_1130c0;
        case 0x1130c4u: goto label_1130c4;
        case 0x1130c8u: goto label_1130c8;
        case 0x1130ccu: goto label_1130cc;
        case 0x1130d0u: goto label_1130d0;
        case 0x1130d4u: goto label_1130d4;
        case 0x1130d8u: goto label_1130d8;
        case 0x1130dcu: goto label_1130dc;
        case 0x1130e0u: goto label_1130e0;
        case 0x1130e4u: goto label_1130e4;
        case 0x1130e8u: goto label_1130e8;
        case 0x1130ecu: goto label_1130ec;
        case 0x1130f0u: goto label_1130f0;
        case 0x1130f4u: goto label_1130f4;
        case 0x1130f8u: goto label_1130f8;
        case 0x1130fcu: goto label_1130fc;
        case 0x113100u: goto label_113100;
        case 0x113104u: goto label_113104;
        case 0x113108u: goto label_113108;
        case 0x11310cu: goto label_11310c;
        case 0x113110u: goto label_113110;
        case 0x113114u: goto label_113114;
        case 0x113118u: goto label_113118;
        case 0x11311cu: goto label_11311c;
        case 0x113120u: goto label_113120;
        case 0x113124u: goto label_113124;
        case 0x113128u: goto label_113128;
        case 0x11312cu: goto label_11312c;
        case 0x113130u: goto label_113130;
        case 0x113134u: goto label_113134;
        case 0x113138u: goto label_113138;
        case 0x11313cu: goto label_11313c;
        case 0x113140u: goto label_113140;
        case 0x113144u: goto label_113144;
        case 0x113148u: goto label_113148;
        case 0x11314cu: goto label_11314c;
        case 0x113150u: goto label_113150;
        case 0x113154u: goto label_113154;
        case 0x113158u: goto label_113158;
        case 0x11315cu: goto label_11315c;
        case 0x113160u: goto label_113160;
        case 0x113164u: goto label_113164;
        case 0x113168u: goto label_113168;
        case 0x11316cu: goto label_11316c;
        case 0x113170u: goto label_113170;
        case 0x113174u: goto label_113174;
        case 0x113178u: goto label_113178;
        case 0x11317cu: goto label_11317c;
        case 0x113180u: goto label_113180;
        case 0x113184u: goto label_113184;
        case 0x113188u: goto label_113188;
        case 0x11318cu: goto label_11318c;
        case 0x113190u: goto label_113190;
        case 0x113194u: goto label_113194;
        case 0x113198u: goto label_113198;
        case 0x11319cu: goto label_11319c;
        case 0x1131a0u: goto label_1131a0;
        case 0x1131a4u: goto label_1131a4;
        case 0x1131a8u: goto label_1131a8;
        case 0x1131acu: goto label_1131ac;
        case 0x1131b0u: goto label_1131b0;
        case 0x1131b4u: goto label_1131b4;
        case 0x1131b8u: goto label_1131b8;
        case 0x1131bcu: goto label_1131bc;
        case 0x1131c0u: goto label_1131c0;
        case 0x1131c4u: goto label_1131c4;
        case 0x1131c8u: goto label_1131c8;
        case 0x1131ccu: goto label_1131cc;
        case 0x1131d0u: goto label_1131d0;
        case 0x1131d4u: goto label_1131d4;
        case 0x1131d8u: goto label_1131d8;
        case 0x1131dcu: goto label_1131dc;
        case 0x1131e0u: goto label_1131e0;
        case 0x1131e4u: goto label_1131e4;
        case 0x1131e8u: goto label_1131e8;
        case 0x1131ecu: goto label_1131ec;
        case 0x1131f0u: goto label_1131f0;
        case 0x1131f4u: goto label_1131f4;
        case 0x1131f8u: goto label_1131f8;
        case 0x1131fcu: goto label_1131fc;
        case 0x113200u: goto label_113200;
        case 0x113204u: goto label_113204;
        case 0x113208u: goto label_113208;
        case 0x11320cu: goto label_11320c;
        case 0x113210u: goto label_113210;
        case 0x113214u: goto label_113214;
        case 0x113218u: goto label_113218;
        case 0x11321cu: goto label_11321c;
        case 0x113220u: goto label_113220;
        case 0x113224u: goto label_113224;
        default: break;
    }

    ctx->pc = 0x112cb8u;

label_112cb8:
    // 0x112cb8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x112cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_112cbc:
    // 0x112cbc: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x112cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_112cc0:
    // 0x112cc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112cc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_112cc4:
    // 0x112cc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x112cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_112cc8:
    // 0x112cc8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x112cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_112ccc:
    // 0x112ccc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x112cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_112cd0:
    // 0x112cd0: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x112cd0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_112cd4:
    // 0x112cd4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x112cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_112cd8:
    // 0x112cd8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x112cd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112cdc:
    // 0x112cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112ce0:
    // 0x112ce0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x112ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_112ce4:
    // 0x112ce4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x112ce4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_112ce8:
    // 0x112ce8: 0x261064f0  addiu       $s0, $s0, 0x64F0
    ctx->pc = 0x112ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
label_112cec:
    // 0x112cec: 0xe620054c  swc1        $f0, 0x54C($s1)
    ctx->pc = 0x112cecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1356), bits); }
label_112cf0:
    // 0x112cf0: 0xc0a480c  jal         func_292030
label_112cf4:
    if (ctx->pc == 0x112CF4u) {
        ctx->pc = 0x112CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CF0u;
        // 0x112cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112CF8u;
        goto label_112cf8;
    }
    ctx->pc = 0x112CF0u;
    SET_GPR_U32(ctx, 31, 0x112CF8u);
    ctx->pc = 0x112CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CF0u;
    // 0x112cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292030u, 0x112CF0u, 0x112CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112CF8u;
label_112cf8:
    // 0x112cf8: 0xc0a4c3c  jal         func_2930F0
label_112cfc:
    if (ctx->pc == 0x112CFCu) {
        ctx->pc = 0x112CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112CF8u;
        // 0x112cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D00u;
        goto label_112d00;
    }
    ctx->pc = 0x112CF8u;
    SET_GPR_U32(ctx, 31, 0x112D00u);
    ctx->pc = 0x112CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112CF8u;
    // 0x112cfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2930F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2930F0u, 0x112CF8u, 0x112D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D00u;
label_112d00:
    // 0x112d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x112d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_112d04:
    // 0x112d04: 0xc0a4bbc  jal         func_292EF0
label_112d08:
    if (ctx->pc == 0x112D08u) {
        ctx->pc = 0x112D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D04u;
        // 0x112d08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D0Cu;
        goto label_112d0c;
    }
    ctx->pc = 0x112D04u;
    SET_GPR_U32(ctx, 31, 0x112D0Cu);
    ctx->pc = 0x112D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D04u;
    // 0x112d08: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292EF0u, 0x112D04u, 0x112D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D0Cu;
label_112d0c:
    // 0x112d0c: 0x8e2215f4  lw          $v0, 0x15F4($s1)
    ctx->pc = 0x112d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5620)));
label_112d10:
    // 0x112d10: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x112d10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_112d14:
    // 0x112d14: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x112d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_112d18:
    // 0x112d18: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_112d1c:
    if (ctx->pc == 0x112D1Cu) {
        ctx->pc = 0x112D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D18u;
        // 0x112d1c: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D20u;
        goto label_112d20;
    }
    ctx->pc = 0x112D18u;
    {
        const bool branch_taken_0x112d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D18u;
        // 0x112d1c: 0xae2215f4  sw          $v0, 0x15F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d18) {
            ctx->pc = 0x112DACu;
            goto label_112dac;
        }
    }
    ctx->pc = 0x112D20u;
label_112d20:
    // 0x112d20: 0x92220649  lbu         $v0, 0x649($s1)
    ctx->pc = 0x112d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1609)));
label_112d24:
    // 0x112d24: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_112d28:
    if (ctx->pc == 0x112D28u) {
        ctx->pc = 0x112D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D24u;
        // 0x112d28: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D2Cu;
        goto label_112d2c;
    }
    ctx->pc = 0x112D24u;
    {
        const bool branch_taken_0x112d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112d24) {
            ctx->pc = 0x112D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112D24u;
            // 0x112d28: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112DB0u;
            goto label_112db0;
        }
    }
    ctx->pc = 0x112D2Cu;
label_112d2c:
    // 0x112d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112d30:
    // 0x112d30: 0xc042cba  jal         func_10B2E8
label_112d34:
    if (ctx->pc == 0x112D34u) {
        ctx->pc = 0x112D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D30u;
        // 0x112d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D38u;
        goto label_112d38;
    }
    ctx->pc = 0x112D30u;
    SET_GPR_U32(ctx, 31, 0x112D38u);
    ctx->pc = 0x112D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D30u;
    // 0x112d34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B2E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10B2E8u, 0x112D30u, 0x112D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D38u;
label_112d38:
    // 0x112d38: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_112d3c:
    if (ctx->pc == 0x112D3Cu) {
        ctx->pc = 0x112D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D38u;
        // 0x112d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D40u;
        goto label_112d40;
    }
    ctx->pc = 0x112D38u;
    {
        const bool branch_taken_0x112d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D38u;
        // 0x112d3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d38) {
            ctx->pc = 0x112DACu;
            goto label_112dac;
        }
    }
    ctx->pc = 0x112D40u;
label_112d40:
    // 0x112d40: 0x922402f7  lbu         $a0, 0x2F7($s1)
    ctx->pc = 0x112d40u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_112d44:
    // 0x112d44: 0x2c830006  sltiu       $v1, $a0, 0x6
    ctx->pc = 0x112d44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_112d48:
    // 0x112d48: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_112d4c:
    if (ctx->pc == 0x112D4Cu) {
        ctx->pc = 0x112D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D48u;
        // 0x112d4c: 0xa2220649  sb          $v0, 0x649($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D50u;
        goto label_112d50;
    }
    ctx->pc = 0x112D48u;
    {
        const bool branch_taken_0x112d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D48u;
        // 0x112d4c: 0xa2220649  sb          $v0, 0x649($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1609), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d48) {
            ctx->pc = 0x112D6Cu;
            goto label_112d6c;
        }
    }
    ctx->pc = 0x112D50u;
label_112d50:
    // 0x112d50: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x112d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_112d54:
    // 0x112d54: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x112d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_112d58:
    // 0x112d58: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x112d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
label_112d5c:
    // 0x112d5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_112d60:
    // 0x112d60: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_112d64:
    // 0x112d64: 0x800008  jr          $a0
label_112d68:
    if (ctx->pc == 0x112D68u) {
        ctx->pc = 0x112D6Cu;
        goto label_112d6c;
    }
    ctx->pc = 0x112D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112D6Cu: goto label_112d6c;
            case 0x112D84u: goto label_112d84;
            case 0x112DA0u: goto label_112da0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112D64u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x112D6Cu;
label_112d6c:
    // 0x112d6c: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x112d6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
label_112d70:
    // 0x112d70: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x112d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
label_112d74:
    // 0x112d74: 0xc07eb00  jal         func_1FAC00
label_112d78:
    if (ctx->pc == 0x112D78u) {
        ctx->pc = 0x112D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D74u;
        // 0x112d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112D7Cu;
        goto label_112d7c;
    }
    ctx->pc = 0x112D74u;
    SET_GPR_U32(ctx, 31, 0x112D7Cu);
    ctx->pc = 0x112D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112D74u;
    // 0x112d78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x112D74u, 0x112D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D7Cu;
label_112d7c:
    // 0x112d7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_112d80:
    if (ctx->pc == 0x112D80u) {
        ctx->pc = 0x112D84u;
        goto label_112d84;
    }
    ctx->pc = 0x112D7Cu;
    {
        const bool branch_taken_0x112d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112d7c) {
            ctx->pc = 0x112D88u;
            goto label_112d88;
        }
    }
    ctx->pc = 0x112D84u;
label_112d84:
    // 0x112d84: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x112d84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_112d88:
    // 0x112d88: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x112d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_112d8c:
    // 0x112d8c: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x112d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
label_112d90:
    // 0x112d90: 0xc07eb00  jal         func_1FAC00
label_112d94:
    if (ctx->pc == 0x112D94u) {
        ctx->pc = 0x112D98u;
        goto label_112d98;
    }
    ctx->pc = 0x112D90u;
    SET_GPR_U32(ctx, 31, 0x112D98u);
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x112D90u, 0x112D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112D98u;
label_112d98:
    // 0x112d98: 0x10000005  b           . + 4 + (0x5 << 2)
label_112d9c:
    if (ctx->pc == 0x112D9Cu) {
        ctx->pc = 0x112D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D98u;
        // 0x112d9c: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112DA0u;
        goto label_112da0;
    }
    ctx->pc = 0x112D98u;
    {
        const bool branch_taken_0x112d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112D98u;
        // 0x112d9c: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112d98) {
            ctx->pc = 0x112DB0u;
            goto label_112db0;
        }
    }
    ctx->pc = 0x112DA0u;
label_112da0:
    // 0x112da0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x112da0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_112da4:
    // 0x112da4: 0xc07eb00  jal         func_1FAC00
label_112da8:
    if (ctx->pc == 0x112DA8u) {
        ctx->pc = 0x112DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DA4u;
        // 0x112da8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112DACu;
        goto label_112dac;
    }
    ctx->pc = 0x112DA4u;
    SET_GPR_U32(ctx, 31, 0x112DACu);
    ctx->pc = 0x112DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112DA4u;
    // 0x112da8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC00u, 0x112DA4u, 0x112DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112DACu;
label_112dac:
    // 0x112dac: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x112dacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_112db0:
    // 0x112db0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_112db4:
    if (ctx->pc == 0x112DB4u) {
        ctx->pc = 0x112DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DB0u;
        // 0x112db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112DB8u;
        goto label_112db8;
    }
    ctx->pc = 0x112DB0u;
    {
        const bool branch_taken_0x112db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DB0u;
        // 0x112db4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112db0) {
            ctx->pc = 0x112DC8u;
            goto label_112dc8;
        }
    }
    ctx->pc = 0x112DB8u;
label_112db8:
    // 0x112db8: 0x106200b1  beq         $v1, $v0, . + 4 + (0xB1 << 2)
label_112dbc:
    if (ctx->pc == 0x112DBCu) {
        ctx->pc = 0x112DC0u;
        goto label_112dc0;
    }
    ctx->pc = 0x112DB8u;
    {
        const bool branch_taken_0x112db8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x112db8) {
            ctx->pc = 0x113080u;
            goto label_113080;
        }
    }
    ctx->pc = 0x112DC0u;
label_112dc0:
    // 0x112dc0: 0x100000ea  b           . + 4 + (0xEA << 2)
label_112dc4:
    if (ctx->pc == 0x112DC4u) {
        ctx->pc = 0x112DC8u;
        goto label_112dc8;
    }
    ctx->pc = 0x112DC0u;
    {
        const bool branch_taken_0x112dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112dc0) {
            ctx->pc = 0x11316Cu;
            goto label_11316c;
        }
    }
    ctx->pc = 0x112DC8u;
label_112dc8:
    // 0x112dc8: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x112dc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_112dcc:
    // 0x112dcc: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x112dccu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
label_112dd0:
    // 0x112dd0: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x112dd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_112dd4:
    // 0x112dd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_112dd8:
    if (ctx->pc == 0x112DD8u) {
        ctx->pc = 0x112DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD4u;
        // 0x112dd8: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112DDCu;
        goto label_112ddc;
    }
    ctx->pc = 0x112DD4u;
    {
        const bool branch_taken_0x112dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112DD4u;
        // 0x112dd8: 0xa62005e2  sh          $zero, 0x5E2($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112dd4) {
            ctx->pc = 0x112DF8u;
            goto label_112df8;
        }
    }
    ctx->pc = 0x112DDCu;
label_112ddc:
    // 0x112ddc: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x112ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_112de0:
    // 0x112de0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x112de0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_112de4:
    // 0x112de4: 0x2442c1f0  addiu       $v0, $v0, -0x3E10
    ctx->pc = 0x112de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951408));
label_112de8:
    // 0x112de8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x112de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_112dec:
    // 0x112dec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x112decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_112df0:
    // 0x112df0: 0x800008  jr          $a0
label_112df4:
    if (ctx->pc == 0x112DF4u) {
        ctx->pc = 0x112DF8u;
        goto label_112df8;
    }
    ctx->pc = 0x112DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x112DF8u: goto label_112df8;
            case 0x112E4Cu: goto label_112e4c;
            case 0x112EA0u: goto label_112ea0;
            case 0x112EF4u: goto label_112ef4;
            case 0x112F78u: goto label_112f78;
            case 0x112FE4u: goto label_112fe4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112DF0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x112DF8u;
label_112df8:
    // 0x112df8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x112df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_112dfc:
    // 0x112dfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112e00:
    // 0x112e00: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112e00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_112e04:
    // 0x112e04: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_112e08:
    // 0x112e08: 0x8c450314  lw          $a1, 0x314($v0)
    ctx->pc = 0x112e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 788)));
label_112e0c:
    // 0x112e0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e10:
    // 0x112e10: 0x8c46031c  lw          $a2, 0x31C($v0)
    ctx->pc = 0x112e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 796)));
label_112e14:
    // 0x112e14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112e14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e18:
    // 0x112e18: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x112e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_112e1c:
    // 0x112e1c: 0xc0aa15e  jal         func_2A8578
label_112e20:
    if (ctx->pc == 0x112E20u) {
        ctx->pc = 0x112E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E1Cu;
        // 0x112e20: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E24u;
        goto label_112e24;
    }
    ctx->pc = 0x112E1Cu;
    SET_GPR_U32(ctx, 31, 0x112E24u);
    ctx->pc = 0x112E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E1Cu;
    // 0x112e20: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x112E1Cu, 0x112E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E24u;
label_112e24:
    // 0x112e24: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112e28:
    // 0x112e28: 0x240500e1  addiu       $a1, $zero, 0xE1
    ctx->pc = 0x112e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
label_112e2c:
    // 0x112e2c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x112e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_112e30:
    // 0x112e30: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x112e30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_112e34:
    // 0x112e34: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112e34u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e38:
    // 0x112e38: 0xc042902  jal         func_10A408
label_112e3c:
    if (ctx->pc == 0x112E3Cu) {
        ctx->pc = 0x112E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E38u;
        // 0x112e3c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E40u;
        goto label_112e40;
    }
    ctx->pc = 0x112E38u;
    SET_GPR_U32(ctx, 31, 0x112E40u);
    ctx->pc = 0x112E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E38u;
    // 0x112e3c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x112E38u, 0x112E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E40u;
label_112e40:
    // 0x112e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112e44:
    // 0x112e44: 0x10000060  b           . + 4 + (0x60 << 2)
label_112e48:
    if (ctx->pc == 0x112E48u) {
        ctx->pc = 0x112E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E44u;
        // 0x112e48: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E4Cu;
        goto label_112e4c;
    }
    ctx->pc = 0x112E44u;
    {
        const bool branch_taken_0x112e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E44u;
        // 0x112e48: 0x240500e1  addiu       $a1, $zero, 0xE1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 225));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e44) {
            ctx->pc = 0x112FC8u;
            goto label_112fc8;
        }
    }
    ctx->pc = 0x112E4Cu;
label_112e4c:
    // 0x112e4c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x112e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_112e50:
    // 0x112e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112e54:
    // 0x112e54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_112e58:
    // 0x112e58: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112e58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_112e5c:
    // 0x112e5c: 0x8c4507f0  lw          $a1, 0x7F0($v0)
    ctx->pc = 0x112e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2032)));
label_112e60:
    // 0x112e60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112e60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e64:
    // 0x112e64: 0x8c4607f4  lw          $a2, 0x7F4($v0)
    ctx->pc = 0x112e64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2036)));
label_112e68:
    // 0x112e68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112e68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e6c:
    // 0x112e6c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x112e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_112e70:
    // 0x112e70: 0xc0aa15e  jal         func_2A8578
label_112e74:
    if (ctx->pc == 0x112E74u) {
        ctx->pc = 0x112E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E70u;
        // 0x112e74: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E78u;
        goto label_112e78;
    }
    ctx->pc = 0x112E70u;
    SET_GPR_U32(ctx, 31, 0x112E78u);
    ctx->pc = 0x112E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E70u;
    // 0x112e74: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x112E70u, 0x112E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E78u;
label_112e78:
    // 0x112e78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112e7c:
    // 0x112e7c: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x112e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_112e80:
    // 0x112e80: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x112e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_112e84:
    // 0x112e84: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x112e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_112e88:
    // 0x112e88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112e88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112e8c:
    // 0x112e8c: 0xc042902  jal         func_10A408
label_112e90:
    if (ctx->pc == 0x112E90u) {
        ctx->pc = 0x112E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E8Cu;
        // 0x112e90: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112E94u;
        goto label_112e94;
    }
    ctx->pc = 0x112E8Cu;
    SET_GPR_U32(ctx, 31, 0x112E94u);
    ctx->pc = 0x112E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112E8Cu;
    // 0x112e90: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x112E8Cu, 0x112E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112E94u;
label_112e94:
    // 0x112e94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112e98:
    // 0x112e98: 0x1000004b  b           . + 4 + (0x4B << 2)
label_112e9c:
    if (ctx->pc == 0x112E9Cu) {
        ctx->pc = 0x112E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E98u;
        // 0x112e9c: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112EA0u;
        goto label_112ea0;
    }
    ctx->pc = 0x112E98u;
    {
        const bool branch_taken_0x112e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112E98u;
        // 0x112e9c: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112e98) {
            ctx->pc = 0x112FC8u;
            goto label_112fc8;
        }
    }
    ctx->pc = 0x112EA0u;
label_112ea0:
    // 0x112ea0: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x112ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_112ea4:
    // 0x112ea4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112ea8:
    // 0x112ea8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112ea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_112eac:
    // 0x112eac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112eacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_112eb0:
    // 0x112eb0: 0x8c4507f8  lw          $a1, 0x7F8($v0)
    ctx->pc = 0x112eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2040)));
label_112eb4:
    // 0x112eb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112eb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112eb8:
    // 0x112eb8: 0x8c4607fc  lw          $a2, 0x7FC($v0)
    ctx->pc = 0x112eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2044)));
label_112ebc:
    // 0x112ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112ec0:
    // 0x112ec0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x112ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_112ec4:
    // 0x112ec4: 0xc0aa15e  jal         func_2A8578
label_112ec8:
    if (ctx->pc == 0x112EC8u) {
        ctx->pc = 0x112EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EC4u;
        // 0x112ec8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112ECCu;
        goto label_112ecc;
    }
    ctx->pc = 0x112EC4u;
    SET_GPR_U32(ctx, 31, 0x112ECCu);
    ctx->pc = 0x112EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EC4u;
    // 0x112ec8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x112EC4u, 0x112ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112ECCu;
label_112ecc:
    // 0x112ecc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112ed0:
    // 0x112ed0: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x112ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_112ed4:
    // 0x112ed4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x112ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_112ed8:
    // 0x112ed8: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x112ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_112edc:
    // 0x112edc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112edcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112ee0:
    // 0x112ee0: 0xc042902  jal         func_10A408
label_112ee4:
    if (ctx->pc == 0x112EE4u) {
        ctx->pc = 0x112EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EE0u;
        // 0x112ee4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112EE8u;
        goto label_112ee8;
    }
    ctx->pc = 0x112EE0u;
    SET_GPR_U32(ctx, 31, 0x112EE8u);
    ctx->pc = 0x112EE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112EE0u;
    // 0x112ee4: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x112EE0u, 0x112EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112EE8u;
label_112ee8:
    // 0x112ee8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112eec:
    // 0x112eec: 0x10000036  b           . + 4 + (0x36 << 2)
label_112ef0:
    if (ctx->pc == 0x112EF0u) {
        ctx->pc = 0x112EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EECu;
        // 0x112ef0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112EF4u;
        goto label_112ef4;
    }
    ctx->pc = 0x112EECu;
    {
        const bool branch_taken_0x112eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112EECu;
        // 0x112ef0: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112eec) {
            ctx->pc = 0x112FC8u;
            goto label_112fc8;
        }
    }
    ctx->pc = 0x112EF4u;
label_112ef4:
    // 0x112ef4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x112ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_112ef8:
    // 0x112ef8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112efc:
    // 0x112efc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_112f00:
    // 0x112f00: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_112f04:
    // 0x112f04: 0x8c450818  lw          $a1, 0x818($v0)
    ctx->pc = 0x112f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2072)));
label_112f08:
    // 0x112f08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112f08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112f0c:
    // 0x112f0c: 0x8c46081c  lw          $a2, 0x81C($v0)
    ctx->pc = 0x112f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2076)));
label_112f10:
    // 0x112f10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112f10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112f14:
    // 0x112f14: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x112f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_112f18:
    // 0x112f18: 0xc0aa15e  jal         func_2A8578
label_112f1c:
    if (ctx->pc == 0x112F1Cu) {
        ctx->pc = 0x112F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F18u;
        // 0x112f1c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F20u;
        goto label_112f20;
    }
    ctx->pc = 0x112F18u;
    SET_GPR_U32(ctx, 31, 0x112F20u);
    ctx->pc = 0x112F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F18u;
    // 0x112f1c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x112F18u, 0x112F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F20u;
label_112f20:
    // 0x112f20: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x112f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_112f24:
    // 0x112f24: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x112f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31244)));
label_112f28:
    // 0x112f28: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_112f2c:
    if (ctx->pc == 0x112F2Cu) {
        ctx->pc = 0x112F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F28u;
        // 0x112f2c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F30u;
        goto label_112f30;
    }
    ctx->pc = 0x112F28u;
    {
        const bool branch_taken_0x112f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F28u;
        // 0x112f2c: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f28) {
            ctx->pc = 0x112F54u;
            goto label_112f54;
        }
    }
    ctx->pc = 0x112F30u;
label_112f30:
    // 0x112f30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112f34:
    // 0x112f34: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x112f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_112f38:
    // 0x112f38: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x112f38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_112f3c:
    // 0x112f3c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112f3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112f40:
    // 0x112f40: 0xc042902  jal         func_10A408
label_112f44:
    if (ctx->pc == 0x112F44u) {
        ctx->pc = 0x112F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F40u;
        // 0x112f44: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F48u;
        goto label_112f48;
    }
    ctx->pc = 0x112F40u;
    SET_GPR_U32(ctx, 31, 0x112F48u);
    ctx->pc = 0x112F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F40u;
    // 0x112f44: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x112F40u, 0x112F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F48u;
label_112f48:
    // 0x112f48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112f4c:
    // 0x112f4c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_112f50:
    if (ctx->pc == 0x112F50u) {
        ctx->pc = 0x112F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F4Cu;
        // 0x112f50: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F54u;
        goto label_112f54;
    }
    ctx->pc = 0x112F4Cu;
    {
        const bool branch_taken_0x112f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F4Cu;
        // 0x112f50: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f4c) {
            ctx->pc = 0x112FC8u;
            goto label_112fc8;
        }
    }
    ctx->pc = 0x112F54u;
label_112f54:
    // 0x112f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112f58:
    // 0x112f58: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x112f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_112f5c:
    // 0x112f5c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x112f5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_112f60:
    // 0x112f60: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112f60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112f64:
    // 0x112f64: 0xc042902  jal         func_10A408
label_112f68:
    if (ctx->pc == 0x112F68u) {
        ctx->pc = 0x112F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F64u;
        // 0x112f68: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F6Cu;
        goto label_112f6c;
    }
    ctx->pc = 0x112F64u;
    SET_GPR_U32(ctx, 31, 0x112F6Cu);
    ctx->pc = 0x112F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F64u;
    // 0x112f68: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x112F64u, 0x112F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112F6Cu;
label_112f6c:
    // 0x112f6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112f70:
    // 0x112f70: 0x10000015  b           . + 4 + (0x15 << 2)
label_112f74:
    if (ctx->pc == 0x112F74u) {
        ctx->pc = 0x112F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F70u;
        // 0x112f74: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112F78u;
        goto label_112f78;
    }
    ctx->pc = 0x112F70u;
    {
        const bool branch_taken_0x112f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F70u;
        // 0x112f74: 0x24050046  addiu       $a1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112f70) {
            ctx->pc = 0x112FC8u;
            goto label_112fc8;
        }
    }
    ctx->pc = 0x112F78u;
label_112f78:
    // 0x112f78: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x112f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_112f7c:
    // 0x112f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112f80:
    // 0x112f80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_112f84:
    // 0x112f84: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_112f88:
    // 0x112f88: 0x8c450820  lw          $a1, 0x820($v0)
    ctx->pc = 0x112f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2080)));
label_112f8c:
    // 0x112f8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112f90:
    // 0x112f90: 0x8c460824  lw          $a2, 0x824($v0)
    ctx->pc = 0x112f90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2084)));
label_112f94:
    // 0x112f94: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x112f94u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112f98:
    // 0x112f98: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x112f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_112f9c:
    // 0x112f9c: 0xc0aa15e  jal         func_2A8578
label_112fa0:
    if (ctx->pc == 0x112FA0u) {
        ctx->pc = 0x112FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112F9Cu;
        // 0x112fa0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FA4u;
        goto label_112fa4;
    }
    ctx->pc = 0x112F9Cu;
    SET_GPR_U32(ctx, 31, 0x112FA4u);
    ctx->pc = 0x112FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112F9Cu;
    // 0x112fa0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x112F9Cu, 0x112FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FA4u;
label_112fa4:
    // 0x112fa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112fa8:
    // 0x112fa8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x112fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_112fac:
    // 0x112fac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x112facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_112fb0:
    // 0x112fb0: 0x24070023  addiu       $a3, $zero, 0x23
    ctx->pc = 0x112fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_112fb4:
    // 0x112fb4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112fb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112fb8:
    // 0x112fb8: 0xc042902  jal         func_10A408
label_112fbc:
    if (ctx->pc == 0x112FBCu) {
        ctx->pc = 0x112FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FB8u;
        // 0x112fbc: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FC0u;
        goto label_112fc0;
    }
    ctx->pc = 0x112FB8u;
    SET_GPR_U32(ctx, 31, 0x112FC0u);
    ctx->pc = 0x112FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FB8u;
    // 0x112fbc: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x112FB8u, 0x112FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FC0u;
label_112fc0:
    // 0x112fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112fc4:
    // 0x112fc4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x112fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_112fc8:
    // 0x112fc8: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x112fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_112fcc:
    // 0x112fcc: 0x2407001d  addiu       $a3, $zero, 0x1D
    ctx->pc = 0x112fccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_112fd0:
    // 0x112fd0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x112fd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112fd4:
    // 0x112fd4: 0xc042908  jal         func_10A420
label_112fd8:
    if (ctx->pc == 0x112FD8u) {
        ctx->pc = 0x112FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FD4u;
        // 0x112fd8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FDCu;
        goto label_112fdc;
    }
    ctx->pc = 0x112FD4u;
    SET_GPR_U32(ctx, 31, 0x112FDCu);
    ctx->pc = 0x112FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FD4u;
    // 0x112fd8: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x112FD4u, 0x112FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FDCu;
label_112fdc:
    // 0x112fdc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_112fe0:
    if (ctx->pc == 0x112FE0u) {
        ctx->pc = 0x112FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FDCu;
        // 0x112fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FE4u;
        goto label_112fe4;
    }
    ctx->pc = 0x112FDCu;
    {
        const bool branch_taken_0x112fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FDCu;
        // 0x112fe0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112fdc) {
            ctx->pc = 0x113054u;
            goto label_113054;
        }
    }
    ctx->pc = 0x112FE4u;
label_112fe4:
    // 0x112fe4: 0xc049396  jal         func_124E58
label_112fe8:
    if (ctx->pc == 0x112FE8u) {
        ctx->pc = 0x112FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112FE4u;
        // 0x112fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112FECu;
        goto label_112fec;
    }
    ctx->pc = 0x112FE4u;
    SET_GPR_U32(ctx, 31, 0x112FECu);
    ctx->pc = 0x112FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112FE4u;
    // 0x112fe8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E58u, 0x112FE4u, 0x112FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112FECu;
label_112fec:
    // 0x112fec: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x112fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_112ff0:
    // 0x112ff0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112ff4:
    // 0x112ff4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x112ff4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_112ff8:
    // 0x112ff8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x112ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_112ffc:
    // 0x112ffc: 0x8c450828  lw          $a1, 0x828($v0)
    ctx->pc = 0x112ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
label_113000:
    // 0x113000: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113000u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113004:
    // 0x113004: 0x8c46082c  lw          $a2, 0x82C($v0)
    ctx->pc = 0x113004u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
label_113008:
    // 0x113008: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x113008u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11300c:
    // 0x11300c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x11300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_113010:
    // 0x113010: 0xc0aa15e  jal         func_2A8578
label_113014:
    if (ctx->pc == 0x113014u) {
        ctx->pc = 0x113014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113010u;
        // 0x113014: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113018u;
        goto label_113018;
    }
    ctx->pc = 0x113010u;
    SET_GPR_U32(ctx, 31, 0x113018u);
    ctx->pc = 0x113014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113010u;
    // 0x113014: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x113010u, 0x113018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113018u;
label_113018:
    // 0x113018: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11301c:
    // 0x11301c: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x11301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_113020:
    // 0x113020: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x113020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_113024:
    // 0x113024: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x113024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_113028:
    // 0x113028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11302c:
    // 0x11302c: 0xc042902  jal         func_10A408
label_113030:
    if (ctx->pc == 0x113030u) {
        ctx->pc = 0x113030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11302Cu;
        // 0x113030: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113034u;
        goto label_113034;
    }
    ctx->pc = 0x11302Cu;
    SET_GPR_U32(ctx, 31, 0x113034u);
    ctx->pc = 0x113030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11302Cu;
    // 0x113030: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A408u, 0x11302Cu, 0x113034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113034u;
label_113034:
    // 0x113034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113038:
    // 0x113038: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x113038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_11303c:
    // 0x11303c: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x11303cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_113040:
    // 0x113040: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x113040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_113044:
    // 0x113044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x113044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113048:
    // 0x113048: 0xc042908  jal         func_10A420
label_11304c:
    if (ctx->pc == 0x11304Cu) {
        ctx->pc = 0x11304Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113048u;
        // 0x11304c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113050u;
        goto label_113050;
    }
    ctx->pc = 0x113048u;
    SET_GPR_U32(ctx, 31, 0x113050u);
    ctx->pc = 0x11304Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113048u;
    // 0x11304c: 0x24090123  addiu       $t1, $zero, 0x123 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A420u, 0x113048u, 0x113050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113050u;
label_113050:
    // 0x113050: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x113050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_113054:
    // 0x113054: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113058:
    // 0x113058: 0xc04a55e  jal         func_129578
label_11305c:
    if (ctx->pc == 0x11305Cu) {
        ctx->pc = 0x11305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113058u;
        // 0x11305c: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113060u;
        goto label_113060;
    }
    ctx->pc = 0x113058u;
    SET_GPR_U32(ctx, 31, 0x113060u);
    ctx->pc = 0x11305Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113058u;
    // 0x11305c: 0xa2221684  sb          $v0, 0x1684($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 5764), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129578u, 0x113058u, 0x113060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113060u;
label_113060:
    // 0x113060: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x113060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_113064:
    // 0x113064: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x113064u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_113068:
    // 0x113068: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113068u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11306c:
    // 0x11306c: 0xc0a4bce  jal         func_292F38
label_113070:
    if (ctx->pc == 0x113070u) {
        ctx->pc = 0x113070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11306Cu;
        // 0x113070: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113074u;
        goto label_113074;
    }
    ctx->pc = 0x11306Cu;
    SET_GPR_U32(ctx, 31, 0x113074u);
    ctx->pc = 0x113070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11306Cu;
    // 0x113070: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x11306Cu, 0x113074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113074u;
label_113074:
    // 0x113074: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x113074u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_113078:
    // 0x113078: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x113078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_11307c:
    // 0x11307c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x11307cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_113080:
    // 0x113080: 0xc0493b0  jal         func_124EC0
label_113084:
    if (ctx->pc == 0x113084u) {
        ctx->pc = 0x113084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113080u;
        // 0x113084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113088u;
        goto label_113088;
    }
    ctx->pc = 0x113080u;
    SET_GPR_U32(ctx, 31, 0x113088u);
    ctx->pc = 0x113084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113080u;
    // 0x113084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124EC0u, 0x113080u, 0x113088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113088u;
label_113088:
    // 0x113088: 0xc055f06  jal         func_157C18
label_11308c:
    if (ctx->pc == 0x11308Cu) {
        ctx->pc = 0x11308Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113088u;
        // 0x11308c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113090u;
        goto label_113090;
    }
    ctx->pc = 0x113088u;
    SET_GPR_U32(ctx, 31, 0x113090u);
    ctx->pc = 0x11308Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113088u;
    // 0x11308c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x113088u, 0x113090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113090u;
label_113090:
    // 0x113090: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_113094:
    if (ctx->pc == 0x113094u) {
        ctx->pc = 0x113094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113090u;
        // 0x113094: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113098u;
        goto label_113098;
    }
    ctx->pc = 0x113090u;
    {
        const bool branch_taken_0x113090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x113090) {
            ctx->pc = 0x113094u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113090u;
            // 0x113094: 0x8e250640  lw          $a1, 0x640($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1130C4u;
            goto label_1130c4;
        }
    }
    ctx->pc = 0x113098u;
label_113098:
    // 0x113098: 0xc04a58c  jal         func_129630
label_11309c:
    if (ctx->pc == 0x11309Cu) {
        ctx->pc = 0x11309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113098u;
        // 0x11309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130A0u;
        goto label_1130a0;
    }
    ctx->pc = 0x113098u;
    SET_GPR_U32(ctx, 31, 0x1130A0u);
    ctx->pc = 0x11309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113098u;
    // 0x11309c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x113098u, 0x1130A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130A0u;
label_1130a0:
    // 0x1130a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1130a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1130a4:
    // 0x1130a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1130a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1130a8:
    // 0x1130a8: 0xc0493d8  jal         func_124F60
label_1130ac:
    if (ctx->pc == 0x1130ACu) {
        ctx->pc = 0x1130ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130A8u;
        // 0x1130ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130B0u;
        goto label_1130b0;
    }
    ctx->pc = 0x1130A8u;
    SET_GPR_U32(ctx, 31, 0x1130B0u);
    ctx->pc = 0x1130ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130A8u;
    // 0x1130ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1130A8u, 0x1130B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130B0u;
label_1130b0:
    // 0x1130b0: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1130b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
label_1130b4:
    // 0x1130b4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1130b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
label_1130b8:
    // 0x1130b8: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1130b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
label_1130bc:
    // 0x1130bc: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1130bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1130c0:
    // 0x1130c0: 0x8e250640  lw          $a1, 0x640($s1)
    ctx->pc = 0x1130c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1600)));
label_1130c4:
    // 0x1130c4: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
label_1130c8:
    if (ctx->pc == 0x1130C8u) {
        ctx->pc = 0x1130CCu;
        goto label_1130cc;
    }
    ctx->pc = 0x1130C4u;
    {
        const bool branch_taken_0x1130c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1130c4) {
            ctx->pc = 0x11314Cu;
            goto label_11314c;
        }
    }
    ctx->pc = 0x1130CCu;
label_1130cc:
    // 0x1130cc: 0x8ca30214  lw          $v1, 0x214($a1)
    ctx->pc = 0x1130ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 532)));
label_1130d0:
    // 0x1130d0: 0x8e3000f0  lw          $s0, 0xF0($s1)
    ctx->pc = 0x1130d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_1130d4:
    // 0x1130d4: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x1130d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_1130d8:
    // 0x1130d8: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x1130d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_1130dc:
    // 0x1130dc: 0x40f809  jalr        $v0
label_1130e0:
    if (ctx->pc == 0x1130E0u) {
        ctx->pc = 0x1130E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130DCu;
        // 0x1130e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130E4u;
        goto label_1130e4;
    }
    ctx->pc = 0x1130DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1130E4u);
        ctx->pc = 0x1130E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130DCu;
        // 0x1130e0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1130DCu, 0x1130E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1130E4u;
label_1130e4:
    // 0x1130e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1130e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1130e8:
    // 0x1130e8: 0xc07dfac  jal         func_1F7EB0
label_1130ec:
    if (ctx->pc == 0x1130ECu) {
        ctx->pc = 0x1130ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1130E8u;
        // 0x1130ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1130F0u;
        goto label_1130f0;
    }
    ctx->pc = 0x1130E8u;
    SET_GPR_U32(ctx, 31, 0x1130F0u);
    ctx->pc = 0x1130ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1130E8u;
    // 0x1130ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x1130E8u, 0x1130F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1130F0u;
label_1130f0:
    // 0x1130f0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x1130f0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_1130f4:
    // 0x1130f4: 0x3c013f9a  lui         $at, 0x3F9A
    ctx->pc = 0x1130f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16282 << 16));
label_1130f8:
    // 0x1130f8: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1130f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1130fc:
    // 0x1130fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1130fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_113100:
    // 0x113100: 0x0  nop
    ctx->pc = 0x113100u;
    // NOP
label_113104:
    // 0x113104: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x113104u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_113108:
    // 0x113108: 0x0  nop
    ctx->pc = 0x113108u;
    // NOP
label_11310c:
    // 0x11310c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_113110:
    if (ctx->pc == 0x113110u) {
        ctx->pc = 0x113114u;
        goto label_113114;
    }
    ctx->pc = 0x11310Cu;
    {
        const bool branch_taken_0x11310c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11310c) {
            ctx->pc = 0x11311Cu;
            goto label_11311c;
        }
    }
    ctx->pc = 0x113114u;
label_113114:
    // 0x113114: 0xae200330  sw          $zero, 0x330($s1)
    ctx->pc = 0x113114u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 816), GPR_U32(ctx, 0));
label_113118:
    // 0x113118: 0xae200338  sw          $zero, 0x338($s1)
    ctx->pc = 0x113118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 824), GPR_U32(ctx, 0));
label_11311c:
    // 0x11311c: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x11311cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_113120:
    // 0x113120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_113124:
    // 0x113124: 0x0  nop
    ctx->pc = 0x113124u;
    // NOP
label_113128:
    // 0x113128: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x113128u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_11312c:
    // 0x11312c: 0x0  nop
    ctx->pc = 0x11312cu;
    // NOP
label_113130:
    // 0x113130: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_113134:
    if (ctx->pc == 0x113134u) {
        ctx->pc = 0x113138u;
        goto label_113138;
    }
    ctx->pc = 0x113130u;
    {
        const bool branch_taken_0x113130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x113130) {
            ctx->pc = 0x11314Cu;
            goto label_11314c;
        }
    }
    ctx->pc = 0x113138u;
label_113138:
    // 0x113138: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x113138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
label_11313c:
    // 0x11313c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x11313cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_113140:
    // 0x113140: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_113144:
    // 0x113144: 0xc04939a  jal         func_124E68
label_113148:
    if (ctx->pc == 0x113148u) {
        ctx->pc = 0x113148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113144u;
        // 0x113148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11314Cu;
        goto label_11314c;
    }
    ctx->pc = 0x113144u;
    SET_GPR_U32(ctx, 31, 0x11314Cu);
    ctx->pc = 0x113148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113144u;
    // 0x113148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124E68u, 0x113144u, 0x11314Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11314Cu;
label_11314c:
    // 0x11314c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11314cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_113150:
    // 0x113150: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x113150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_113154:
    // 0x113154: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_113158:
    // 0x113158: 0xc053e7c  jal         func_14F9F0
label_11315c:
    if (ctx->pc == 0x11315Cu) {
        ctx->pc = 0x11315Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113158u;
        // 0x11315c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x113160u;
        goto label_113160;
    }
    ctx->pc = 0x113158u;
    SET_GPR_U32(ctx, 31, 0x113160u);
    ctx->pc = 0x11315Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113158u;
    // 0x11315c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x113158u, 0x113160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113160u;
label_113160:
    // 0x113160: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x113160u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_113164:
    // 0x113164: 0xc053e4a  jal         func_14F928
label_113168:
    if (ctx->pc == 0x113168u) {
        ctx->pc = 0x113168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113164u;
        // 0x113168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11316Cu;
        goto label_11316c;
    }
    ctx->pc = 0x113164u;
    SET_GPR_U32(ctx, 31, 0x11316Cu);
    ctx->pc = 0x113168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113164u;
    // 0x113168: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x113164u, 0x11316Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11316Cu;
label_11316c:
    // 0x11316c: 0xc04290e  jal         func_10A438
label_113170:
    if (ctx->pc == 0x113170u) {
        ctx->pc = 0x113170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11316Cu;
        // 0x113170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113174u;
        goto label_113174;
    }
    ctx->pc = 0x11316Cu;
    SET_GPR_U32(ctx, 31, 0x113174u);
    ctx->pc = 0x113170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11316Cu;
    // 0x113170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A438u, 0x11316Cu, 0x113174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113174u;
label_113174:
    // 0x113174: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x113174u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
label_113178:
    // 0x113178: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x113178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_11317c:
    // 0x11317c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_113180:
    if (ctx->pc == 0x113180u) {
        ctx->pc = 0x113180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11317Cu;
        // 0x113180: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113184u;
        goto label_113184;
    }
    ctx->pc = 0x11317Cu;
    {
        const bool branch_taken_0x11317c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x113180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11317Cu;
        // 0x113180: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11317c) {
            ctx->pc = 0x1131C0u;
            goto label_1131c0;
        }
    }
    ctx->pc = 0x113184u;
label_113184:
    // 0x113184: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x113184u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
label_113188:
    // 0x113188: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_11318c:
    if (ctx->pc == 0x11318Cu) {
        ctx->pc = 0x113190u;
        goto label_113190;
    }
    ctx->pc = 0x113188u;
    {
        const bool branch_taken_0x113188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x113188) {
            ctx->pc = 0x1131ACu;
            goto label_1131ac;
        }
    }
    ctx->pc = 0x113190u;
label_113190:
    // 0x113190: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x113190u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
label_113194:
    // 0x113194: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x113194u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_113198:
    // 0x113198: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x113198u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_11319c:
    // 0x11319c: 0xc0a4bce  jal         func_292F38
label_1131a0:
    if (ctx->pc == 0x1131A0u) {
        ctx->pc = 0x1131A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11319Cu;
        // 0x1131a0: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131A4u;
        goto label_1131a4;
    }
    ctx->pc = 0x11319Cu;
    SET_GPR_U32(ctx, 31, 0x1131A4u);
    ctx->pc = 0x1131A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11319Cu;
    // 0x1131a0: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x11319Cu, 0x1131A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131A4u;
label_1131a4:
    // 0x1131a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1131a8:
    if (ctx->pc == 0x1131A8u) {
        ctx->pc = 0x1131A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131A4u;
        // 0x1131a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131ACu;
        goto label_1131ac;
    }
    ctx->pc = 0x1131A4u;
    {
        const bool branch_taken_0x1131a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131A4u;
        // 0x1131a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131a4) {
            ctx->pc = 0x1131C4u;
            goto label_1131c4;
        }
    }
    ctx->pc = 0x1131ACu;
label_1131ac:
    // 0x1131ac: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1131acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1131b0:
    // 0x1131b0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1131b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1131b4:
    // 0x1131b4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1131b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1131b8:
    // 0x1131b8: 0xc0a4bce  jal         func_292F38
label_1131bc:
    if (ctx->pc == 0x1131BCu) {
        ctx->pc = 0x1131BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131B8u;
        // 0x1131bc: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131C0u;
        goto label_1131c0;
    }
    ctx->pc = 0x1131B8u;
    SET_GPR_U32(ctx, 31, 0x1131C0u);
    ctx->pc = 0x1131BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131B8u;
    // 0x1131bc: 0x264464f0  addiu       $a0, $s2, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F38u, 0x1131B8u, 0x1131C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131C0u;
label_1131c0:
    // 0x1131c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1131c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1131c4:
    // 0x1131c4: 0xc048e4e  jal         func_123938
label_1131c8:
    if (ctx->pc == 0x1131C8u) {
        ctx->pc = 0x1131C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131C4u;
        // 0x1131c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131CCu;
        goto label_1131cc;
    }
    ctx->pc = 0x1131C4u;
    SET_GPR_U32(ctx, 31, 0x1131CCu);
    ctx->pc = 0x1131C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131C4u;
    // 0x1131c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x1131C4u, 0x1131CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131CCu;
label_1131cc:
    // 0x1131cc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1131d0:
    if (ctx->pc == 0x1131D0u) {
        ctx->pc = 0x1131D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131CCu;
        // 0x1131d0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131D4u;
        goto label_1131d4;
    }
    ctx->pc = 0x1131CCu;
    {
        const bool branch_taken_0x1131cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1131cc) {
            ctx->pc = 0x1131D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1131CCu;
            // 0x1131d0: 0x962203ac  lhu         $v0, 0x3AC($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1131F4u;
            goto label_1131f4;
        }
    }
    ctx->pc = 0x1131D4u;
label_1131d4:
    // 0x1131d4: 0xc04a58c  jal         func_129630
label_1131d8:
    if (ctx->pc == 0x1131D8u) {
        ctx->pc = 0x1131D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131D4u;
        // 0x1131d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131DCu;
        goto label_1131dc;
    }
    ctx->pc = 0x1131D4u;
    SET_GPR_U32(ctx, 31, 0x1131DCu);
    ctx->pc = 0x1131D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131D4u;
    // 0x1131d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129630u, 0x1131D4u, 0x1131DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131DCu;
label_1131dc:
    // 0x1131dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1131dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1131e0:
    // 0x1131e0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1131e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1131e4:
    // 0x1131e4: 0xc0493d8  jal         func_124F60
label_1131e8:
    if (ctx->pc == 0x1131E8u) {
        ctx->pc = 0x1131E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131E4u;
        // 0x1131e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131ECu;
        goto label_1131ec;
    }
    ctx->pc = 0x1131E4u;
    SET_GPR_U32(ctx, 31, 0x1131ECu);
    ctx->pc = 0x1131E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131E4u;
    // 0x1131e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124F60u, 0x1131E4u, 0x1131ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131ECu;
label_1131ec:
    // 0x1131ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_1131f0:
    if (ctx->pc == 0x1131F0u) {
        ctx->pc = 0x1131F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131ECu;
        // 0x1131f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1131F4u;
        goto label_1131f4;
    }
    ctx->pc = 0x1131ECu;
    {
        const bool branch_taken_0x1131ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131ECu;
        // 0x1131f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131ec) {
            ctx->pc = 0x113210u;
            goto label_113210;
        }
    }
    ctx->pc = 0x1131F4u;
label_1131f4:
    // 0x1131f4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1131f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_1131f8:
    // 0x1131f8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1131f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1131fc:
    // 0x1131fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1131fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_113200:
    // 0x113200: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x113200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_113204:
    // 0x113204: 0xe6200674  swc1        $f0, 0x674($s1)
    ctx->pc = 0x113204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1652), bits); }
label_113208:
    // 0x113208: 0xa62203ac  sh          $v0, 0x3AC($s1)
    ctx->pc = 0x113208u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 940), (uint16_t)GPR_U32(ctx, 2));
label_11320c:
    // 0x11320c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11320cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_113210:
    // 0x113210: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x113210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_113214:
    // 0x113214: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x113214u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_113218:
    // 0x113218: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11321c:
    // 0x11321c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x11321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_113220:
    // 0x113220: 0x3e00008  jr          $ra
label_113224:
    if (ctx->pc == 0x113224u) {
        ctx->pc = 0x113224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113220u;
        // 0x113224: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113228u;
        goto label_fallthrough_0x113220;
    }
    ctx->pc = 0x113220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113220u;
        // 0x113224: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x113220:
    ctx->pc = 0x113228u;
}
