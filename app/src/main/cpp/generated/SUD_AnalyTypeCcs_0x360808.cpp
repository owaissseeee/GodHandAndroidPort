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

// Function: SUD_AnalyTypeCcs
// Address: 0x360808 - 0x360878
void SUD_AnalyTypeCcs_0x360808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SUD_AnalyTypeCcs_0x360808");
#endif

    switch (ctx->pc) {
        case 0x360838u: goto label_360838;
        default: break;
    }

    ctx->pc = 0x360808u;

    // 0x360808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x360808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36080c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x36080Cu;
    {
        const bool branch_taken_0x36080c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x360810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36080Cu;
        // 0x360810: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36080c) {
            ctx->pc = 0x36081Cu;
            goto label_36081c;
        }
    }
    ctx->pc = 0x360814u;
    // 0x360814: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x360814u;
    {
        const bool branch_taken_0x360814 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x360818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360814u;
        // 0x360818: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x360814) {
            ctx->pc = 0x360828u;
            goto label_360828;
        }
    }
    ctx->pc = 0x36081Cu;
label_36081c:
    // 0x36081c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x36081Cu;
    {
        const bool branch_taken_0x36081c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36081Cu;
        // 0x360820: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36081c) {
            ctx->pc = 0x36083Cu;
            goto label_36083c;
        }
    }
    ctx->pc = 0x360824u;
    // 0x360824: 0x0  nop
    ctx->pc = 0x360824u;
    // NOP
label_360828:
    // 0x360828: 0x24840013  addiu       $a0, $a0, 0x13
    ctx->pc = 0x360828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19));
    // 0x36082c: 0x24a5a230  addiu       $a1, $a1, -0x5DD0
    ctx->pc = 0x36082cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943280));
    // 0x360830: 0xc0e96f6  jal         func_3A5BD8
    ctx->pc = 0x360830u;
    SET_GPR_U32(ctx, 31, 0x360838u);
    ctx->pc = 0x360834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360830u;
    // 0x360834: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5BD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5BD8u, 0x360830u, 0x360838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x360838u;
label_360838:
    // 0x360838: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x360838u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_36083c:
    // 0x36083c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x36083cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x360840: 0x3e00008  jr          $ra
    ctx->pc = 0x360840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x360844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360840u;
        // 0x360844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360848u;
    // 0x360848: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36084c: 0x0  nop
    ctx->pc = 0x36084cu;
    // NOP
    // 0x360850: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x360854: 0x0  nop
    ctx->pc = 0x360854u;
    // NOP
    // 0x360858: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x36085c: 0x0  nop
    ctx->pc = 0x36085cu;
    // NOP
    // 0x360860: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x360860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x360864: 0x0  nop
    ctx->pc = 0x360864u;
    // NOP
    // 0x360868: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x360868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x36086c: 0x0  nop
    ctx->pc = 0x36086cu;
    // NOP
    // 0x360870: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x360870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x360874: 0x0  nop
    ctx->pc = 0x360874u;
    // NOP
    ctx->pc = 0x360878u;
}
