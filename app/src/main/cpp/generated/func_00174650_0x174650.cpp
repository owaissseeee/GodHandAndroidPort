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

// Function: func_00174650
// Address: 0x174650 - 0x1746b0
void func_00174650_0x174650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00174650_0x174650");
#endif

    switch (ctx->pc) {
        case 0x174684u: goto label_174684;
        case 0x174698u: goto label_174698;
        case 0x1746a0u: goto label_1746a0;
        default: break;
    }

    ctx->pc = 0x174650u;

    // 0x174650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x174650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x174654: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x174654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x174658: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x174658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17465c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17465cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174660: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x174660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174664: 0x8e0205b0  lw          $v0, 0x5B0($s0)
    ctx->pc = 0x174664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1456)));
    // 0x174668: 0x8e040650  lw          $a0, 0x650($s0)
    ctx->pc = 0x174668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1616)));
    // 0x17466c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x17466cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x174670: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x174670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x174674: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x174674u;
    {
        const bool branch_taken_0x174674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x174678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174674u;
        // 0x174678: 0xae0205b0  sw          $v0, 0x5B0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1456), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174674) {
            ctx->pc = 0x174684u;
            goto label_174684;
        }
    }
    ctx->pc = 0x17467Cu;
    // 0x17467c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x17467Cu;
    SET_GPR_U32(ctx, 31, 0x174684u);
    ctx->pc = 0x174680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17467Cu;
    // 0x174680: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x17467Cu, 0x174684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174684u;
label_174684:
    // 0x174684: 0xde050540  ld          $a1, 0x540($s0)
    ctx->pc = 0x174684u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 1344)));
    // 0x174688: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x174688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x17468c: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x17468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x174690: 0xc04cc6e  jal         func_1331B8
    ctx->pc = 0x174690u;
    SET_GPR_U32(ctx, 31, 0x174698u);
    ctx->pc = 0x174694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174690u;
    // 0x174694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B8u, 0x174690u, 0x174698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174698u;
label_174698:
    // 0x174698: 0xc071f82  jal         func_1C7E08
    ctx->pc = 0x174698u;
    SET_GPR_U32(ctx, 31, 0x1746A0u);
    ctx->pc = 0x17469Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174698u;
    // 0x17469c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7E08u, 0x174698u, 0x1746A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1746A0u;
label_1746a0:
    // 0x1746a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1746a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1746a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1746a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1746A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1746ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1746A8u;
        // 0x1746ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1746A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1746B0u;
}
