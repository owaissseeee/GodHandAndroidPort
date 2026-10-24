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

// Function: func_0033A3C0
// Address: 0x33a3c0 - 0x33a418
void func_0033A3C0_0x33a3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033A3C0_0x33a3c0");
#endif

    switch (ctx->pc) {
        case 0x33a404u: goto label_33a404;
        default: break;
    }

    ctx->pc = 0x33a3c0u;

    // 0x33a3c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33a3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33a3c4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A3C4u;
    {
        const bool branch_taken_0x33a3c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3C4u;
        // 0x33a3c8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3c4) {
            ctx->pc = 0x33A3E0u;
            goto label_33a3e0;
        }
    }
    ctx->pc = 0x33A3CCu;
    // 0x33a3cc: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a3ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33a3d0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a3d4: 0x24845c28  addiu       $a0, $a0, 0x5C28
    ctx->pc = 0x33a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23592));
    // 0x33a3d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33A3D8u;
    {
        const bool branch_taken_0x33a3d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3D8u;
        // 0x33a3dc: 0x24a55bd8  addiu       $a1, $a1, 0x5BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3d8) {
            ctx->pc = 0x33A3FCu;
            goto label_33a3fc;
        }
    }
    ctx->pc = 0x33A3E0u;
label_33a3e0:
    // 0x33a3e0: 0x80820004  lb          $v0, 0x4($a0)
    ctx->pc = 0x33a3e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33a3e4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33A3E4u;
    {
        const bool branch_taken_0x33a3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a3e4) {
            ctx->pc = 0x33A3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A3E4u;
            // 0x33a3e8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A408u;
            goto label_33a408;
        }
    }
    ctx->pc = 0x33A3ECu;
    // 0x33a3ec: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x33a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x33a3f0: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33a3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x33a3f4: 0x24845c38  addiu       $a0, $a0, 0x5C38
    ctx->pc = 0x33a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23608));
    // 0x33a3f8: 0x24a55c08  addiu       $a1, $a1, 0x5C08
    ctx->pc = 0x33a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23560));
label_33a3fc:
    // 0x33a3fc: 0xc0ce812  jal         func_33A048
    ctx->pc = 0x33A3FCu;
    SET_GPR_U32(ctx, 31, 0x33A404u);
    ctx->pc = 0x33A048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A048u, 0x33A3FCu, 0x33A404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A404u;
label_33a404:
    // 0x33a404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33a404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a408:
    // 0x33a408: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33a408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33a40c: 0x3e00008  jr          $ra
    ctx->pc = 0x33A40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A40Cu;
        // 0x33a410: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A414u;
    // 0x33a414: 0x0  nop
    ctx->pc = 0x33a414u;
    // NOP
    ctx->pc = 0x33a418u;
}
