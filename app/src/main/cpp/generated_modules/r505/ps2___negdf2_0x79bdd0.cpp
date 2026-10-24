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
// Function: __negdf2
// Address: 0x79bdd0 - 0x79be08
void ps2___negdf2_0x79bdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___negdf2_0x79bdd0");
#endif

    switch (ctx->pc) {
        case 0x79bde8u: goto label_79bde8;
        case 0x79bdfcu: goto label_79bdfc;
        default: break;
    }

    ctx->pc = 0x79bdd0u;

    // 0x79bdd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79bdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79bdd4: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x79bdd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x79bdd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bddc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79bddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79bde0: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BDE0u;
    SET_GPR_U32(ctx, 31, 0x79BDE8u);
    ctx->pc = 0x79BDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BDE0u;
    // 0x79bde4: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BDE0u, 0x79BDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BDE8u;
label_79bde8:
    // 0x79bde8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x79bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x79bdec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79bdecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bdf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x79bdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x79bdf4: 0xc1e6c66  jal         func_79B198
    ctx->pc = 0x79BDF4u;
    SET_GPR_U32(ctx, 31, 0x79BDFCu);
    ctx->pc = 0x79BDF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BDF4u;
    // 0x79bdf8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B198u, 0x79BDF4u, 0x79BDFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BDFCu;
label_79bdfc:
    // 0x79bdfc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x79bdfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79be00: 0x3e00008  jr          $ra
    ctx->pc = 0x79BE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BE00u;
        // 0x79be04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BE08u;
}
} // namespace gh_r505
