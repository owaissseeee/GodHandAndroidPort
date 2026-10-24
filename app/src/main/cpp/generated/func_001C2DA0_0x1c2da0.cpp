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

// Function: func_001C2DA0
// Address: 0x1c2da0 - 0x1c3070
void func_001C2DA0_0x1c2da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001C2DA0_0x1c2da0");
#endif

    switch (ctx->pc) {
        case 0x1c2da0u: goto label_1c2da0;
        case 0x1c2da4u: goto label_1c2da4;
        case 0x1c2da8u: goto label_1c2da8;
        case 0x1c2dacu: goto label_1c2dac;
        case 0x1c2db0u: goto label_1c2db0;
        case 0x1c2db4u: goto label_1c2db4;
        case 0x1c2db8u: goto label_1c2db8;
        case 0x1c2dbcu: goto label_1c2dbc;
        case 0x1c2dc0u: goto label_1c2dc0;
        case 0x1c2dc4u: goto label_1c2dc4;
        case 0x1c2dc8u: goto label_1c2dc8;
        case 0x1c2dccu: goto label_1c2dcc;
        case 0x1c2dd0u: goto label_1c2dd0;
        case 0x1c2dd4u: goto label_1c2dd4;
        case 0x1c2dd8u: goto label_1c2dd8;
        case 0x1c2ddcu: goto label_1c2ddc;
        case 0x1c2de0u: goto label_1c2de0;
        case 0x1c2de4u: goto label_1c2de4;
        case 0x1c2de8u: goto label_1c2de8;
        case 0x1c2decu: goto label_1c2dec;
        case 0x1c2df0u: goto label_1c2df0;
        case 0x1c2df4u: goto label_1c2df4;
        case 0x1c2df8u: goto label_1c2df8;
        case 0x1c2dfcu: goto label_1c2dfc;
        case 0x1c2e00u: goto label_1c2e00;
        case 0x1c2e04u: goto label_1c2e04;
        case 0x1c2e08u: goto label_1c2e08;
        case 0x1c2e0cu: goto label_1c2e0c;
        case 0x1c2e10u: goto label_1c2e10;
        case 0x1c2e14u: goto label_1c2e14;
        case 0x1c2e18u: goto label_1c2e18;
        case 0x1c2e1cu: goto label_1c2e1c;
        case 0x1c2e20u: goto label_1c2e20;
        case 0x1c2e24u: goto label_1c2e24;
        case 0x1c2e28u: goto label_1c2e28;
        case 0x1c2e2cu: goto label_1c2e2c;
        case 0x1c2e30u: goto label_1c2e30;
        case 0x1c2e34u: goto label_1c2e34;
        case 0x1c2e38u: goto label_1c2e38;
        case 0x1c2e3cu: goto label_1c2e3c;
        case 0x1c2e40u: goto label_1c2e40;
        case 0x1c2e44u: goto label_1c2e44;
        case 0x1c2e48u: goto label_1c2e48;
        case 0x1c2e4cu: goto label_1c2e4c;
        case 0x1c2e50u: goto label_1c2e50;
        case 0x1c2e54u: goto label_1c2e54;
        case 0x1c2e58u: goto label_1c2e58;
        case 0x1c2e5cu: goto label_1c2e5c;
        case 0x1c2e60u: goto label_1c2e60;
        case 0x1c2e64u: goto label_1c2e64;
        case 0x1c2e68u: goto label_1c2e68;
        case 0x1c2e6cu: goto label_1c2e6c;
        case 0x1c2e70u: goto label_1c2e70;
        case 0x1c2e74u: goto label_1c2e74;
        case 0x1c2e78u: goto label_1c2e78;
        case 0x1c2e7cu: goto label_1c2e7c;
        case 0x1c2e80u: goto label_1c2e80;
        case 0x1c2e84u: goto label_1c2e84;
        case 0x1c2e88u: goto label_1c2e88;
        case 0x1c2e8cu: goto label_1c2e8c;
        case 0x1c2e90u: goto label_1c2e90;
        case 0x1c2e94u: goto label_1c2e94;
        case 0x1c2e98u: goto label_1c2e98;
        case 0x1c2e9cu: goto label_1c2e9c;
        case 0x1c2ea0u: goto label_1c2ea0;
        case 0x1c2ea4u: goto label_1c2ea4;
        case 0x1c2ea8u: goto label_1c2ea8;
        case 0x1c2eacu: goto label_1c2eac;
        case 0x1c2eb0u: goto label_1c2eb0;
        case 0x1c2eb4u: goto label_1c2eb4;
        case 0x1c2eb8u: goto label_1c2eb8;
        case 0x1c2ebcu: goto label_1c2ebc;
        case 0x1c2ec0u: goto label_1c2ec0;
        case 0x1c2ec4u: goto label_1c2ec4;
        case 0x1c2ec8u: goto label_1c2ec8;
        case 0x1c2eccu: goto label_1c2ecc;
        case 0x1c2ed0u: goto label_1c2ed0;
        case 0x1c2ed4u: goto label_1c2ed4;
        case 0x1c2ed8u: goto label_1c2ed8;
        case 0x1c2edcu: goto label_1c2edc;
        case 0x1c2ee0u: goto label_1c2ee0;
        case 0x1c2ee4u: goto label_1c2ee4;
        case 0x1c2ee8u: goto label_1c2ee8;
        case 0x1c2eecu: goto label_1c2eec;
        case 0x1c2ef0u: goto label_1c2ef0;
        case 0x1c2ef4u: goto label_1c2ef4;
        case 0x1c2ef8u: goto label_1c2ef8;
        case 0x1c2efcu: goto label_1c2efc;
        case 0x1c2f00u: goto label_1c2f00;
        case 0x1c2f04u: goto label_1c2f04;
        case 0x1c2f08u: goto label_1c2f08;
        case 0x1c2f0cu: goto label_1c2f0c;
        case 0x1c2f10u: goto label_1c2f10;
        case 0x1c2f14u: goto label_1c2f14;
        case 0x1c2f18u: goto label_1c2f18;
        case 0x1c2f1cu: goto label_1c2f1c;
        case 0x1c2f20u: goto label_1c2f20;
        case 0x1c2f24u: goto label_1c2f24;
        case 0x1c2f28u: goto label_1c2f28;
        case 0x1c2f2cu: goto label_1c2f2c;
        case 0x1c2f30u: goto label_1c2f30;
        case 0x1c2f34u: goto label_1c2f34;
        case 0x1c2f38u: goto label_1c2f38;
        case 0x1c2f3cu: goto label_1c2f3c;
        case 0x1c2f40u: goto label_1c2f40;
        case 0x1c2f44u: goto label_1c2f44;
        case 0x1c2f48u: goto label_1c2f48;
        case 0x1c2f4cu: goto label_1c2f4c;
        case 0x1c2f50u: goto label_1c2f50;
        case 0x1c2f54u: goto label_1c2f54;
        case 0x1c2f58u: goto label_1c2f58;
        case 0x1c2f5cu: goto label_1c2f5c;
        case 0x1c2f60u: goto label_1c2f60;
        case 0x1c2f64u: goto label_1c2f64;
        case 0x1c2f68u: goto label_1c2f68;
        case 0x1c2f6cu: goto label_1c2f6c;
        case 0x1c2f70u: goto label_1c2f70;
        case 0x1c2f74u: goto label_1c2f74;
        case 0x1c2f78u: goto label_1c2f78;
        case 0x1c2f7cu: goto label_1c2f7c;
        case 0x1c2f80u: goto label_1c2f80;
        case 0x1c2f84u: goto label_1c2f84;
        case 0x1c2f88u: goto label_1c2f88;
        case 0x1c2f8cu: goto label_1c2f8c;
        case 0x1c2f90u: goto label_1c2f90;
        case 0x1c2f94u: goto label_1c2f94;
        case 0x1c2f98u: goto label_1c2f98;
        case 0x1c2f9cu: goto label_1c2f9c;
        case 0x1c2fa0u: goto label_1c2fa0;
        case 0x1c2fa4u: goto label_1c2fa4;
        case 0x1c2fa8u: goto label_1c2fa8;
        case 0x1c2facu: goto label_1c2fac;
        case 0x1c2fb0u: goto label_1c2fb0;
        case 0x1c2fb4u: goto label_1c2fb4;
        case 0x1c2fb8u: goto label_1c2fb8;
        case 0x1c2fbcu: goto label_1c2fbc;
        case 0x1c2fc0u: goto label_1c2fc0;
        case 0x1c2fc4u: goto label_1c2fc4;
        case 0x1c2fc8u: goto label_1c2fc8;
        case 0x1c2fccu: goto label_1c2fcc;
        case 0x1c2fd0u: goto label_1c2fd0;
        case 0x1c2fd4u: goto label_1c2fd4;
        case 0x1c2fd8u: goto label_1c2fd8;
        case 0x1c2fdcu: goto label_1c2fdc;
        case 0x1c2fe0u: goto label_1c2fe0;
        case 0x1c2fe4u: goto label_1c2fe4;
        case 0x1c2fe8u: goto label_1c2fe8;
        case 0x1c2fecu: goto label_1c2fec;
        case 0x1c2ff0u: goto label_1c2ff0;
        case 0x1c2ff4u: goto label_1c2ff4;
        case 0x1c2ff8u: goto label_1c2ff8;
        case 0x1c2ffcu: goto label_1c2ffc;
        case 0x1c3000u: goto label_1c3000;
        case 0x1c3004u: goto label_1c3004;
        case 0x1c3008u: goto label_1c3008;
        case 0x1c300cu: goto label_1c300c;
        case 0x1c3010u: goto label_1c3010;
        case 0x1c3014u: goto label_1c3014;
        case 0x1c3018u: goto label_1c3018;
        case 0x1c301cu: goto label_1c301c;
        case 0x1c3020u: goto label_1c3020;
        case 0x1c3024u: goto label_1c3024;
        case 0x1c3028u: goto label_1c3028;
        case 0x1c302cu: goto label_1c302c;
        case 0x1c3030u: goto label_1c3030;
        case 0x1c3034u: goto label_1c3034;
        case 0x1c3038u: goto label_1c3038;
        case 0x1c303cu: goto label_1c303c;
        case 0x1c3040u: goto label_1c3040;
        case 0x1c3044u: goto label_1c3044;
        case 0x1c3048u: goto label_1c3048;
        case 0x1c304cu: goto label_1c304c;
        case 0x1c3050u: goto label_1c3050;
        case 0x1c3054u: goto label_1c3054;
        case 0x1c3058u: goto label_1c3058;
        case 0x1c305cu: goto label_1c305c;
        case 0x1c3060u: goto label_1c3060;
        case 0x1c3064u: goto label_1c3064;
        case 0x1c3068u: goto label_1c3068;
        case 0x1c306cu: goto label_1c306c;
        default: break;
    }

    ctx->pc = 0x1c2da0u;

