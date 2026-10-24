#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: getEmNum__Fv
// Address: 0x79b2f8 - 0x79b3c0
void getEmNum__Fv_0x79b2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x79b2f8");
#endif

    switch (ctx->pc) {
        case 0x79b328u: goto label_79b328;
        case 0x79b378u: goto label_79b378;
        default: break;
    }

    ctx->pc = 0x79b2f8u;

    // 0x79b2f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79b2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79b2fc: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b300: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79b300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79b304: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79b304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79b308: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79b308u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79b30c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79b30cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b310: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79b314: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79b314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79b318: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79B318u;
    {
        const bool branch_taken_0x79b318 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B318u;
        // 0x79b31c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b318) {
            ctx->pc = 0x79B3A0u;
            goto label_79b3a0;
        }
    }
    ctx->pc = 0x79B320u;
    // 0x79b320: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x79b320u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x79b324: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79b324u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79b328:
    // 0x79b328: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x79B328u;
    {
        const bool branch_taken_0x79b328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b328) {
            ctx->pc = 0x79B32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B328u;
            // 0x79b32c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B398u;
            goto label_79b398;
        }
    }
    ctx->pc = 0x79B330u;
    // 0x79b330: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79b330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79b334: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79b334u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79b338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B338u;
    {
        const bool branch_taken_0x79b338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B338u;
        // 0x79b33c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b338) {
            ctx->pc = 0x79B348u;
            goto label_79b348;
        }
    }
    ctx->pc = 0x79B340u;
    // 0x79b340: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b344: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79b344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b348:
    // 0x79b348: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79b348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79b34c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B34Cu;
    {
        const bool branch_taken_0x79b34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B34Cu;
        // 0x79b350: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b34c) {
            ctx->pc = 0x79B394u;
            goto label_79b394;
        }
    }
    ctx->pc = 0x79B354u;
    // 0x79b354: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B354u;
    {
        const bool branch_taken_0x79b354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B354u;
        // 0x79b358: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b354) {
            ctx->pc = 0x79B364u;
            goto label_79b364;
        }
    }
    ctx->pc = 0x79B35Cu;
    // 0x79b35c: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b35cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b360: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79b360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b364:
    // 0x79b364: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79b364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79b368: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79B368u;
    {
        const bool branch_taken_0x79b368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b368) {
            ctx->pc = 0x79B36Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B368u;
            // 0x79b36c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B398u;
            goto label_79b398;
        }
    }
    ctx->pc = 0x79B370u;
    // 0x79b370: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79B370u;
    SET_GPR_U32(ctx, 31, 0x79B378u);
    ctx->pc = 0x79B374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B370u;
    // 0x79b374: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79B370u, 0x79B378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B378u;
label_79b378:
    // 0x79b378: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B378u;
    {
        const bool branch_taken_0x79b378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b378) {
            ctx->pc = 0x79B37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B378u;
            // 0x79b37c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B398u;
            goto label_79b398;
        }
    }
    ctx->pc = 0x79B380u;
    // 0x79b380: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79b380u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79b384: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B384u;
    {
        const bool branch_taken_0x79b384 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x79B388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B384u;
        // 0x79b388: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b384) {
            ctx->pc = 0x79B394u;
            goto label_79b394;
        }
    }
    ctx->pc = 0x79B38Cu;
    // 0x79b38c: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x79b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79b390: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x79b390u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_79b394:
    // 0x79b394: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79b394u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79b398:
    // 0x79b398: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x79B398u;
    {
        const bool branch_taken_0x79b398 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b398) {
            ctx->pc = 0x79B39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B398u;
            // 0x79b39c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b328;
        }
    }
    ctx->pc = 0x79B3A0u;
label_79b3a0:
    // 0x79b3a0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79b3a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b3a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79b3a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b3a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79b3a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b3ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79b3acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b3b0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79b3b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b3b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b3b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b3b8: 0x3e00008  jr          $ra
    ctx->pc = 0x79B3B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B3B8u;
        // 0x79b3bc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B3B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B3C0u;
}
} // namespace gh_r601
