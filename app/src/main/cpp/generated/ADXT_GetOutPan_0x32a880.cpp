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

// Function: ADXT_GetOutPan
// Address: 0x32a880 - 0x32a8c0
void ADXT_GetOutPan_0x32a880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ADXT_GetOutPan_0x32a880");
#endif

    switch (ctx->pc) {
        case 0x32a89cu: goto label_32a89c;
        default: break;
    }

    ctx->pc = 0x32a880u;

    // 0x32a880: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32a880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32a884: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x32a884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x32a888: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x32A888u;
    {
        const bool branch_taken_0x32a888 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A888u;
        // 0x32a88c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a888) {
            ctx->pc = 0x32A8A8u;
            goto label_32a8a8;
        }
    }
    ctx->pc = 0x32A890u;
    // 0x32a890: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32a890u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32a894: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32A894u;
    SET_GPR_U32(ctx, 31, 0x32A89Cu);
    ctx->pc = 0x32A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32A894u;
    // 0x32a898: 0x24842228  addiu       $a0, $a0, 0x2228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8744));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32A894u, 0x32A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32A89Cu;
label_32a89c:
    // 0x32a89c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x32A89Cu;
    {
        const bool branch_taken_0x32a89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A89Cu;
        // 0x32a8a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32a89c) {
            ctx->pc = 0x32A8B0u;
            goto label_32a8b0;
        }
    }
    ctx->pc = 0x32A8A4u;
    // 0x32a8a4: 0x0  nop
    ctx->pc = 0x32a8a4u;
    // NOP
label_32a8a8:
    // 0x32a8a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x32a8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x32a8ac: 0x84620042  lh          $v0, 0x42($v1)
    ctx->pc = 0x32a8acu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 66)));
label_32a8b0:
    // 0x32a8b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32a8b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32a8b4: 0x3e00008  jr          $ra
    ctx->pc = 0x32A8B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32A8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32A8B4u;
        // 0x32a8b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32A8B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32A8BCu;
    // 0x32a8bc: 0x0  nop
    ctx->pc = 0x32a8bcu;
    // NOP
    ctx->pc = 0x32a8c0u;
}
