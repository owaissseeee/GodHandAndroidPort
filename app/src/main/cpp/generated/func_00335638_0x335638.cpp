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

// Function: func_00335638
// Address: 0x335638 - 0x3356b0
void func_00335638_0x335638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00335638_0x335638");
#endif

    switch (ctx->pc) {
        case 0x33566cu: goto label_33566c;
        case 0x335684u: goto label_335684;
        case 0x33568cu: goto label_33568c;
        default: break;
    }

    ctx->pc = 0x335638u;

    // 0x335638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x335638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x33563c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33563cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x335640: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x335640u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335644: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x335644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x335648: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x335648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33564c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x33564cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x335650: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x335650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335654: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x335654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x335658: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x335658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33565c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x33565cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x335660: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x335660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x335664: 0xc0cd736  jal         func_335CD8
    ctx->pc = 0x335664u;
    SET_GPR_U32(ctx, 31, 0x33566Cu);
    ctx->pc = 0x335668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335664u;
    // 0x335668: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CD8u, 0x335664u, 0x33566Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33566Cu;
label_33566c:
    // 0x33566c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33566cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x335670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335674: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x335674u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335678: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x335678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33567c: 0xc0cd5ac  jal         func_3356B0
    ctx->pc = 0x33567Cu;
    SET_GPR_U32(ctx, 31, 0x335684u);
    ctx->pc = 0x335680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33567Cu;
    // 0x335680: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3356B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356B0u, 0x33567Cu, 0x335684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335684u;
label_335684:
    // 0x335684: 0xc0cd738  jal         func_335CE0
    ctx->pc = 0x335684u;
    SET_GPR_U32(ctx, 31, 0x33568Cu);
    ctx->pc = 0x335688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335684u;
    // 0x335688: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335CE0u, 0x335684u, 0x33568Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33568Cu;
label_33568c:
    // 0x33568c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x33568cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x335690: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x335690u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335694: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x335694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335698: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x335698u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33569c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x33569cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3356a0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3356a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3356a4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3356a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3356a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3356A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3356ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356A8u;
        // 0x3356ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3356A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3356B0u;
}
