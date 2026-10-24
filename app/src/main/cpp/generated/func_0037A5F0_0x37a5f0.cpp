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

// Function: func_0037A5F0
// Address: 0x37a5f0 - 0x37a668
void func_0037A5F0_0x37a5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037A5F0_0x37a5f0");
#endif

    switch (ctx->pc) {
        case 0x37a610u: goto label_37a610;
        case 0x37a640u: goto label_37a640;
        case 0x37a650u: goto label_37a650;
        default: break;
    }

    ctx->pc = 0x37a5f0u;

    // 0x37a5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37a5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37a5f4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37a5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x37a5f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x37a5f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a5fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x37a5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x37a600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37a600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37a604: 0x263000cc  addiu       $s0, $s1, 0xCC
    ctx->pc = 0x37a604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 204));
    // 0x37a608: 0xc0e1d0c  jal         func_387430
    ctx->pc = 0x37A608u;
    SET_GPR_U32(ctx, 31, 0x37A610u);
    ctx->pc = 0x37A60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A608u;
    // 0x37a60c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x387430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x387430u, 0x37A608u, 0x37A610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A610u;
label_37a610:
    // 0x37a610: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x37A610u;
    {
        const bool branch_taken_0x37a610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x37a610) {
            ctx->pc = 0x37A614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37A610u;
            // 0x37a614: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37A654u;
            goto label_37a654;
        }
    }
    ctx->pc = 0x37A618u;
    // 0x37a618: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x37a618u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x37a61c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x37a620: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37A620u;
    {
        const bool branch_taken_0x37a620 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x37A624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A620u;
        // 0x37a624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a620) {
            ctx->pc = 0x37A638u;
            goto label_37a638;
        }
    }
    ctx->pc = 0x37A628u;
    // 0x37a628: 0x82030007  lb          $v1, 0x7($s0)
    ctx->pc = 0x37a628u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x37a62c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x37a62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x37a630: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37A630u;
    {
        const bool branch_taken_0x37a630 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x37A634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A630u;
        // 0x37a634: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a630) {
            ctx->pc = 0x37A654u;
            goto label_37a654;
        }
    }
    ctx->pc = 0x37A638u;
label_37a638:
    // 0x37a638: 0xc0e1be8  jal         func_386FA0
    ctx->pc = 0x37A638u;
    SET_GPR_U32(ctx, 31, 0x37A640u);
    ctx->pc = 0x37A63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A638u;
    // 0x37a63c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x386FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x386FA0u, 0x37A638u, 0x37A640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A640u;
label_37a640:
    // 0x37a640: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37A640u;
    {
        const bool branch_taken_0x37a640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37A644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A640u;
        // 0x37a644: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a640) {
            ctx->pc = 0x37A650u;
            goto label_37a650;
        }
    }
    ctx->pc = 0x37A648u;
    // 0x37a648: 0xc0e1c38  jal         func_3870E0
    ctx->pc = 0x37A648u;
    SET_GPR_U32(ctx, 31, 0x37A650u);
    ctx->pc = 0x37A64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37A648u;
    // 0x37a64c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3870E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3870E0u, 0x37A648u, 0x37A650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37A650u;
label_37a650:
    // 0x37a650: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37a650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37a654:
    // 0x37a654: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a654u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a658: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37a658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a65c: 0x3e00008  jr          $ra
    ctx->pc = 0x37A65Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37A65Cu;
        // 0x37a660: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37A65Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37A664u;
    // 0x37a664: 0x0  nop
    ctx->pc = 0x37a664u;
    // NOP
    ctx->pc = 0x37a668u;
}
