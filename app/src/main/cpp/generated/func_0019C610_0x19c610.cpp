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

// Function: func_0019C610
// Address: 0x19c610 - 0x19c670
void func_0019C610_0x19c610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0019C610_0x19c610");
#endif

    switch (ctx->pc) {
        case 0x19c64cu: goto label_19c64c;
        case 0x19c65cu: goto label_19c65c;
        default: break;
    }

    ctx->pc = 0x19c610u;

    // 0x19c610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19c610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19c614: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19c614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x19c618: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19c618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19c61c: 0x24425c78  addiu       $v0, $v0, 0x5C78
    ctx->pc = 0x19c61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23672));
    // 0x19c620: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19c620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19c624: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19c624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c62c: 0xae020214  sw          $v0, 0x214($s0)
    ctx->pc = 0x19c62cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 2));
    // 0x19c630: 0x8e030650  lw          $v1, 0x650($s0)
    ctx->pc = 0x19c630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x19c634: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x19C634u;
    {
        const bool branch_taken_0x19c634 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C634u;
        // 0x19c638: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c634) {
            ctx->pc = 0x19C650u;
            goto label_19c650;
        }
    }
    ctx->pc = 0x19C63Cu;
    // 0x19c63c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x19c63cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x19c640: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x19c640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c644: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19C644u;
    SET_GPR_U32(ctx, 31, 0x19C64Cu);
    ctx->pc = 0x19C648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C644u;
    // 0x19c648: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19C644u, 0x19C64Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C64Cu;
label_19c64c:
    // 0x19c64c: 0xae000650  sw          $zero, 0x650($s0)
    ctx->pc = 0x19c64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1616), GPR_U32(ctx, 0));
label_19c650:
    // 0x19c650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c654: 0xc071f78  jal         func_1C7DE0
    ctx->pc = 0x19C654u;
    SET_GPR_U32(ctx, 31, 0x19C65Cu);
    ctx->pc = 0x19C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C654u;
    // 0x19c658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7DE0u, 0x19C654u, 0x19C65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C65Cu;
label_19c65c:
    // 0x19c65c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19c65cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19c660: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19c660u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19c664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c668: 0x3e00008  jr          $ra
    ctx->pc = 0x19C668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C668u;
        // 0x19c66c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C670u;
}
