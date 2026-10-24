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

// Function: cMovie_haltActive
// Address: 0x2b4d38 - 0x2b4d68
void cMovie_haltActive_0x2b4d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMovie_haltActive_0x2b4d38");
#endif

    switch (ctx->pc) {
        case 0x2b4d48u: goto label_2b4d48;
        case 0x2b4d58u: goto label_2b4d58;
        default: break;
    }

    ctx->pc = 0x2b4d38u;

    // 0x2b4d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b4d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b4d3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4d40: 0xc0ad3e6  jal         func_2B4F98
    ctx->pc = 0x2B4D40u;
    SET_GPR_U32(ctx, 31, 0x2B4D48u);
    ctx->pc = 0x2B4F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4F98u, 0x2B4D40u, 0x2B4D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D48u;
label_2b4d48:
    // 0x2b4d48: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B4D48u;
    {
        const bool branch_taken_0x2b4d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D48u;
        // 0x2b4d4c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4d48) {
            ctx->pc = 0x2B4D5Cu;
            goto label_2b4d5c;
        }
    }
    ctx->pc = 0x2B4D50u;
    // 0x2b4d50: 0xc0b50be  jal         func_2D42F8
    ctx->pc = 0x2B4D50u;
    SET_GPR_U32(ctx, 31, 0x2B4D58u);
    ctx->pc = 0x2B4D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4D50u;
    // 0x2b4d54: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D42F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D42F8u, 0x2B4D50u, 0x2B4D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4D58u;
label_2b4d58:
    // 0x2b4d58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b4d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b4d5c:
    // 0x2b4d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4D5Cu;
        // 0x2b4d60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4D64u;
    // 0x2b4d64: 0x0  nop
    ctx->pc = 0x2b4d64u;
    // NOP
    ctx->pc = 0x2b4d68u;
}
