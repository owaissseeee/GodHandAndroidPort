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

// Function: SetTimerHandler
// Address: 0x3b7510 - 0x3b7590
void SetTimerHandler_0x3b7510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetTimerHandler_0x3b7510");
#endif

    switch (ctx->pc) {
        case 0x3b7540u: goto label_3b7540;
        case 0x3b7558u: goto label_3b7558;
        case 0x3b7568u: goto label_3b7568;
        default: break;
    }

    ctx->pc = 0x3b7510u;

    // 0x3b7510: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3b7510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3b7514: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3b7514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x3b7518: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b7518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b751c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3b751cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7520: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b7520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b7524: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3b7524u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7528: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b7528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b752c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b752cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7530: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x3b7530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x3b7534: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3b7534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3b7538: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B7538u;
    SET_GPR_U32(ctx, 31, 0x3B7540u);
    ctx->pc = 0x3B753Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7538u;
    // 0x3b753c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B7538u, 0x3B7540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7540u;
label_3b7540:
    // 0x3b7540: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b7540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7544: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b7544u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7548: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b7548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b754c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3b754cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b7550: 0xc0edd00  jal         func_3B7400
    ctx->pc = 0x3B7550u;
    SET_GPR_U32(ctx, 31, 0x3B7558u);
    ctx->pc = 0x3B7554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B7550u;
    // 0x3b7554: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7400u, 0x3B7550u, 0x3B7558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7558u;
label_3b7558:
    // 0x3b7558: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B7558u;
    {
        const bool branch_taken_0x3b7558 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B755Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7558u;
        // 0x3b755c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b7558) {
            ctx->pc = 0x3B7568u;
            goto label_3b7568;
        }
    }
    ctx->pc = 0x3B7560u;
    // 0x3b7560: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B7560u;
    SET_GPR_U32(ctx, 31, 0x3B7568u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B7560u, 0x3B7568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B7568u;
label_3b7568:
    // 0x3b7568: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b7568u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b756c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3b756cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b7570: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3b7570u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b7574: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3b7574u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b7578: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b7578u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b757c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b757cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b7580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b7580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b7584: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B7584u;
        // 0x3b7588: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7584u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B758Cu;
    // 0x3b758c: 0x0  nop
    ctx->pc = 0x3b758cu;
    // NOP
    ctx->pc = 0x3b7590u;
}
