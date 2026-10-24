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

// Function: ClearActorList_2C32C0
// Address: 0x2c32c0 - 0x2c32f0
void ClearActorList_2C32C0_0x2c32c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearActorList_2C32C0_0x2c32c0");
#endif

    switch (ctx->pc) {
        case 0x2c32d8u: goto label_2c32d8;
        default: break;
    }

    ctx->pc = 0x2c32c0u;

    // 0x2c32c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c32c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c32c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2c32c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2c32c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c32c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c32cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c32ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c32d0: 0xc0b55aa  jal         func_2D56A8
    ctx->pc = 0x2C32D0u;
    SET_GPR_U32(ctx, 31, 0x2C32D8u);
    ctx->pc = 0x2C32D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C32D0u;
    // 0x2c32d4: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D56A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D56A8u, 0x2C32D0u, 0x2C32D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C32D8u;
label_2c32d8:
    // 0x2c32d8: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x2c32d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c32dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2c32dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c32e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c32e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c32e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2C32E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C32E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C32E4u;
        // 0x2c32e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C32E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C32ECu;
    // 0x2c32ec: 0x0  nop
    ctx->pc = 0x2c32ecu;
    // NOP
    ctx->pc = 0x2c32f0u;
}
