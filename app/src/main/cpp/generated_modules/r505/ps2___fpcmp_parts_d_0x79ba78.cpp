#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __fpcmp_parts_d
// Address: 0x79ba78 - 0x79bb90
void ps2___fpcmp_parts_d_0x79ba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_d_0x79ba78");
#endif

    switch (ctx->pc) {
        case 0x79bac0u: goto label_79bac0;
        case 0x79bb30u: goto label_79bb30;
        case 0x79bb5cu: goto label_79bb5c;
        default: break;
    }

    ctx->pc = 0x79ba78u;

    // 0x79ba78: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x79ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79ba7c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79ba7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79ba80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BA80u;
    {
        const bool branch_taken_0x79ba80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ba80) {
            ctx->pc = 0x79BA98u;
            goto label_79ba98;
        }
    }
    ctx->pc = 0x79BA88u;
    // 0x79ba88: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79ba88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79ba8c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79ba8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79ba90: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BA90u;
    {
        const bool branch_taken_0x79ba90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA90u;
        // 0x79ba94: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba90) {
            ctx->pc = 0x79BAA0u;
            goto label_79baa0;
        }
    }
    ctx->pc = 0x79BA98u;
label_79ba98:
    // 0x79ba98: 0x3e00008  jr          $ra
    ctx->pc = 0x79BA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA98u;
        // 0x79ba9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAA0u;
label_79baa0:
    // 0x79baa0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79BAA0u;
    {
        const bool branch_taken_0x79baa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAA0u;
        // 0x79baa4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79baa0) {
            ctx->pc = 0x79BAD0u;
            goto label_79bad0;
        }
    }
    ctx->pc = 0x79BAA8u;
    // 0x79baa8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BAA8u;
    {
        const bool branch_taken_0x79baa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79baa8) {
            ctx->pc = 0x79BAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAA8u;
            // 0x79baac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BAC0u;
            goto label_79bac0;
        }
    }
    ctx->pc = 0x79BAB0u;
    // 0x79bab0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79bab4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79bab8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAB8u;
        // 0x79babc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAC0u;
label_79bac0:
    // 0x79bac0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79bac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bac4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79bac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bac8: 0x3e00008  jr          $ra
    ctx->pc = 0x79BAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAC8u;
        // 0x79bacc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAD0u;
label_79bad0:
    // 0x79bad0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79BAD0u;
    {
        const bool branch_taken_0x79bad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bad0) {
            ctx->pc = 0x79BAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAD0u;
            // 0x79bad4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BAECu;
            goto label_79baec;
        }
    }
    ctx->pc = 0x79BAD8u;
    // 0x79bad8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79bad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79badc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79badcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79bae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bae4: 0x3e00008  jr          $ra
    ctx->pc = 0x79BAE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAE4u;
        // 0x79bae8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BAECu;
label_79baec:
    // 0x79baec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79BAECu;
    {
        const bool branch_taken_0x79baec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAECu;
        // 0x79baf0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79baec) {
            ctx->pc = 0x79BB14u;
            goto label_79bb14;
        }
    }
    ctx->pc = 0x79BAF4u;
    // 0x79baf4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BAF4u;
    {
        const bool branch_taken_0x79baf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79baf4) {
            ctx->pc = 0x79BAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAF4u;
            // 0x79baf8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB04u;
            goto label_79bb04;
        }
    }
    ctx->pc = 0x79BAFCu;
    // 0x79bafc: 0x3e00008  jr          $ra
    ctx->pc = 0x79BAFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BAFCu;
        // 0x79bb00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BAFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB04u;
label_79bb04:
    // 0x79bb04: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bb08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79bb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bb0c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB0Cu;
        // 0x79bb10: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB14u;
label_79bb14:
    // 0x79bb14: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79BB14u;
    {
        const bool branch_taken_0x79bb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bb14) {
            ctx->pc = 0x79BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB14u;
            // 0x79bb18: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bac0;
        }
    }
    ctx->pc = 0x79BB1Cu;
    // 0x79bb1c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x79bb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79bb20: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79bb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79bb24: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BB24u;
    {
        const bool branch_taken_0x79bb24 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x79bb24) {
            ctx->pc = 0x79BB28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB24u;
            // 0x79bb28: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB3Cu;
            goto label_79bb3c;
        }
    }
    ctx->pc = 0x79BB2Cu;
    // 0x79bb2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79bb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79bb30:
    // 0x79bb30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79bb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79bb34: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB34u;
        // 0x79bb38: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB3Cu;
label_79bb3c:
    // 0x79bb3c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x79bb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79bb40: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x79bb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x79bb44: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79BB44u;
    {
        const bool branch_taken_0x79bb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bb44) {
            ctx->pc = 0x79BB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB44u;
            // 0x79bb48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bb30;
        }
    }
    ctx->pc = 0x79BB4Cu;
    // 0x79bb4c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x79bb4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79bb50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79BB50u;
    {
        const bool branch_taken_0x79bb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bb50) {
            ctx->pc = 0x79BB54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB50u;
            // 0x79bb54: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB68u;
            goto label_79bb68;
        }
    }
    ctx->pc = 0x79BB58u;
    // 0x79bb58: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79bb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79bb5c:
    // 0x79bb5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79bb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bb60: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB60u;
        // 0x79bb64: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB68u;
label_79bb68:
    // 0x79bb68: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x79bb68u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x79bb6c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x79bb6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79bb70: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79BB70u;
    {
        const bool branch_taken_0x79bb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bb70) {
            ctx->pc = 0x79BB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB70u;
            // 0x79bb74: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bb30;
        }
    }
    ctx->pc = 0x79BB78u;
    // 0x79bb78: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x79bb78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79bb7c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79BB7Cu;
    {
        const bool branch_taken_0x79bb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB7Cu;
        // 0x79bb80: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb7c) {
            ctx->pc = 0x79BB5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bb5c;
        }
    }
    ctx->pc = 0x79BB84u;
    // 0x79bb84: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB84u;
        // 0x79bb88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB8Cu;
    // 0x79bb8c: 0x0  nop
    ctx->pc = 0x79bb8cu;
    // NOP
    ctx->pc = 0x79bb90u;
}
} // namespace gh_r505