label_1c2da0:
    // 0x1c2da0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1c2da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1c2da4:
    // 0x1c2da4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1c2da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_1c2da8:
    // 0x1c2da8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x1c2da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_1c2dac:
    // 0x1c2dac: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c2dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c2db0:
    // 0x1c2db0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x1c2db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_1c2db4:
    // 0x1c2db4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c2db4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c2db8:
    // 0x1c2db8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x1c2db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_1c2dbc:
    // 0x1c2dbc: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x1c2dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_1c2dc0:
    // 0x1c2dc0: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x1c2dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_1c2dc4:
    // 0x1c2dc4: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x1c2dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_1c2dc8:
    // 0x1c2dc8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1c2dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1c2dcc:
    // 0x1c2dcc: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c2dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_1c2dd0:
    // 0x1c2dd0: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x1c2dd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1c2dd4:
    // 0x1c2dd4: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c2dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1c2dd8:
    // 0x1c2dd8: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x1c2dd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
label_1c2ddc:
    // 0x1c2ddc: 0x10700024  beq         $v1, $s0, . + 4 + (0x24 << 2)
label_1c2de0:
    if (ctx->pc == 0x1C2DE0u) {
        ctx->pc = 0x1C2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DDCu;
        // 0x1c2de0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DE4u;
        goto label_1c2de4;
    }
    ctx->pc = 0x1C2DDCu;
    {
        const bool branch_taken_0x1c2ddc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C2DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DDCu;
        // 0x1c2de0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ddc) {
            ctx->pc = 0x1C2E70u;
            goto label_1c2e70;
        }
    }
    ctx->pc = 0x1C2DE4u;
