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

// Function: IsSpecialConditionMet_12C758
// Address: 0x12c758 - 0x12c7d0
void IsSpecialConditionMet_12C758_0x12c758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsSpecialConditionMet_12C758_0x12c758");
#endif

    switch (ctx->pc) {
        case 0x12c7a8u: goto label_12c7a8;
        case 0x12c7bcu: goto label_12c7bc;
        default: break;
    }

    ctx->pc = 0x12c758u;

    // 0x12c758: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x12c758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x12c75c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12c75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c760: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12c760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12c764: 0x94447a50  lhu         $a0, 0x7A50($v0)
    ctx->pc = 0x12c764u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x747A50u));
    // 0x12c768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c76c: 0x24030608  addiu       $v1, $zero, 0x608
    ctx->pc = 0x12c76cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1544));
    // 0x12c770: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x12C770u;
    {
        const bool branch_taken_0x12c770 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C770u;
        // 0x12c774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c770) {
            ctx->pc = 0x12C7C0u;
            goto label_12c7c0;
        }
    }
    ctx->pc = 0x12C778u;
    // 0x12c778: 0x8ca20698  lw          $v0, 0x698($a1)
    ctx->pc = 0x12c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1688)));
    // 0x12c77c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x12C77Cu;
    {
        const bool branch_taken_0x12c77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c77c) {
            ctx->pc = 0x12C780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C77Cu;
            // 0x12c780: 0x8ca206a0  lw          $v0, 0x6A0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C78Cu;
            goto label_12c78c;
        }
    }
    ctx->pc = 0x12C784u;
    // 0x12c784: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x12C784u;
    {
        const bool branch_taken_0x12c784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C784u;
        // 0x12c788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c784) {
            ctx->pc = 0x12C7C0u;
            goto label_12c7c0;
        }
    }
    ctx->pc = 0x12C78Cu;
label_12c78c:
    // 0x12c78c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12C78Cu;
    {
        const bool branch_taken_0x12c78c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C78Cu;
        // 0x12c790: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c78c) {
            ctx->pc = 0x12C7C0u;
            goto label_12c7c0;
        }
    }
    ctx->pc = 0x12C794u;
    // 0x12c794: 0x8ca500f0  lw          $a1, 0xF0($a1)
    ctx->pc = 0x12c794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 240)));
    // 0x12c798: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x12c798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x12c79c: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x12c79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x12c7a0: 0xc0b095a  jal         func_2C2568
    ctx->pc = 0x12C7A0u;
    SET_GPR_U32(ctx, 31, 0x12C7A8u);
    ctx->pc = 0x12C7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C7A0u;
    // 0x12c7a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2568u, 0x12C7A0u, 0x12C7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7A8u;
label_12c7a8:
    // 0x12c7a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c7ac: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C7ACu;
    {
        const bool branch_taken_0x12c7ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x12C7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7ACu;
        // 0x12c7b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7ac) {
            ctx->pc = 0x12C7C0u;
            goto label_12c7c0;
        }
    }
    ctx->pc = 0x12C7B4u;
    // 0x12c7b4: 0xc0b6fa6  jal         func_2DBE98
    ctx->pc = 0x12C7B4u;
    SET_GPR_U32(ctx, 31, 0x12C7BCu);
    ctx->pc = 0x2DBE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DBE98u, 0x12C7B4u, 0x12C7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C7BCu;
label_12c7bc:
    // 0x12c7bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12c7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12c7c0:
    // 0x12c7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7C4u;
        // 0x12c7c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C7CCu;
    // 0x12c7cc: 0x0  nop
    ctx->pc = 0x12c7ccu;
    // NOP
    ctx->pc = 0x12c7d0u;
}
