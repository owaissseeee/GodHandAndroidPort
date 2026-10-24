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

// Function: func_002B6328
// Address: 0x2b6328 - 0x2b6350
void func_002B6328_0x2b6328(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B6328_0x2b6328");
#endif

    switch (ctx->pc) {
        case 0x2b633cu: goto label_2b633c;
        default: break;
    }

    ctx->pc = 0x2b6328u;

    // 0x2b6328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b632c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b632cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b6330: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b6330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b6334: 0xc0ad930  jal         func_2B64C0
    ctx->pc = 0x2B6334u;
    SET_GPR_U32(ctx, 31, 0x2B633Cu);
    ctx->pc = 0x2B6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6334u;
    // 0x2b6338: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B64C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B64C0u, 0x2B6334u, 0x2B633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B633Cu;
label_2b633c:
    // 0x2b633c: 0x26020050  addiu       $v0, $s0, 0x50
    ctx->pc = 0x2b633cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2b6340: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6340u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6344: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b6344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6348: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6348u;
        // 0x2b634c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6350u;
}