label_1c2de4:
    // 0x1c2de4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c2de8:
    if (ctx->pc == 0x1C2DE8u) {
        ctx->pc = 0x1C2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DE4u;
        // 0x1c2de8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DECu;
        goto label_1c2dec;
    }
    ctx->pc = 0x1C2DE4u;
    {
        const bool branch_taken_0x1c2de4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DE4u;
        // 0x1c2de8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2de4) {
            ctx->pc = 0x1C2DFCu;
            goto label_1c2dfc;
        }
    }
    ctx->pc = 0x1C2DECu;
label_1c2dec:
    // 0x1c2dec: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_1c2df0:
    if (ctx->pc == 0x1C2DF0u) {
        ctx->pc = 0x1C2DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DECu;
        // 0x1c2df0: 0x8e420214  lw          $v0, 0x214($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DF4u;
        goto label_1c2df4;
    }
    ctx->pc = 0x1C2DECu;
    {
        const bool branch_taken_0x1c2dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2dec) {
            ctx->pc = 0x1C2DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2DECu;
            // 0x1c2df0: 0x8e420214  lw          $v0, 0x214($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2E14u;
            goto label_1c2e14;
        }
    }
    ctx->pc = 0x1C2DF4u;
label_1c2df4:
    // 0x1c2df4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1c2df8:
    if (ctx->pc == 0x1C2DF8u) {
        ctx->pc = 0x1C2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DF4u;
        // 0x1c2df8: 0x8242060c  lb          $v0, 0x60C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2DFCu;
        goto label_1c2dfc;
    }
    ctx->pc = 0x1C2DF4u;
    {
        const bool branch_taken_0x1c2df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DF4u;
        // 0x1c2df8: 0x8242060c  lb          $v0, 0x60C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2df4) {
            ctx->pc = 0x1C2EECu;
            goto label_1c2eec;
        }
    }
    ctx->pc = 0x1C2DFCu;
label_1c2dfc:
    // 0x1c2dfc: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
label_1c2e00:
    if (ctx->pc == 0x1C2E00u) {
        ctx->pc = 0x1C2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DFCu;
        // 0x1c2e00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E04u;
        goto label_1c2e04;
    }
    ctx->pc = 0x1C2DFCu;
    {
        const bool branch_taken_0x1c2dfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C2E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2DFCu;
        // 0x1c2e00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2dfc) {
            ctx->pc = 0x1C2E98u;
            goto label_1c2e98;
        }
    }
    ctx->pc = 0x1C2E04u;
