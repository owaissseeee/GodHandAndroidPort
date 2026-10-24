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
// Function: fpcmp
// Address: 0x79c830 - 0x79c880
void fpcmp_0x79c830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpcmp_0x79c830");
#endif

    switch (ctx->pc) {
        case 0x79c850u: goto label_79c850;
        case 0x79c860u: goto label_79c860;
        case 0x79c86cu: goto label_79c86c;
        default: break;
    }

    ctx->pc = 0x79c830u;

    // 0x79c830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79c830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79c834: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x79c834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x79c838: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x79c838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79c83c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x79c83cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x79c840: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x79c840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c844: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x79c844u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x79c848: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C848u;
    SET_GPR_U32(ctx, 31, 0x79C850u);
    ctx->pc = 0x79C84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C848u;
    // 0x79c84c: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C848u, 0x79C850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C850u;
label_79c850:
    // 0x79c850: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79c850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79c854: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x79c854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x79c858: 0xc1e700e  jal         func_79C038
    ctx->pc = 0x79C858u;
    SET_GPR_U32(ctx, 31, 0x79C860u);
    ctx->pc = 0x79C85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C858u;
    // 0x79c85c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C038u, 0x79C858u, 0x79C860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C860u;
label_79c860:
    // 0x79c860: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x79c860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c864: 0xc1e71c6  jal         func_79C718
    ctx->pc = 0x79C864u;
    SET_GPR_U32(ctx, 31, 0x79C86Cu);
    ctx->pc = 0x79C868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C864u;
    // 0x79c868: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79C718u, 0x79C864u, 0x79C86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79C86Cu;
label_79c86c:
    // 0x79c86c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x79c86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79c870: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x79c870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79c874: 0x3e00008  jr          $ra
    ctx->pc = 0x79C874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79C878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C874u;
        // 0x79c878: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79C874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79C87Cu;
    // 0x79c87c: 0x0  nop
    ctx->pc = 0x79c87cu;
    // NOP
    ctx->pc = 0x79c880u;
}
} // namespace gh_r501
