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

// Function: func_001B1B78
// Address: 0x1b1b78 - 0x1b1bd0
void func_001B1B78_0x1b1b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B1B78_0x1b1b78");
#endif

    switch (ctx->pc) {
        case 0x1b1bacu: goto label_1b1bac;
        case 0x1b1bb8u: goto label_1b1bb8;
        default: break;
    }

    ctx->pc = 0x1b1b78u;

    // 0x1b1b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b1b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b1b7c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x1b1b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x1b1b80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b1b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b1b84: 0x244283d8  addiu       $v0, $v0, -0x7C28
    ctx->pc = 0x1b1b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935512));
    // 0x1b1b88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b1b88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b1b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b1b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b1b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b1b94: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b1b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1b98: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x1b1b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x1b1b9c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x1b1b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x1b1ba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b1ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1ba4: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x1B1BA4u;
    SET_GPR_U32(ctx, 31, 0x1B1BACu);
    ctx->pc = 0x1B1BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BA4u;
    // 0x1b1ba8: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x1B1BA4u, 0x1B1BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BACu;
label_1b1bac:
    // 0x1b1bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b1bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1bb0: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x1B1BB0u;
    SET_GPR_U32(ctx, 31, 0x1B1BB8u);
    ctx->pc = 0x1B1BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1BB0u;
    // 0x1b1bb4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x1B1BB0u, 0x1B1BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B1BB8u;
label_1b1bb8:
    // 0x1b1bb8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b1bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b1bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b1bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1bc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1bc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B1BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1BC4u;
        // 0x1b1bc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B1BC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1BCCu;
    // 0x1b1bcc: 0x0  nop
    ctx->pc = 0x1b1bccu;
    // NOP
    ctx->pc = 0x1b1bd0u;
}
