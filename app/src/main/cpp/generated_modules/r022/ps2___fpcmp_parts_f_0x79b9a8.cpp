#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: __fpcmp_parts_f
// Address: 0x79b9a8 - 0x79bac0
void ps2___fpcmp_parts_f_0x79b9a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_f_0x79b9a8");
#endif

    switch (ctx->pc) {
        case 0x79b9f0u: goto label_79b9f0;
        case 0x79ba60u: goto label_79ba60;
        case 0x79ba8cu: goto label_79ba8c;
        default: break;
    }

    ctx->pc = 0x79b9a8u;

    // 0x79b9a8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x79b9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b9ac: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79b9acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b9b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B9B0u;
    {
        const bool branch_taken_0x79b9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b9b0) {
            ctx->pc = 0x79B9C8u;
            goto label_79b9c8;
        }
    }
    ctx->pc = 0x79B9B8u;
    // 0x79b9b8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79b9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79b9bc: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79b9bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b9c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B9C0u;
    {
        const bool branch_taken_0x79b9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9C0u;
        // 0x79b9c4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9c0) {
            ctx->pc = 0x79B9D0u;
            goto label_79b9d0;
        }
    }
    ctx->pc = 0x79B9C8u;
label_79b9c8:
    // 0x79b9c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B9C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9C8u;
        // 0x79b9cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B9C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B9D0u;
label_79b9d0:
    // 0x79b9d0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79B9D0u;
    {
        const bool branch_taken_0x79b9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9D0u;
        // 0x79b9d4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9d0) {
            ctx->pc = 0x79BA00u;
            goto label_79ba00;
        }
    }
    ctx->pc = 0x79B9D8u;
    // 0x79b9d8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79B9D8u;
    {
        const bool branch_taken_0x79b9d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b9d8) {
            ctx->pc = 0x79B9DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B9D8u;
            // 0x79b9dc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B9F0u;
            goto label_79b9f0;
        }
    }
    ctx->pc = 0x79B9E0u;
    // 0x79b9e0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79b9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79b9e4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79b9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79b9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9E8u;
        // 0x79b9ec: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B9F0u;
label_79b9f0:
    // 0x79b9f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b9f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9F8u;
        // 0x79b9fc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA00u;
label_79ba00:
    // 0x79ba00: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BA00u;
    {
        const bool branch_taken_0x79ba00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ba00) {
            ctx->pc = 0x79BA04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA00u;
            // 0x79ba04: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA1Cu;
            goto label_79ba1c;
        }
    }
    ctx->pc = 0x79BA08u;
    // 0x79ba08: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79ba08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79ba0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ba10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ba14: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA14u;
        // 0x79ba18: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA1Cu;
label_79ba1c:
    // 0x79ba1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BA1Cu;
    {
        const bool branch_taken_0x79ba1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA1Cu;
        // 0x79ba20: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba1c) {
            ctx->pc = 0x79BA44u;
            goto label_79ba44;
        }
    }
    ctx->pc = 0x79BA24u;
    // 0x79ba24: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BA24u;
    {
        const bool branch_taken_0x79ba24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ba24) {
            ctx->pc = 0x79BA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA24u;
            // 0x79ba28: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA34u;
            goto label_79ba34;
        }
    }
    ctx->pc = 0x79BA2Cu;
    // 0x79ba2c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA2Cu;
        // 0x79ba30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA34u;
label_79ba34:
    // 0x79ba34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ba38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79ba38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ba3c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA3Cu;
        // 0x79ba40: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA44u;
label_79ba44:
    // 0x79ba44: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79BA44u;
    {
        const bool branch_taken_0x79ba44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ba44) {
            ctx->pc = 0x79BA48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA44u;
            // 0x79ba48: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b9f0;
        }
    }
    ctx->pc = 0x79BA4Cu;
    // 0x79ba4c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x79ba4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79ba50: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79ba54: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BA54u;
    {
        const bool branch_taken_0x79ba54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x79ba54) {
            ctx->pc = 0x79BA58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA54u;
            // 0x79ba58: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA6Cu;
            goto label_79ba6c;
        }
    }
    ctx->pc = 0x79BA5Cu;
    // 0x79ba5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79ba5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79ba60:
    // 0x79ba60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79ba60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79ba64: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA64u;
        // 0x79ba68: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA6Cu;
label_79ba6c:
    // 0x79ba6c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x79ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79ba70: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x79ba70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x79ba74: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79BA74u;
    {
        const bool branch_taken_0x79ba74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ba74) {
            ctx->pc = 0x79BA78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA74u;
            // 0x79ba78: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79BA7Cu;
    // 0x79ba7c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x79ba7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79ba80: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BA80u;
    {
        const bool branch_taken_0x79ba80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79ba80) {
            ctx->pc = 0x79BA84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA80u;
            // 0x79ba84: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA98u;
            goto label_79ba98;
        }
    }
    ctx->pc = 0x79BA88u;
    // 0x79ba88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79ba8c:
    // 0x79ba8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ba90: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA90u;
        // 0x79ba94: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BA98u;
label_79ba98:
    // 0x79ba98: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x79ba98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x79ba9c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x79ba9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79baa0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79BAA0u;
    {
        const bool branch_taken_0x79baa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79baa0) {
            ctx->pc = 0x79BAA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAA0u;
            // 0x79baa4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba60;
        }
    }
    ctx->pc = 0x79BAA8u;
    // 0x79baa8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x79baa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79baac: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79BAACu;
    {
        const bool branch_taken_0x79baac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAACu;
        // 0x79bab0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79baac) {
            ctx->pc = 0x79BA8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba8c;
        }
    }
    ctx->pc = 0x79BAB4u;
    // 0x79bab4: 0x3e00008  jr          $ra
    ctx->pc = 0x79BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAB4u;
        // 0x79bab8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BABCu;
    // 0x79babc: 0x0  nop
    ctx->pc = 0x79babcu;
    // NOP
    ctx->pc = 0x79bac0u;
}
} // namespace gh_r022
