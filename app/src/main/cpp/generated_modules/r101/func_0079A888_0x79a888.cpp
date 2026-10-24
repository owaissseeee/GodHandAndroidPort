#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_0079A888
// Address: 0x79a888 - 0x79a930
void func_0079A888_0x79a888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A888_0x79a888");
#endif

    switch (ctx->pc) {
        case 0x79a8b0u: goto label_79a8b0;
        case 0x79a900u: goto label_79a900;
        default: break;
    }

    ctx->pc = 0x79a888u;

    // 0x79a888: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79a888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79a88c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a890: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79a890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79a894: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79a894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79a898: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x79a898u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a89c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79a89cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8a0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79A8A0u;
    {
        const bool branch_taken_0x79a8a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A0u;
        // 0x79a8a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8a0) {
            ctx->pc = 0x79A918u;
            goto label_79a918;
        }
    }
    ctx->pc = 0x79A8A8u;
    // 0x79a8a8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x79a8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79a8ac: 0x0  nop
    ctx->pc = 0x79a8acu;
    // NOP
label_79a8b0:
    // 0x79a8b0: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x79A8B0u;
    {
        const bool branch_taken_0x79a8b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a8b0) {
            ctx->pc = 0x79A8B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8B0u;
            // 0x79a8b4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A910u;
            goto label_79a910;
        }
    }
    ctx->pc = 0x79A8B8u;
    // 0x79a8b8: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79a8b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79a8bc: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a8bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a8c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A8C0u;
    {
        const bool branch_taken_0x79a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8C0u;
        // 0x79a8c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8c0) {
            ctx->pc = 0x79A8D0u;
            goto label_79a8d0;
        }
    }
    ctx->pc = 0x79A8C8u;
    // 0x79a8c8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a8c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a8cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a8d0:
    // 0x79a8d0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79a8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79a8d4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79A8D4u;
    {
        const bool branch_taken_0x79a8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8D4u;
        // 0x79a8d8: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8d4) {
            ctx->pc = 0x79A90Cu;
            goto label_79a90c;
        }
    }
    ctx->pc = 0x79A8DCu;
    // 0x79a8dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A8DCu;
    {
        const bool branch_taken_0x79a8dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8DCu;
        // 0x79a8e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8dc) {
            ctx->pc = 0x79A8ECu;
            goto label_79a8ec;
        }
    }
    ctx->pc = 0x79A8E4u;
    // 0x79a8e4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a8e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a8e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a8ec:
    // 0x79a8ec: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79a8ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79a8f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A8F0u;
    {
        const bool branch_taken_0x79a8f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a8f0) {
            ctx->pc = 0x79A8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8F0u;
            // 0x79a8f4: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A910u;
            goto label_79a910;
        }
    }
    ctx->pc = 0x79A8F8u;
    // 0x79a8f8: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79A8F8u;
    SET_GPR_U32(ctx, 31, 0x79A900u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79A8F8u, 0x79A900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A900u;
label_79a900:
    // 0x79a900: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79a900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79a904: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79a904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79a908: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x79a908u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79a90c:
    // 0x79a90c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79a90cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_79a910:
    // 0x79a910: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79A910u;
    {
        const bool branch_taken_0x79a910 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a910) {
            ctx->pc = 0x79A914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A910u;
            // 0x79a914: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a8b0;
        }
    }
    ctx->pc = 0x79A918u;
label_79a918:
    // 0x79a918: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79a918u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a91c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79a91cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79a920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a928: 0x3e00008  jr          $ra
    ctx->pc = 0x79A928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A928u;
        // 0x79a92c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A930u;
}
} // namespace gh_r101
