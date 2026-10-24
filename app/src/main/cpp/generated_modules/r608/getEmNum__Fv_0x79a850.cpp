#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r608_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r608
{
// Function: getEmNum__Fv
// Address: 0x79a850 - 0x79a918
void getEmNum__Fv_0x79a850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x79a850");
#endif

    switch (ctx->pc) {
        case 0x79a880u: goto label_79a880;
        case 0x79a8d0u: goto label_79a8d0;
        default: break;
    }

    ctx->pc = 0x79a850u;

    // 0x79a850: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79a850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79a854: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79a854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79a858: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79a858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79a85c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79a85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79a860: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79a860u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79a864: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79a864u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a868: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79a86c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79a86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79a870: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79A870u;
    {
        const bool branch_taken_0x79a870 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A870u;
        // 0x79a874: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a870) {
            ctx->pc = 0x79A8F8u;
            goto label_79a8f8;
        }
    }
    ctx->pc = 0x79A878u;
    // 0x79a878: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x79a878u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x79a87c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79a87cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79a880:
    // 0x79a880: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x79A880u;
    {
        const bool branch_taken_0x79a880 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a880) {
            ctx->pc = 0x79A884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A880u;
            // 0x79a884: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8F0u;
            goto label_79a8f0;
        }
    }
    ctx->pc = 0x79A888u;
    // 0x79a888: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79a888u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79a88c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79a88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79a890: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A890u;
    {
        const bool branch_taken_0x79a890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A890u;
        // 0x79a894: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a890) {
            ctx->pc = 0x79A8A0u;
            goto label_79a8a0;
        }
    }
    ctx->pc = 0x79A898u;
    // 0x79a898: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a89c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a89cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a8a0:
    // 0x79a8a0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79a8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79a8a4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79A8A4u;
    {
        const bool branch_taken_0x79a8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8A4u;
        // 0x79a8a8: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8a4) {
            ctx->pc = 0x79A8ECu;
            goto label_79a8ec;
        }
    }
    ctx->pc = 0x79A8ACu;
    // 0x79a8ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A8ACu;
    {
        const bool branch_taken_0x79a8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8ACu;
        // 0x79a8b0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8ac) {
            ctx->pc = 0x79A8BCu;
            goto label_79a8bc;
        }
    }
    ctx->pc = 0x79A8B4u;
    // 0x79a8b4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79a8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79a8b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79a8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a8bc:
    // 0x79a8bc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79a8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79a8c0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79A8C0u;
    {
        const bool branch_taken_0x79a8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a8c0) {
            ctx->pc = 0x79A8C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8C0u;
            // 0x79a8c4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8F0u;
            goto label_79a8f0;
        }
    }
    ctx->pc = 0x79A8C8u;
    // 0x79a8c8: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79A8C8u;
    SET_GPR_U32(ctx, 31, 0x79A8D0u);
    ctx->pc = 0x79A8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A8C8u;
    // 0x79a8cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79A8C8u, 0x79A8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A8D0u;
label_79a8d0:
    // 0x79a8d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79A8D0u;
    {
        const bool branch_taken_0x79a8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a8d0) {
            ctx->pc = 0x79A8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8D0u;
            // 0x79a8d4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A8F0u;
            goto label_79a8f0;
        }
    }
    ctx->pc = 0x79A8D8u;
    // 0x79a8d8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79a8d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79a8dc: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x79A8DCu;
    {
        const bool branch_taken_0x79a8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x79A8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A8DCu;
        // 0x79a8e0: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a8dc) {
            ctx->pc = 0x79A8ECu;
            goto label_79a8ec;
        }
    }
    ctx->pc = 0x79A8E4u;
    // 0x79a8e4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x79a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79a8e8: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x79a8e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_79a8ec:
    // 0x79a8ec: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79a8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79a8f0:
    // 0x79a8f0: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x79A8F0u;
    {
        const bool branch_taken_0x79a8f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a8f0) {
            ctx->pc = 0x79A8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A8F0u;
            // 0x79a8f4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79a880;
        }
    }
    ctx->pc = 0x79A8F8u;
label_79a8f8:
    // 0x79a8f8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79a8f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a8fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a8fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a900: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a900u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a904: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a904u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a908: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79a908u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a90c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a910: 0x3e00008  jr          $ra
    ctx->pc = 0x79A910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A910u;
        // 0x79a914: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A918u;
}
} // namespace gh_r608
