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

// Function: func_001F2D60
// Address: 0x1f2d60 - 0x1f30b8
void func_001F2D60_0x1f2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F2D60_0x1f2d60");
#endif

    switch (ctx->pc) {
        case 0x1f2e58u: goto label_1f2e58;
        case 0x1f2e68u: goto label_1f2e68;
        case 0x1f2ec0u: goto label_1f2ec0;
        case 0x1f2ed0u: goto label_1f2ed0;
        case 0x1f2f60u: goto label_1f2f60;
        case 0x1f2f9cu: goto label_1f2f9c;
        case 0x1f2facu: goto label_1f2fac;
        case 0x1f2fbcu: goto label_1f2fbc;
        case 0x1f2fd4u: goto label_1f2fd4;
        case 0x1f2fecu: goto label_1f2fec;
        case 0x1f3014u: goto label_1f3014;
        case 0x1f3048u: goto label_1f3048;
        case 0x1f3058u: goto label_1f3058;
        case 0x1f3068u: goto label_1f3068;
        case 0x1f3078u: goto label_1f3078;
        default: break;
    }

    ctx->pc = 0x1f2d60u;

    // 0x1f2d60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f2d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f2d64: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f2d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f2d68: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f2d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f2d6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f2d6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f2d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f2d74: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f2d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f2d78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f2d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f2d7c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1f2d7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1f2d80: 0x9e620000  lwu         $v0, 0x0($s3)
    ctx->pc = 0x1f2d80u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f2d84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f2d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f2d88: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
    ctx->pc = 0x1F2D88u;
    {
        const bool branch_taken_0x1f2d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D88u;
        // 0x1f2d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d88) {
            ctx->pc = 0x1F3098u;
            goto label_1f3098;
        }
    }
    ctx->pc = 0x1F2D90u;
    // 0x1f2d90: 0x8e630918  lw          $v1, 0x918($s3)
    ctx->pc = 0x1f2d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x1f2d94: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1F2D94u;
    {
        const bool branch_taken_0x1f2d94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2D94u;
        // 0x1f2d98: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d94) {
            ctx->pc = 0x1F2ED8u;
            goto label_1f2ed8;
        }
    }
    ctx->pc = 0x1F2D9Cu;
    // 0x1f2d9c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F2D9Cu;
    {
        const bool branch_taken_0x1f2d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2d9c) {
            ctx->pc = 0x1F2DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2D9Cu;
            // 0x1f2da0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2DB4u;
            goto label_1f2db4;
        }
    }
    ctx->pc = 0x1F2DA4u;
    // 0x1f2da4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2DA4u;
    {
        const bool branch_taken_0x1f2da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DA4u;
        // 0x1f2da8: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2da4) {
            ctx->pc = 0x1F2DCCu;
            goto label_1f2dcc;
        }
    }
    ctx->pc = 0x1F2DACu;
    // 0x1f2dac: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x1F2DACu;
    {
        const bool branch_taken_0x1f2dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DACu;
        // 0x1f2db0: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dac) {
            ctx->pc = 0x1F30A0u;
            goto label_1f30a0;
        }
    }
    ctx->pc = 0x1F2DB4u;
label_1f2db4:
    // 0x1f2db4: 0x1062006e  beq         $v1, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1F2DB4u;
    {
        const bool branch_taken_0x1f2db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DB4u;
        // 0x1f2db8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2db4) {
            ctx->pc = 0x1F2F70u;
            goto label_1f2f70;
        }
    }
    ctx->pc = 0x1F2DBCu;
    // 0x1f2dbc: 0x1062009b  beq         $v1, $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x1F2DBCu;
    {
        const bool branch_taken_0x1f2dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DBCu;
        // 0x1f2dc0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dbc) {
            ctx->pc = 0x1F302Cu;
            goto label_1f302c;
        }
    }
    ctx->pc = 0x1F2DC4u;
    // 0x1f2dc4: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x1F2DC4u;
    {
        const bool branch_taken_0x1f2dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2DC4u;
        // 0x1f2dc8: 0x7bb10040  lq          $s1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dc4) {
            ctx->pc = 0x1F30A0u;
            goto label_1f30a0;
        }
    }
    ctx->pc = 0x1F2DCCu;
