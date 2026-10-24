#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __fpcmp_parts_f
// Address: 0x79c718 - 0x79c830
void ps2___fpcmp_parts_f_0x79c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_f_0x79c718");
#endif

    switch (ctx->pc) {
        case 0x79c760u: goto label_79c760;
        case 0x79c7d0u: goto label_79c7d0;
        case 0x79c7fcu: goto label_79c7fc;
        default: break;
    }

    ctx->pc = 0x79c718u;

    // 0x79c718: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x79c718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79c71c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x79c71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c720: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C720u;
    {
        const bool branch_taken_0x79c720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c720) {
            ctx->pc = 0x79C738u;
            goto label_79c738;
        }
    }
    ctx->pc = 0x79C728u;
    // 0x79c728: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x79c728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x79c72c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79c72cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79c730: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C730u;
    {
        const bool branch_taken_0x79c730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C730u;
        // 0x79c734: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c730) {
            ctx->pc = 0x79C740u;
            goto label_79c740;
        }
    }
    ctx->pc = 0x79C738u;
label_79c738:
    // 0x79c738: 0x3e00008  jr          $ra
    ctx->pc = 0x79C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C738u;
        // 0x79c73c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C740u;
label_79c740:
    // 0x79c740: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x79C740u;
    {
        const bool branch_taken_0x79c740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C740u;
        // 0x79c744: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c740) {
            ctx->pc = 0x79C770u;
            goto label_79c770;
        }
    }
    ctx->pc = 0x79C748u;
    // 0x79c748: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C748u;
    {
        const bool branch_taken_0x79c748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c748) {
            ctx->pc = 0x79C74Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C748u;
            // 0x79c74c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C760u;
            goto label_79c760;
        }
    }
    ctx->pc = 0x79C750u;
    // 0x79c750: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x79c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c754: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79c754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79c758: 0x3e00008  jr          $ra
    ctx->pc = 0x79C758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C758u;
        // 0x79c75c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C760u;
label_79c760:
    // 0x79c760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79c760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c764: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c768: 0x3e00008  jr          $ra
    ctx->pc = 0x79C768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C768u;
        // 0x79c76c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C770u;
label_79c770:
    // 0x79c770: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x79C770u;
    {
        const bool branch_taken_0x79c770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c770) {
            ctx->pc = 0x79C774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C770u;
            // 0x79c774: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C78Cu;
            goto label_79c78c;
        }
    }
    ctx->pc = 0x79C778u;
    // 0x79c778: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x79c778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c77c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79c77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c780: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c784: 0x3e00008  jr          $ra
    ctx->pc = 0x79C784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C784u;
        // 0x79c788: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
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
label_79c78c:
    // 0x79c78c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x79C78Cu;
    {
        const bool branch_taken_0x79c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C78Cu;
        // 0x79c790: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c78c) {
            ctx->pc = 0x79C7B4u;
            goto label_79c7b4;
        }
    }
    ctx->pc = 0x79C794u;
    // 0x79c794: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x79C794u;
    {
        const bool branch_taken_0x79c794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c794) {
            ctx->pc = 0x79C798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C794u;
            // 0x79c798: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C7A4u;
            goto label_79c7a4;
        }
    }
    ctx->pc = 0x79C79Cu;
    // 0x79c79c: 0x3e00008  jr          $ra
    ctx->pc = 0x79C79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C79Cu;
        // 0x79c7a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C7A4u;
label_79c7a4:
    // 0x79c7a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c7a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c7ac: 0x3e00008  jr          $ra
    ctx->pc = 0x79C7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C7ACu;
        // 0x79c7b0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C7B4u;
label_79c7b4:
    // 0x79c7b4: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x79C7B4u;
    {
        const bool branch_taken_0x79c7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c7b4) {
            ctx->pc = 0x79C7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C7B4u;
            // 0x79c7b8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c760;
        }
    }
    ctx->pc = 0x79C7BCu;
    // 0x79c7bc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x79c7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79c7c0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x79c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x79c7c4: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C7C4u;
    {
        const bool branch_taken_0x79c7c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x79c7c4) {
            ctx->pc = 0x79C7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C7C4u;
            // 0x79c7c8: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C7DCu;
            goto label_79c7dc;
        }
    }
    ctx->pc = 0x79C7CCu;
    // 0x79c7cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_79c7d0:
    // 0x79c7d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79c7d4: 0x3e00008  jr          $ra
    ctx->pc = 0x79C7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C7D4u;
        // 0x79c7d8: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C7D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C7DCu;
label_79c7dc:
    // 0x79c7dc: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x79c7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x79c7e0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x79c7e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x79c7e4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79C7E4u;
    {
        const bool branch_taken_0x79c7e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c7e4) {
            ctx->pc = 0x79C7E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C7E4u;
            // 0x79c7e8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c7d0;
        }
    }
    ctx->pc = 0x79C7ECu;
    // 0x79c7ec: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x79c7ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x79c7f0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x79C7F0u;
    {
        const bool branch_taken_0x79c7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79c7f0) {
            ctx->pc = 0x79C7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C7F0u;
            // 0x79c7f4: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C808u;
            goto label_79c808;
        }
    }
    ctx->pc = 0x79C7F8u;
    // 0x79c7f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x79c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_79c7fc:
    // 0x79c7fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x79c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c800: 0x3e00008  jr          $ra
    ctx->pc = 0x79C800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C800u;
        // 0x79c804: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C808u;
label_79c808:
    // 0x79c808: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x79c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x79c80c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x79c80cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x79c810: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x79C810u;
    {
        const bool branch_taken_0x79c810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79c810) {
            ctx->pc = 0x79C814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79C810u;
            // 0x79c814: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79C7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c7d0;
        }
    }
    ctx->pc = 0x79C818u;
    // 0x79c818: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x79c818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x79c81c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x79C81Cu;
    {
        const bool branch_taken_0x79c81c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79C820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C81Cu;
        // 0x79c820: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c81c) {
            ctx->pc = 0x79C7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c7fc;
        }
    }
    ctx->pc = 0x79C824u;
    // 0x79c824: 0x3e00008  jr          $ra
    ctx->pc = 0x79C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C824u;
        // 0x79c828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C82Cu;
    // 0x79c82c: 0x0  nop
    ctx->pc = 0x79c82cu;
    // NOP
    ctx->pc = 0x79c830u;
}
} // namespace gh_r501
