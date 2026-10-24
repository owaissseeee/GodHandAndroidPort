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

// Function: func_00324008
// Address: 0x324008 - 0x324040
void func_00324008_0x324008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00324008_0x324008");
#endif

    switch (ctx->pc) {
        case 0x32401cu: goto label_32401c;
        case 0x324024u: goto label_324024;
        case 0x32402cu: goto label_32402c;
        default: break;
    }

    ctx->pc = 0x324008u;

    // 0x324008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x324008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32400c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32400cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x324010: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x324010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x324014: 0xc0c9220  jal         func_324880
    ctx->pc = 0x324014u;
    SET_GPR_U32(ctx, 31, 0x32401Cu);
    ctx->pc = 0x324018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324014u;
    // 0x324018: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324880u, 0x324014u, 0x32401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32401Cu;
label_32401c:
    // 0x32401c: 0xc0c9010  jal         func_324040
    ctx->pc = 0x32401Cu;
    SET_GPR_U32(ctx, 31, 0x324024u);
    ctx->pc = 0x324020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32401Cu;
    // 0x324020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324040u, 0x32401Cu, 0x324024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324024u;
label_324024:
    // 0x324024: 0xc0c9226  jal         func_324898
    ctx->pc = 0x324024u;
    SET_GPR_U32(ctx, 31, 0x32402Cu);
    ctx->pc = 0x324028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324024u;
    // 0x324028: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324898u, 0x324024u, 0x32402Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32402Cu;
label_32402c:
    // 0x32402c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32402cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324030: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x324030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324034: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x324034u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x324038: 0x3e00008  jr          $ra
    ctx->pc = 0x324038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32403Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324038u;
        // 0x32403c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x324038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x324040u;
}
