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

// Function: func_0032AD10
// Address: 0x32ad10 - 0x32ad48
void func_0032AD10_0x32ad10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032AD10_0x32ad10");
#endif

    switch (ctx->pc) {
        case 0x32ad24u: goto label_32ad24;
        case 0x32ad2cu: goto label_32ad2c;
        case 0x32ad34u: goto label_32ad34;
        default: break;
    }

    ctx->pc = 0x32ad10u;

    // 0x32ad10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32ad10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32ad14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ad14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ad18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x32ad18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x32ad1c: 0xc0cf9aa  jal         func_33E6A8
    ctx->pc = 0x32AD1Cu;
    SET_GPR_U32(ctx, 31, 0x32AD24u);
    ctx->pc = 0x32AD20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD1Cu;
    // 0x32ad20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6A8u, 0x32AD1Cu, 0x32AD24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD24u;
label_32ad24:
    // 0x32ad24: 0xc0cab52  jal         func_32AD48
    ctx->pc = 0x32AD24u;
    SET_GPR_U32(ctx, 31, 0x32AD2Cu);
    ctx->pc = 0x32AD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD24u;
    // 0x32ad28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AD48u, 0x32AD24u, 0x32AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD2Cu;
label_32ad2c:
    // 0x32ad2c: 0xc0cf9ac  jal         func_33E6B0
    ctx->pc = 0x32AD2Cu;
    SET_GPR_U32(ctx, 31, 0x32AD34u);
    ctx->pc = 0x32AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32AD2Cu;
    // 0x32ad30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33E6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E6B0u, 0x32AD2Cu, 0x32AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32AD34u;
label_32ad34:
    // 0x32ad34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x32ad34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32ad38: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32ad38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ad3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32ad3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32ad40: 0x3e00008  jr          $ra
    ctx->pc = 0x32AD40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32AD40u;
        // 0x32ad44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32AD40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32AD48u;
}
