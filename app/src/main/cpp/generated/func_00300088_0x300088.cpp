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

// Function: func_00300088
// Address: 0x300088 - 0x3000b0
void func_00300088_0x300088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00300088_0x300088");
#endif

    switch (ctx->pc) {
        case 0x3000a0u: goto label_3000a0;
        default: break;
    }

    ctx->pc = 0x300088u;

    // 0x300088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x300088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30008c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x30008cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300090: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x300090u;
    {
        const bool branch_taken_0x300090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300090u;
        // 0x300094: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300090) {
            ctx->pc = 0x3000A0u;
            goto label_3000a0;
        }
    }
    ctx->pc = 0x300098u;
    // 0x300098: 0xc0bdf36  jal         func_2F7CD8
    ctx->pc = 0x300098u;
    SET_GPR_U32(ctx, 31, 0x3000A0u);
    ctx->pc = 0x2F7CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7CD8u, 0x300098u, 0x3000A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3000A0u;
label_3000a0:
    // 0x3000a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3000a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3000a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3000A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3000A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3000A4u;
        // 0x3000a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3000A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3000ACu;
    // 0x3000ac: 0x0  nop
    ctx->pc = 0x3000acu;
    // NOP
    ctx->pc = 0x3000b0u;
}