label_1c2e04:
    // 0x1c2e04: 0x50620035  beql        $v1, $v0, . + 4 + (0x35 << 2)
label_1c2e08:
    if (ctx->pc == 0x1C2E08u) {
        ctx->pc = 0x1C2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E04u;
        // 0x1c2e08: 0xa24302f4  sb          $v1, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E0Cu;
        goto label_1c2e0c;
    }
    ctx->pc = 0x1C2E04u;
    {
        const bool branch_taken_0x1c2e04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c2e04) {
            ctx->pc = 0x1C2E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2E04u;
            // 0x1c2e08: 0xa24302f4  sb          $v1, 0x2F4($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2EDCu;
            goto label_1c2edc;
        }
    }
    ctx->pc = 0x1C2E0Cu;
label_1c2e0c:
    // 0x1c2e0c: 0x10000037  b           . + 4 + (0x37 << 2)
label_1c2e10:
    if (ctx->pc == 0x1C2E10u) {
        ctx->pc = 0x1C2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E0Cu;
        // 0x1c2e10: 0x8242060c  lb          $v0, 0x60C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E14u;
        goto label_1c2e14;
    }
    ctx->pc = 0x1C2E0Cu;
    {
        const bool branch_taken_0x1c2e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E0Cu;
        // 0x1c2e10: 0x8242060c  lb          $v0, 0x60C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e0c) {
            ctx->pc = 0x1C2EECu;
            goto label_1c2eec;
        }
    }
    ctx->pc = 0x1C2E14u;
label_1c2e14:
    // 0x1c2e14: 0x844400b0  lh          $a0, 0xB0($v0)
    ctx->pc = 0x1c2e14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 176)));
label_1c2e18:
    // 0x1c2e18: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x1c2e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
label_1c2e1c:
    // 0x1c2e1c: 0x60f809  jalr        $v1
label_1c2e20:
    if (ctx->pc == 0x1C2E20u) {
        ctx->pc = 0x1C2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E1Cu;
        // 0x1c2e20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E24u;
        goto label_1c2e24;
    }
    ctx->pc = 0x1C2E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2E24u);
        ctx->pc = 0x1C2E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E1Cu;
        // 0x1c2e20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2E1Cu, 0x1C2E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2E24u;
label_1c2e24:
    // 0x1c2e24: 0x8e420214  lw          $v0, 0x214($s2)
    ctx->pc = 0x1c2e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_1c2e28:
    // 0x1c2e28: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x1c2e28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_1c2e2c:
    // 0x1c2e2c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x1c2e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_1c2e30:
    // 0x1c2e30: 0x60f809  jalr        $v1
label_1c2e34:
    if (ctx->pc == 0x1C2E34u) {
        ctx->pc = 0x1C2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E30u;
        // 0x1c2e34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E38u;
        goto label_1c2e38;
    }
    ctx->pc = 0x1C2E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C2E38u);
        ctx->pc = 0x1C2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E30u;
        // 0x1c2e34: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2E30u, 0x1C2E38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C2E38u;
label_1c2e38:
    // 0x1c2e38: 0xc070d50  jal         func_1C3540
label_1c2e3c:
    if (ctx->pc == 0x1C2E3Cu) {
        ctx->pc = 0x1C2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E38u;
        // 0x1c2e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E40u;
        goto label_1c2e40;
    }
    ctx->pc = 0x1C2E38u;
    SET_GPR_U32(ctx, 31, 0x1C2E40u);
    ctx->pc = 0x1C2E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E38u;
    // 0x1c2e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3540u, 0x1C2E38u, 0x1C2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E40u;
label_1c2e40:
    // 0x1c2e40: 0xc06de42  jal         func_1B7908
label_1c2e44:
    if (ctx->pc == 0x1C2E44u) {
        ctx->pc = 0x1C2E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E40u;
        // 0x1c2e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E48u;
        goto label_1c2e48;
    }
    ctx->pc = 0x1C2E40u;
    SET_GPR_U32(ctx, 31, 0x1C2E48u);
    ctx->pc = 0x1C2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E40u;
    // 0x1c2e44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1C2E40u, 0x1C2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E48u;
label_1c2e48:
    // 0x1c2e48: 0x8e440604  lw          $a0, 0x604($s2)
    ctx->pc = 0x1c2e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
label_1c2e4c:
    // 0x1c2e4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c2e50:
    if (ctx->pc == 0x1C2E50u) {
        ctx->pc = 0x1C2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E4Cu;
        // 0x1c2e50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E54u;
        goto label_1c2e54;
    }
    ctx->pc = 0x1C2E4Cu;
    {
        const bool branch_taken_0x1c2e4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E4Cu;
        // 0x1c2e50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e4c) {
            ctx->pc = 0x1C2E5Cu;
            goto label_1c2e5c;
        }
    }
    ctx->pc = 0x1C2E54u;
