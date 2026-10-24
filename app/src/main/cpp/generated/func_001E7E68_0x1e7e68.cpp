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

// Function: func_001E7E68
// Address: 0x1e7e68 - 0x1e7ea0
void func_001E7E68_0x1e7e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001E7E68_0x1e7e68");
#endif

    switch (ctx->pc) {
        case 0x1e7e90u: goto label_1e7e90;
        default: break;
    }

    ctx->pc = 0x1e7e68u;

    // 0x1e7e68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e7e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e7e6c: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1e7e6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x1e7e70: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E7E70u;
    {
        const bool branch_taken_0x1e7e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E70u;
        // 0x1e7e74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e70) {
            ctx->pc = 0x1E7E90u;
            goto label_1e7e90;
        }
    }
    ctx->pc = 0x1E7E78u;
    // 0x1e7e78: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7E78u;
    {
        const bool branch_taken_0x1e7e78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E78u;
        // 0x1e7e7c: 0x2ce20016  sltiu       $v0, $a3, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e78) {
            ctx->pc = 0x1E7E90u;
            goto label_1e7e90;
        }
    }
    ctx->pc = 0x1E7E80u;
    // 0x1e7e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7E80u;
    {
        const bool branch_taken_0x1e7e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E7E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E80u;
        // 0x1e7e84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7e80) {
            ctx->pc = 0x1E7E94u;
            goto label_1e7e94;
        }
    }
    ctx->pc = 0x1E7E88u;
    // 0x1e7e88: 0xc07a37c  jal         func_1E8DF0
    ctx->pc = 0x1E7E88u;
    SET_GPR_U32(ctx, 31, 0x1E7E90u);
    ctx->pc = 0x1E8DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8DF0u, 0x1E7E88u, 0x1E7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7E90u;
label_1e7e90:
    // 0x1e7e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e7e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e7e94:
    // 0x1e7e94: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7E94u;
        // 0x1e7e98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7E9Cu;
    // 0x1e7e9c: 0x0  nop
    ctx->pc = 0x1e7e9cu;
    // NOP
    ctx->pc = 0x1e7ea0u;
}
