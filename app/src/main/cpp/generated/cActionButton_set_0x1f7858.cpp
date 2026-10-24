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

// Function: cActionButton_set
// Address: 0x1f7858 - 0x1f7900
void cActionButton_set_0x1f7858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cActionButton_set_0x1f7858");
#endif

    switch (ctx->pc) {
        case 0x1f789cu: goto label_1f789c;
        case 0x1f78d8u: goto label_1f78d8;
        default: break;
    }

    ctx->pc = 0x1f7858u;

    // 0x1f7858: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f7858u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1f785c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1f785cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1f7860: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1f7860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1f7864: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7868: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1f7868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1f786c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f786cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7870: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1f7870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1f7874: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1f7874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7878: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1f7878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x1f787c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f787cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7880: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1f7880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x1f7884: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1f7884u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7888: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1f7888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x1f788c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1f788cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7894: 0xc07dde6  jal         func_1F7798
    ctx->pc = 0x1F7894u;
    SET_GPR_U32(ctx, 31, 0x1F789Cu);
    ctx->pc = 0x1F7898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7894u;
    // 0x1f7898: 0x140b02d  daddu       $s6, $t2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7798u, 0x1F7894u, 0x1F789Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F789Cu;
label_1f789c:
    // 0x1f789c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f789cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1F78A0u;
    {
        const bool branch_taken_0x1f78a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F78A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78A0u;
        // 0x1f78a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f78a0) {
            ctx->pc = 0x1F78D8u;
            goto label_1f78d8;
        }
    }
    ctx->pc = 0x1F78A8u;
    // 0x1f78a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f78a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f78ac: 0xac71001c  sw          $s1, 0x1C($v1)
    ctx->pc = 0x1f78acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 17));
    // 0x1f78b0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f78b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78b4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1f78b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1f78b8: 0xac720020  sw          $s2, 0x20($v1)
    ctx->pc = 0x1f78b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 18));
    // 0x1f78bc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f78bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f78c0: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1f78c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f78c4: 0xac740010  sw          $s4, 0x10($v1)
    ctx->pc = 0x1f78c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 20));
    // 0x1f78c8: 0xac750014  sw          $s5, 0x14($v1)
    ctx->pc = 0x1f78c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 21));
    // 0x1f78cc: 0xac760024  sw          $s6, 0x24($v1)
    ctx->pc = 0x1f78ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 22));
    // 0x1f78d0: 0xc07de00  jal         func_1F7800
    ctx->pc = 0x1F78D0u;
    SET_GPR_U32(ctx, 31, 0x1F78D8u);
    ctx->pc = 0x1F78D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F78D0u;
    // 0x1f78d4: 0xac730018  sw          $s3, 0x18($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7800u, 0x1F78D0u, 0x1F78D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F78D8u;
label_1f78d8:
    // 0x1f78d8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1f78d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f78dc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1f78dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f78e0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1f78e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f78e4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1f78e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f78e8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1f78e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f78ec: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1f78ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f78f0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1f78f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f78f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f78f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f78f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F78F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F78FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F78F8u;
        // 0x1f78fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F78F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7900u;
}
