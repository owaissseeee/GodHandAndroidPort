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

// Function: func_0037BE98
// Address: 0x37be98 - 0x37bf10
void func_0037BE98_0x37be98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037BE98_0x37be98");
#endif

    switch (ctx->pc) {
        case 0x37beb8u: goto label_37beb8;
        case 0x37bed8u: goto label_37bed8;
        case 0x37bee8u: goto label_37bee8;
        default: break;
    }

    ctx->pc = 0x37be98u;

    // 0x37be98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37be98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37be9c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37bea0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37bea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37bea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37bea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37bea8: 0x2450b9c0  addiu       $s0, $v0, -0x4640
    ctx->pc = 0x37bea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949312));
    // 0x37beac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37beacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37beb0: 0x26110f00  addiu       $s1, $s0, 0xF00
    ctx->pc = 0x37beb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3840));
    // 0x37beb4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x37beb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)FAST_READ16(0x76B9C0u));
label_37beb8:
    // 0x37beb8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x37BEB8u;
    {
        const bool branch_taken_0x37beb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37beb8) {
            ctx->pc = 0x37BEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BEB8u;
            // 0x37bebc: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BEF0u;
            goto label_37bef0;
        }
    }
    ctx->pc = 0x37BEC0u;
    // 0x37bec0: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x37bec0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37bec4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x37bec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x37bec8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37BEC8u;
    {
        const bool branch_taken_0x37bec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37bec8) {
            ctx->pc = 0x37BEE0u;
            goto label_37bee0;
        }
    }
    ctx->pc = 0x37BED0u;
    // 0x37bed0: 0xc0df0cc  jal         func_37C330
    ctx->pc = 0x37BED0u;
    SET_GPR_U32(ctx, 31, 0x37BED8u);
    ctx->pc = 0x37BED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BED0u;
    // 0x37bed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C330u, 0x37BED0u, 0x37BED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BED8u;
label_37bed8:
    // 0x37bed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x37BED8u;
    {
        const bool branch_taken_0x37bed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BED8u;
        // 0x37bedc: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bed8) {
            ctx->pc = 0x37BEECu;
            goto label_37beec;
        }
    }
    ctx->pc = 0x37BEE0u;
label_37bee0:
    // 0x37bee0: 0xc0defc4  jal         func_37BF10
    ctx->pc = 0x37BEE0u;
    SET_GPR_U32(ctx, 31, 0x37BEE8u);
    ctx->pc = 0x37BEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BEE0u;
    // 0x37bee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37BF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37BF10u, 0x37BEE0u, 0x37BEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BEE8u;
label_37bee8:
    // 0x37bee8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x37bee8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_37beec:
    // 0x37beec: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x37beecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_37bef0:
    // 0x37bef0: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x37bef0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x37bef4: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x37BEF4u;
    {
        const bool branch_taken_0x37bef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37bef4) {
            ctx->pc = 0x37BEF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BEF4u;
            // 0x37bef8: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BEB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37beb8;
        }
    }
    ctx->pc = 0x37BEFCu;
    // 0x37befc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37befcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bf00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37bf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bf04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37bf04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bf08: 0x3e00008  jr          $ra
    ctx->pc = 0x37BF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BF08u;
        // 0x37bf0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BF10u;
}
