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

// Function: ForwardInitObject_316620
// Address: 0x316620 - 0x316690
void ForwardInitObject_316620_0x316620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitObject_316620_0x316620");
#endif

    switch (ctx->pc) {
        case 0x316654u: goto label_316654;
        case 0x31666cu: goto label_31666c;
        case 0x316674u: goto label_316674;
        default: break;
    }

    ctx->pc = 0x316620u;

    // 0x316620: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x316620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316624: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x316624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316628: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316628u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31662c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x31662cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316630: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316634: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x316634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316638: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316638u;
    {
        const bool branch_taken_0x316638 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316638u;
        // 0x31663c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316638) {
            ctx->pc = 0x31667Cu;
            goto label_31667c;
        }
    }
    ctx->pc = 0x316640u;
    // 0x316640: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x316640u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316644: 0x24040630  addiu       $a0, $zero, 0x630
    ctx->pc = 0x316644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    // 0x316648: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    ctx->pc = 0x316648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31664c: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x31664Cu;
    SET_GPR_U32(ctx, 31, 0x316654u);
    ctx->pc = 0x316650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31664Cu;
    // 0x316650: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x31664Cu, 0x316654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316654u;
label_316654:
    // 0x316654: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x316654u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316658: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316658u;
    {
        const bool branch_taken_0x316658 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316658u;
        // 0x31665c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316658) {
            ctx->pc = 0x31667Cu;
            goto label_31667c;
        }
    }
    ctx->pc = 0x316660u;
    // 0x316660: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x316660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316664: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x316664u;
    SET_GPR_U32(ctx, 31, 0x31666Cu);
    ctx->pc = 0x316668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316664u;
    // 0x316668: 0x24060630  addiu       $a2, $zero, 0x630 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x316664u, 0x31666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31666Cu;
label_31666c:
    // 0x31666c: 0xc06e3fe  jal         func_1B8FF8
    ctx->pc = 0x31666Cu;
    SET_GPR_U32(ctx, 31, 0x316674u);
    ctx->pc = 0x316670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31666Cu;
    // 0x316670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B8FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8FF8u, 0x31666Cu, 0x316674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x316674u;
label_316674:
    // 0x316674: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x316674u;
    {
        const bool branch_taken_0x316674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x316678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316674u;
        // 0x316678: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316674) {
            ctx->pc = 0x316684u;
            goto label_316684;
        }
    }
    ctx->pc = 0x31667Cu;
label_31667c:
    // 0x31667c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31667cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316680: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x316680u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_316684:
    // 0x316684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x316684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x316688: 0x3e00008  jr          $ra
    ctx->pc = 0x316688u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316688u;
        // 0x31668c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316688u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x316690u;
}
