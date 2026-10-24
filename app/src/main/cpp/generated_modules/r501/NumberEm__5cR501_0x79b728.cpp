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
// Function: NumberEm__5cR501
// Address: 0x79b728 - 0x79b7d0
void NumberEm__5cR501_0x79b728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NumberEm__5cR501_0x79b728");
#endif

    switch (ctx->pc) {
        case 0x79b750u: goto label_79b750;
        case 0x79b7a0u: goto label_79b7a0;
        default: break;
    }

    ctx->pc = 0x79b728u;

    // 0x79b728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79b728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79b72c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b72cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b730: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79b730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79b734: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79b734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79b738: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x79b738u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79b73c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79b73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b740: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x79B740u;
    {
        const bool branch_taken_0x79b740 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B740u;
        // 0x79b744: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b740) {
            ctx->pc = 0x79B7B8u;
            goto label_79b7b8;
        }
    }
    ctx->pc = 0x79B748u;
    // 0x79b748: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x79b748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79b74c: 0x0  nop
    ctx->pc = 0x79b74cu;
    // NOP
label_79b750:
    // 0x79b750: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x79B750u;
    {
        const bool branch_taken_0x79b750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b750) {
            ctx->pc = 0x79B754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B750u;
            // 0x79b754: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B7B0u;
            goto label_79b7b0;
        }
    }
    ctx->pc = 0x79B758u;
    // 0x79b758: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x79b758u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79b75c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79b75cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79b760: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B760u;
    {
        const bool branch_taken_0x79b760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B760u;
        // 0x79b764: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b760) {
            ctx->pc = 0x79B770u;
            goto label_79b770;
        }
    }
    ctx->pc = 0x79B768u;
    // 0x79b768: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b76c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b76cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b770:
    // 0x79b770: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79b770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79b774: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79B774u;
    {
        const bool branch_taken_0x79b774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B774u;
        // 0x79b778: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b774) {
            ctx->pc = 0x79B7ACu;
            goto label_79b7ac;
        }
    }
    ctx->pc = 0x79B77Cu;
    // 0x79b77c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B77Cu;
    {
        const bool branch_taken_0x79b77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B77Cu;
        // 0x79b780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b77c) {
            ctx->pc = 0x79B78Cu;
            goto label_79b78c;
        }
    }
    ctx->pc = 0x79B784u;
    // 0x79b784: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b784u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79b788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b78c:
    // 0x79b78c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79b78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79b790: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B790u;
    {
        const bool branch_taken_0x79b790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b790) {
            ctx->pc = 0x79B794u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B790u;
            // 0x79b794: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B7B0u;
            goto label_79b7b0;
        }
    }
    ctx->pc = 0x79B798u;
    // 0x79b798: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79B798u;
    SET_GPR_U32(ctx, 31, 0x79B7A0u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79B798u, 0x79B7A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7A0u;
label_79b7a0:
    // 0x79b7a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79b7a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79b7a4: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x79b7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x79b7a8: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x79b7a8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79b7ac:
    // 0x79b7ac: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79b7acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_79b7b0:
    // 0x79b7b0: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x79B7B0u;
    {
        const bool branch_taken_0x79b7b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b7b0) {
            ctx->pc = 0x79B7B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B7B0u;
            // 0x79b7b4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b750;
        }
    }
    ctx->pc = 0x79B7B8u;
label_79b7b8:
    // 0x79b7b8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x79b7b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79b7bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b7c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79b7c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b7c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b7c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b7c8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B7C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B7C8u;
        // 0x79b7cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B7C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B7D0u;
}
} // namespace gh_r501
