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

// Function: func_001A6D68
// Address: 0x1a6d68 - 0x1a6da0
void func_001A6D68_0x1a6d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A6D68_0x1a6d68");
#endif

    switch (ctx->pc) {
        case 0x1a6d7cu: goto label_1a6d7c;
        default: break;
    }

    ctx->pc = 0x1a6d68u;

    // 0x1a6d68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6d6c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a6d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a6d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a6d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a6d74: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1A6D74u;
    SET_GPR_U32(ctx, 31, 0x1A6D7Cu);
    ctx->pc = 0x1A6D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6D74u;
    // 0x1a6d78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1A6D74u, 0x1A6D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6D7Cu;
label_1a6d7c:
    // 0x1a6d7c: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x1a6d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x1a6d80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a6d80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6d84: 0x246374d0  addiu       $v1, $v1, 0x74D0
    ctx->pc = 0x1a6d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29904));
    // 0x1a6d88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a6d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6d8c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1a6d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1a6d90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a6d90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6d94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6D94u;
        // 0x1a6d98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6D9Cu;
    // 0x1a6d9c: 0x0  nop
    ctx->pc = 0x1a6d9cu;
    // NOP
    ctx->pc = 0x1a6da0u;
}