label_1c2e54:
    // 0x1c2e54: 0xc07f5c6  jal         func_1FD718
label_1c2e58:
    if (ctx->pc == 0x1C2E58u) {
        ctx->pc = 0x1C2E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E54u;
        // 0x1c2e58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E5Cu;
        goto label_1c2e5c;
    }
    ctx->pc = 0x1C2E54u;
    SET_GPR_U32(ctx, 31, 0x1C2E5Cu);
    ctx->pc = 0x1C2E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2E54u;
    // 0x1c2e58: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD718u, 0x1C2E54u, 0x1C2E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2E5Cu;
label_1c2e5c:
    // 0x1c2e5c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c2e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1c2e60:
    // 0x1c2e60: 0xa25002f5  sb          $s0, 0x2F5($s2)
    ctx->pc = 0x1c2e60u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 16));
label_1c2e64:
    // 0x1c2e64: 0xa642060e  sh          $v0, 0x60E($s2)
    ctx->pc = 0x1c2e64u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1550), (uint16_t)GPR_U32(ctx, 2));
label_1c2e68:
    // 0x1c2e68: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1c2e68u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c2e6c:
    // 0x1c2e6c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1c2e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c2e70:
    // 0x1c2e70: 0x9642060e  lhu         $v0, 0x60E($s2)
    ctx->pc = 0x1c2e70u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1550)));
label_1c2e74:
    // 0x1c2e74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c2e78:
    // 0x1c2e78: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1c2e78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c2e7c:
    // 0x1c2e7c: 0x1c60001a  bgtz        $v1, . + 4 + (0x1A << 2)
label_1c2e80:
    if (ctx->pc == 0x1C2E80u) {
        ctx->pc = 0x1C2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E7Cu;
        // 0x1c2e80: 0xa642060e  sh          $v0, 0x60E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1550), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E84u;
        goto label_1c2e84;
    }
    ctx->pc = 0x1C2E7Cu;
    {
        const bool branch_taken_0x1c2e7c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1C2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E7Cu;
        // 0x1c2e80: 0xa642060e  sh          $v0, 0x60E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1550), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e7c) {
            ctx->pc = 0x1C2EE8u;
            goto label_1c2ee8;
        }
    }
    ctx->pc = 0x1C2E84u;
label_1c2e84:
    // 0x1c2e84: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1c2e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1c2e88:
    // 0x1c2e88: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c2e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c2e8c:
    // 0x1c2e8c: 0xa642060e  sh          $v0, 0x60E($s2)
    ctx->pc = 0x1c2e8cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1550), (uint16_t)GPR_U32(ctx, 2));
label_1c2e90:
    // 0x1c2e90: 0x10000013  b           . + 4 + (0x13 << 2)
label_1c2e94:
    if (ctx->pc == 0x1C2E94u) {
        ctx->pc = 0x1C2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E90u;
        // 0x1c2e94: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2E98u;
        goto label_1c2e98;
    }
    ctx->pc = 0x1C2E90u;
    {
        const bool branch_taken_0x1c2e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2E90u;
        // 0x1c2e94: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2e90) {
            ctx->pc = 0x1C2EE0u;
            goto label_1c2ee0;
        }
    }
    ctx->pc = 0x1C2E98u;
label_1c2e98:
    // 0x1c2e98: 0x9642060e  lhu         $v0, 0x60E($s2)
    ctx->pc = 0x1c2e98u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1550)));
label_1c2e9c:
    // 0x1c2e9c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1c2e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1c2ea0:
    // 0x1c2ea0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c2ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c2ea4:
    // 0x1c2ea4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c2ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c2ea8:
    // 0x1c2ea8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1c2ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1c2eac:
    // 0x1c2eac: 0xa642060e  sh          $v0, 0x60E($s2)
    ctx->pc = 0x1c2eacu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1550), (uint16_t)GPR_U32(ctx, 2));
label_1c2eb0:
    // 0x1c2eb0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1c2eb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1c2eb4:
    // 0x1c2eb4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c2eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c2eb8:
    // 0x1c2eb8: 0x0  nop
    ctx->pc = 0x1c2eb8u;
    // NOP
label_1c2ebc:
    // 0x1c2ebc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1c2ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1c2ec0:
    // 0x1c2ec0: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1c2ec0u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1c2ec4:
    // 0x1c2ec4: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_1c2ec8:
    if (ctx->pc == 0x1C2EC8u) {
        ctx->pc = 0x1C2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EC4u;
        // 0x1c2ec8: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2ECCu;
        goto label_1c2ecc;
    }
    ctx->pc = 0x1C2EC4u;
    {
        const bool branch_taken_0x1c2ec4 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1C2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EC4u;
        // 0x1c2ec8: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ec4) {
            ctx->pc = 0x1C2EE8u;
            goto label_1c2ee8;
        }
    }
    ctx->pc = 0x1C2ECCu;
