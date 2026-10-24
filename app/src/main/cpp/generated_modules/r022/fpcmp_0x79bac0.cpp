#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r022_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r022
{
// Function: fpcmp
// Address: 0x79bac0 - 0x79bb10
void fpcmp_0x79bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpcmp_0x79bac0");
#endif

    switch (ctx->pc) {
        case 0x79bae0u: goto label_79bae0;
        case 0x79baf0u: goto label_79baf0;
        case 0x79bafcu: goto label_79bafc;
        default: break;
    }

    ctx->pc = 0x79bac0u;

    // 0x79bac0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79bac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79bac4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x79bac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x79bac8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79bac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79bacc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79baccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79bad0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79bad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bad4: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x79bad4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x79bad8: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BAD8u;
    SET_GPR_U32(ctx, 31, 0x79BAE0u);
    ctx->pc = 0x79BADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAD8u;
    // 0x79badc: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BAD8u, 0x79BAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAE0u;
label_79bae0:
    // 0x79bae0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79bae0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79bae4: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x79bae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x79bae8: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79BAE8u;
    SET_GPR_U32(ctx, 31, 0x79BAF0u);
    ctx->pc = 0x79BAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAE8u;
    // 0x79baec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79BAE8u, 0x79BAF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAF0u;
label_79baf0:
    // 0x79baf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79baf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79baf4: 0xc1e6e6a  jal         func_79B9A8
    ctx->pc = 0x79BAF4u;
    SET_GPR_U32(ctx, 31, 0x79BAFCu);
    ctx->pc = 0x79BAF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAF4u;
    // 0x79baf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B9A8u, 0x79BAF4u, 0x79BAFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAFCu;
label_79bafc:
    // 0x79bafc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79bafcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79bb00: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x79bb00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bb04: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB04u;
        // 0x79bb08: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BB0Cu;
    // 0x79bb0c: 0x0  nop
    ctx->pc = 0x79bb0cu;
    // NOP
    ctx->pc = 0x79bb10u;
}
} // namespace gh_r022
