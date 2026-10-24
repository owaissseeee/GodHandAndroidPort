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

// Function: pl00_SubscreenMotSet
// Address: 0x10b980 - 0x10b9c0
void pl00_SubscreenMotSet_0x10b980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_SubscreenMotSet_0x10b980");
#endif

    switch (ctx->pc) {
        case 0x10b998u: goto label_10b998;
        default: break;
    }

    ctx->pc = 0x10b980u;

    // 0x10b980: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b984: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x10b984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10b988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x10b988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x10b98c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10b98cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10b990: 0xc049a78  jal         func_1269E0
    ctx->pc = 0x10B990u;
    SET_GPR_U32(ctx, 31, 0x10B998u);
    ctx->pc = 0x10B994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B990u;
    // 0x10b994: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1269E0u, 0x10B990u, 0x10B998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B998u;
label_10b998:
    // 0x10b998: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x10b998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x10b99c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10b9a0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x10b9a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x10b9a4: 0xa20302f6  sb          $v1, 0x2F6($s0)
    ctx->pc = 0x10b9a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 3));
    // 0x10b9a8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x10b9a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b9ac: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x10b9acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x10b9b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x10b9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10b9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B9B8u;
        // 0x10b9bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B9C0u;
}
