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

// Function: isUnload__12cDataManager6eObjId
// Address: 0x1fefd0 - 0x1ff028
void isUnload__12cDataManager6eObjId_0x1fefd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("isUnload__12cDataManager6eObjId_0x1fefd0");
#endif

    switch (ctx->pc) {
        case 0x1feff8u: goto label_1feff8;
        default: break;
    }

    ctx->pc = 0x1fefd0u;

    // 0x1fefd0: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1fefd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1fefd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1fefd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fefd8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fefd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fefdc: 0x10c2000e  beq         $a2, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1FEFDCu;
    {
        const bool branch_taken_0x1fefdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FEFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFDCu;
        // 0x1fefe0: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fefdc) {
            ctx->pc = 0x1FF018u;
            goto label_1ff018;
        }
    }
    ctx->pc = 0x1FEFE4u;
    // 0x1fefe4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1fefe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1fefe8: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x1fefe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fefec: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1fefecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1feff0: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1feff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1feff4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1feff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1feff8:
    // 0x1feff8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1feff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x1feffc: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FEFFCu;
    {
        const bool branch_taken_0x1feffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFFCu;
        // 0x1ff000: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1feffc) {
            ctx->pc = 0x1FF010u;
            goto label_1ff010;
        }
    }
    ctx->pc = 0x1FF004u;
    // 0x1ff004: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff008: 0x14480005  bne         $v0, $t0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF008u;
    {
        const bool branch_taken_0x1ff008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x1FF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF008u;
        // 0x1ff00c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff008) {
            ctx->pc = 0x1FF020u;
            goto label_1ff020;
        }
    }
    ctx->pc = 0x1FF010u;
label_1ff010:
    // 0x1ff010: 0x14c7fff9  bne         $a2, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1FF010u;
    {
        const bool branch_taken_0x1ff010 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 7));
        ctx->pc = 0x1FF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF010u;
        // 0x1ff014: 0x2484ffa4  addiu       $a0, $a0, -0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff010) {
            ctx->pc = 0x1FEFF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1feff8;
        }
    }
    ctx->pc = 0x1FF018u;
label_1ff018:
    // 0x1ff018: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF018u;
        // 0x1ff01c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF018u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF020u;
label_1ff020:
    // 0x1ff020: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF028u;
}
