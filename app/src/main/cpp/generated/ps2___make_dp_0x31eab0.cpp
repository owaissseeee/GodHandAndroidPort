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

// Function: __make_dp
// Address: 0x31eab0 - 0x31eae0
void ps2___make_dp_0x31eab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_dp_0x31eab0");
#endif

    switch (ctx->pc) {
        case 0x31ead0u: goto label_31ead0;
        default: break;
    }

    ctx->pc = 0x31eab0u;

    // 0x31eab0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31eab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31eab4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x31eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x31eab8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31eab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x31eabc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31eabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31eac0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x31eac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x31eac4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x31eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x31eac8: 0xc0c779e  jal         func_31DE78
    ctx->pc = 0x31EAC8u;
    SET_GPR_U32(ctx, 31, 0x31EAD0u);
    ctx->pc = 0x31EACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EAC8u;
    // 0x31eacc: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DE78u, 0x31EAC8u, 0x31EAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EAD0u;
label_31ead0:
    // 0x31ead0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ead0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31ead4: 0x3e00008  jr          $ra
    ctx->pc = 0x31EAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EAD4u;
        // 0x31ead8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EADCu;
    // 0x31eadc: 0x0  nop
    ctx->pc = 0x31eadcu;
    // NOP
    ctx->pc = 0x31eae0u;
}
