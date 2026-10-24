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

// Function: func_00305908
// Address: 0x305908 - 0x3059a8
void func_00305908_0x305908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00305908_0x305908");
#endif

    switch (ctx->pc) {
        case 0x30592cu: goto label_30592c;
        case 0x305958u: goto label_305958;
        case 0x30598cu: goto label_30598c;
        default: break;
    }

    ctx->pc = 0x305908u;

    // 0x305908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x305908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30590c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x30590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x305910: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x305910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x305914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305918: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x305918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x30591c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x30591cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x305920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x305924: 0xc0c1636  jal         func_3058D8
    ctx->pc = 0x305924u;
    SET_GPR_U32(ctx, 31, 0x30592Cu);
    ctx->pc = 0x305928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305924u;
    // 0x305928: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3058D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3058D8u, 0x305924u, 0x30592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30592Cu;
label_30592c:
    // 0x30592c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x30592cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305930: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x305930u;
    {
        const bool branch_taken_0x305930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x305934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305930u;
        // 0x305934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305930) {
            ctx->pc = 0x305948u;
            goto label_305948;
        }
    }
    ctx->pc = 0x305938u;
    // 0x305938: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x305938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x30593c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x30593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x305940: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x305940u;
    {
        const bool branch_taken_0x305940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305940u;
        // 0x305944: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305940) {
            ctx->pc = 0x30598Cu;
            goto label_30598c;
        }
    }
    ctx->pc = 0x305948u;
label_305948:
    // 0x305948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x305948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30594c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x30594cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x305950: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x305950u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305954: 0x0  nop
    ctx->pc = 0x305954u;
    // NOP
label_305958:
    // 0x305958: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x305958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30595c: 0x10470008  beq         $v0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x30595Cu;
    {
        const bool branch_taken_0x30595c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x305960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30595Cu;
        // 0x305960: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30595c) {
            ctx->pc = 0x305980u;
            goto label_305980;
        }
    }
    ctx->pc = 0x305964u;
    // 0x305964: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x305964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x305968: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x305968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x30596c: 0x2cc20040  sltiu       $v0, $a2, 0x40
    ctx->pc = 0x30596cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x305970: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x305970u;
    {
        const bool branch_taken_0x305970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305970u;
        // 0x305974: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305970) {
            ctx->pc = 0x305958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_305958;
        }
    }
    ctx->pc = 0x305978u;
    // 0x305978: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x305978u;
    {
        const bool branch_taken_0x305978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305978u;
        // 0x30597c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305978) {
            ctx->pc = 0x305990u;
            goto label_305990;
        }
    }
    ctx->pc = 0x305980u;
label_305980:
    // 0x305980: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x305980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305984: 0xc0c15f4  jal         func_3057D0
    ctx->pc = 0x305984u;
    SET_GPR_U32(ctx, 31, 0x30598Cu);
    ctx->pc = 0x305988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305984u;
    // 0x305988: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3057D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3057D0u, 0x305984u, 0x30598Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30598Cu;
label_30598c:
    // 0x30598c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30598cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305990:
    // 0x305990: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x305990u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x305994: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x305994u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x305998: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x305998u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30599c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30599cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3059a0: 0x3e00008  jr          $ra
    ctx->pc = 0x3059A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3059A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3059A0u;
        // 0x3059a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3059A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3059A8u;
}
