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

// Function: ForwardToAllNodes_14D700
// Address: 0x14d700 - 0x14d768
void ForwardToAllNodes_14D700_0x14d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardToAllNodes_14D700_0x14d700");
#endif

    switch (ctx->pc) {
        case 0x14d724u: goto label_14d724;
        case 0x14d738u: goto label_14d738;
        case 0x14d744u: goto label_14d744;
        default: break;
    }

    ctx->pc = 0x14d700u;

    // 0x14d700: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14d700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14d704: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14d704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14d708: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14d708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14d70c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14d70cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d710: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14d710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14d714: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14d714u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d71c: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x14D71Cu;
    SET_GPR_U32(ctx, 31, 0x14D724u);
    ctx->pc = 0x14D720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D71Cu;
    // 0x14d720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x14D71Cu, 0x14D724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D724u;
label_14d724:
    // 0x14d724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14d724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d728: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x14D728u;
    {
        const bool branch_taken_0x14d728 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d728) {
            ctx->pc = 0x14D72Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D728u;
            // 0x14d72c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D754u;
            goto label_14d754;
        }
    }
    ctx->pc = 0x14D730u;
    // 0x14d730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d734: 0x0  nop
    ctx->pc = 0x14d734u;
    // NOP
label_14d738:
    // 0x14d738: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x14d738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d73c: 0xc055766  jal         func_155D98
    ctx->pc = 0x14D73Cu;
    SET_GPR_U32(ctx, 31, 0x14D744u);
    ctx->pc = 0x14D740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D73Cu;
    // 0x14d740: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155D98u, 0x14D73Cu, 0x14D744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D744u;
label_14d744:
    // 0x14d744: 0x8e100404  lw          $s0, 0x404($s0)
    ctx->pc = 0x14d744u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1028)));
    // 0x14d748: 0x1600fffb  bnez        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14D748u;
    {
        const bool branch_taken_0x14d748 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D748u;
        // 0x14d74c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d748) {
            ctx->pc = 0x14D738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d738;
        }
    }
    ctx->pc = 0x14D750u;
    // 0x14d750: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14d750u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14d754:
    // 0x14d754: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14d754u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d758: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14d758u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d75c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d75cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d760: 0x3e00008  jr          $ra
    ctx->pc = 0x14D760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D760u;
        // 0x14d764: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D760u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D768u;
}
