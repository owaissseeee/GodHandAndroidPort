#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r600_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r600
{
// Function: getEmNum__Fv
// Address: 0x79b070 - 0x79b138
void getEmNum__Fv_0x79b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getEmNum__Fv_0x79b070");
#endif

    switch (ctx->pc) {
        case 0x79b0a0u: goto label_79b0a0;
        case 0x79b0f0u: goto label_79b0f0;
        default: break;
    }

    ctx->pc = 0x79b070u;

    // 0x79b070: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x79b070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x79b074: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79b074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x79b078: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x79b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x79b07c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x79b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x79b080: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x79b080u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x79b084: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x79b084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b088: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x79b088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x79b08c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x79b08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x79b090: 0x12200021  beqz        $s1, . + 4 + (0x21 << 2)
    ctx->pc = 0x79B090u;
    {
        const bool branch_taken_0x79b090 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B090u;
        // 0x79b094: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b090) {
            ctx->pc = 0x79B118u;
            goto label_79b118;
        }
    }
    ctx->pc = 0x79B098u;
    // 0x79b098: 0x24130230  addiu       $s3, $zero, 0x230
    ctx->pc = 0x79b098u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x79b09c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x79b09cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_79b0a0:
    // 0x79b0a0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x79B0A0u;
    {
        const bool branch_taken_0x79b0a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b0a0) {
            ctx->pc = 0x79B0A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B0A0u;
            // 0x79b0a4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B110u;
            goto label_79b110;
        }
    }
    ctx->pc = 0x79B0A8u;
    // 0x79b0a8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79b0a8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79b0ac: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79b0acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79b0b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B0B0u;
    {
        const bool branch_taken_0x79b0b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0B0u;
        // 0x79b0b4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0b0) {
            ctx->pc = 0x79B0C0u;
            goto label_79b0c0;
        }
    }
    ctx->pc = 0x79B0B8u;
    // 0x79b0b8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b0b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b0bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79b0bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b0c0:
    // 0x79b0c0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79b0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79b0c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x79B0C4u;
    {
        const bool branch_taken_0x79b0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0C4u;
        // 0x79b0c8: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0c4) {
            ctx->pc = 0x79B10Cu;
            goto label_79b10c;
        }
    }
    ctx->pc = 0x79B0CCu;
    // 0x79b0cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B0CCu;
    {
        const bool branch_taken_0x79b0cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0CCu;
        // 0x79b0d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0cc) {
            ctx->pc = 0x79B0DCu;
            goto label_79b0dc;
        }
    }
    ctx->pc = 0x79B0D4u;
    // 0x79b0d4: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79b0d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79b0d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79b0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79b0dc:
    // 0x79b0dc: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79b0dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79b0e0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x79B0E0u;
    {
        const bool branch_taken_0x79b0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b0e0) {
            ctx->pc = 0x79B0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B0E0u;
            // 0x79b0e4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B110u;
            goto label_79b110;
        }
    }
    ctx->pc = 0x79B0E8u;
    // 0x79b0e8: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x79B0E8u;
    SET_GPR_U32(ctx, 31, 0x79B0F0u);
    ctx->pc = 0x79B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B0E8u;
    // 0x79b0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x79B0E8u, 0x79B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B0F0u;
label_79b0f0:
    // 0x79b0f0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B0F0u;
    {
        const bool branch_taken_0x79b0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b0f0) {
            ctx->pc = 0x79B0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B0F0u;
            // 0x79b0f4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B110u;
            goto label_79b110;
        }
    }
    ctx->pc = 0x79B0F8u;
    // 0x79b0f8: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x79b0f8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x79b0fc: 0x10730003  beq         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B0FCu;
    {
        const bool branch_taken_0x79b0fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x79B100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B0FCu;
        // 0x79b100: 0x38630231  xori        $v1, $v1, 0x231 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)561);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b0fc) {
            ctx->pc = 0x79B10Cu;
            goto label_79b10c;
        }
    }
    ctx->pc = 0x79B104u;
    // 0x79b104: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x79b104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x79b108: 0x43900b  movn        $s2, $v0, $v1
    ctx->pc = 0x79b108u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_79b10c:
    // 0x79b10c: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x79b10cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_79b110:
    // 0x79b110: 0x5620ffe3  bnel        $s1, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x79B110u;
    {
        const bool branch_taken_0x79b110 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b110) {
            ctx->pc = 0x79B114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B110u;
            // 0x79b114: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b0a0;
        }
    }
    ctx->pc = 0x79B118u;
label_79b118:
    // 0x79b118: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x79b118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b11c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79b11cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79b120: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79b120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79b124: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79b124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79b128: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x79b128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79b12c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79b12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79b130: 0x3e00008  jr          $ra
    ctx->pc = 0x79B130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B130u;
        // 0x79b134: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B138u;
}
} // namespace gh_r600
