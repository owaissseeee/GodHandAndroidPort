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

// Function: func_001FF710
// Address: 0x1ff710 - 0x1ff780
void func_001FF710_0x1ff710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FF710_0x1ff710");
#endif

    switch (ctx->pc) {
        case 0x1ff728u: goto label_1ff728;
        default: break;
    }

    ctx->pc = 0x1ff710u;

    // 0x1ff710: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x1ff710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x1ff714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ff714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff718: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ff718u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff71c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ff71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff720: 0x3409ffff  ori         $t1, $zero, 0xFFFF
    ctx->pc = 0x1ff720u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1ff724: 0x0  nop
    ctx->pc = 0x1ff724u;
    // NOP
label_1ff728:
    // 0x1ff728: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ff728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff72c: 0x14650004  bne         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF72Cu;
    {
        const bool branch_taken_0x1ff72c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1FF730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF72Cu;
        // 0x1ff730: 0x3863ffff  xori        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff72c) {
            ctx->pc = 0x1FF740u;
            goto label_1ff740;
        }
    }
    ctx->pc = 0x1FF734u;
    // 0x1ff734: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x1ff734u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x1ff738: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF738u;
    {
        const bool branch_taken_0x1ff738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF738u;
        // 0x1ff73c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff738) {
            ctx->pc = 0x1FF748u;
            goto label_1ff748;
        }
    }
    ctx->pc = 0x1FF740u;
label_1ff740:
    // 0x1ff740: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1ff740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1ff744: 0x43300a  movz        $a2, $v0, $v1
    ctx->pc = 0x1ff744u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1ff748:
    // 0x1ff748: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ff748u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ff74c: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x1ff74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ff750: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x1FF750u;
    {
        const bool branch_taken_0x1ff750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF750u;
        // 0x1ff754: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff750) {
            ctx->pc = 0x1FF728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff728;
        }
    }
    ctx->pc = 0x1FF758u;
    // 0x1ff758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ff758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1ff75c: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF75Cu;
    {
        const bool branch_taken_0x1ff75c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1FF760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF75Cu;
        // 0x1ff760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff75c) {
            ctx->pc = 0x1FF770u;
            goto label_1ff770;
        }
    }
    ctx->pc = 0x1FF764u;
    // 0x1ff764: 0x15000002  bnez        $t0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1FF764u;
    {
        const bool branch_taken_0x1ff764 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF764u;
        // 0x1ff768: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff764) {
            ctx->pc = 0x1FF770u;
            goto label_1ff770;
        }
    }
    ctx->pc = 0x1FF76Cu;
    // 0x1ff76c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ff76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ff770:
    // 0x1ff770: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF778u;
    // 0x1ff778: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x1ff778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1ff77c: 0x0  nop
    ctx->pc = 0x1ff77cu;
    // NOP
    ctx->pc = 0x1ff780u;
}