label_1c2ecc:
    // 0x1c2ecc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c2eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c2ed0:
    // 0x1c2ed0: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1c2ed0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c2ed4:
    // 0x1c2ed4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c2ed8:
    if (ctx->pc == 0x1C2ED8u) {
        ctx->pc = 0x1C2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ED4u;
        // 0x1c2ed8: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2EDCu;
        goto label_1c2edc;
    }
    ctx->pc = 0x1C2ED4u;
    {
        const bool branch_taken_0x1c2ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2ED4u;
        // 0x1c2ed8: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ed4) {
            ctx->pc = 0x1C2EE4u;
            goto label_1c2ee4;
        }
    }
    ctx->pc = 0x1C2EDCu;
label_1c2edc:
    // 0x1c2edc: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1c2edcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1c2ee0:
    // 0x1c2ee0: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1c2ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1c2ee4:
    // 0x1c2ee4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1c2ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1c2ee8:
    // 0x1c2ee8: 0x8242060c  lb          $v0, 0x60C($s2)
    ctx->pc = 0x1c2ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1548)));
label_1c2eec:
    // 0x1c2eec: 0x18400053  blez        $v0, . + 4 + (0x53 << 2)
label_1c2ef0:
    if (ctx->pc == 0x1C2EF0u) {
        ctx->pc = 0x1C2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EECu;
        // 0x1c2ef0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2EF4u;
        goto label_1c2ef4;
    }
    ctx->pc = 0x1C2EECu;
    {
        const bool branch_taken_0x1c2eec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1C2EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EECu;
        // 0x1c2ef0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2eec) {
            ctx->pc = 0x1C303Cu;
            goto label_1c303c;
        }
    }
    ctx->pc = 0x1C2EF4u;
label_1c2ef4:
    // 0x1c2ef4: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1c2ef4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1c2ef8:
    // 0x1c2ef8: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_1c2efc:
    if (ctx->pc == 0x1C2EFCu) {
        ctx->pc = 0x1C2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EF8u;
        // 0x1c2efc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F00u;
        goto label_1c2f00;
    }
    ctx->pc = 0x1C2EF8u;
    {
        const bool branch_taken_0x1c2ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2EF8u;
        // 0x1c2efc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2ef8) {
            ctx->pc = 0x1C303Cu;
            goto label_1c303c;
        }
    }
    ctx->pc = 0x1C2F00u;
label_1c2f00:
    // 0x1c2f00: 0x3c01c47a  lui         $at, 0xC47A
    ctx->pc = 0x1c2f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50298 << 16));
label_1c2f04:
    // 0x1c2f04: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1c2f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1c2f08:
    // 0x1c2f08: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x1c2f08u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
label_1c2f0c:
    // 0x1c2f0c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1c2f0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c2f10:
    // 0x1c2f10: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1c2f10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2f14:
    // 0x1c2f14: 0x8e420608  lw          $v0, 0x608($s2)
    ctx->pc = 0x1c2f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
label_1c2f18:
    // 0x1c2f18: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x1c2f18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_1c2f1c:
    // 0x1c2f1c: 0xc05ce40  jal         func_173900
label_1c2f20:
    if (ctx->pc == 0x1C2F20u) {
        ctx->pc = 0x1C2F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F1Cu;
        // 0x1c2f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F24u;
        goto label_1c2f24;
    }
    ctx->pc = 0x1C2F1Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F24u);
    ctx->pc = 0x1C2F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F1Cu;
    // 0x1c2f20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173900u, 0x1C2F1Cu, 0x1C2F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F24u;
label_1c2f24:
    // 0x1c2f24: 0x5457003d  bnel        $v0, $s7, . + 4 + (0x3D << 2)
label_1c2f28:
    if (ctx->pc == 0x1C2F28u) {
        ctx->pc = 0x1C2F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F24u;
        // 0x1c2f28: 0x8242060c  lb          $v0, 0x60C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F2Cu;
        goto label_1c2f2c;
    }
    ctx->pc = 0x1C2F24u;
    {
        const bool branch_taken_0x1c2f24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1c2f24) {
            ctx->pc = 0x1C2F28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C2F24u;
            // 0x1c2f28: 0x8242060c  lb          $v0, 0x60C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C301Cu;
            goto label_1c301c;
        }
    }
    ctx->pc = 0x1C2F2Cu;
label_1c2f2c:
    // 0x1c2f2c: 0xc0a4bd4  jal         func_292F50
label_1c2f30:
    if (ctx->pc == 0x1C2F30u) {
        ctx->pc = 0x1C2F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2F2Cu;
        // 0x1c2f30: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2F34u;
        goto label_1c2f34;
    }
    ctx->pc = 0x1C2F2Cu;
    SET_GPR_U32(ctx, 31, 0x1C2F34u);
    ctx->pc = 0x1C2F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2F2Cu;
    // 0x1c2f30: 0x26c464f0  addiu       $a0, $s6, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1C2F2Cu, 0x1C2F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2F34u;