label_1f2dcc:
    // 0x1f2dcc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f2dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f2dd0: 0x2410ff00  addiu       $s0, $zero, -0x100
    ctx->pc = 0x1f2dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1f2dd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f2dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2dd8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1f2dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1f2ddc: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1f2ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1f2de0: 0x348400ff  ori         $a0, $a0, 0xFF
    ctx->pc = 0x1f2de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)255);
    // 0x1f2de4: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1f2de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1f2de8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1f2de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1f2dec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1f2decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1f2df0: 0x34630080  ori         $v1, $v1, 0x80
    ctx->pc = 0x1f2df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)128);
    // 0x1f2df4: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x1f2df4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x1f2df8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1f2df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1f2dfc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1f2dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1f2e00: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1f2e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1f2e04: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1f2e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x1f2e08: 0x3c070080  lui         $a3, 0x80
    ctx->pc = 0x1f2e08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)128 << 16));
    // 0x1f2e0c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x1f2e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x1f2e10: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x1f2e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f2e14: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x1f2e14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
    // 0x1f2e18: 0xae64091c  sw          $a0, 0x91C($s3)
    ctx->pc = 0x1f2e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2332), GPR_U32(ctx, 4));
    // 0x1f2e1c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1f2e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1f2e20: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1f2e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1f2e24: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x1f2e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1f2e28: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1f2e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1f2e2c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x1f2e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x1f2e30: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f2e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f2e34: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1f2e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1f2e38: 0x9667091c  lhu         $a3, 0x91C($s3)
    ctx->pc = 0x1f2e38u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x1f2e3c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x1f2e3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x1f2e40: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1f2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1f2e44: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1f2e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1f2e48: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f2e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e4c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2e4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e50: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1F2E50u;
    SET_GPR_U32(ctx, 31, 0x1F2E58u);
    ctx->pc = 0x1F2E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E50u;
    // 0x1f2e54: 0x26640060  addiu       $a0, $s3, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1F2E50u, 0x1F2E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E58u;
label_1f2e58:
    // 0x1f2e58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e5c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e60: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2E60u;
    SET_GPR_U32(ctx, 31, 0x1F2E68u);
    ctx->pc = 0x1F2E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2E60u;
    // 0x1f2e64: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2E60u, 0x1F2E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2E68u;
label_1f2e68:
    // 0x1f2e68: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f2e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f2e6c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1f2e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1f2e70: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1f2e70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f2e74: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1f2e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f2e78: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x1f2e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x1f2e7c: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x1f2e7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x1f2e80: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1f2e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1f2e84: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x1f2e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x1f2e88: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f2e88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1f2e8c: 0x346300d0  ori         $v1, $v1, 0xD0
    ctx->pc = 0x1f2e8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)208);
    // 0x1f2e90: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1f2e90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1f2e94: 0x266400dc  addiu       $a0, $s3, 0xDC
    ctx->pc = 0x1f2e94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
    // 0x1f2e98: 0xa3a50001  sb          $a1, 0x1($sp)
    ctx->pc = 0x1f2e98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f2e9c: 0xa3a50002  sb          $a1, 0x2($sp)
    ctx->pc = 0x1f2e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f2ea0: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x1f2ea0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2ea4: 0xa0c50003  sb          $a1, 0x3($a2)
    ctx->pc = 0x1f2ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x1f2ea8: 0xa0c70002  sb          $a3, 0x2($a2)
    ctx->pc = 0x1f2ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f2eac: 0xa0c70001  sb          $a3, 0x1($a2)
    ctx->pc = 0x1f2eacu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 7));
    // 0x1f2eb0: 0x9667091c  lhu         $a3, 0x91C($s3)
    ctx->pc = 0x1f2eb0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x1f2eb4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1f2eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f2eb8: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x1F2EB8u;
    SET_GPR_U32(ctx, 31, 0x1F2EC0u);
    ctx->pc = 0x1F2EBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EB8u;
    // 0x1f2ebc: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x1F2EB8u, 0x1F2EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2EC0u;
