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

// Function: func_0038A238
// Address: 0x38a238 - 0x38a258
void func_0038A238_0x38a238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038A238_0x38a238");
#endif

    switch (ctx->pc) {
        case 0x38a24cu: goto label_38a24c;
        default: break;
    }

    ctx->pc = 0x38a238u;

    // 0x38a238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a23c: 0x73e00  sll         $a3, $a3, 24
    ctx->pc = 0x38a23cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x38a240: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a244: 0xc0e2a36  jal         func_38A8D8
    ctx->pc = 0x38A244u;
    SET_GPR_U32(ctx, 31, 0x38A24Cu);
    ctx->pc = 0x38A248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A244u;
    // 0x38a248: 0x73e03  sra         $a3, $a3, 24 (Delay Slot)
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A8D8u, 0x38A244u, 0x38A24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A24Cu;
label_38a24c:
    // 0x38a24c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a24cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a250: 0x3e00008  jr          $ra
    ctx->pc = 0x38A250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A250u;
        // 0x38a254: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A258u;
}
