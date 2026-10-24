#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: movePlay__10cEventFade
// Address: 0x7aed20 - 0x7aedb0
void movePlay__10cEventFade_0x7aed20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("movePlay__10cEventFade_0x7aed20");
#endif

    switch (ctx->pc) {
        case 0x7aed3cu: goto label_7aed3c;
        case 0x7aed4cu: goto label_7aed4c;
        case 0x7aed5cu: goto label_7aed5c;
        case 0x7aed8cu: goto label_7aed8c;
        case 0x7aed9cu: goto label_7aed9c;
        default: break;
    }

    ctx->pc = 0x7aed20u;

    // 0x7aed20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7aed20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7aed24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x7aed24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7aed28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7aed28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7aed2c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7aed2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7aed30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7aed30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7aed34: 0xc1ed14a  jal         func_7B4528
    ctx->pc = 0x7AED34u;
    SET_GPR_U32(ctx, 31, 0x7AED3Cu);
    ctx->pc = 0x7AED38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AED34u;
    // 0x7aed38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4528u, 0x7AED34u, 0x7AED3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AED3Cu;
label_7aed3c:
    // 0x7aed3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7aed3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aed40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7aed40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7aed44: 0xc1ed0e6  jal         func_7B4398
    ctx->pc = 0x7AED44u;
    SET_GPR_U32(ctx, 31, 0x7AED4Cu);
    ctx->pc = 0x7AED48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AED44u;
    // 0x7aed48: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7B4398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7B4398u, 0x7AED44u, 0x7AED4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AED4Cu;
label_7aed4c:
    // 0x7aed4c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AED4Cu;
    {
        const bool branch_taken_0x7aed4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AED4Cu;
        // 0x7aed50: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aed4c) {
            ctx->pc = 0x7AED64u;
            goto label_7aed64;
        }
    }
    ctx->pc = 0x7AED54u;
    // 0x7aed54: 0xc1ebc1e  jal         func_7AF078
    ctx->pc = 0x7AED54u;
    SET_GPR_U32(ctx, 31, 0x7AED5Cu);
    ctx->pc = 0x7AED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AED54u;
    // 0x7aed58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AF078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AF078u, 0x7AED54u, 0x7AED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AED5Cu;
label_7aed5c:
    // 0x7aed5c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x7AED5Cu;
    {
        const bool branch_taken_0x7aed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AED5Cu;
        // 0x7aed60: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aed5c) {
            ctx->pc = 0x7AEDA0u;
            goto label_7aeda0;
        }
    }
    ctx->pc = 0x7AED64u;
label_7aed64:
    // 0x7aed64: 0x92020008  lbu         $v0, 0x8($s0)
    ctx->pc = 0x7aed64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x7aed68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x7aed68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x7aed6c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x7AED6Cu;
    {
        const bool branch_taken_0x7aed6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AED70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AED6Cu;
        // 0x7aed70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aed6c) {
            ctx->pc = 0x7AED94u;
            goto label_7aed94;
        }
    }
    ctx->pc = 0x7AED74u;
    // 0x7aed74: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7AED74u;
    {
        const bool branch_taken_0x7aed74 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x7aed74) {
            ctx->pc = 0x7AED94u;
            goto label_7aed94;
        }
    }
    ctx->pc = 0x7AED7Cu;
    // 0x7aed7c: 0x12060005  beq         $s0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7AED7Cu;
    {
        const bool branch_taken_0x7aed7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 6));
        if (branch_taken_0x7aed7c) {
            ctx->pc = 0x7AED94u;
            goto label_7aed94;
        }
    }
    ctx->pc = 0x7AED84u;
    // 0x7aed84: 0xc1ebb78  jal         func_7AEDE0
    ctx->pc = 0x7AED84u;
    SET_GPR_U32(ctx, 31, 0x7AED8Cu);
    ctx->pc = 0x7AED88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AED84u;
    // 0x7aed88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEDE0u, 0x7AED84u, 0x7AED8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AED8Cu;
label_7aed8c:
    // 0x7aed8c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7AED8Cu;
    {
        const bool branch_taken_0x7aed8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AED90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AED8Cu;
        // 0x7aed90: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7aed8c) {
            ctx->pc = 0x7AEDA0u;
            goto label_7aeda0;
        }
    }
    ctx->pc = 0x7AED94u;
label_7aed94:
    // 0x7aed94: 0xc1ebb6c  jal         func_7AEDB0
    ctx->pc = 0x7AED94u;
    SET_GPR_U32(ctx, 31, 0x7AED9Cu);
    ctx->pc = 0x7AED98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AED94u;
    // 0x7aed98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEDB0u, 0x7AED94u, 0x7AED9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AED9Cu;
label_7aed9c:
    // 0x7aed9c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7aed9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7aeda0:
    // 0x7aeda0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7aeda0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7aeda4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7aeda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7aeda8: 0x3e00008  jr          $ra
    ctx->pc = 0x7AEDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AEDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AEDA8u;
        // 0x7aedac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AEDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AEDB0u;
}
} // namespace gh_event
