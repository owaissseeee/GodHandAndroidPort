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

// Function: ResetObjectFields_1FCDE8
// Address: 0x1fcde8 - 0x1fce20
void ResetObjectFields_1FCDE8_0x1fcde8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetObjectFields_1FCDE8_0x1fcde8");
#endif

    switch (ctx->pc) {
        case 0x1fcdfcu: goto label_1fcdfc;
        default: break;
    }

    ctx->pc = 0x1fcde8u;

    // 0x1fcde8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fcde8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fcdec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fcdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fcdf0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fcdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fcdf4: 0xc07f340  jal         func_1FCD00
    ctx->pc = 0x1FCDF4u;
    SET_GPR_U32(ctx, 31, 0x1FCDFCu);
    ctx->pc = 0x1FCDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FCDF4u;
    // 0x1fcdf8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FCD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FCD00u, 0x1FCDF4u, 0x1FCDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FCDFCu;
label_1fcdfc:
    // 0x1fcdfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1fcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1fce00: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fce00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fce04: 0xa2020049  sb          $v0, 0x49($s0)
    ctx->pc = 0x1fce04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 73), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fce08: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1fce08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1fce0c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fce0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fce10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fce10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fce14: 0x3e00008  jr          $ra
    ctx->pc = 0x1FCE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FCE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FCE14u;
        // 0x1fce18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FCE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FCE1Cu;
    // 0x1fce1c: 0x0  nop
    ctx->pc = 0x1fce1cu;
    // NOP
    ctx->pc = 0x1fce20u;
}
