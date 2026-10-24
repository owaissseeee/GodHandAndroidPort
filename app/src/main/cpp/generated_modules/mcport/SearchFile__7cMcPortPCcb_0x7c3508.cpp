#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: SearchFile__7cMcPortPCcb
// Address: 0x7c3508 - 0x7c3568
void SearchFile__7cMcPortPCcb_0x7c3508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchFile__7cMcPortPCcb_0x7c3508");
#endif

    switch (ctx->pc) {
        case 0x7c3538u: goto label_7c3538;
        case 0x7c3550u: goto label_7c3550;
        default: break;
    }

    ctx->pc = 0x7c3508u;

    // 0x7c3508: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x7c3508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x7c350c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x7c350cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3510: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x7c3510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x7c3514: 0x3c05007d  lui         $a1, 0x7D
    ctx->pc = 0x7c3514u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)125 << 16));
    // 0x7c3518: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7c3518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7c351c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7c351cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3520: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x7c3520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3524: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7c3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7c3528: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7c3528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c352c: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x7c352cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x7c3530: 0xc0e9b16  jal         func_3A6C58
    ctx->pc = 0x7C3530u;
    SET_GPR_U32(ctx, 31, 0x7C3538u);
    ctx->pc = 0x7C3534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3530u;
    // 0x7c3534: 0x24a50b58  addiu       $a1, $a1, 0xB58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6C58u, 0x7C3530u, 0x7C3538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3538u;
label_7c3538:
    // 0x7c3538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c3538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c353c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x7c353cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3540: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c3540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c3544: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7c3544u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c3548: 0xc1f0d28  jal         func_7C34A0
    ctx->pc = 0x7C3548u;
    SET_GPR_U32(ctx, 31, 0x7C3550u);
    ctx->pc = 0x7C354Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C3548u;
    // 0x7c354c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C34A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C34A0u, 0x7C3548u, 0x7C3550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C3550u;
label_7c3550:
    // 0x7c3550: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x7c3550u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c3554: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x7c3554u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c3558: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7c3558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c355c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C355Cu;
        // 0x7c3560: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3564u;
    // 0x7c3564: 0x0  nop
    ctx->pc = 0x7c3564u;
    // NOP
    ctx->pc = 0x7c3568u;
}
} // namespace gh_mcport
