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

// Function: __ls__7ostreamUs
// Address: 0x38a508 - 0x38a528
void ps2___ls__7ostreamUs_0x38a508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamUs_0x38a508");
#endif

    switch (ctx->pc) {
        case 0x38a518u: goto label_38a518;
        default: break;
    }

    ctx->pc = 0x38a508u;

    // 0x38a508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x38a508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x38a50c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x38a50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x38a510: 0xc0e22a8  jal         func_388AA0
    ctx->pc = 0x38A510u;
    SET_GPR_U32(ctx, 31, 0x38A518u);
    ctx->pc = 0x38A514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A510u;
    // 0x38a514: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x388AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388AA0u, 0x38A510u, 0x38A518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A518u;
label_38a518:
    // 0x38a518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a51c: 0x3e00008  jr          $ra
    ctx->pc = 0x38A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A51Cu;
        // 0x38a520: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A524u;
    // 0x38a524: 0x0  nop
    ctx->pc = 0x38a524u;
    // NOP
    ctx->pc = 0x38a528u;
}
