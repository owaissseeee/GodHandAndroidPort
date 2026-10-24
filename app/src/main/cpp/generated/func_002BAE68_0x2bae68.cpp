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

// Function: func_002BAE68
// Address: 0x2bae68 - 0x2bae98
void func_002BAE68_0x2bae68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BAE68_0x2bae68");
#endif

    switch (ctx->pc) {
        case 0x2bae8cu: goto label_2bae8c;
        default: break;
    }

    ctx->pc = 0x2bae68u;

    // 0x2bae68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bae68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bae6c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2bae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2bae70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bae74: 0x2442bab0  addiu       $v0, $v0, -0x4550
    ctx->pc = 0x2bae74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949552));
    // 0x2bae78: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2bae78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2bae7c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BAE7Cu;
    {
        const bool branch_taken_0x2bae7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE7Cu;
        // 0x2bae80: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bae7c) {
            ctx->pc = 0x2BAE8Cu;
            goto label_2bae8c;
        }
    }
    ctx->pc = 0x2BAE84u;
    // 0x2bae84: 0xc0c3d68  jal         func_30F5A0
    ctx->pc = 0x2BAE84u;
    SET_GPR_U32(ctx, 31, 0x2BAE8Cu);
    ctx->pc = 0x30F5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F5A0u, 0x2BAE84u, 0x2BAE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAE8Cu;
label_2bae8c:
    // 0x2bae8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bae8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bae90: 0x3e00008  jr          $ra
    ctx->pc = 0x2BAE90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAE90u;
        // 0x2bae94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAE90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAE98u;
}
