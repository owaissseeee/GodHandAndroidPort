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

// Function: func_001F5278
// Address: 0x1f5278 - 0x1f52a0
void func_001F5278_0x1f5278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F5278_0x1f5278");
#endif

    switch (ctx->pc) {
        case 0x1f5294u: goto label_1f5294;
        default: break;
    }

    ctx->pc = 0x1f5278u;

    // 0x1f5278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f5278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f527c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1f527cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f5280: 0x2ca20007  sltiu       $v0, $a1, 0x7
    ctx->pc = 0x1f5280u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f5284: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F5284u;
    {
        const bool branch_taken_0x1f5284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5284u;
        // 0x1f5288: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5284) {
            ctx->pc = 0x1F5294u;
            goto label_1f5294;
        }
    }
    ctx->pc = 0x1F528Cu;
    // 0x1f528c: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F528Cu;
    SET_GPR_U32(ctx, 31, 0x1F5294u);
    ctx->pc = 0x1F5290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F528Cu;
    // 0x1f5290: 0x24a50049  addiu       $a1, $a1, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 73));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F528Cu, 0x1F5294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5294u;
label_1f5294:
    // 0x1f5294: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f5294u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f5298: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F529Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F5298u;
        // 0x1f529c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F5298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F52A0u;
}
