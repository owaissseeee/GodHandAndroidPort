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

// Function: cCollisionScroll_SetCollEnable
// Address: 0x1332d0 - 0x133330
void cCollisionScroll_SetCollEnable_0x1332d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionScroll_SetCollEnable_0x1332d0");
#endif

    switch (ctx->pc) {
        case 0x1332f0u: goto label_1332f0;
        case 0x133324u: goto label_133324;
        default: break;
    }

    ctx->pc = 0x1332d0u;

    // 0x1332d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1332d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1332d4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1332d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1332d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1332dc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1332dcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332e0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1332e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1332e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1332E4u;
    {
        const bool branch_taken_0x1332e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1332E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1332E4u;
        // 0x1332e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332e4) {
            ctx->pc = 0x133318u;
            goto label_133318;
        }
    }
    ctx->pc = 0x1332ECu;
    // 0x1332ec: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1332ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_1332f0:
    // 0x1332f0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x1332f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1332f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1332f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1332f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1332f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1332fc: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x1332fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x133300: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x133300u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x133304: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133304u;
    {
        const bool branch_taken_0x133304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133304u;
        // 0x133308: 0x1024025  or          $t0, $t0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133304) {
            ctx->pc = 0x133318u;
            goto label_133318;
        }
    }
    ctx->pc = 0x13330Cu;
    // 0x13330c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x13330cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133310: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x133310u;
    {
        const bool branch_taken_0x133310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133310) {
            ctx->pc = 0x133314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133310u;
            // 0x133314: 0x80a20000  lb          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1332F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1332f0;
        }
    }
    ctx->pc = 0x133318u;
label_133318:
    // 0x133318: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x133318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13331c: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x13331Cu;
    SET_GPR_U32(ctx, 31, 0x133324u);
    ctx->pc = 0x133320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13331Cu;
    // 0x133320: 0x100282d  daddu       $a1, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x13331Cu, 0x133324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133324u;
label_133324:
    // 0x133324: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133328: 0x3e00008  jr          $ra
    ctx->pc = 0x133328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133328u;
        // 0x13332c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133328u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133330u;
}
