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

// Function: func_00338D58
// Address: 0x338d58 - 0x338d90
void func_00338D58_0x338d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338D58_0x338d58");
#endif

    switch (ctx->pc) {
        case 0x338d6cu: goto label_338d6c;
        case 0x338d74u: goto label_338d74;
        case 0x338d7cu: goto label_338d7c;
        default: break;
    }

    ctx->pc = 0x338d58u;

    // 0x338d58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x338d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x338d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x338d60: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x338d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x338d64: 0xc0ce27e  jal         func_3389F8
    ctx->pc = 0x338D64u;
    SET_GPR_U32(ctx, 31, 0x338D6Cu);
    ctx->pc = 0x338D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D64u;
    // 0x338d68: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3389F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3389F8u, 0x338D64u, 0x338D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D6Cu;
label_338d6c:
    // 0x338d6c: 0xc0ce364  jal         func_338D90
    ctx->pc = 0x338D6Cu;
    SET_GPR_U32(ctx, 31, 0x338D74u);
    ctx->pc = 0x338D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D6Cu;
    // 0x338d70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338D90u, 0x338D6Cu, 0x338D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D74u;
label_338d74:
    // 0x338d74: 0xc0ce284  jal         func_338A10
    ctx->pc = 0x338D74u;
    SET_GPR_U32(ctx, 31, 0x338D7Cu);
    ctx->pc = 0x338D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D74u;
    // 0x338d78: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338A10u, 0x338D74u, 0x338D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D7Cu;
label_338d7c:
    // 0x338d7c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x338d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x338d80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x338d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338d84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x338d84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x338d88: 0x3e00008  jr          $ra
    ctx->pc = 0x338D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D88u;
        // 0x338d8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338D88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338D90u;
}