label_1f2ec0:
    // 0x1f2ec0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ec4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2ec8: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F2EC8u;
    SET_GPR_U32(ctx, 31, 0x1F2ED0u);
    ctx->pc = 0x1F2ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2EC8u;
    // 0x1f2ecc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F2EC8u, 0x1F2ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2ED0u;
label_1f2ed0:
    // 0x1f2ed0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1F2ED0u;
    {
        const bool branch_taken_0x1f2ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2ED0u;
        // 0x1f2ed4: 0x8e620918  lw          $v0, 0x918($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ed0) {
            ctx->pc = 0x1F2F64u;
            goto label_1f2f64;
        }
    }
    ctx->pc = 0x1F2ED8u;
label_1f2ed8:
    // 0x1f2ed8: 0x8e62091c  lw          $v0, 0x91C($s3)
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x1f2edc: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x1F2EDCu;
    {
        const bool branch_taken_0x1f2edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2EDCu;
        // 0x1f2ee0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2edc) {
            ctx->pc = 0x1F3094u;
            goto label_1f3094;
        }
    }
    ctx->pc = 0x1F2EE4u;
    // 0x1f2ee4: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x1f2ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x1f2ee8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f2eec: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1f2eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1f2ef0: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x1f2ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x1f2ef4: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x1f2ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
    // 0x1f2ef8: 0x34c60050  ori         $a2, $a2, 0x50
    ctx->pc = 0x1f2ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)80);
    // 0x1f2efc: 0x34a500d0  ori         $a1, $a1, 0xD0
    ctx->pc = 0x1f2efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)208);
    // 0x1f2f00: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f2f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f2f04: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f2f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f2f08: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1f2f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1f2f0c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1f2f0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1f2f10: 0x34a5d000  ori         $a1, $a1, 0xD000
    ctx->pc = 0x1f2f10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)53248);
    // 0x1f2f14: 0x34c65000  ori         $a2, $a2, 0x5000
    ctx->pc = 0x1f2f14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)20480);
    // 0x1f2f18: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1f2f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1f2f1c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x1f2f1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1f2f20: 0x3c0400d0  lui         $a0, 0xD0
    ctx->pc = 0x1f2f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)208 << 16));
    // 0x1f2f24: 0x3c030050  lui         $v1, 0x50
    ctx->pc = 0x1f2f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)80 << 16));
    // 0x1f2f28: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x1f2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x1f2f2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f2f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f2f30: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1f2f30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1f2f34: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f2f34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f2f38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f2f38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f2f3c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f2f3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f2f40: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1f2f40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1f2f44: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1f2f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f2f48: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x1f2f48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x1f2f4c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1f2f4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1f2f50: 0xae63091c  sw          $v1, 0x91C($s3)
    ctx->pc = 0x1f2f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2332), GPR_U32(ctx, 3));
    // 0x1f2f54: 0x266400dc  addiu       $a0, $s3, 0xDC
    ctx->pc = 0x1f2f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
    // 0x1f2f58: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x1F2F58u;
    SET_GPR_U32(ctx, 31, 0x1F2F60u);
    ctx->pc = 0x1F2F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F58u;
    // 0x1f2f5c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x1F2F58u, 0x1F2F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F60u;
label_1f2f60:
    // 0x1f2f60: 0x8e620918  lw          $v0, 0x918($s3)
    ctx->pc = 0x1f2f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
