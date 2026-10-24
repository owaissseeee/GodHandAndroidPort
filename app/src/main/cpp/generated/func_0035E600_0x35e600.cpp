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

// Function: func_0035E600
// Address: 0x35e600 - 0x35e670
void func_0035E600_0x35e600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E600_0x35e600");
#endif

    switch (ctx->pc) {
        case 0x35e628u: goto label_35e628;
        case 0x35e640u: goto label_35e640;
        default: break;
    }

    ctx->pc = 0x35e600u;

    // 0x35e600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e608: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e60c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e610: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e610u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e614: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e618: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e61c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e620: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E620u;
    SET_GPR_U32(ctx, 31, 0x35E628u);
    ctx->pc = 0x35E624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E620u;
    // 0x35e624: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E620u, 0x35E628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E628u;
label_35e628:
    // 0x35e628: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e62c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e62cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e630: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x35E630u;
    {
        const bool branch_taken_0x35e630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E630u;
        // 0x35e634: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e630) {
            ctx->pc = 0x35E658u;
            goto label_35e658;
        }
    }
    ctx->pc = 0x35E638u;
    // 0x35e638: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35E638u;
    SET_GPR_U32(ctx, 31, 0x35E640u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35E638u, 0x35E640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E640u;
label_35e640:
    // 0x35e640: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35E640u;
    {
        const bool branch_taken_0x35e640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E640u;
        // 0x35e644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e640) {
            ctx->pc = 0x35E65Cu;
            goto label_35e65c;
        }
    }
    ctx->pc = 0x35E648u;
    // 0x35e648: 0x92230023  lbu         $v1, 0x23($s1)
    ctx->pc = 0x35e648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x35e64c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e650: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x35e650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x35e654: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e654u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e658:
    // 0x35e658: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e65c:
    // 0x35e65c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e65cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e660: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e664: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e668: 0x3e00008  jr          $ra
    ctx->pc = 0x35E668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E668u;
        // 0x35e66c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E670u;
}
