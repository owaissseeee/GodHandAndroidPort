#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __make_dp
// Address: 0x79be08 - 0x79be38
void ps2___make_dp_0x79be08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___make_dp_0x79be08");
#endif

    switch (ctx->pc) {
        case 0x79be28u: goto label_79be28;
        default: break;
    }

    ctx->pc = 0x79be08u;

    // 0x79be08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79be08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79be0c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x79be0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x79be10: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79be10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79be14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79be14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79be18: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x79be18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x79be1c: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x79be1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x79be20: 0xc1e6c66  jal         func_79B198
    ctx->pc = 0x79BE20u;
    SET_GPR_U32(ctx, 31, 0x79BE28u);
    ctx->pc = 0x79BE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BE20u;
    // 0x79be24: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B198u, 0x79BE20u, 0x79BE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BE28u;
label_79be28:
    // 0x79be28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79be28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79be2c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BE2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE2Cu;
        // 0x79be30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BE2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BE34u;
    // 0x79be34: 0x0  nop
    ctx->pc = 0x79be34u;
    // NOP
    ctx->pc = 0x79be38u;
}
} // namespace gh_r505