label_1f2f64:
    // 0x1f2f64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2f68: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1F2F68u;
    {
        const bool branch_taken_0x1f2f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F68u;
        // 0x1f2f6c: 0xae620918  sw          $v0, 0x918($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2328), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f68) {
            ctx->pc = 0x1F3098u;
            goto label_1f3098;
        }
    }
    ctx->pc = 0x1F2F70u;
label_1f2f70:
    // 0x1f2f70: 0x8e62091c  lw          $v0, 0x91C($s3)
    ctx->pc = 0x1f2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x1f2f74: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1F2F74u;
    {
        const bool branch_taken_0x1f2f74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2F74u;
        // 0x1f2f78: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f74) {
            ctx->pc = 0x1F3094u;
            goto label_1f3094;
        }
    }
    ctx->pc = 0x1F2F7Cu;
    // 0x1f2f7c: 0x3c1000ff  lui         $s0, 0xFF
    ctx->pc = 0x1f2f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)255 << 16));
    // 0x1f2f80: 0x26720060  addiu       $s2, $s3, 0x60
    ctx->pc = 0x1f2f80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
    // 0x1f2f84: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1f2f84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x1f2f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f8c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f2f8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f2f90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2f94: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F2F94u;
    SET_GPR_U32(ctx, 31, 0x1F2F9Cu);
    ctx->pc = 0x1F2F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2F94u;
    // 0x1f2f98: 0x267100dc  addiu       $s1, $s3, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F2F94u, 0x1F2F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2F9Cu;
label_1f2f9c:
    // 0x1f2f9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2f9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f2fa0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1f2fa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1f2fa4: 0xc0b5a52  jal         func_2D6948
    ctx->pc = 0x1F2FA4u;
    SET_GPR_U32(ctx, 31, 0x1F2FACu);
    ctx->pc = 0x1F2FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FA4u;
    // 0x1f2fa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6948u, 0x1F2FA4u, 0x1F2FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FACu;
label_1f2fac:
    // 0x1f2fac: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x1f2facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f2fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fb4: 0xc0b5a26  jal         func_2D6898
    ctx->pc = 0x1F2FB4u;
    SET_GPR_U32(ctx, 31, 0x1F2FBCu);
    ctx->pc = 0x1F2FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FB4u;
    // 0x1f2fb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6898u, 0x1F2FB4u, 0x1F2FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FBCu;
label_1f2fbc:
    // 0x1f2fbc: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1f2fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1f2fc0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f2fc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f2fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fc8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f2fc8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f2fcc: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x1F2FCCu;
    SET_GPR_U32(ctx, 31, 0x1F2FD4u);
    ctx->pc = 0x1F2FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FCCu;
    // 0x1f2fd0: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x1F2FCCu, 0x1F2FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FD4u;
label_1f2fd4:
    // 0x1f2fd4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1f2fd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1f2fd8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f2fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f2fdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2fe0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f2fe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f2fe4: 0xc0b5a5a  jal         func_2D6968
    ctx->pc = 0x1F2FE4u;
    SET_GPR_U32(ctx, 31, 0x1F2FECu);
    ctx->pc = 0x1F2FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2FE4u;
    // 0x1f2fe8: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6968u, 0x1F2FE4u, 0x1F2FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2FECu;
label_1f2fec:
    // 0x1f2fec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1f2fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1f2ff0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1f2ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1f2ff4: 0x8c47aff0  lw          $a3, -0x5010($v0)
    ctx->pc = 0x1f2ff4u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x1f2ff8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1f2ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1f2ffc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f2ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f3000: 0x24060105  addiu       $a2, $zero, 0x105
    ctx->pc = 0x1f3000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x1f3004: 0x24e70210  addiu       $a3, $a3, 0x210
    ctx->pc = 0x1f3004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 528));
    // 0x1f3008: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f3008u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f300c: 0xc0b2e5a  jal         func_2CB968
    ctx->pc = 0x1F300Cu;
    SET_GPR_U32(ctx, 31, 0x1F3014u);
    ctx->pc = 0x1F3010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F300Cu;
    // 0x1f3010: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB968u, 0x1F300Cu, 0x1F3014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3014u;
