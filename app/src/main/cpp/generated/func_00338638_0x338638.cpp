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

// Function: func_00338638
// Address: 0x338638 - 0x3386e0
void func_00338638_0x338638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338638_0x338638");
#endif

    switch (ctx->pc) {
        case 0x338674u: goto label_338674;
        case 0x338680u: goto label_338680;
        case 0x338694u: goto label_338694;
        case 0x3386a8u: goto label_3386a8;
        case 0x3386b0u: goto label_3386b0;
        default: break;
    }

    ctx->pc = 0x338638u;

    // 0x338638: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33863c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x33863cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x338640: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x338644: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x338644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338648: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x338648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33864c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x33864cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x338650: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x338650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x338654: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x338654u;
    {
        const bool branch_taken_0x338654 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x338658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338654u;
        // 0x338658: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338654) {
            ctx->pc = 0x33866Cu;
            goto label_33866c;
        }
    }
    ctx->pc = 0x33865Cu;
    // 0x33865c: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x33865cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x338660: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x338660u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x338664: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x338664u;
    {
        const bool branch_taken_0x338664 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x338668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338664u;
        // 0x338668: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338664) {
            ctx->pc = 0x3386C8u;
            goto label_3386c8;
        }
    }
    ctx->pc = 0x33866Cu;
label_33866c:
    // 0x33866c: 0xc0ce258  jal         func_338960
    ctx->pc = 0x33866Cu;
    SET_GPR_U32(ctx, 31, 0x338674u);
    ctx->pc = 0x338670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33866Cu;
    // 0x338670: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338960u, 0x33866Cu, 0x338674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338674u;
label_338674:
    // 0x338674: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x338678: 0x24502b68  addiu       $s0, $v0, 0x2B68
    ctx->pc = 0x338678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11112));
    // 0x33867c: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x33867cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_338680:
    // 0x338680: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x338680u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338684: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x338684u;
    {
        const bool branch_taken_0x338684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x338684) {
            ctx->pc = 0x338688u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338684u;
            // 0x338688: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338698u;
            goto label_338698;
        }
    }
    ctx->pc = 0x33868Cu;
    // 0x33868c: 0xc0ce11e  jal         func_338478
    ctx->pc = 0x33868Cu;
    SET_GPR_U32(ctx, 31, 0x338694u);
    ctx->pc = 0x338690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33868Cu;
    // 0x338690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x338478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338478u, 0x33868Cu, 0x338694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338694u;
label_338694:
    // 0x338694: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x338694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_338698:
    // 0x338698: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x338698u;
    {
        const bool branch_taken_0x338698 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x33869Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338698u;
        // 0x33869c: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338698) {
            ctx->pc = 0x338680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338680;
        }
    }
    ctx->pc = 0x3386A0u;
    // 0x3386a0: 0xc0ce25e  jal         func_338978
    ctx->pc = 0x3386A0u;
    SET_GPR_U32(ctx, 31, 0x3386A8u);
    ctx->pc = 0x338978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x338978u, 0x3386A0u, 0x3386A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3386A8u;
label_3386a8:
    // 0x3386a8: 0xc0d004c  jal         func_340130
    ctx->pc = 0x3386A8u;
    SET_GPR_U32(ctx, 31, 0x3386B0u);
    ctx->pc = 0x340130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x340130u, 0x3386A8u, 0x3386B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3386B0u;
label_3386b0:
    // 0x3386b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3386b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3386b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3386b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3386b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3386b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3386bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3386bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3386c0: 0x80cec80  j           func_33B200
    ctx->pc = 0x3386C0u;
    ctx->pc = 0x3386C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3386C0u;
    // 0x3386c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B200u, 0x3386C0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3386C8u;
label_3386c8:
    // 0x3386c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3386c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3386cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3386ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3386d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3386d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3386d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3386D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3386D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386D4u;
        // 0x3386d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3386D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3386DCu;
    // 0x3386dc: 0x0  nop
    ctx->pc = 0x3386dcu;
    // NOP
    ctx->pc = 0x3386e0u;
}
