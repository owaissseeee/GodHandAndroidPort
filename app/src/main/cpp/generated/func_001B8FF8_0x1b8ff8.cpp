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

// Function: func_001B8FF8
// Address: 0x1b8ff8 - 0x1b9030
void func_001B8FF8_0x1b8ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B8FF8_0x1b8ff8");
#endif

    switch (ctx->pc) {
        case 0x1b900cu: goto label_1b900c;
        default: break;
    }

    ctx->pc = 0x1b8ff8u;

    // 0x1b8ff8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8ffc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b8ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b9000: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b9004: 0xc06dba4  jal         func_1B6E90
    ctx->pc = 0x1B9004u;
    SET_GPR_U32(ctx, 31, 0x1B900Cu);
    ctx->pc = 0x1B9008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9004u;
    // 0x1b9008: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6E90u, 0x1B9004u, 0x1B900Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B900Cu;
label_1b900c:
    // 0x1b900c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1b900cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1b9010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1b9010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9014: 0x246390c8  addiu       $v1, $v1, -0x6F38
    ctx->pc = 0x1b9014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938824));
    // 0x1b9018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b901c: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x1b901cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x1b9020: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9020u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9024: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9024u;
        // 0x1b9028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B902Cu;
    // 0x1b902c: 0x0  nop
    ctx->pc = 0x1b902cu;
    // NOP
    ctx->pc = 0x1b9030u;
}
