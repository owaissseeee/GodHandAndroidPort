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

// Function: __fpcmp_parts_d
// Address: 0x31e758 - 0x31e870
void ps2___fpcmp_parts_d_0x31e758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_d_0x31e758");
#endif

    switch (ctx->pc) {
        case 0x31e7a0u: goto label_31e7a0;
        case 0x31e810u: goto label_31e810;
        case 0x31e83cu: goto label_31e83c;
        default: break;
    }

    ctx->pc = 0x31e758u;

    // 0x31e758: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x31e758u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31e75c: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x31e75cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e760: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E760u;
    {
        const bool branch_taken_0x31e760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e760) {
            ctx->pc = 0x31E778u;
            goto label_31e778;
        }
    }
    ctx->pc = 0x31E768u;
    // 0x31e768: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x31e768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x31e76c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x31e76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x31e770: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E770u;
    {
        const bool branch_taken_0x31e770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E770u;
        // 0x31e774: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e770) {
            ctx->pc = 0x31E780u;
            goto label_31e780;
        }
    }
    ctx->pc = 0x31E778u;
label_31e778:
    // 0x31e778: 0x3e00008  jr          $ra
    ctx->pc = 0x31E778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E778u;
        // 0x31e77c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E780u;
label_31e780:
    // 0x31e780: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x31E780u;
    {
        const bool branch_taken_0x31e780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E780u;
        // 0x31e784: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e780) {
            ctx->pc = 0x31E7B0u;
            goto label_31e7b0;
        }
    }
    ctx->pc = 0x31E788u;
    // 0x31e788: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E788u;
    {
        const bool branch_taken_0x31e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e788) {
            ctx->pc = 0x31E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E788u;
            // 0x31e78c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E7A0u;
            goto label_31e7a0;
        }
    }
    ctx->pc = 0x31E790u;
    // 0x31e790: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x31e790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31e794: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e798: 0x3e00008  jr          $ra
    ctx->pc = 0x31E798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E798u;
        // 0x31e79c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7A0u;
label_31e7a0:
    // 0x31e7a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e7a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x31E7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7A8u;
        // 0x31e7ac: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7B0u;
label_31e7b0:
    // 0x31e7b0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E7B0u;
    {
        const bool branch_taken_0x31e7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e7b0) {
            ctx->pc = 0x31E7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E7B0u;
            // 0x31e7b4: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E7CCu;
            goto label_31e7cc;
        }
    }
    ctx->pc = 0x31E7B8u;
    // 0x31e7b8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x31e7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31e7bc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e7c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x31E7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7C4u;
        // 0x31e7c8: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7CCu;
label_31e7cc:
    // 0x31e7cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31E7CCu;
    {
        const bool branch_taken_0x31e7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7CCu;
        // 0x31e7d0: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e7cc) {
            ctx->pc = 0x31E7F4u;
            goto label_31e7f4;
        }
    }
    ctx->pc = 0x31E7D4u;
    // 0x31e7d4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E7D4u;
    {
        const bool branch_taken_0x31e7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e7d4) {
            ctx->pc = 0x31E7D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E7D4u;
            // 0x31e7d8: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E7E4u;
            goto label_31e7e4;
        }
    }
    ctx->pc = 0x31E7DCu;
    // 0x31e7dc: 0x3e00008  jr          $ra
    ctx->pc = 0x31E7DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7DCu;
        // 0x31e7e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E7DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7E4u;
label_31e7e4:
    // 0x31e7e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e7e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x31E7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E7ECu;
        // 0x31e7f0: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E7F4u;
label_31e7f4:
    // 0x31e7f4: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x31E7F4u;
    {
        const bool branch_taken_0x31e7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e7f4) {
            ctx->pc = 0x31E7F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E7F4u;
            // 0x31e7f8: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e7a0;
        }
    }
    ctx->pc = 0x31E7FCu;
    // 0x31e7fc: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x31e7fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e800: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x31e800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x31e804: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E804u;
    {
        const bool branch_taken_0x31e804 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x31e804) {
            ctx->pc = 0x31E808u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E804u;
            // 0x31e808: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E81Cu;
            goto label_31e81c;
        }
    }
    ctx->pc = 0x31E80Cu;
    // 0x31e80c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31e810:
    // 0x31e810: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x31e810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x31e814: 0x3e00008  jr          $ra
    ctx->pc = 0x31E814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E814u;
        // 0x31e818: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E81Cu;
label_31e81c:
    // 0x31e81c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x31e81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x31e820: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x31e820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x31e824: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x31E824u;
    {
        const bool branch_taken_0x31e824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e824) {
            ctx->pc = 0x31E828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E824u;
            // 0x31e828: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e810;
        }
    }
    ctx->pc = 0x31E82Cu;
    // 0x31e82c: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x31e82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31e830: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E830u;
    {
        const bool branch_taken_0x31e830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31e830) {
            ctx->pc = 0x31E834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E830u;
            // 0x31e834: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E848u;
            goto label_31e848;
        }
    }
    ctx->pc = 0x31E838u;
    // 0x31e838: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31e838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31e83c:
    // 0x31e83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31e840: 0x3e00008  jr          $ra
    ctx->pc = 0x31E840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E840u;
        // 0x31e844: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E848u;
label_31e848:
    // 0x31e848: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x31e848u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x31e84c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x31e84cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x31e850: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x31E850u;
    {
        const bool branch_taken_0x31e850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31e850) {
            ctx->pc = 0x31E854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31E850u;
            // 0x31e854: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31E810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e810;
        }
    }
    ctx->pc = 0x31E858u;
    // 0x31e858: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x31e858u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x31e85c: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x31E85Cu;
    {
        const bool branch_taken_0x31e85c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E85Cu;
        // 0x31e860: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e85c) {
            ctx->pc = 0x31E83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e83c;
        }
    }
    ctx->pc = 0x31E864u;
    // 0x31e864: 0x3e00008  jr          $ra
    ctx->pc = 0x31E864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E864u;
        // 0x31e868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E86Cu;
    // 0x31e86c: 0x0  nop
    ctx->pc = 0x31e86cu;
    // NOP
    ctx->pc = 0x31e870u;
}
