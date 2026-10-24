#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r04f_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r04f
{
// Function: func_00799418
// Address: 0x799418 - 0x7994c0
void func_00799418_0x799418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799418_0x799418");
#endif

    switch (ctx->pc) {
        case 0x799440u: goto label_799440;
        case 0x799490u: goto label_799490;
        default: break;
    }

    ctx->pc = 0x799418u;

    // 0x799418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79941c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79941cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799420: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x799424: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799428: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x799428u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79942c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x79942cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799430: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x799430u;
    {
        const bool branch_taken_0x799430 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x799434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799430u;
        // 0x799434: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799430) {
            ctx->pc = 0x7994A8u;
            goto label_7994a8;
        }
    }
    ctx->pc = 0x799438u;
    // 0x799438: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x799438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x79943c: 0x0  nop
    ctx->pc = 0x79943cu;
    // NOP
label_799440:
    // 0x799440: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x799440u;
    {
        const bool branch_taken_0x799440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x799440) {
            ctx->pc = 0x799444u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799440u;
            // 0x799444: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994A0u;
            goto label_7994a0;
        }
    }
    ctx->pc = 0x799448u;
    // 0x799448: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x799448u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x79944c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79944cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799450: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799450u;
    {
        const bool branch_taken_0x799450 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799450u;
        // 0x799454: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799450) {
            ctx->pc = 0x799460u;
            goto label_799460;
        }
    }
    ctx->pc = 0x799458u;
    // 0x799458: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79945c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79945cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799460:
    // 0x799460: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x799460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799464: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799464u;
    {
        const bool branch_taken_0x799464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799464u;
        // 0x799468: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x799464) {
            ctx->pc = 0x79949Cu;
            goto label_79949c;
        }
    }
    ctx->pc = 0x79946Cu;
    // 0x79946c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79946Cu;
    {
        const bool branch_taken_0x79946c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79946Cu;
        // 0x799470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79946c) {
            ctx->pc = 0x79947Cu;
            goto label_79947c;
        }
    }
    ctx->pc = 0x799474u;
    // 0x799474: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799478: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79947c:
    // 0x79947c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x79947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x799480: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x799480u;
    {
        const bool branch_taken_0x799480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799480) {
            ctx->pc = 0x799484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799480u;
            // 0x799484: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994A0u;
            goto label_7994a0;
        }
    }
    ctx->pc = 0x799488u;
    // 0x799488: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x799488u;
    SET_GPR_U32(ctx, 31, 0x799490u);
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x799488u, 0x799490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799490u;
label_799490:
    // 0x799490: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799494: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799498: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x799498u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
label_79949c:
    // 0x79949c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_7994a0:
    // 0x7994a0: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x7994A0u;
    {
        const bool branch_taken_0x7994a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994a0) {
            ctx->pc = 0x7994A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994A0u;
            // 0x7994a4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799440;
        }
    }
    ctx->pc = 0x7994A8u;
label_7994a8:
    // 0x7994a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994ac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7994acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7994b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7994b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7994b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7994b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7994b8: 0x3e00008  jr          $ra
    ctx->pc = 0x7994B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994B8u;
        // 0x7994bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994C0u;
}
} // namespace gh_r04f
