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
// Function: fpadd
// Address: 0x79b590 - 0x79b5e8
void fpadd_0x79b590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpadd_0x79b590");
#endif

    switch (ctx->pc) {
        case 0x79b5b0u: goto label_79b5b0;
        case 0x79b5c0u: goto label_79b5c0;
        case 0x79b5d0u: goto label_79b5d0;
        case 0x79b5d8u: goto label_79b5d8;
        default: break;
    }

    ctx->pc = 0x79b590u;

    // 0x79b590: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79b590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79b594: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79b594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79b598: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79b598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79b59c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79b59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79b5a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79b5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5a4: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79b5a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79b5a8: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B5A8u;
    SET_GPR_U32(ctx, 31, 0x79B5B0u);
    ctx->pc = 0x79B5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5A8u;
    // 0x79b5ac: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B5A8u, 0x79B5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5B0u;
label_79b5b0:
    // 0x79b5b0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79b5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79b5b4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79b5b8: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B5B8u;
    SET_GPR_U32(ctx, 31, 0x79B5C0u);
    ctx->pc = 0x79B5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5B8u;
    // 0x79b5bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B5B8u, 0x79B5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5C0u;
label_79b5c0:
    // 0x79b5c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x79b5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b5c8: 0xc1e6cd6  jal         func_79B358
    ctx->pc = 0x79B5C8u;
    SET_GPR_U32(ctx, 31, 0x79B5D0u);
    ctx->pc = 0x79B5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5C8u;
    // 0x79b5cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B358u, 0x79B5C8u, 0x79B5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5D0u;
label_79b5d0:
    // 0x79b5d0: 0xc1e6c6e  jal         func_79B1B8
    ctx->pc = 0x79B5D0u;
    SET_GPR_U32(ctx, 31, 0x79B5D8u);
    ctx->pc = 0x79B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5D0u;
    // 0x79b5d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B1B8u, 0x79B5D0u, 0x79B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5D8u;
label_79b5d8:
    // 0x79b5d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79b5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79b5dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79b5dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b5e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79B5E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5E0u;
        // 0x79b5e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B5E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B5E8u;
}
} // namespace gh_r022
