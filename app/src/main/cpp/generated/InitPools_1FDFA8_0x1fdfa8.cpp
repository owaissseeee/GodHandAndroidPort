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

// Function: InitPools_1FDFA8
// Address: 0x1fdfa8 - 0x1fdfd8
void InitPools_1FDFA8_0x1fdfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitPools_1FDFA8_0x1fdfa8");
#endif

    switch (ctx->pc) {
        case 0x1fdfbcu: goto label_1fdfbc;
        case 0x1fdfc4u: goto label_1fdfc4;
        default: break;
    }

    ctx->pc = 0x1fdfa8u;

    // 0x1fdfa8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fdfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fdfac: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fdfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fdfb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fdfb4: 0xc07f862  jal         func_1FE188
    ctx->pc = 0x1FDFB4u;
    SET_GPR_U32(ctx, 31, 0x1FDFBCu);
    ctx->pc = 0x1FDFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDFB4u;
    // 0x1fdfb8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE188u, 0x1FDFB4u, 0x1FDFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDFBCu;
label_1fdfbc:
    // 0x1fdfbc: 0xc07f8ae  jal         func_1FE2B8
    ctx->pc = 0x1FDFBCu;
    SET_GPR_U32(ctx, 31, 0x1FDFC4u);
    ctx->pc = 0x1FDFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDFBCu;
    // 0x1fdfc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE2B8u, 0x1FDFBCu, 0x1FDFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDFC4u;
label_1fdfc4:
    // 0x1fdfc4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fdfc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fdfc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdfc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdfcc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDFCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDFCCu;
        // 0x1fdfd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDFCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDFD4u;
    // 0x1fdfd4: 0x0  nop
    ctx->pc = 0x1fdfd4u;
    // NOP
    ctx->pc = 0x1fdfd8u;
}
