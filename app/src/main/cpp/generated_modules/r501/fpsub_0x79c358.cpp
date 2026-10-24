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
// Function: fpsub
// Address: 0x79c358 - 0x79c3c0
void fpsub_0x79c358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpsub_0x79c358");
#endif

    switch (ctx->pc) {
        case 0x79c378u: goto label_79c378;
        case 0x79c388u: goto label_79c388;
        case 0x79c3a4u: goto label_79c3a4;
        case 0x79c3acu: goto label_79c3ac;
        default: break;
    }

    ctx->pc = 0x79c358u;

    // 0x79c358: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79c358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79c35c: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79c35cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79c360: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79c360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79c364: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79c364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79c368: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c368u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c36c: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79c36cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79c370: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C370u;
    SET_GPR_U32(ctx, 31, 0x79C378u);
    ctx->pc = 0x79C374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C370u;
    // 0x79c374: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C370u, 0x79C378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C378u;
label_79c378:
    // 0x79c378: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79c378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79c37c: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79c380: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C380u;
    SET_GPR_U32(ctx, 31, 0x79C388u);
    ctx->pc = 0x79C384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C380u;
    // 0x79c384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C380u, 0x79C388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C388u;
label_79c388:
    // 0x79c388: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x79c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x79c38c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79c38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c390: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x79c390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c394: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79c394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c398: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79c398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79c39c: 0xc1e7032  jal         func_79C0C8
    ctx->pc = 0x79C39Cu;
    SET_GPR_U32(ctx, 31, 0x79C3A4u);
    ctx->pc = 0x79C3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C39Cu;
    // 0x79c3a0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C0C8u, 0x79C39Cu, 0x79C3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3A4u;
label_79c3a4:
    // 0x79c3a4: 0xc1e6fca  jal         func_79BF28
    ctx->pc = 0x79C3A4u;
    SET_GPR_U32(ctx, 31, 0x79C3ACu);
    ctx->pc = 0x79C3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C3A4u;
    // 0x79c3a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF28u, 0x79C3A4u, 0x79C3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C3ACu;
label_79c3ac:
    // 0x79c3ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79c3acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c3b0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79c3b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c3b4: 0x3e00008  jr          $ra
    ctx->pc = 0x79C3B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C3B4u;
        // 0x79c3b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C3B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C3BCu;
    // 0x79c3bc: 0x0  nop
    ctx->pc = 0x79c3bcu;
    // NOP
    ctx->pc = 0x79c3c0u;
}
} // namespace gh_r501
