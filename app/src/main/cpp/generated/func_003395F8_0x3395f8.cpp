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

// Function: func_003395F8
// Address: 0x3395f8 - 0x3396c8
void func_003395F8_0x3395f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003395F8_0x3395f8");
#endif

    switch (ctx->pc) {
        case 0x339630u: goto label_339630;
        case 0x3396b0u: goto label_3396b0;
        default: break;
    }

    ctx->pc = 0x3395f8u;

    // 0x3395f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3395f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3395fc: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x3395fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x339600: 0x24e23fb8  addiu       $v0, $a3, 0x3FB8
    ctx->pc = 0x339600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16312));
    // 0x339604: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x339604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x339608: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x339608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33960c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x33960cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x339610: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x339610u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339614: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x339614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x339618u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E3FBCu));
    // 0x33961c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x33961cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339620: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x339620u;
    {
        const bool branch_taken_0x339620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339620u;
        // 0x339624: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339620) {
            ctx->pc = 0x339654u;
            goto label_339654;
        }
    }
    ctx->pc = 0x339628u;
    // 0x339628: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x339628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33962c: 0x0  nop
    ctx->pc = 0x33962cu;
    // NOP
label_339630:
    // 0x339630: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x339630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x339634: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x339634u;
    {
        const bool branch_taken_0x339634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339634u;
        // 0x339638: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339634) {
            ctx->pc = 0x339654u;
            goto label_339654;
        }
    }
    ctx->pc = 0x33963Cu;
    // 0x33963c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339640: 0x0  nop
    ctx->pc = 0x339640u;
    // NOP
    // 0x339644: 0x0  nop
    ctx->pc = 0x339644u;
    // NOP
    // 0x339648: 0x0  nop
    ctx->pc = 0x339648u;
    // NOP
    // 0x33964c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x33964Cu;
    {
        const bool branch_taken_0x33964c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33964c) {
            ctx->pc = 0x339650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33964Cu;
            // 0x339650: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339630;
        }
    }
    ctx->pc = 0x339654u;
label_339654:
    // 0x339654: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x339654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x339658: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x339658u;
    {
        const bool branch_taken_0x339658 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x33965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339658u;
        // 0x33965c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339658) {
            ctx->pc = 0x3396B0u;
            goto label_3396b0;
        }
    }
    ctx->pc = 0x339660u;
    // 0x339660: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x339660u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x339664: 0x24e23fb8  addiu       $v0, $a3, 0x3FB8
    ctx->pc = 0x339664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16312));
    // 0x339668: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x339668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x33966c: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x33966cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x339670: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x339670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x339674: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x339674u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x339678: 0x24633f80  addiu       $v1, $v1, 0x3F80
    ctx->pc = 0x339678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16256));
    // 0x33967c: 0x24a55a50  addiu       $a1, $a1, 0x5A50
    ctx->pc = 0x33967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23120));
    // 0x339680: 0x24c69438  addiu       $a2, $a2, -0x6BC8
    ctx->pc = 0x339680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939704));
    // 0x339684: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x339684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339688: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x339688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x33968c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33968cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339690: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x339690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x339694: 0xae0a001c  sw          $t2, 0x1C($s0)
    ctx->pc = 0x339694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 10));
    // 0x339698: 0xae090020  sw          $t1, 0x20($s0)
    ctx->pc = 0x339698u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 9));
    // 0x33969c: 0xae080024  sw          $t0, 0x24($s0)
    ctx->pc = 0x33969cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 8));
    // 0x3396a0: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x3396a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
    // 0x3396a4: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x3396a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x3396a8: 0xc0ce5f2  jal         func_3397C8
    ctx->pc = 0x3396A8u;
    SET_GPR_U32(ctx, 31, 0x3396B0u);
    ctx->pc = 0x3396ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3396A8u;
    // 0x3396ac: 0xae10003c  sw          $s0, 0x3C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3397C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3397C8u, 0x3396A8u, 0x3396B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3396B0u;
label_3396b0:
    // 0x3396b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3396b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3396b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3396b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3396b8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3396b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3396bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3396BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3396C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3396BCu;
        // 0x3396c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3396BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3396C4u;
    // 0x3396c4: 0x0  nop
    ctx->pc = 0x3396c4u;
    // NOP
    ctx->pc = 0x3396c8u;
}
