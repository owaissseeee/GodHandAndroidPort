#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __make_fp
// Address: 0x79ca98 - 0x79cac8
void ps2___make_fp_0x79ca98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_fp_0x79ca98");
#endif

    switch (ctx->pc) {
        case 0x79cab8u: goto label_79cab8;
        default: break;
    }

    ctx->pc = 0x79ca98u;

    // 0x79ca98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79ca98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79ca9c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x79ca9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x79caa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x79caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79caa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79caa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79caa8: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x79caa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x79caac: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x79caacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x79cab0: 0xc1e6fca  jal         func_79BF28
    ctx->pc = 0x79CAB0u;
    SET_GPR_U32(ctx, 31, 0x79CAB8u);
    ctx->pc = 0x79CAB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79CAB0u;
    // 0x79cab4: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF28u, 0x79CAB0u, 0x79CAB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79CAB8u;
label_79cab8:
    // 0x79cab8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79cab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79cabc: 0x3e00008  jr          $ra
    ctx->pc = 0x79CABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CABCu;
        // 0x79cac0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CAC4u;
    // 0x79cac4: 0x0  nop
    ctx->pc = 0x79cac4u;
    // NOP
    ctx->pc = 0x79cac8u;
}
} // namespace gh_r501
