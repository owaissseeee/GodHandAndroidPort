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

// Function: func_001BFAC8
// Address: 0x1bfac8 - 0x1bfb00
void func_001BFAC8_0x1bfac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BFAC8_0x1bfac8");
#endif

    switch (ctx->pc) {
        case 0x1bfadcu: goto label_1bfadc;
        default: break;
    }

    ctx->pc = 0x1bfac8u;

    // 0x1bfac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bfac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bfacc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bfaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bfad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bfad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bfad4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1BFAD4u;
    SET_GPR_U32(ctx, 31, 0x1BFADCu);
    ctx->pc = 0x1BFAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAD4u;
    // 0x1bfad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1BFAD4u, 0x1BFADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFADCu;
label_1bfadc:
    // 0x1bfadc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1bfadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1bfae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bfae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfae4: 0x246397d8  addiu       $v1, $v1, -0x6828
    ctx->pc = 0x1bfae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940632));
    // 0x1bfae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bfae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bfaec: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1bfaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1bfaf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bfaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bfaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BFAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAF4u;
        // 0x1bfaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BFAFCu;
    // 0x1bfafc: 0x0  nop
    ctx->pc = 0x1bfafcu;
    // NOP
    ctx->pc = 0x1bfb00u;
}
