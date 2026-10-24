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

// Function: cIDBase_setDispChildren
// Address: 0x2aa5f0 - 0x2aa6e0
void cIDBase_setDispChildren_0x2aa5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDBase_setDispChildren_0x2aa5f0");
#endif

    switch (ctx->pc) {
        case 0x2aa650u: goto label_2aa650;
        case 0x2aa698u: goto label_2aa698;
        default: break;
    }

    ctx->pc = 0x2aa5f0u;

label_2aa5f0:
    // 0x2aa5f0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2aa5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2aa5f4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2aa5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2aa5f8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2aa5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2aa5fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2aa5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa600: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2aa600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2aa604: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2aa604u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa608: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2aa608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2aa60c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2aa60cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa610: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2aa610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2aa614: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2aa614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2aa618: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2aa618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2aa61c: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2aa61cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2aa620: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2aa620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2aa624: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aa624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aa628: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2aa628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2aa62c: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2AA62Cu;
    {
        const bool branch_taken_0x2aa62c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2AA630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA62Cu;
        // 0x2aa630: 0xc0b02d  daddu       $s6, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa62c) {
            ctx->pc = 0x2AA6B0u;
            goto label_2aa6b0;
        }
    }
    ctx->pc = 0x2AA634u;
    // 0x2aa634: 0x3c12dfff  lui         $s2, 0xDFFF
    ctx->pc = 0x2aa634u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)57343 << 16));
    // 0x2aa638: 0x3ad70001  xori        $s7, $s6, 0x1
    ctx->pc = 0x2aa638u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)1);
    // 0x2aa63c: 0x3c1e2000  lui         $fp, 0x2000
    ctx->pc = 0x2aa63cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8192 << 16));
    // 0x2aa640: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2aa640u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
    // 0x2aa644: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2aa644u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa648: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2aa648u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa64c: 0x0  nop
    ctx->pc = 0x2aa64cu;
    // NOP
label_2aa650:
    // 0x2aa650: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2aa650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa654: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x2aa654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2aa658: 0x52630010  beql        $s3, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AA658u;
    {
        const bool branch_taken_0x2aa658 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        if (branch_taken_0x2aa658) {
            ctx->pc = 0x2AA65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA658u;
            // 0x2aa65c: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA69Cu;
            goto label_2aa69c;
        }
    }
    ctx->pc = 0x2AA660u;
    // 0x2aa660: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2aa660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2aa664: 0x5662000d  bnel        $s3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2AA664u;
    {
        const bool branch_taken_0x2aa664 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2aa664) {
            ctx->pc = 0x2AA668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA664u;
            // 0x2aa668: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA69Cu;
            goto label_2aa69c;
        }
    }
    ctx->pc = 0x2AA66Cu;
    // 0x2aa66c: 0x12e00003  beqz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AA66Cu;
    {
        const bool branch_taken_0x2aa66c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA66Cu;
        // 0x2aa670: 0x8c62002c  lw          $v0, 0x2C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa66c) {
            ctx->pc = 0x2AA67Cu;
            goto label_2aa67c;
        }
    }
    ctx->pc = 0x2AA674u;
    // 0x2aa674: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA674u;
    {
        const bool branch_taken_0x2aa674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AA678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA674u;
        // 0x2aa678: 0x5e1025  or          $v0, $v0, $fp (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa674) {
            ctx->pc = 0x2AA680u;
            goto label_2aa680;
        }
    }
    ctx->pc = 0x2AA67Cu;
label_2aa67c:
    // 0x2aa67c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2aa67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2aa680:
    // 0x2aa680: 0xac62002c  sw          $v0, 0x2C($v1)
    ctx->pc = 0x2aa680u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
    // 0x2aa684: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x2aa684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2aa688: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2aa688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa68c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2aa68cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aa690: 0xc0aa97c  jal         func_2AA5F0
    ctx->pc = 0x2AA690u;
    SET_GPR_U32(ctx, 31, 0x2AA698u);
    ctx->pc = 0x2AA694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AA690u;
    // 0x2aa694: 0xb52821  addu        $a1, $a1, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA5F0u;
    goto label_2aa5f0;
    ctx->pc = 0x2AA698u;
label_2aa698:
    // 0x2aa698: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2aa698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2aa69c:
    // 0x2aa69c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2aa69cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2aa6a0: 0x26b500ac  addiu       $s5, $s5, 0xAC
    ctx->pc = 0x2aa6a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 172));
    // 0x2aa6a4: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2aa6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2aa6a8: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x2AA6A8u;
    {
        const bool branch_taken_0x2aa6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2AA6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6A8u;
        // 0x2aa6ac: 0x269400ac  addiu       $s4, $s4, 0xAC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 172));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa6a8) {
            ctx->pc = 0x2AA650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2aa650;
        }
    }
    ctx->pc = 0x2AA6B0u;
label_2aa6b0:
    // 0x2aa6b0: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2aa6b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2aa6b4: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2aa6b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2aa6b8: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2aa6b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2aa6bc: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2aa6bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2aa6c0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2aa6c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aa6c4: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2aa6c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aa6c8: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2aa6c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aa6cc: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2aa6ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aa6d0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2aa6d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aa6d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aa6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aa6d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA6D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA6D8u;
        // 0x2aa6dc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA6D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA6E0u;
}
