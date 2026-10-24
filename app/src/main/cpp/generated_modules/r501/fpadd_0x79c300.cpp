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
// Function: fpadd
// Address: 0x79c300 - 0x79c358
void fpadd_0x79c300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpadd_0x79c300");
#endif

    switch (ctx->pc) {
        case 0x79c320u: goto label_79c320;
        case 0x79c330u: goto label_79c330;
        case 0x79c340u: goto label_79c340;
        case 0x79c348u: goto label_79c348;
        default: break;
    }

    ctx->pc = 0x79c300u;

    // 0x79c300: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x79c300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79c304: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x79c304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x79c308: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x79c308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x79c30c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x79c30cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x79c310: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c314: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x79c314u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x79c318: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C318u;
    SET_GPR_U32(ctx, 31, 0x79C320u);
    ctx->pc = 0x79C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C318u;
    // 0x79c31c: 0xe7ad0034  swc1        $f13, 0x34($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C318u, 0x79C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C320u;
label_79c320:
    // 0x79c320: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79c320u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79c324: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x79c324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x79c328: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C328u;
    SET_GPR_U32(ctx, 31, 0x79C330u);
    ctx->pc = 0x79C32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C328u;
    // 0x79c32c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C328u, 0x79C330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C330u;
label_79c330:
    // 0x79c330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79c330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c334: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x79c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c338: 0xc1e7032  jal         func_79C0C8
    ctx->pc = 0x79C338u;
    SET_GPR_U32(ctx, 31, 0x79C340u);
    ctx->pc = 0x79C33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C338u;
    // 0x79c33c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C0C8u, 0x79C338u, 0x79C340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C340u;
label_79c340:
    // 0x79c340: 0xc1e6fca  jal         func_79BF28
    ctx->pc = 0x79C340u;
    SET_GPR_U32(ctx, 31, 0x79C348u);
    ctx->pc = 0x79C344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C340u;
    // 0x79c344: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BF28u, 0x79C340u, 0x79C348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C348u;
label_79c348:
    // 0x79c348: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x79c348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79c34c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x79c34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c350: 0x3e00008  jr          $ra
    ctx->pc = 0x79C350u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C350u;
        // 0x79c354: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C350u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C358u;
}
} // namespace gh_r501
