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

// Function: func_0035F5F0
// Address: 0x35f5f0 - 0x35f698
void func_0035F5F0_0x35f5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035F5F0_0x35f5f0");
#endif

    switch (ctx->pc) {
        case 0x35f630u: goto label_35f630;
        default: break;
    }

    ctx->pc = 0x35f5f0u;

    // 0x35f5f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x35f5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x35f5f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35f5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35f5f8: 0x88100  sll         $s0, $t0, 4
    ctx->pc = 0x35f5f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x35f5fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35f5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35f600: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x35f600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f604: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35f604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35f608: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x35f608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f60c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x35f60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x35f610: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x35f610u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x35f614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x35f618: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x35f618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x35f61c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35f61cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f620: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x35f620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
    // 0x35f624: 0x8e450044  lw          $a1, 0x44($s2)
    ctx->pc = 0x35f624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x35f628: 0xc0d7aa2  jal         func_35EA88
    ctx->pc = 0x35F628u;
    SET_GPR_U32(ctx, 31, 0x35F630u);
    ctx->pc = 0x35F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35F628u;
    // 0x35f62c: 0xac650008  sw          $a1, 0x8($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35EA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35EA88u, 0x35F628u, 0x35F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35F630u;
label_35f630:
    // 0x35f630: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x35f630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x35f634: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x35f634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35f638: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35f638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35f63c: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35F63Cu;
    {
        const bool branch_taken_0x35f63c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x35F640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F63Cu;
        // 0x35f640: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f63c) {
            ctx->pc = 0x35F660u;
            goto label_35f660;
        }
    }
    ctx->pc = 0x35F644u;
    // 0x35f644: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x35f644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x35f648: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x35f648u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x35f64c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35f650: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x35f650u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x35f654: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x35F654u;
    {
        const bool branch_taken_0x35f654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35F658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F654u;
        // 0x35f658: 0xac82000c  sw          $v0, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f654) {
            ctx->pc = 0x35F668u;
            goto label_35f668;
        }
    }
    ctx->pc = 0x35F65Cu;
    // 0x35f65c: 0x0  nop
    ctx->pc = 0x35f65cu;
    // NOP
label_35f660:
    // 0x35f660: 0x8e420048  lw          $v0, 0x48($s2)
    ctx->pc = 0x35f660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x35f664: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x35f664u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_35f668:
    // 0x35f668: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x35f668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x35f66c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x35F66Cu;
    {
        const bool branch_taken_0x35f66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35F670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F66Cu;
        // 0x35f670: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35f66c) {
            ctx->pc = 0x35F678u;
            goto label_35f678;
        }
    }
    ctx->pc = 0x35F674u;
    // 0x35f674: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x35f674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_35f678:
    // 0x35f678: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35f678u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35f67c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35f67cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35f680: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35f680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35f684: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x35f684u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35f688: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x35f688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35f68c: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x35f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x35f690: 0x3e00008  jr          $ra
    ctx->pc = 0x35F690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35F694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35F690u;
        // 0x35f694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35F690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35F698u;
}
