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
// Function: __fpcmp_parts_d
// Address: 0x79c678 - 0x79c790
void ps2___fpcmp_parts_d_0x79c678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_d_0x79c678");
#endif

    switch (ctx->pc) {
        case 0x79c6c0u: goto label_79c6c0;
        case 0x79c730u: goto label_79c730;
        case 0x79c75cu: goto label_79c75c;
        default: break;
    }

    ctx->pc = 0x79c678u;

    // 0x79c678: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x79c678u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c67c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79c67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c680: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C680u;
    {
        const bool branch_taken_0x79c680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c680) {
            ctx->pc = 0x79C698u;
            goto label_79c698;
        }
    }
    ctx->pc = 0x79C688u;
    // 0x79c688: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79c688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79c68c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79c68cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c690: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C690u;
    {
        const bool branch_taken_0x79c690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C690u;
        // 0x79c694: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c690) {
            ctx->pc = 0x79C6A0u;
            goto label_79c6a0;
        }
    }
    ctx->pc = 0x79C698u;
label_79c698:
    // 0x79c698: 0x3e00008  jr          $ra
    ctx->pc = 0x79C698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C698u;
        // 0x79c69c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C6A0u;
label_79c6a0:
    // 0x79c6a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79C6A0u;
    {
        const bool branch_taken_0x79c6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6A0u;
        // 0x79c6a4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6a0) {
            ctx->pc = 0x79C6D0u;
            goto label_79c6d0;
        }
    }
    ctx->pc = 0x79C6A8u;
    // 0x79c6a8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C6A8u;
    {
        const bool branch_taken_0x79c6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c6a8) {
            ctx->pc = 0x79C6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C6A8u;
            // 0x79c6ac: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C6C0u;
            goto label_79c6c0;
        }
    }
    ctx->pc = 0x79C6B0u;
    // 0x79c6b0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79c6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c6b4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79c6b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6B8u;
        // 0x79c6bc: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C6B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C6C0u;
label_79c6c0:
    // 0x79c6c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79c6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c6c4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79C6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6C8u;
        // 0x79c6cc: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C6D0u;
label_79c6d0:
    // 0x79c6d0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C6D0u;
    {
        const bool branch_taken_0x79c6d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c6d0) {
            ctx->pc = 0x79C6D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C6D0u;
            // 0x79c6d4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C6ECu;
            goto label_79c6ec;
        }
    }
    ctx->pc = 0x79C6D8u;
    // 0x79c6d8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79c6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c6dc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79c6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c6e4: 0x3e00008  jr          $ra
    ctx->pc = 0x79C6E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6E4u;
        // 0x79c6e8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C6E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C6ECu;
label_79c6ec:
    // 0x79c6ec: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79C6ECu;
    {
        const bool branch_taken_0x79c6ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6ECu;
        // 0x79c6f0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c6ec) {
            ctx->pc = 0x79C714u;
            goto label_79c714;
        }
    }
    ctx->pc = 0x79C6F4u;
    // 0x79c6f4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C6F4u;
    {
        const bool branch_taken_0x79c6f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c6f4) {
            ctx->pc = 0x79C6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C6F4u;
            // 0x79c6f8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C704u;
            goto label_79c704;
        }
    }
    ctx->pc = 0x79C6FCu;
    // 0x79c6fc: 0x3e00008  jr          $ra
    ctx->pc = 0x79C6FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C6FCu;
        // 0x79c700: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C6FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C704u;
label_79c704:
    // 0x79c704: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79c704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c708: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c70c: 0x3e00008  jr          $ra
    ctx->pc = 0x79C70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C70Cu;
        // 0x79c710: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C714u;
label_79c714:
    // 0x79c714: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79C714u;
    {
        const bool branch_taken_0x79c714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c714) {
            ctx->pc = 0x79C718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C714u;
            // 0x79c718: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c6c0;
        }
    }
    ctx->pc = 0x79C71Cu;
    // 0x79c71c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x79c71cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79c720: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79c720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c724: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C724u;
    {
        const bool branch_taken_0x79c724 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x79c724) {
            ctx->pc = 0x79C728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C724u;
            // 0x79c728: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C73Cu;
            goto label_79c73c;
        }
    }
    ctx->pc = 0x79C72Cu;
    // 0x79c72c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79c72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79c730:
    // 0x79c730: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c734: 0x3e00008  jr          $ra
    ctx->pc = 0x79C734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C734u;
        // 0x79c738: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C73Cu;
label_79c73c:
    // 0x79c73c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x79c73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79c740: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x79c740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x79c744: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C744u;
    {
        const bool branch_taken_0x79c744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c744) {
            ctx->pc = 0x79C748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C744u;
            // 0x79c748: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c730;
        }
    }
    ctx->pc = 0x79C74Cu;
    // 0x79c74c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x79c74cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c750: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C750u;
    {
        const bool branch_taken_0x79c750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c750) {
            ctx->pc = 0x79C754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C750u;
            // 0x79c754: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C768u;
            goto label_79c768;
        }
    }
    ctx->pc = 0x79C758u;
    // 0x79c758: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79c758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79c75c:
    // 0x79c75c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c760: 0x3e00008  jr          $ra
    ctx->pc = 0x79C760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C760u;
        // 0x79c764: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C768u;
label_79c768:
    // 0x79c768: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x79c768u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x79c76c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x79c76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c770: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79C770u;
    {
        const bool branch_taken_0x79c770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c770) {
            ctx->pc = 0x79C774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C770u;
            // 0x79c774: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c730;
        }
    }
    ctx->pc = 0x79C778u;
    // 0x79c778: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x79c778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79c77c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79C77Cu;
    {
        const bool branch_taken_0x79c77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C77Cu;
        // 0x79c780: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c77c) {
            ctx->pc = 0x79C75Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c75c;
        }
    }
    ctx->pc = 0x79C784u;
    // 0x79c784: 0x3e00008  jr          $ra
    ctx->pc = 0x79C784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C784u;
        // 0x79c788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C78Cu;
    // 0x79c78c: 0x0  nop
    ctx->pc = 0x79c78cu;
    // NOP
    ctx->pc = 0x79c790u;
}
} // namespace gh_r022
