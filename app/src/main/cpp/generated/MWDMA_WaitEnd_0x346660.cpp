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

// Function: MWDMA_WaitEnd
// Address: 0x346660 - 0x3466a8
void MWDMA_WaitEnd_0x346660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MWDMA_WaitEnd_0x346660");
#endif

    switch (ctx->pc) {
        case 0x346674u: goto label_346674;
        case 0x346680u: goto label_346680;
        case 0x34668cu: goto label_34668c;
        default: break;
    }

    ctx->pc = 0x346660u;

    // 0x346660: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x346660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x346664: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x346664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x346668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x346668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x34666c: 0xc0e5c40  jal         func_397100
    ctx->pc = 0x34666Cu;
    SET_GPR_U32(ctx, 31, 0x346674u);
    ctx->pc = 0x397100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397100u, 0x34666Cu, 0x346674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x346674u;
label_346674:
    // 0x346674: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x346674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x346678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x346678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34667c: 0x0  nop
    ctx->pc = 0x34667cu;
    // NOP
label_346680:
    // 0x346680: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x346680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x346684: 0xc0e5d54  jal         func_397550
    ctx->pc = 0x346684u;
    SET_GPR_U32(ctx, 31, 0x34668Cu);
    ctx->pc = 0x346688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x346684u;
    // 0x346688: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397550u, 0x346684u, 0x34668Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34668Cu;
label_34668c:
    // 0x34668c: 0x1440fffc  bnez        $v0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x34668Cu;
    {
        const bool branch_taken_0x34668c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x346690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34668Cu;
        // 0x346690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34668c) {
            ctx->pc = 0x346680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_346680;
        }
    }
    ctx->pc = 0x346694u;
    // 0x346694: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x346694u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x346698: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x346698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34669c: 0x3e00008  jr          $ra
    ctx->pc = 0x34669Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3466A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34669Cu;
        // 0x3466a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34669Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3466A4u;
    // 0x3466a4: 0x0  nop
    ctx->pc = 0x3466a4u;
    // NOP
    ctx->pc = 0x3466a8u;
}