label_1c2f34:
    // 0x1c2f34: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1c2f34u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1c2f38:
    // 0x1c2f38: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x1c2f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_1c2f3c:
    // 0x1c2f3c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c2f3cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2f40:
    // 0x1c2f40: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c2f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2f44:
    // 0x1c2f44: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c2f44u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2f48:
    // 0x1c2f48: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1c2f48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c2f4c:
    // 0x1c2f4c: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c2f4cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c2f50:
    // 0x1c2f50: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c2f50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c2f54:
    // 0x1c2f54: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c2f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2f58:
    // 0x1c2f58: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c2f58u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c2f5c:
    // 0x1c2f5c: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c2f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2f60:
    // 0x1c2f60: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1c2f60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_1c2f64:
    // 0x1c2f64: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c2f64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2f68:
    // 0x1c2f68: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c2f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c2f6c:
    // 0x1c2f6c: 0xfa240000  sqc2        $vf4, 0x0($s1)
    ctx->pc = 0x1c2f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2f70:
    // 0x1c2f70: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1c2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1c2f74:
    // 0x1c2f74: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x1c2f74u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c2f78:
    // 0x1c2f78: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c2f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2f7c:
    // 0x1c2f7c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c2f7cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c2f80:
    // 0x1c2f80: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x1c2f80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_1c2f84:
    // 0x1c2f84: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x1c2f84u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
label_1c2f88:
    // 0x1c2f88: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x1c2f88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c2f8c:
    // 0x1c2f8c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x1c2f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2f90:
    // 0x1c2f90: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x1c2f90u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_1c2f94:
    // 0x1c2f94: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x1c2f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2f98:
    // 0x1c2f98: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1c2f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1c2f9c:
    // 0x1c2f9c: 0xda240010  lqc2        $vf4, 0x10($s1)
    ctx->pc = 0x1c2f9cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 16)));
label_1c2fa0:
    // 0x1c2fa0: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x1c2fa0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1c2fa4:
    // 0x1c2fa4: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1c2fa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
label_1c2fa8:
    // 0x1c2fa8: 0xfa240010  sqc2        $vf4, 0x10($s1)
    ctx->pc = 0x1c2fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[4]));
label_1c2fac:
    // 0x1c2fac: 0xc07df68  jal         func_1F7DA0
label_1c2fb0:
    if (ctx->pc == 0x1C2FB0u) {
        ctx->pc = 0x1C2FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FACu;
        // 0x1c2fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2FB4u;
        goto label_1c2fb4;
    }
    ctx->pc = 0x1C2FACu;
    SET_GPR_U32(ctx, 31, 0x1C2FB4u);
    ctx->pc = 0x1C2FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FACu;
    // 0x1c2fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7DA0u, 0x1C2FACu, 0x1C2FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FB4u;
label_1c2fb4:
    // 0x1c2fb4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c2fb8:
    // 0x1c2fb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c2fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c2fbc:
    // 0x1c2fbc: 0xc051dca  jal         func_147728
label_1c2fc0:
    if (ctx->pc == 0x1C2FC0u) {
        ctx->pc = 0x1C2FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FBCu;
        // 0x1c2fc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2FC4u;
        goto label_1c2fc4;
    }
    ctx->pc = 0x1C2FBCu;
    SET_GPR_U32(ctx, 31, 0x1C2FC4u);
    ctx->pc = 0x1C2FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FBCu;
    // 0x1c2fc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147728u, 0x1C2FBCu, 0x1C2FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FC4u;
label_1c2fc4:
    // 0x1c2fc4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c2fc8:
    // 0x1c2fc8: 0xc051f10  jal         func_147C40
label_1c2fcc:
    if (ctx->pc == 0x1C2FCCu) {
        ctx->pc = 0x1C2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FC8u;
        // 0x1c2fcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2FD0u;
        goto label_1c2fd0;
    }
    ctx->pc = 0x1C2FC8u;
    SET_GPR_U32(ctx, 31, 0x1C2FD0u);
    ctx->pc = 0x1C2FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FC8u;
    // 0x1c2fcc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x1C2FC8u, 0x1C2FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FD0u;
label_1c2fd0:
    // 0x1c2fd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1c2fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1c2fd4:
    // 0x1c2fd4: 0x26260040  addiu       $a2, $s1, 0x40
    ctx->pc = 0x1c2fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1c2fd8:
    // 0x1c2fd8: 0xc051efe  jal         func_147BF8
label_1c2fdc:
    if (ctx->pc == 0x1C2FDCu) {
        ctx->pc = 0x1C2FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FD8u;
        // 0x1c2fdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2FE0u;
        goto label_1c2fe0;
    }
    ctx->pc = 0x1C2FD8u;
    SET_GPR_U32(ctx, 31, 0x1C2FE0u);
    ctx->pc = 0x1C2FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FD8u;
    // 0x1c2fdc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147BF8u, 0x1C2FD8u, 0x1C2FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FE0u;
label_1c2fe0:
    // 0x1c2fe0: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x1c2fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1c2fe4:
    // 0x1c2fe4: 0xc051d4a  jal         func_147528
