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
// Function: fpadd
// Address: 0x79a990 - 0x79a9e8
void fpadd_0x79a990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpadd_0x79a990");
#endif

    switch (ctx->pc) {
        case 0x79a9b0u: goto label_79a9b0;
        case 0x79a9c0u: goto label_79a9c0;
        case 0x79a9d0u: goto label_79a9d0;
        case 0x79a9d8u: goto label_79a9d8;
        default: break;
    }

    ctx->pc = 0x79a990u;

    // 0x79a990: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79a990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79a994: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79a994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79a998: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79a998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79a99c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79a99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79a9a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79a9a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9a4: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79a9a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79a9a8: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79A9A8u;
    SET_GPR_U32(ctx, 31, 0x79A9B0u);
    ctx->pc = 0x79A9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9A8u;
    // 0x79a9ac: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79A9A8u, 0x79A9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9B0u;
label_79a9b0:
    // 0x79a9b0: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79a9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a9b4: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79a9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79a9b8: 0xc1e69b2  jal         func_79A6C8
    ctx->pc = 0x79A9B8u;
    SET_GPR_U32(ctx, 31, 0x79A9C0u);
    ctx->pc = 0x79A9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9B8u;
    // 0x79a9bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A6C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A6C8u, 0x79A9B8u, 0x79A9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9C0u;
label_79a9c0:
    // 0x79a9c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79a9c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a9c4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x79a9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79a9c8: 0xc1e69d6  jal         func_79A758
    ctx->pc = 0x79A9C8u;
    SET_GPR_U32(ctx, 31, 0x79A9D0u);
    ctx->pc = 0x79A9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9C8u;
    // 0x79a9cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A758u, 0x79A9C8u, 0x79A9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D0u;
label_79a9d0:
    // 0x79a9d0: 0xc1e696e  jal         func_79A5B8
    ctx->pc = 0x79A9D0u;
    SET_GPR_U32(ctx, 31, 0x79A9D8u);
    ctx->pc = 0x79A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A9D0u;
    // 0x79a9d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A5B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A5B8u, 0x79A9D0u, 0x79A9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A9D8u;
label_79a9d8:
    // 0x79a9d8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79a9d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79a9dc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79a9dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a9e0: 0x3e00008  jr          $ra
    ctx->pc = 0x79A9E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A9E0u;
        // 0x79a9e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A9E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A9E8u;
}
} // namespace gh_r505
