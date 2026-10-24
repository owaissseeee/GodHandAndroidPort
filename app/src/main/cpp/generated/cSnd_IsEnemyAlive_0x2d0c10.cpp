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

// Function: cSnd_IsEnemyAlive
// Address: 0x2d0c10 - 0x2d0cd0
void cSnd_IsEnemyAlive_0x2d0c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_IsEnemyAlive_0x2d0c10");
#endif

    switch (ctx->pc) {
        case 0x2d0c38u: goto label_2d0c38;
        case 0x2d0c88u: goto label_2d0c88;
        default: break;
    }

    ctx->pc = 0x2d0c10u;

    // 0x2d0c10: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d0c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d0c14: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2d0c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2d0c18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d0c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2d0c1c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2d0c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2d0c20: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x2d0c20u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x2d0c24: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d0c24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0c28: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d0c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d0c2c: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D0C2Cu;
    {
        const bool branch_taken_0x2d0c2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C2Cu;
        // 0x2d0c30: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c2c) {
            ctx->pc = 0x2D0CB0u;
            goto label_2d0cb0;
        }
    }
    ctx->pc = 0x2D0C34u;
    // 0x2d0c34: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2d0c34u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2d0c38:
    // 0x2d0c38: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D0C38u;
    {
        const bool branch_taken_0x2d0c38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c38) {
            ctx->pc = 0x2D0C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C38u;
            // 0x2d0c3c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0CA8u;
            goto label_2d0ca8;
        }
    }
    ctx->pc = 0x2D0C40u;
    // 0x2d0c40: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x2d0c40u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x2d0c44: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x2d0c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x2d0c48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0C48u;
    {
        const bool branch_taken_0x2d0c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C48u;
        // 0x2d0c4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c48) {
            ctx->pc = 0x2D0C58u;
            goto label_2d0c58;
        }
    }
    ctx->pc = 0x2D0C50u;
    // 0x2d0c50: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x2d0c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2d0c54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d0c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0c58:
    // 0x2d0c58: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2d0c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d0c5c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D0C5Cu;
    {
        const bool branch_taken_0x2d0c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C5Cu;
        // 0x2d0c60: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c5c) {
            ctx->pc = 0x2D0CA4u;
            goto label_2d0ca4;
        }
    }
    ctx->pc = 0x2D0C64u;
    // 0x2d0c64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D0C64u;
    {
        const bool branch_taken_0x2d0c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C64u;
        // 0x2d0c68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c64) {
            ctx->pc = 0x2D0C74u;
            goto label_2d0c74;
        }
    }
    ctx->pc = 0x2D0C6Cu;
    // 0x2d0c6c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x2d0c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x2d0c70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d0c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d0c74:
    // 0x2d0c74: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2d0c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2d0c78: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2D0C78u;
    {
        const bool branch_taken_0x2d0c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c78) {
            ctx->pc = 0x2D0C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C78u;
            // 0x2d0c7c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0CA8u;
            goto label_2d0ca8;
        }
    }
    ctx->pc = 0x2D0C80u;
    // 0x2d0c80: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x2D0C80u;
    SET_GPR_U32(ctx, 31, 0x2D0C88u);
    ctx->pc = 0x2D0C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0C80u;
    // 0x2d0c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x2D0C80u, 0x2D0C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D0C88u;
label_2d0c88:
    // 0x2d0c88: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D0C88u;
    {
        const bool branch_taken_0x2d0c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0c88) {
            ctx->pc = 0x2D0C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C88u;
            // 0x2d0c8c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0CA8u;
            goto label_2d0ca8;
        }
    }
    ctx->pc = 0x2D0C90u;
    // 0x2d0c90: 0x960202fe  lhu         $v0, 0x2FE($s0)
    ctx->pc = 0x2d0c90u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x2d0c94: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0C94u;
    {
        const bool branch_taken_0x2d0c94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2d0c94) {
            ctx->pc = 0x2D0C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0C94u;
            // 0x2d0c98: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0CA8u;
            goto label_2d0ca8;
        }
    }
    ctx->pc = 0x2D0C9Cu;
    // 0x2d0c9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D0C9Cu;
    {
        const bool branch_taken_0x2d0c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0C9Cu;
        // 0x2d0ca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0c9c) {
            ctx->pc = 0x2D0CB4u;
            goto label_2d0cb4;
        }
    }
    ctx->pc = 0x2D0CA4u;
label_2d0ca4:
    // 0x2d0ca4: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x2d0ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2d0ca8:
    // 0x2d0ca8: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2D0CA8u;
    {
        const bool branch_taken_0x2d0ca8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d0ca8) {
            ctx->pc = 0x2D0CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0CA8u;
            // 0x2d0cac: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0c38;
        }
    }
    ctx->pc = 0x2D0CB0u;
label_2d0cb0:
    // 0x2d0cb0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d0cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d0cb4:
    // 0x2d0cb4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d0cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d0cb8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d0cb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d0cbc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2d0cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d0cc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d0cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d0cc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D0CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0CC4u;
        // 0x2d0cc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0CC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0CCCu;
    // 0x2d0ccc: 0x0  nop
    ctx->pc = 0x2d0cccu;
    // NOP
    ctx->pc = 0x2d0cd0u;
}
