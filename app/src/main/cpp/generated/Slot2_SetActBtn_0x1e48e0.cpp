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

// Function: Slot2_SetActBtn
// Address: 0x1e48e0 - 0x1e4920
void Slot2_SetActBtn_0x1e48e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Slot2_SetActBtn_0x1e48e0");
#endif

    switch (ctx->pc) {
        case 0x1e4910u: goto label_1e4910;
        default: break;
    }

    ctx->pc = 0x1e48e0u;

    // 0x1e48e0: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1e48e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e48e4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e48e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e48e8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1e48e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1e48ec: 0x3c08001e  lui         $t0, 0x1E
    ctx->pc = 0x1e48ecu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)30 << 16));
    // 0x1e48f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e48f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e48f4: 0x24848288  addiu       $a0, $a0, -0x7D78
    ctx->pc = 0x1e48f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935176));
    // 0x1e48f8: 0x25084920  addiu       $t0, $t0, 0x4920
    ctx->pc = 0x1e48f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18720));
    // 0x1e48fc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e48fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1e4900: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x1e4900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1e4904: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4908: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x1E4908u;
    SET_GPR_U32(ctx, 31, 0x1E4910u);
    ctx->pc = 0x1E490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4908u;
    // 0x1e490c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x1E4908u, 0x1E4910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4910u;
label_1e4910:
    // 0x1e4910: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e4910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4914: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4914u;
        // 0x1e4918: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E491Cu;
    // 0x1e491c: 0x0  nop
    ctx->pc = 0x1e491cu;
    // NOP
    ctx->pc = 0x1e4920u;
}
