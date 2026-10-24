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

// Function: cEmManage_findFreeSlot
// Address: 0x290958 - 0x290988
void cEmManage_findFreeSlot_0x290958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmManage_findFreeSlot_0x290958");
#endif

    switch (ctx->pc) {
        case 0x290960u: goto label_290960;
        default: break;
    }

    ctx->pc = 0x290958u;

    // 0x290958: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x290958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29095c: 0x0  nop
    ctx->pc = 0x29095cu;
    // NOP
label_290960:
    // 0x290960: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x290960u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x290964: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x290964u;
    {
        const bool branch_taken_0x290964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290964) {
            ctx->pc = 0x290968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290964u;
            // 0x290968: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x290974u;
            goto label_290974;
        }
    }
    ctx->pc = 0x29096Cu;
    // 0x29096c: 0x3e00008  jr          $ra
    ctx->pc = 0x29096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29096Cu;
        // 0x290970: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29096Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290974u;
label_290974:
    // 0x290974: 0x2c620040  sltiu       $v0, $v1, 0x40
    ctx->pc = 0x290974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x290978: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x290978u;
    {
        const bool branch_taken_0x290978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290978u;
        // 0x29097c: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290978) {
            ctx->pc = 0x290960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_290960;
        }
    }
    ctx->pc = 0x290980u;
    // 0x290980: 0x3e00008  jr          $ra
    ctx->pc = 0x290980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290980u;
        // 0x290984: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290988u;
}
