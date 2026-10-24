#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_0079A710
// Address: 0x79a710 - 0x79a790
void func_0079A710_0x79a710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079A710_0x79a710");
#endif

    switch (ctx->pc) {
        case 0x79a730u: goto label_79a730;
        case 0x79a744u: goto label_79a744;
        case 0x79a760u: goto label_79a760;
        case 0x79a76cu: goto label_79a76c;
        case 0x79a778u: goto label_79a778;
        case 0x79a780u: goto label_79a780;
        default: break;
    }

    ctx->pc = 0x79a710u;

    // 0x79a710: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x79a710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79a714: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x79a714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x79a718: 0x8c622f84  lw          $v0, 0x2F84($v1)
    ctx->pc = 0x79a718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a71c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79a71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79a720: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x79a720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79a724: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x79a724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x79a728: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79A728u;
    SET_GPR_U32(ctx, 31, 0x79A730u);
    ctx->pc = 0x79A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A728u;
    // 0x79a72c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79A728u, 0x79A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A730u;
label_79a730:
    // 0x79a730: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x79a730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79a734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a738: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79a738u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x79a73c: 0xc0a588c  jal         func_296230
    ctx->pc = 0x79A73Cu;
    SET_GPR_U32(ctx, 31, 0x79A744u);
    ctx->pc = 0x79A740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A73Cu;
    // 0x79a740: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296230u, 0x79A73Cu, 0x79A744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A744u;
label_79a744:
    // 0x79a744: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x79a744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x79a748: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x79a748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x79a74c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a74cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a750: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x79a750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a754: 0x2484ea60  addiu       $a0, $a0, -0x15A0
    ctx->pc = 0x79a754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    // 0x79a758: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x79A758u;
    SET_GPR_U32(ctx, 31, 0x79A760u);
    ctx->pc = 0x79A75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A758u;
    // 0x79a75c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x79A758u, 0x79A760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A760u;
label_79a760:
    // 0x79a760: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a764: 0xc0a566c  jal         func_2959B0
    ctx->pc = 0x79A764u;
    SET_GPR_U32(ctx, 31, 0x79A76Cu);
    ctx->pc = 0x79A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A764u;
    // 0x79a768: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x79A764u, 0x79A76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A76Cu;
label_79a76c:
    // 0x79a76c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x79a76cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a770: 0xc0a57b8  jal         func_295EE0
    ctx->pc = 0x79A770u;
    SET_GPR_U32(ctx, 31, 0x79A778u);
    ctx->pc = 0x79A774u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A770u;
    // 0x79a774: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EE0u, 0x79A770u, 0x79A778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A778u;
label_79a778:
    // 0x79a778: 0xc1e69e4  jal         func_79A790
    ctx->pc = 0x79A778u;
    SET_GPR_U32(ctx, 31, 0x79A780u);
    ctx->pc = 0x79A790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A790u, 0x79A778u, 0x79A780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A780u;
label_79a780:
    // 0x79a780: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a780u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a784: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a788: 0x3e00008  jr          $ra
    ctx->pc = 0x79A788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A788u;
        // 0x79a78c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A790u;
}
} // namespace gh_r102