label_1f3014:
    // 0x1f3014: 0x8e630918  lw          $v1, 0x918($s3)
    ctx->pc = 0x1f3014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2328)));
    // 0x1f3018: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1f3018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f301c: 0xae62091c  sw          $v0, 0x91C($s3)
    ctx->pc = 0x1f301cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2332), GPR_U32(ctx, 2));
    // 0x1f3020: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f3020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f3024: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1F3024u;
    {
        const bool branch_taken_0x1f3024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3024u;
        // 0x1f3028: 0xae630918  sw          $v1, 0x918($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 2328), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3024) {
            ctx->pc = 0x1F3098u;
            goto label_1f3098;
        }
    }
    ctx->pc = 0x1F302Cu;
label_1f302c:
    // 0x1f302c: 0x8e62091c  lw          $v0, 0x91C($s3)
    ctx->pc = 0x1f302cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2332)));
    // 0x1f3030: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F3030u;
    {
        const bool branch_taken_0x1f3030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F3034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3030u;
        // 0x1f3034: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3030) {
            ctx->pc = 0x1F3094u;
            goto label_1f3094;
        }
    }
    ctx->pc = 0x1F3038u;
    // 0x1f3038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f303c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f303cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3040: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F3040u;
    SET_GPR_U32(ctx, 31, 0x1F3048u);
    ctx->pc = 0x1F3044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3040u;
    // 0x1f3044: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F3040u, 0x1F3048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3048u;
label_1f3048:
    // 0x1f3048: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f304c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f304cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3050: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F3050u;
    SET_GPR_U32(ctx, 31, 0x1F3058u);
    ctx->pc = 0x1F3054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3050u;
    // 0x1f3054: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F3050u, 0x1F3058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3058u;
label_1f3058:
    // 0x1f3058: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f305c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1f305cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1f3060: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F3060u;
    SET_GPR_U32(ctx, 31, 0x1F3068u);
    ctx->pc = 0x1F3064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3060u;
    // 0x1f3064: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F3060u, 0x1F3068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3068u;
label_1f3068:
    // 0x1f3068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f3068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f306c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1f306cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f3070: 0xc07ca70  jal         func_1F29C0
    ctx->pc = 0x1F3070u;
    SET_GPR_U32(ctx, 31, 0x1F3078u);
    ctx->pc = 0x1F3074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3070u;
    // 0x1f3074: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F29C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F29C0u, 0x1F3070u, 0x1F3078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3078u;
label_1f3078:
    // 0x1f3078: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f307c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x1f307cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1f3080: 0xae600918  sw          $zero, 0x918($s3)
    ctx->pc = 0x1f3080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2328), GPR_U32(ctx, 0));
    // 0x1f3084: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f3084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f3088: 0xae60091c  sw          $zero, 0x91C($s3)
    ctx->pc = 0x1f3088u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2332), GPR_U32(ctx, 0));
    // 0x1f308c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F308Cu;
    {
        const bool branch_taken_0x1f308c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F308Cu;
        // 0x1f3090: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f308c) {
            ctx->pc = 0x1F3098u;
            goto label_1f3098;
        }
    }
    ctx->pc = 0x1F3094u;
label_1f3094:
    // 0x1f3094: 0xae62091c  sw          $v0, 0x91C($s3)
    ctx->pc = 0x1f3094u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2332), GPR_U32(ctx, 2));
label_1f3098:
    // 0x1f3098: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f3098u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f309c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f309cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f30a0:
    // 0x1f30a0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f30a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f30a4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f30a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f30a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f30a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f30ac: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1f30acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f30b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F30B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F30B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F30B0u;
        // 0x1f30b4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F30B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F30B8u;
}
