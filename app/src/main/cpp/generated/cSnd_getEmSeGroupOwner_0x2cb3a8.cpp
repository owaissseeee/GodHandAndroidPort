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

// Function: cSnd_getEmSeGroupOwner
// Address: 0x2cb3a8 - 0x2cb418
void cSnd_getEmSeGroupOwner_0x2cb3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSnd_getEmSeGroupOwner_0x2cb3a8");
#endif

    switch (ctx->pc) {
        case 0x2cb3c0u: goto label_2cb3c0;
        case 0x2cb3d8u: goto label_2cb3d8;
        default: break;
    }

    ctx->pc = 0x2cb3a8u;

    // 0x2cb3a8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2cb3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2cb3ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2cb3acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3b0: 0x244730c0  addiu       $a3, $v0, 0x30C0
    ctx->pc = 0x2cb3b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 12480));
    // 0x2cb3b4: 0x240a02ff  addiu       $t2, $zero, 0x2FF
    ctx->pc = 0x2cb3b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
    // 0x2cb3b8: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2cb3b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3bc: 0x0  nop
    ctx->pc = 0x2cb3bcu;
    // NOP
label_2cb3c0:
    // 0x2cb3c0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2cb3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cb3c4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cb3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb3c8: 0x504a000d  beql        $v0, $t2, . + 4 + (0xD << 2)
    ctx->pc = 0x2CB3C8u;
    {
        const bool branch_taken_0x2cb3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 10));
        if (branch_taken_0x2cb3c8) {
            ctx->pc = 0x2CB3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB3C8u;
            // 0x2cb3cc: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB400u;
            goto label_2cb400;
        }
    }
    ctx->pc = 0x2CB3D0u;
    // 0x2cb3d0: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x2cb3d0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb3d4: 0x240602ff  addiu       $a2, $zero, 0x2FF
    ctx->pc = 0x2cb3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 767));
label_2cb3d8:
    // 0x2cb3d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cb3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb3dc: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CB3DCu;
    {
        const bool branch_taken_0x2cb3dc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CB3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3DCu;
        // 0x2cb3e0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb3dc) {
            ctx->pc = 0x2CB3F0u;
            goto label_2cb3f0;
        }
    }
    ctx->pc = 0x2CB3E4u;
    // 0x2cb3e4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2cb3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb3e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB3E8u;
        // 0x2cb3ec: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB3E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB3F0u;
label_2cb3f0:
    // 0x2cb3f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2cb3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2cb3f4: 0x1446fff8  bne         $v0, $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2CB3F4u;
    {
        const bool branch_taken_0x2cb3f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x2cb3f4) {
            ctx->pc = 0x2CB3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb3d8;
        }
    }
    ctx->pc = 0x2CB3FCu;
    // 0x2cb3fc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2cb3fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2cb400:
    // 0x2cb400: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2cb400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x2cb404: 0x2922000f  slti        $v0, $t1, 0xF
    ctx->pc = 0x2cb404u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2cb408: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2CB408u;
    {
        const bool branch_taken_0x2cb408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CB40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB408u;
        // 0x2cb40c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb408) {
            ctx->pc = 0x2CB3C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb3c0;
        }
    }
    ctx->pc = 0x2CB410u;
    // 0x2cb410: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB410u;
        // 0x2cb414: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB418u;
}
