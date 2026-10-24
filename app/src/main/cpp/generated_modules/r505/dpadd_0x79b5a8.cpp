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
// Function: dpadd
// Address: 0x79b5a8 - 0x79b600
void dpadd_0x79b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpadd_0x79b5a8");
#endif

    switch (ctx->pc) {
        case 0x79b5c8u: goto label_79b5c8;
        case 0x79b5d8u: goto label_79b5d8;
        case 0x79b5e8u: goto label_79b5e8;
        case 0x79b5f0u: goto label_79b5f0;
        default: break;
    }

    ctx->pc = 0x79b5a8u;

    // 0x79b5a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x79b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79b5ac: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x79b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x79b5b0: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x79b5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x79b5b4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x79b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x79b5b8: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x79b5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x79b5bc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x79b5bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x79b5c0: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B5C0u;
    SET_GPR_U32(ctx, 31, 0x79B5C8u);
    ctx->pc = 0x79B5C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5C0u;
    // 0x79b5c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B5C0u, 0x79B5C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5C8u;
label_79b5c8:
    // 0x79b5c8: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79b5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79b5cc: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x79b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x79b5d0: 0xc1e6cb2  jal         func_79B2C8
    ctx->pc = 0x79B5D0u;
    SET_GPR_U32(ctx, 31, 0x79B5D8u);
    ctx->pc = 0x79B5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5D0u;
    // 0x79b5d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B2C8u, 0x79B5D0u, 0x79B5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5D8u;
label_79b5d8:
    // 0x79b5d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79b5d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b5dc: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x79b5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x79b5e0: 0xc1e6cda  jal         func_79B368
    ctx->pc = 0x79B5E0u;
    SET_GPR_U32(ctx, 31, 0x79B5E8u);
    ctx->pc = 0x79B5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5E0u;
    // 0x79b5e4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B368u, 0x79B5E0u, 0x79B5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5E8u;
label_79b5e8:
    // 0x79b5e8: 0xc1e6c66  jal         func_79B198
    ctx->pc = 0x79B5E8u;
    SET_GPR_U32(ctx, 31, 0x79B5F0u);
    ctx->pc = 0x79B5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B5E8u;
    // 0x79b5ec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79B198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79B198u, 0x79B5E8u, 0x79B5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B5F0u;
label_79b5f0:
    // 0x79b5f0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x79b5f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79b5f4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x79b5f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79b5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B5F8u;
        // 0x79b5fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B600u;
}
} // namespace gh_r505
