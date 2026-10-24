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

// Function: func_00201840
// Address: 0x201840 - 0x2018d0
void func_00201840_0x201840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00201840_0x201840");
#endif

    switch (ctx->pc) {
        case 0x201864u: goto label_201864;
        case 0x20187cu: goto label_20187c;
        case 0x201890u: goto label_201890;
        case 0x2018acu: goto label_2018ac;
        case 0x2018bcu: goto label_2018bc;
        default: break;
    }

    ctx->pc = 0x201840u;

    // 0x201840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201844: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201848: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x201848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20184c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20184cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201850: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201854: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x201854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201858: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x201858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20185c: 0xc0c8e46  jal         func_323918
    ctx->pc = 0x20185Cu;
    SET_GPR_U32(ctx, 31, 0x201864u);
    ctx->pc = 0x201860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20185Cu;
    // 0x201860: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323918u, 0x20185Cu, 0x201864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201864u;
label_201864:
    // 0x201864: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x201864u;
    {
        const bool branch_taken_0x201864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x201868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201864u;
        // 0x201868: 0xae020084  sw          $v0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201864) {
            ctx->pc = 0x201898u;
            goto label_201898;
        }
    }
    ctx->pc = 0x20186Cu;
    // 0x20186c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x20186cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x201870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x201870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201874: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x201874u;
    SET_GPR_U32(ctx, 31, 0x20187Cu);
    ctx->pc = 0x201878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201874u;
    // 0x201878: 0x24060088  addiu       $a2, $zero, 0x88 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x201874u, 0x20187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20187Cu;
label_20187c:
    // 0x20187c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20187cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201880: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x201880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x201884: 0xae231108  sw          $v1, 0x1108($s1)
    ctx->pc = 0x201884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4360), GPR_U32(ctx, 3));
    // 0x201888: 0xc0804a4  jal         func_201290
    ctx->pc = 0x201888u;
    SET_GPR_U32(ctx, 31, 0x201890u);
    ctx->pc = 0x20188Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201888u;
    // 0x20188c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201290u, 0x201888u, 0x201890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201890u;
label_201890:
    // 0x201890: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x201890u;
    {
        const bool branch_taken_0x201890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201890u;
        // 0x201894: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201890) {
            ctx->pc = 0x2018C0u;
            goto label_2018c0;
        }
    }
    ctx->pc = 0x201898u;
label_201898:
    // 0x201898: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x201898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x20189c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20189Cu;
    {
        const bool branch_taken_0x20189c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2018A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20189Cu;
        // 0x2018a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20189c) {
            ctx->pc = 0x2018ACu;
            goto label_2018ac;
        }
    }
    ctx->pc = 0x2018A4u;
    // 0x2018a4: 0xc0c9096  jal         func_324258
    ctx->pc = 0x2018A4u;
    SET_GPR_U32(ctx, 31, 0x2018ACu);
    ctx->pc = 0x2018A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018A4u;
    // 0x2018a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324258u, 0x2018A4u, 0x2018ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018ACu;
label_2018ac:
    // 0x2018ac: 0x8e060080  lw          $a2, 0x80($s0)
    ctx->pc = 0x2018acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x2018b0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x2018b4: 0xc0c8fa0  jal         func_323E80
    ctx->pc = 0x2018B4u;
    SET_GPR_U32(ctx, 31, 0x2018BCu);
    ctx->pc = 0x2018B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018B4u;
    // 0x2018b8: 0x8e050074  lw          $a1, 0x74($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323E80u, 0x2018B4u, 0x2018BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018BCu;
label_2018bc:
    // 0x2018bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2018bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2018c0:
    // 0x2018c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2018c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2018c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2018c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2018c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2018C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2018CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018C8u;
        // 0x2018cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2018D0u;
}
