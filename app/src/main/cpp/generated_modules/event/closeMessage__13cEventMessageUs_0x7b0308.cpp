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
// Function: closeMessage__13cEventMessageUs
// Address: 0x7b0308 - 0x7b0380
void closeMessage__13cEventMessageUs_0x7b0308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("closeMessage__13cEventMessageUs_0x7b0308");
#endif

    switch (ctx->pc) {
        case 0x7b032cu: goto label_7b032c;
        case 0x7b0348u: goto label_7b0348;
        case 0x7b035cu: goto label_7b035c;
        default: break;
    }

    ctx->pc = 0x7b0308u;

    // 0x7b0308: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x7b0308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x7b030c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7b030cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7b0310: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7b0310u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0314: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7b0314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7b0318: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7b0318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7b031c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7b031cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7b0320: 0x30b0ffff  andi        $s0, $a1, 0xFFFF
    ctx->pc = 0x7b0320u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x7b0324: 0xc1ebafa  jal         func_7AEBE8
    ctx->pc = 0x7B0324u;
    SET_GPR_U32(ctx, 31, 0x7B032Cu);
    ctx->pc = 0x7B0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0324u;
    // 0x7b0328: 0x24845280  addiu       $a0, $a0, 0x5280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7AEBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7AEBE8u, 0x7B0324u, 0x7B032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B032Cu;
label_7b032c:
    // 0x7b032c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x7B032Cu;
    {
        const bool branch_taken_0x7b032c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7b032c) {
            ctx->pc = 0x7B0330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7B032Cu;
            // 0x7b0330: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7B036Cu;
            goto label_7b036c;
        }
    }
    ctx->pc = 0x7B0334u;
    // 0x7b0334: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7b0334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x7b0338: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7B0338u;
    {
        const bool branch_taken_0x7b0338 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x7B033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0338u;
        // 0x7b033c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0338) {
            ctx->pc = 0x7B0350u;
            goto label_7b0350;
        }
    }
    ctx->pc = 0x7B0340u;
    // 0x7b0340: 0xc0abb34  jal         func_2AECD0
    ctx->pc = 0x7B0340u;
    SET_GPR_U32(ctx, 31, 0x7B0348u);
    ctx->pc = 0x7B0344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0340u;
    // 0x7b0344: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AECD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AECD0u, 0x7B0340u, 0x7B0348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B0348u;
label_7b0348:
    // 0x7b0348: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7B0348u;
    {
        const bool branch_taken_0x7b0348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7B034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0348u;
        // 0x7b034c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7b0348) {
            ctx->pc = 0x7B0360u;
            goto label_7b0360;
        }
    }
    ctx->pc = 0x7B0350u;
label_7b0350:
    // 0x7b0350: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7b0350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7b0354: 0xc0abb5c  jal         func_2AED70
    ctx->pc = 0x7B0354u;
    SET_GPR_U32(ctx, 31, 0x7B035Cu);
    ctx->pc = 0x7B0358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7B0354u;
    // 0x7b0358: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AED70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AED70u, 0x7B0354u, 0x7B035Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7B035Cu;
label_7b035c:
    // 0x7b035c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x7b035cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_7b0360:
    // 0x7b0360: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x7b0360u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b0364: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x7b0364u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x7b0368: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7b0368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_7b036c:
    // 0x7b036c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7b036cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7b0370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7b0370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7b0374: 0x3e00008  jr          $ra
    ctx->pc = 0x7B0374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7B0378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7B0374u;
        // 0x7b0378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7B0374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7B037Cu;
    // 0x7b037c: 0x0  nop
    ctx->pc = 0x7b037cu;
    // NOP
    ctx->pc = 0x7b0380u;
}
} // namespace gh_event
