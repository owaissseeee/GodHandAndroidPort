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

// Function: func_0018EC98
// Address: 0x18ec98 - 0x18ecd0
void func_0018EC98_0x18ec98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0018EC98_0x18ec98");
#endif

    switch (ctx->pc) {
        case 0x18ecacu: goto label_18ecac;
        default: break;
    }

    ctx->pc = 0x18ec98u;

    // 0x18ec98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18ec98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18ec9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18ec9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18eca0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18eca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18eca4: 0xc06feb2  jal         func_1BFAC8
    ctx->pc = 0x18ECA4u;
    SET_GPR_U32(ctx, 31, 0x18ECACu);
    ctx->pc = 0x18ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18ECA4u;
    // 0x18eca8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFAC8u, 0x18ECA4u, 0x18ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18ECACu;
label_18ecac:
    // 0x18ecac: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x18ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x18ecb0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18ecb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ecb4: 0x24633c70  addiu       $v1, $v1, 0x3C70
    ctx->pc = 0x18ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15472));
    // 0x18ecb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18ecb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18ecbc: 0xae030214  sw          $v1, 0x214($s0)
    ctx->pc = 0x18ecbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 3));
    // 0x18ecc0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18ecc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18ecc4: 0x3e00008  jr          $ra
    ctx->pc = 0x18ECC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18ECC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18ECC4u;
        // 0x18ecc8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18ECC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18ECCCu;
    // 0x18eccc: 0x0  nop
    ctx->pc = 0x18ecccu;
    // NOP
    ctx->pc = 0x18ecd0u;
}
