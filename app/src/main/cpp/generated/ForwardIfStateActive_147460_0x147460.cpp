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

// Function: ForwardIfStateActive_147460
// Address: 0x147460 - 0x1474a0
void ForwardIfStateActive_147460_0x147460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardIfStateActive_147460_0x147460");
#endif

    switch (ctx->pc) {
        case 0x147494u: goto label_147494;
        default: break;
    }

    ctx->pc = 0x147460u;

    // 0x147460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x147460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x147464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x147464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x147468: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x147468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
    // 0x14746c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14746Cu;
    {
        const bool branch_taken_0x14746c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14746Cu;
        // 0x147470: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14746c) {
            ctx->pc = 0x147498u;
            goto label_147498;
        }
    }
    ctx->pc = 0x147474u;
    // 0x147474: 0x808300b8  lb          $v1, 0xB8($a0)
    ctx->pc = 0x147474u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 184)));
    // 0x147478: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x147478u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14747c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14747Cu;
    {
        const bool branch_taken_0x14747c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14747c) {
            ctx->pc = 0x147498u;
            goto label_147498;
        }
    }
    ctx->pc = 0x147484u;
    // 0x147484: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x147484u;
    {
        const bool branch_taken_0x147484 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x147484) {
            ctx->pc = 0x147498u;
            goto label_147498;
        }
    }
    ctx->pc = 0x14748Cu;
    // 0x14748c: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x14748Cu;
    SET_GPR_U32(ctx, 31, 0x147494u);
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x14748Cu, 0x147494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x147494u;
label_147494:
    // 0x147494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x147494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_147498:
    // 0x147498: 0x3e00008  jr          $ra
    ctx->pc = 0x147498u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14749Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147498u;
        // 0x14749c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147498u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1474A0u;
}
