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

// Function: M2VERR_SetCode
// Address: 0x36d8e8 - 0x36d938
void M2VERR_SetCode_0x36d8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("M2VERR_SetCode_0x36d8e8");
#endif

    switch (ctx->pc) {
        case 0x36d910u: goto label_36d910;
        case 0x36d920u: goto label_36d920;
        default: break;
    }

    ctx->pc = 0x36d8e8u;

    // 0x36d8e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x36d8e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36d8ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x36d8ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x36d8f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36d8f4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36d8f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d8f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x36d8f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x36d8fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D8FCu;
    {
        const bool branch_taken_0x36d8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D8FCu;
        // 0x36d900: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d8fc) {
            ctx->pc = 0x36D918u;
            goto label_36d918;
        }
    }
    ctx->pc = 0x36D904u;
    // 0x36d904: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x36d904u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x36d908: 0xc0db64e  jal         func_36D938
    ctx->pc = 0x36D908u;
    SET_GPR_U32(ctx, 31, 0x36D910u);
    ctx->pc = 0x36D90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D908u;
    // 0x36d90c: 0x24842048  addiu       $a0, $a0, 0x2048 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D938u, 0x36D908u, 0x36D910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D910u;
label_36d910:
    // 0x36d910: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x36D910u;
    {
        const bool branch_taken_0x36d910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D910u;
        // 0x36d914: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d910) {
            ctx->pc = 0x36D924u;
            goto label_36d924;
        }
    }
    ctx->pc = 0x36D918u;
label_36d918:
    // 0x36d918: 0xc0db64e  jal         func_36D938
    ctx->pc = 0x36D918u;
    SET_GPR_U32(ctx, 31, 0x36D920u);
    ctx->pc = 0x36D938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D938u, 0x36D918u, 0x36D920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D920u;
label_36d920:
    // 0x36d920: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x36d920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_36d924:
    // 0x36d924: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x36d924u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36d928: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x36d928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d92c: 0x3e00008  jr          $ra
    ctx->pc = 0x36D92Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D92Cu;
        // 0x36d930: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D92Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D934u;
    // 0x36d934: 0x0  nop
    ctx->pc = 0x36d934u;
    // NOP
    ctx->pc = 0x36d938u;
}
