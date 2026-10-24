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

// Function: func_00384B98
// Address: 0x384b98 - 0x384bc8
void func_00384B98_0x384b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384B98_0x384b98");
#endif

    switch (ctx->pc) {
        case 0x384bbcu: goto label_384bbc;
        default: break;
    }

    ctx->pc = 0x384b98u;

    // 0x384b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x384b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x384b9c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x384b9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384ba0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x384ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x384ba8: 0x24e7cd40  addiu       $a3, $a3, -0x32C0
    ctx->pc = 0x384ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954304));
    // 0x384bac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384bb0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x384bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x384bb4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384BB4u;
    SET_GPR_U32(ctx, 31, 0x384BBCu);
    ctx->pc = 0x384BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384BB4u;
    // 0x384bb8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384BB4u, 0x384BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384BBCu;
label_384bbc:
    // 0x384bbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x384bbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x384BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384BC0u;
        // 0x384bc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384BC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x384BC8u;
}
