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

// Function: __make_fp
// Address: 0x31eda0 - 0x31edd0
void ps2___make_fp_0x31eda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_fp_0x31eda0");
#endif

    switch (ctx->pc) {
        case 0x31edc0u: goto label_31edc0;
        default: break;
    }

    ctx->pc = 0x31eda0u;

    // 0x31eda0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31eda0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31eda4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x31eda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x31eda8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31edac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x31edacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31edb0: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x31edb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x31edb4: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x31edb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x31edb8: 0xc0c7ace  jal         func_31EB38
    ctx->pc = 0x31EDB8u;
    SET_GPR_U32(ctx, 31, 0x31EDC0u);
    ctx->pc = 0x31EDBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EDB8u;
    // 0x31edbc: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EB38u, 0x31EDB8u, 0x31EDC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EDC0u;
label_31edc0:
    // 0x31edc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31edc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31edc4: 0x3e00008  jr          $ra
    ctx->pc = 0x31EDC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EDC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EDC4u;
        // 0x31edc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EDC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EDCCu;
    // 0x31edcc: 0x0  nop
    ctx->pc = 0x31edccu;
    // NOP
    ctx->pc = 0x31edd0u;
}
