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

// Function: func_003427F0
// Address: 0x3427f0 - 0x342870
void func_003427F0_0x3427f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003427F0_0x3427f0");
#endif

    ctx->pc = 0x3427f0u;

    // 0x3427f0: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x3427f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x3427f4: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x3427f4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x3427f8: 0xb5c00  sll         $t3, $t3, 16
    ctx->pc = 0x3427f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 16));
    // 0x3427fc: 0x8c43c660  lw          $v1, -0x39A0($v0)
    ctx->pc = 0x3427fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952544)));
    // 0x342800: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x342800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x342804: 0xa6403  sra         $t4, $t2, 16
    ctx->pc = 0x342804u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 10), 16));
    // 0x342808: 0xb6c03  sra         $t5, $t3, 16
    ctx->pc = 0x342808u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 11), 16));
    // 0x34280c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34280cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x342810: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x342810u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342814: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x342814u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342818: 0x8fae0030  lw          $t6, 0x30($sp)
    ctx->pc = 0x342818u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34281c: 0x87af0038  lh          $t7, 0x38($sp)
    ctx->pc = 0x34281cu;
    SET_GPR_S32(ctx, 15, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x342820: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x342820u;
    {
        const bool branch_taken_0x342820 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x342824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342820u;
        // 0x342824: 0x87a20040  lh          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x342820) {
            ctx->pc = 0x342840u;
            goto label_342840;
        }
    }
    ctx->pc = 0x342828u;
    // 0x342828: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x342828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34282c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x34282cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x342830: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x342830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x342834: 0x80d092a  j           func_3424A8
    ctx->pc = 0x342834u;
    ctx->pc = 0x342838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342834u;
    // 0x342838: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3424A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3424A8u, 0x342834u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34283Cu;
    // 0x34283c: 0x0  nop
    ctx->pc = 0x34283cu;
    // NOP
label_342840:
    // 0x342840: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x342840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x342844: 0x180502d  daddu       $t2, $t4, $zero
    ctx->pc = 0x342844u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x342848: 0x1a0582d  daddu       $t3, $t5, $zero
    ctx->pc = 0x342848u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34284c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x34284cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x342850: 0xafae0030  sw          $t6, 0x30($sp)
    ctx->pc = 0x342850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 14));
    // 0x342854: 0xafaf0038  sw          $t7, 0x38($sp)
    ctx->pc = 0x342854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 15));
    // 0x342858: 0x80d0838  j           func_3420E0
    ctx->pc = 0x342858u;
    ctx->pc = 0x34285Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x342858u;
    // 0x34285c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3420E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3420E0u, 0x342858u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x342860u;
    // 0x342860: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x342860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x342864: 0x0  nop
    ctx->pc = 0x342864u;
    // NOP
    // 0x342868: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x342868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x34286c: 0x0  nop
    ctx->pc = 0x34286cu;
    // NOP
    ctx->pc = 0x342870u;
}
