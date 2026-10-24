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

// Function: cEmManage_ChkActiveEm
// Address: 0x2909b8 - 0x290a08
void cEmManage_ChkActiveEm_0x2909b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_ChkActiveEm_0x2909b8");
#endif

    switch (ctx->pc) {
        case 0x2909c8u: goto label_2909c8;
        case 0x2909e0u: goto label_2909e0;
        default: break;
    }

    ctx->pc = 0x2909b8u;

    // 0x2909b8: 0x54a00005  bnel        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2909B8u;
    {
        const bool branch_taken_0x2909b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2909b8) {
            ctx->pc = 0x2909BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2909B8u;
            // 0x2909bc: 0x8c840500  lw          $a0, 0x500($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1280)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909D0u;
            goto label_2909d0;
        }
    }
    ctx->pc = 0x2909C0u;
    // 0x2909c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2909C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909C0u;
        // 0x2909c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2909C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2909C8u;
label_2909c8:
    // 0x2909c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2909C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909C8u;
        // 0x2909cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2909C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2909D0u;
label_2909d0:
    // 0x2909d0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2909D0u;
    {
        const bool branch_taken_0x2909d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2909D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2909D0u;
        // 0x2909d4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2909d0) {
            ctx->pc = 0x290A00u;
            goto label_290a00;
        }
    }
    ctx->pc = 0x2909D8u;
    // 0x2909d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2909d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2909dc: 0x0  nop
    ctx->pc = 0x2909dcu;
    // NOP
label_2909e0:
    // 0x2909e0: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2909E0u;
    {
        const bool branch_taken_0x2909e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2909e0) {
            ctx->pc = 0x2909E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2909E0u;
            // 0x2909e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909F8u;
            goto label_2909f8;
        }
    }
    ctx->pc = 0x2909E8u;
    // 0x2909e8: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x2909e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2909ec: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2909ECu;
    {
        const bool branch_taken_0x2909ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2909ec) {
            ctx->pc = 0x2909C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2909c8;
        }
    }
    ctx->pc = 0x2909F4u;
    // 0x2909f4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2909f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2909f8:
    // 0x2909f8: 0x5480fff9  bnel        $a0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2909F8u;
    {
        const bool branch_taken_0x2909f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2909f8) {
            ctx->pc = 0x2909FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2909F8u;
            // 0x2909fc: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2909E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2909e0;
        }
    }
    ctx->pc = 0x290A00u;
label_290a00:
    // 0x290a00: 0x3e00008  jr          $ra
    ctx->pc = 0x290A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290A00u;
        // 0x290a04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290A08u;
}
