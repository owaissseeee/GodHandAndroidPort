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

// Function: func_002C32F0
// Address: 0x2c32f0 - 0x2c33d8
void func_002C32F0_0x2c32f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002C32F0_0x2c32f0");
#endif

    switch (ctx->pc) {
        case 0x2c3308u: goto label_2c3308;
        case 0x2c3338u: goto label_2c3338;
        case 0x2c3390u: goto label_2c3390;
        case 0x2c33c4u: goto label_2c33c4;
        default: break;
    }

    ctx->pc = 0x2c32f0u;

    // 0x2c32f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c32f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c32f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c32f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c32f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c32f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c32fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c3300: 0xc0b55aa  jal         func_2D56A8
    ctx->pc = 0x2C3300u;
    SET_GPR_U32(ctx, 31, 0x2C3308u);
    ctx->pc = 0x2C3304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C3300u;
    // 0x2c3304: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D56A8u, 0x2C3300u, 0x2C3308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C3308u;
label_2c3308:
    // 0x2c3308: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2c3308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2c330c: 0x3c03bfff  lui         $v1, 0xBFFF
    ctx->pc = 0x2c330cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49151 << 16));
    // 0x2c3310: 0x8c447a84  lw          $a0, 0x7A84($v0)
    ctx->pc = 0x2c3310u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x747A84u));
    // 0x2c3314: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2c3314u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2c3318: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x2c3318u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x2c331c: 0x3c090074  lui         $t1, 0x74
    ctx->pc = 0x2c331cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)116 << 16));
    // 0x2c3320: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2c3320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x2c3324: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x2c3324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2c3328: 0xac447a84  sw          $a0, 0x7A84($v0)
    ctx->pc = 0x2c3328u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31364), GPR_U32(ctx, 4));
    // 0x2c332c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c332cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3330: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c3330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c3334: 0x0  nop
    ctx->pc = 0x2c3334u;
    // NOP
label_2c3338:
    // 0x2c3338: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C3338u;
    {
        const bool branch_taken_0x2c3338 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2C333Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3338u;
        // 0x2c333c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3338) {
            ctx->pc = 0x2C3354u;
            goto label_2c3354;
        }
    }
    ctx->pc = 0x2C3340u;
    // 0x2c3340: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2c3340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2c3344: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2c3344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2c3348: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x2c3348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2c334c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2c334cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2c3350: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x2c3350u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_2c3354:
    // 0x2c3354: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x2c3354u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2c3358: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2C3358u;
    {
        const bool branch_taken_0x2c3358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C335Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3358u;
        // 0x2c335c: 0x24c60058  addiu       $a2, $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3358) {
            ctx->pc = 0x2C3338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3338;
        }
    }
    ctx->pc = 0x2C3360u;
    // 0x2c3360: 0x250226c0  addiu       $v0, $t0, 0x26C0
    ctx->pc = 0x2c3360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 9920));
    // 0x2c3364: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x2c3364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c3368: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x2c3368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x2c336c: 0x950426c0  lhu         $a0, 0x26C0($t0)
    ctx->pc = 0x2c336cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 9920)));
    // 0x2c3370: 0x1083000f  beq         $a0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C3370u;
    {
        const bool branch_taken_0x2c3370 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2C3374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C3370u;
        // 0x2c3374: 0x252374a0  addiu       $v1, $t1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c3370) {
            ctx->pc = 0x2C33B0u;
            goto label_2c33b0;
        }
    }
    ctx->pc = 0x2C3378u;
    // 0x2c3378: 0x946205b0  lhu         $v0, 0x5B0($v1)
    ctx->pc = 0x2c3378u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 1456)));
    // 0x2c337c: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C337Cu;
    {
        const bool branch_taken_0x2c337c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C3380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C337Cu;
        // 0x2c3380: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c337c) {
            ctx->pc = 0x2C33B0u;
            goto label_2c33b0;
        }
    }
    ctx->pc = 0x2C3384u;
    // 0x2c3384: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x2c3384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2c3388: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2c3388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2c338c: 0x0  nop
    ctx->pc = 0x2c338cu;
    // NOP
label_2c3390:
    // 0x2c3390: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x2c3390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2c3394: 0xae0200d4  sw          $v0, 0xD4($s0)
    ctx->pc = 0x2c3394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
    // 0x2c3398: 0x94630014  lhu         $v1, 0x14($v1)
    ctx->pc = 0x2c3398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2c339c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C339Cu;
    {
        const bool branch_taken_0x2c339c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2C33A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C339Cu;
        // 0x2c33a0: 0x252274a0  addiu       $v0, $t1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c339c) {
            ctx->pc = 0x2C33B4u;
            goto label_2c33b4;
        }
    }
    ctx->pc = 0x2C33A4u;
    // 0x2c33a4: 0x94a205b0  lhu         $v0, 0x5B0($a1)
    ctx->pc = 0x2c33a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x2c33a8: 0x5462fff9  bnel        $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2C33A8u;
    {
        const bool branch_taken_0x2c33a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2c33a8) {
            ctx->pc = 0x2C33ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C33A8u;
            // 0x2c33ac: 0x8e0300d4  lw          $v1, 0xD4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C3390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c3390;
        }
    }
    ctx->pc = 0x2C33B0u;
label_2c33b0:
    // 0x2c33b0: 0x252274a0  addiu       $v0, $t1, 0x74A0
    ctx->pc = 0x2c33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 29856));
label_2c33b4:
    // 0x2c33b4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x2c33b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2c33b8: 0x944505b0  lhu         $a1, 0x5B0($v0)
    ctx->pc = 0x2c33b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 1456)));
    // 0x2c33bc: 0xc0afaf2  jal         func_2BEBC8
    ctx->pc = 0x2C33BCu;
    SET_GPR_U32(ctx, 31, 0x2C33C4u);
    ctx->pc = 0x2C33C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C33BCu;
    // 0x2c33c0: 0x24848658  addiu       $a0, $a0, -0x79A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEBC8u, 0x2C33BCu, 0x2C33C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C33C4u;
label_2c33c4:
    // 0x2c33c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c33c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c33c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c33c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c33cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C33CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C33D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C33CCu;
        // 0x2c33d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C33CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C33D4u;
    // 0x2c33d4: 0x0  nop
    ctx->pc = 0x2c33d4u;
    // NOP
    ctx->pc = 0x2c33d8u;
}