label_1c2fe8:
    if (ctx->pc == 0x1C2FE8u) {
        ctx->pc = 0x1C2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2FE4u;
        // 0x1c2fe8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C2FECu;
        goto label_1c2fec;
    }
    ctx->pc = 0x1C2FE4u;
    SET_GPR_U32(ctx, 31, 0x1C2FECu);
    ctx->pc = 0x1C2FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2FE4u;
    // 0x1c2fe8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147528u, 0x1C2FE4u, 0x1C2FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C2FECu;
label_1c2fec:
    // 0x1c2fec: 0xc6200058  lwc1        $f0, 0x58($s1)
    ctx->pc = 0x1c2fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c2ff0:
    // 0x1c2ff0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x1c2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c2ff4:
    // 0x1c2ff4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1c2ff4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1c2ff8:
    // 0x1c2ff8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1c2ff8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1c2ffc:
    // 0x1c2ffc: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x1c2ffcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c3000:
    // 0x1c3000: 0x0  nop
    ctx->pc = 0x1c3000u;
    // NOP
label_1c3004:
    // 0x1c3004: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_1c3008:
    if (ctx->pc == 0x1C3008u) {
        ctx->pc = 0x1C3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3004u;
        // 0x1c3008: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C300Cu;
        goto label_1c300c;
    }
    ctx->pc = 0x1C3004u;
    {
        const bool branch_taken_0x1c3004 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C3008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3004u;
        // 0x1c3008: 0xe6210024  swc1        $f1, 0x24($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3004) {
            ctx->pc = 0x1C3018u;
            goto label_1c3018;
        }
    }
    ctx->pc = 0x1C300Cu;
label_1c300c:
    // 0x1c300c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c300cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c3010:
    // 0x1c3010: 0xc05bd90  jal         func_16F640
label_1c3014:
    if (ctx->pc == 0x1C3014u) {
        ctx->pc = 0x1C3014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3010u;
        // 0x1c3014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3018u;
        goto label_1c3018;
    }
    ctx->pc = 0x1C3010u;
    SET_GPR_U32(ctx, 31, 0x1C3018u);
    ctx->pc = 0x1C3014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3010u;
    // 0x1c3014: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1C3010u, 0x1C3018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C3018u;
label_1c3018:
    // 0x1c3018: 0x8242060c  lb          $v0, 0x60C($s2)
    ctx->pc = 0x1c3018u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1548)));
label_1c301c:
    // 0x1c301c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c301cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c3020:
    // 0x1c3020: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1c3020u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c3024:
    // 0x1c3024: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c3028:
    if (ctx->pc == 0x1C3028u) {
        ctx->pc = 0x1C3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3024u;
        // 0x1c3028: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C302Cu;
        goto label_1c302c;
    }
    ctx->pc = 0x1C3024u;
    {
        const bool branch_taken_0x1c3024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3024u;
        // 0x1c3028: 0x26b50060  addiu       $s5, $s5, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3024) {
            ctx->pc = 0x1C303Cu;
            goto label_1c303c;
        }
    }
    ctx->pc = 0x1C302Cu;
label_1c302c:
    // 0x1c302c: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1c302cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
label_1c3030:
    // 0x1c3030: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1c3030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c3034:
    // 0x1c3034: 0x5440ffb8  bnel        $v0, $zero, . + 4 + (-0x48 << 2)
label_1c3038:
    if (ctx->pc == 0x1C3038u) {
        ctx->pc = 0x1C3038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3034u;
        // 0x1c3038: 0x8e420608  lw          $v0, 0x608($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C303Cu;
        goto label_1c303c;
    }
    ctx->pc = 0x1C3034u;
    {
        const bool branch_taken_0x1c3034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3034) {
            ctx->pc = 0x1C3038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3034u;
            // 0x1c3038: 0x8e420608  lw          $v0, 0x608($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C2F18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2f18;
        }
    }
    ctx->pc = 0x1C303Cu;
label_1c303c:
    // 0x1c303c: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1c303cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1c3040:
    // 0x1c3040: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1c3040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1c3044:
    // 0x1c3044: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x1c3044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1c3048:
    // 0x1c3048: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x1c3048u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1c304c:
    // 0x1c304c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x1c304cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1c3050:
    // 0x1c3050: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x1c3050u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1c3054:
    // 0x1c3054: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1c3054u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1c3058:
    // 0x1c3058: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1c3058u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c305c:
    // 0x1c305c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c305cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1c3060:
    // 0x1c3060: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x1c3060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c3064:
    // 0x1c3064: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1c3064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c3068:
    // 0x1c3068: 0x3e00008  jr          $ra
label_1c306c:
    if (ctx->pc == 0x1C306Cu) {
        ctx->pc = 0x1C306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3068u;
        // 0x1c306c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C3070u;
        goto label_fallthrough_0x1c3068;
    }
    ctx->pc = 0x1C3068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3068u;
        // 0x1c306c: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c3068:
    ctx->pc = 0x1C3070u;
}
