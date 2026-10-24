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

// Function: func_001BBAC8
// Address: 0x1bbac8 - 0x1bbb00
void func_001BBAC8_0x1bbac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BBAC8_0x1bbac8");
#endif

    switch (ctx->pc) {
        case 0x1bbadcu: goto label_1bbadc;
        default: break;
    }

    ctx->pc = 0x1bbac8u;

    // 0x1bbac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bbac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bbacc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bbaccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bbad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bbad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bbad4: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1BBAD4u;
    SET_GPR_U32(ctx, 31, 0x1BBADCu);
    ctx->pc = 0x1BBAD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BBAD4u;
    // 0x1bbad8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1BBAD4u, 0x1BBADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BBADCu;
label_1bbadc:
    // 0x1bbadc: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1bbadcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1bbae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bbae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbae4: 0x24639190  addiu       $v1, $v1, -0x6E70
    ctx->pc = 0x1bbae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939024));
    // 0x1bbae8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bbae8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bbaec: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1bbaecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1bbaf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bbaf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bbaf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBAF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BBAF4u;
        // 0x1bbaf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BBAF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BBAFCu;
    // 0x1bbafc: 0x0  nop
    ctx->pc = 0x1bbafcu;
    // NOP
    ctx->pc = 0x1bbb00u;
}
