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

// Function: func_002AF348
// Address: 0x2af348 - 0x2af380
void func_002AF348_0x2af348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002AF348_0x2af348");
#endif

    switch (ctx->pc) {
        case 0x2af360u: goto label_2af360;
        default: break;
    }

    ctx->pc = 0x2af348u;

    // 0x2af348: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2af348u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2af34c: 0x2882000a  slti        $v0, $a0, 0xA
    ctx->pc = 0x2af34cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2af350: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AF350u;
    {
        const bool branch_taken_0x2af350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AF354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF350u;
        // 0x2af354: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af350) {
            ctx->pc = 0x2AF378u;
            goto label_2af378;
        }
    }
    ctx->pc = 0x2AF358u;
    // 0x2af358: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2af358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2af35c: 0x0  nop
    ctx->pc = 0x2af35cu;
    // NOP
label_2af360:
    // 0x2af360: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2af360u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2af364: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x2af364u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2af368: 0x0  nop
    ctx->pc = 0x2af368u;
    // NOP
    // 0x2af36c: 0x0  nop
    ctx->pc = 0x2af36cu;
    // NOP
    // 0x2af370: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2AF370u;
    {
        const bool branch_taken_0x2af370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF370u;
        // 0x2af374: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af370) {
            ctx->pc = 0x2AF360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2af360;
        }
    }
    ctx->pc = 0x2AF378u;
label_2af378:
    // 0x2af378: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF378u;
        // 0x2af37c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF380u;
}
