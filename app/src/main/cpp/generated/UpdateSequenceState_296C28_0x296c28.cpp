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

// Function: UpdateSequenceState_296C28
// Address: 0x296c28 - 0x296ca8
void UpdateSequenceState_296C28_0x296c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("UpdateSequenceState_296C28_0x296c28");
#endif

    switch (ctx->pc) {
        case 0x296c5cu: goto label_296c5c;
        case 0x296c70u: goto label_296c70;
        case 0x296c80u: goto label_296c80;
        default: break;
    }

    ctx->pc = 0x296c28u;

    // 0x296c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296c2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x296c34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296c34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296c38: 0x82030005  lb          $v1, 0x5($s0)
    ctx->pc = 0x296c38u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x296c3c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x296C3Cu;
    {
        const bool branch_taken_0x296c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C3Cu;
        // 0x296c40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c3c) {
            ctx->pc = 0x296C54u;
            goto label_296c54;
        }
    }
    ctx->pc = 0x296C44u;
    // 0x296c44: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x296C44u;
    {
        const bool branch_taken_0x296c44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x296C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C44u;
        // 0x296c48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c44) {
            ctx->pc = 0x296C68u;
            goto label_296c68;
        }
    }
    ctx->pc = 0x296C4Cu;
    // 0x296c4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x296C4Cu;
    {
        const bool branch_taken_0x296c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C4Cu;
        // 0x296c50: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c4c) {
            ctx->pc = 0x296C9Cu;
            goto label_296c9c;
        }
    }
    ctx->pc = 0x296C54u;
label_296c54:
    // 0x296c54: 0xc0a5b2a  jal         func_296CA8
    ctx->pc = 0x296C54u;
    SET_GPR_U32(ctx, 31, 0x296C5Cu);
    ctx->pc = 0x296C58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C54u;
    // 0x296c58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296CA8u, 0x296C54u, 0x296C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C5Cu;
label_296c5c:
    // 0x296c5c: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x296c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x296c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x296c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x296c64: 0xa2020005  sb          $v0, 0x5($s0)
    ctx->pc = 0x296c64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
label_296c68:
    // 0x296c68: 0xc0a5b76  jal         func_296DD8
    ctx->pc = 0x296C68u;
    SET_GPR_U32(ctx, 31, 0x296C70u);
    ctx->pc = 0x296C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C68u;
    // 0x296c6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296DD8u, 0x296C68u, 0x296C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C70u;
label_296c70:
    // 0x296c70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x296C70u;
    {
        const bool branch_taken_0x296c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C70u;
        // 0x296c74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c70) {
            ctx->pc = 0x296C98u;
            goto label_296c98;
        }
    }
    ctx->pc = 0x296C78u;
    // 0x296c78: 0xc0a5bbc  jal         func_296EF0
    ctx->pc = 0x296C78u;
    SET_GPR_U32(ctx, 31, 0x296C80u);
    ctx->pc = 0x296C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296C78u;
    // 0x296c7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296EF0u, 0x296C78u, 0x296C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296C80u;
label_296c80:
    // 0x296c80: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x296c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x296c84: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x296c84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x296c88: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x296c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x296c8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x296c90: 0xa2000005  sb          $zero, 0x5($s0)
    ctx->pc = 0x296c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x296c94: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x296c94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
label_296c98:
    // 0x296c98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x296c98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_296c9c:
    // 0x296c9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x296c9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x296CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CA0u;
        // 0x296ca4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x296CA8u;
}
