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

// Function: sceSifRemoveRpc
// Address: 0x3b34d0 - 0x3b3568
void sceSifRemoveRpc_0x3b34d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceSifRemoveRpc_0x3b34d0");
#endif

    switch (ctx->pc) {
        case 0x3b34f0u: goto label_3b34f0;
        case 0x3b3520u: goto label_3b3520;
        case 0x3b3548u: goto label_3b3548;
        default: break;
    }

    ctx->pc = 0x3b34d0u;

    // 0x3b34d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3b34d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3b34d4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x3b34d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x3b34d8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b34d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b34dc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3b34dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b34e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b34e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b34e4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3b34e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3b34e8: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x3B34E8u;
    SET_GPR_U32(ctx, 31, 0x3B34F0u);
    ctx->pc = 0x3B34ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B34E8u;
    // 0x3b34ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x3B34E8u, 0x3B34F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B34F0u;
label_3b34f0:
    // 0x3b34f0: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x3b34f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b34f4: 0x16110004  bne         $s0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B34F4u;
    {
        const bool branch_taken_0x3b34f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x3b34f4) {
            ctx->pc = 0x3B3508u;
            goto label_3b3508;
        }
    }
    ctx->pc = 0x3B34FCu;
    // 0x3b34fc: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3b34fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3b3500: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3B3500u;
    {
        const bool branch_taken_0x3b3500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B3504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3500u;
        // 0x3b3504: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3500) {
            ctx->pc = 0x3B3540u;
            goto label_3b3540;
        }
    }
    ctx->pc = 0x3B3508u;
label_3b3508:
    // 0x3b3508: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x3B3508u;
    {
        const bool branch_taken_0x3b3508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3508) {
            ctx->pc = 0x3B3540u;
            goto label_3b3540;
        }
    }
    ctx->pc = 0x3B3510u;
    // 0x3b3510: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x3b3510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3b3514: 0x50710009  beql        $v1, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B3514u;
    {
        const bool branch_taken_0x3b3514 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x3b3514) {
            ctx->pc = 0x3B3518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B3514u;
            // 0x3b3518: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B353Cu;
            goto label_3b353c;
        }
    }
    ctx->pc = 0x3B351Cu;
    // 0x3b351c: 0x0  nop
    ctx->pc = 0x3b351cu;
    // NOP
label_3b3520:
    // 0x3b3520: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x3b3520u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b3524: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B3524u;
    {
        const bool branch_taken_0x3b3524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b3524) {
            ctx->pc = 0x3B3540u;
            goto label_3b3540;
        }
    }
    ctx->pc = 0x3B352Cu;
    // 0x3b352c: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x3b352cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x3b3530: 0x1451fffb  bne         $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3B3530u;
    {
        const bool branch_taken_0x3b3530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B3534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B3530u;
        // 0x3b3534: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b3530) {
            ctx->pc = 0x3B3520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b3520;
        }
    }
    ctx->pc = 0x3B3538u;
    // 0x3b3538: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x3b3538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_3b353c:
    // 0x3b353c: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x3b353cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
label_3b3540:
    // 0x3b3540: 0xc0ed8fc  jal         func_3B63F0
    ctx->pc = 0x3B3540u;
    SET_GPR_U32(ctx, 31, 0x3B3548u);
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x3B3540u, 0x3B3548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B3548u;
label_3b3548:
    // 0x3b3548: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b3548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b354c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3b354cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b3550: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3b3550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b3554: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b3554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b3558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b3558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b355c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B355Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B3560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B355Cu;
        // 0x3b3560: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B355Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B3564u;
    // 0x3b3564: 0x0  nop
    ctx->pc = 0x3b3564u;
    // NOP
    ctx->pc = 0x3b3568u;
}
