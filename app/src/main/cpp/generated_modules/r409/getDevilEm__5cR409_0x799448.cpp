#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: getDevilEm__5cR409
// Address: 0x799448 - 0x799500
void getDevilEm__5cR409_0x799448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("getDevilEm__5cR409_0x799448");
#endif

    switch (ctx->pc) {
        case 0x799468u: goto label_799468;
        case 0x7994bcu: goto label_7994bc;
        default: break;
    }

    ctx->pc = 0x799448u;

    // 0x799448: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79944c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x799450: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x799450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x799454: 0x8c5169f0  lw          $s1, 0x69F0($v0)
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x5869F0u));
    // 0x799458: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x799458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79945c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x79945Cu;
    {
        const bool branch_taken_0x79945c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x799460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79945Cu;
        // 0x799460: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79945c) {
            ctx->pc = 0x7994E8u;
            goto label_7994e8;
        }
    }
    ctx->pc = 0x799464u;
    // 0x799464: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x799464u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_799468:
    // 0x799468: 0x5200001d  beql        $s0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x799468u;
    {
        const bool branch_taken_0x799468 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x799468) {
            ctx->pc = 0x79946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799468u;
            // 0x79946c: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x799470u;
    // 0x799470: 0x960302fe  lhu         $v1, 0x2FE($s0)
    ctx->pc = 0x799470u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 766)));
    // 0x799474: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x799474u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x799478: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799478u;
    {
        const bool branch_taken_0x799478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799478u;
        // 0x79947c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799478) {
            ctx->pc = 0x799488u;
            goto label_799488;
        }
    }
    ctx->pc = 0x799480u;
    // 0x799480: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x799480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x799484: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799488:
    // 0x799488: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79948c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x79948Cu;
    {
        const bool branch_taken_0x79948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79948Cu;
        // 0x799490: 0x286202a0  slti        $v0, $v1, 0x2A0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)672) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79948c) {
            ctx->pc = 0x7994DCu;
            goto label_7994dc;
        }
    }
    ctx->pc = 0x799494u;
    // 0x799494: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799498: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x799498u;
    {
        const bool branch_taken_0x799498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799498u;
        // 0x79949c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799498) {
            ctx->pc = 0x7994A8u;
            goto label_7994a8;
        }
    }
    ctx->pc = 0x7994A0u;
    // 0x7994a0: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x7994a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x7994a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7994a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7994a8:
    // 0x7994a8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x7994a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x7994ac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x7994ACu;
    {
        const bool branch_taken_0x7994ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994ac) {
            ctx->pc = 0x7994B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994ACu;
            // 0x7994b0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994B4u;
    // 0x7994b4: 0xc0a3ece  jal         func_28FB38
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FB38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FB38u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7994bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994c0: 0x50430007  beql        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x7994C0u;
    {
        const bool branch_taken_0x7994c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x7994c0) {
            ctx->pc = 0x7994C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994C0u;
            // 0x7994c4: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994C8u;
    // 0x7994c8: 0x92020614  lbu         $v0, 0x614($s0)
    ctx->pc = 0x7994c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1556)));
    // 0x7994cc: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x7994CCu;
    {
        const bool branch_taken_0x7994cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x7994cc) {
            ctx->pc = 0x7994D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994CCu;
            // 0x7994d0: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7994E0u;
            goto label_7994e0;
        }
    }
    ctx->pc = 0x7994D4u;
    // 0x7994d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7994D4u;
    {
        const bool branch_taken_0x7994d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D4u;
        // 0x7994d8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994d4) {
            ctx->pc = 0x7994ECu;
            goto label_7994ec;
        }
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_7994e0:
    // 0x7994e0: 0x5620ffe1  bnel        $s1, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x7994E0u;
    {
        const bool branch_taken_0x7994e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x7994e0) {
            ctx->pc = 0x7994E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7994E0u;
            // 0x7994e4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799468u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799468;
        }
    }
    ctx->pc = 0x7994E8u;
label_7994e8:
    // 0x7994e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7994e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7994ec:
    // 0x7994ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x7994ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7994f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x7994f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7994f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7994f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7994f8: 0x3e00008  jr          $ra
    ctx->pc = 0x7994F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F8u;
        // 0x7994fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799500u;
}
} // namespace gh_r409
