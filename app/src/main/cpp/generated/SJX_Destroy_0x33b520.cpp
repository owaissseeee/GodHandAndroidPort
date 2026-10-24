#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SJX_Destroy
// Address: 0x33b520 - 0x33b568
void SJX_Destroy_0x33b520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SJX_Destroy_0x33b520");
#endif

    switch (ctx->pc) {
        case 0x33b550u: goto label_33b550;
        default: break;
    }

    ctx->pc = 0x33b520u;

    // 0x33b520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33b520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x33b524: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33b524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b528: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x33b528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x33b52c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33b52cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b530: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33b530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x33b534: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33b534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b53c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b53cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b540: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x33b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x33b544: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x33b544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b548: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x33B548u;
    SET_GPR_U32(ctx, 31, 0x33B550u);
    ctx->pc = 0x33B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33B548u;
    // 0x33b54c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x33B548u, 0x33B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33B550u;
label_33b550:
    // 0x33b550: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x33b550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33b554: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33b554u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b558: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x33b558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b55c: 0x3e00008  jr          $ra
    ctx->pc = 0x33B55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B55Cu;
        // 0x33b560: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33B564u;
    // 0x33b564: 0x0  nop
    ctx->pc = 0x33b564u;
    // NOP
    ctx->pc = 0x33b568u;
}
