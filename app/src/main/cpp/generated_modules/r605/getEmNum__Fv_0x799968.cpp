#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r605_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r605
{
// Function: getEmNum__Fv
// Address: 0x799968 - 0x799a30
void getEmNum__Fv_0x799968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x799968");
#endif

    switch (ctx->pc) {
        case 0x799998u: goto label_799998;
        case 0x7999e8u: goto label_7999e8;
        default: break;
    }

    ctx->pc = 0x799968u;

    // 0x799968: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79996c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79996cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799970: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799974: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799978: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x799978u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79997c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79997cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799980: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799984: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x799984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x799988: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x799988u;
    {
        const bool branch_taken_0x799988 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799988u;
        // 0x79998c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799988) {
            ctx->pc = 0x799A10u;
            goto label_799a10;
        }
    }
    ctx->pc = 0x799990u;
    // 0x799990: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x799994: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x799994u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_799998:
    // 0x799998: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x799998u;
    {
        const bool branch_taken_0x799998 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799998) {
            ctx->pc = 0x79999Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799998u;
            // 0x79999c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A08u;
            goto label_799a08;
        }
    }
    ctx->pc = 0x7999A0u;
    // 0x7999a0: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x7999a0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x7999a4: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x7999a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x7999a8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7999A8u;
    {
        const bool branch_taken_0x7999a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A8u;
        // 0x7999ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a8) {
            ctx->pc = 0x7999B8u;
            goto label_7999b8;
        }
    }
    ctx->pc = 0x7999B0u;
    // 0x7999b0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x7999b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7999b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7999b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7999b8:
    // 0x7999b8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x7999b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x7999bc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7999BCu;
    {
        const bool branch_taken_0x7999bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999BCu;
        // 0x7999c0: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999bc) {
            ctx->pc = 0x799A04u;
            goto label_799a04;
        }
    }
    ctx->pc = 0x7999C4u;
    // 0x7999c4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7999C4u;
    {
        const bool branch_taken_0x7999c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7999C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999C4u;
        // 0x7999c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999c4) {
            ctx->pc = 0x7999D4u;
            goto label_7999d4;
        }
    }
    ctx->pc = 0x7999CCu;
    // 0x7999cc: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7999d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7999d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7999d4:
    // 0x7999d4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x7999d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x7999d8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x7999D8u;
    {
        const bool branch_taken_0x7999d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999d8) {
            ctx->pc = 0x7999DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999D8u;
            // 0x7999dc: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A08u;
            goto label_799a08;
        }
    }
    ctx->pc = 0x7999E0u;
    // 0x7999e0: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x7999E0u;
    SET_GPR_U32(ctx, 31, 0x7999E8u);
    ctx->pc = 0x7999E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7999E0u;
    // 0x7999e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x7999E0u, 0x7999E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7999E8u;
label_7999e8:
    // 0x7999e8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x7999E8u;
    {
        const bool branch_taken_0x7999e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999e8) {
            ctx->pc = 0x7999ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999E8u;
            // 0x7999ec: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A08u;
            goto label_799a08;
        }
    }
    ctx->pc = 0x7999F0u;
    // 0x7999f0: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x7999f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x7999f4: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x7999F4u;
    {
        const bool branch_taken_0x7999f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x7999F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F4u;
        // 0x7999f8: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f4) {
            ctx->pc = 0x799A04u;
            goto label_799a04;
        }
    }
    ctx->pc = 0x7999FCu;
    // 0x7999fc: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x7999fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x799a00: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x799a00u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_799a04:
    // 0x799a04: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_799a08:
    // 0x799a08: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x799A08u;
    {
        const bool branch_taken_0x799a08 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x799a08) {
            ctx->pc = 0x799A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A08u;
            // 0x799a0c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799998;
        }
    }
    ctx->pc = 0x799A10u;
label_799a10:
    // 0x799a10: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x799a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a14: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x799a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799a18: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x799a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799a1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x799a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799a20: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x799a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799a28: 0x3e00008  jr          $ra
    ctx->pc = 0x799A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799A28u;
        // 0x799a2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799A30u;
}
} // namespace gh_r605
