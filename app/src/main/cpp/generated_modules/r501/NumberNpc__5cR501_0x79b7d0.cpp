#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: NumberNpc__5cR501
// Address: 0x79b7d0 - 0x79b878
void NumberNpc__5cR501_0x79b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NumberNpc__5cR501_0x79b7d0");
#endif

    switch (ctx->pc) {
        case 0x79b7f8u: goto label_79b7f8;
        case 0x79b848u: goto label_79b848;
        default: break;
    }

    ctx->pc = 0x79b7d0u;

    // 0x79b7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79b7d4: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b7d8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79b7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79b7dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79b7e0: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x79b7e0u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79b7e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79b7e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7e8: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79B7E8u;
    {
        const bool branch_taken_0x79b7e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7E8u;
        // 0x79b7ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b7e8) {
            ctx->pc = 0x79B860u;
            goto label_79b860;
        }
    }
    ctx->pc = 0x79B7F0u;
    // 0x79b7f0: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x79b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79b7f4: 0x0  nop
    ctx->pc = 0x79b7f4u;
    // NOP
label_79b7f8:
    // 0x79b7f8: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x79B7F8u;
    {
        const bool branch_taken_0x79b7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b7f8) {
            ctx->pc = 0x79B7FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B7F8u;
            // 0x79b7fc: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B858u;
            goto label_79b858;
        }
    }
    ctx->pc = 0x79B800u;
    // 0x79b800: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79b800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79b804: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79b804u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79b808: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B808u;
    {
        const bool branch_taken_0x79b808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B808u;
        // 0x79b80c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b808) {
            ctx->pc = 0x79B818u;
            goto label_79b818;
        }
    }
    ctx->pc = 0x79B810u;
    // 0x79b810: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b814: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b818:
    // 0x79b818: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79b81c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79B81Cu;
    {
        const bool branch_taken_0x79b81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B81Cu;
        // 0x79b820: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b81c) {
            ctx->pc = 0x79B854u;
            goto label_79b854;
        }
    }
    ctx->pc = 0x79B824u;
    // 0x79b824: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B824u;
    {
        const bool branch_taken_0x79b824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B824u;
        // 0x79b828: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b824) {
            ctx->pc = 0x79B834u;
            goto label_79b834;
        }
    }
    ctx->pc = 0x79B82Cu;
    // 0x79b82c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b82cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b830: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b834:
    // 0x79b834: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79b834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79b838: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B838u;
    {
        const bool branch_taken_0x79b838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b838) {
            ctx->pc = 0x79B83Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B838u;
            // 0x79b83c: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B858u;
            goto label_79b858;
        }
    }
    ctx->pc = 0x79B840u;
    // 0x79b840: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79B840u;
    SET_GPR_U32(ctx, 31, 0x79B848u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79B840u, 0x79B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B848u;
label_79b848:
    // 0x79b848: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79b848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79b84c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79b84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79b850: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x79b850u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79b854:
    // 0x79b854: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79b854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_79b858:
    // 0x79b858: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79B858u;
    {
        const bool branch_taken_0x79b858 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b858) {
            ctx->pc = 0x79B85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B858u;
            // 0x79b85c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b7f8;
        }
    }
    ctx->pc = 0x79B860u;
label_79b860:
    // 0x79b860: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79b860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b864: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79b864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b868: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79b868u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b870: 0x3e00008  jr          $ra
    ctx->pc = 0x79B870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B870u;
        // 0x79b874: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B878u;
}
} // namespace gh_r501
