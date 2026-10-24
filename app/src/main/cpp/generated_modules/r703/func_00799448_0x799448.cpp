#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r703_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r703
{
// Function: func_00799448
// Address: 0x799448 - 0x799530
void func_00799448_0x799448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799448_0x799448");
#endif

    switch (ctx->pc) {
        case 0x79946cu: goto label_79946c;
        case 0x799484u: goto label_799484;
        case 0x799498u: goto label_799498;
        case 0x7994b4u: goto label_7994b4;
        case 0x7994c4u: goto label_7994c4;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994dcu: goto label_7994dc;
        case 0x7994e4u: goto label_7994e4;
        case 0x7994fcu: goto label_7994fc;
        case 0x79950cu: goto label_79950c;
        case 0x799518u: goto label_799518;
        default: break;
    }

    ctx->pc = 0x799448u;

    // 0x799448: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x79944c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79944cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799450: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799450u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x799454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799458: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x79945c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x79945cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799460: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799464: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799464u;
    SET_GPR_U32(ctx, 31, 0x79946Cu);
    ctx->pc = 0x799468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799464u;
    // 0x799468: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799464u, 0x79946Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79946Cu;
label_79946c:
    // 0x79946c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799470: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x799470u;
    {
        const bool branch_taken_0x799470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799470u;
        // 0x799474: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799470) {
            ctx->pc = 0x79948Cu;
            goto label_79948c;
        }
    }
    ctx->pc = 0x799478u;
    // 0x799478: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x79947c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79947Cu;
    SET_GPR_U32(ctx, 31, 0x799484u);
    ctx->pc = 0x799480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79947Cu;
    // 0x799480: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79947Cu, 0x799484u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799484u;
label_799484:
    // 0x799484: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x799484u;
    {
        const bool branch_taken_0x799484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799484u;
        // 0x799488: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799484) {
            ctx->pc = 0x79951Cu;
            goto label_79951c;
        }
    }
    ctx->pc = 0x79948Cu;
label_79948c:
    // 0x79948c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799490: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799490u;
    SET_GPR_U32(ctx, 31, 0x799498u);
    ctx->pc = 0x799494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799490u;
    // 0x799494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799490u, 0x799498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799498u;
label_799498:
    // 0x799498: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79949c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79949cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994a0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7994a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7994a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x7994a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x7994a8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x7994ac: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7994b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7994b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994bc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994BCu;
    SET_GPR_U32(ctx, 31, 0x7994C4u);
    ctx->pc = 0x7994C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994BCu;
    // 0x7994c0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994BCu, 0x7994C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7994c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7994c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7994C8u;
    {
        const bool branch_taken_0x7994c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994C8u;
        // 0x7994cc: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994c8) {
            ctx->pc = 0x7994DCu;
            goto label_7994dc;
        }
    }
    ctx->pc = 0x7994D0u;
label_7994d0:
    // 0x7994d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994d4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994D4u;
    SET_GPR_U32(ctx, 31, 0x7994DCu);
    ctx->pc = 0x7994D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994D4u;
    // 0x7994d8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994D4u, 0x7994DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994DCu;
label_7994dc:
    // 0x7994dc: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7994DCu;
    SET_GPR_U32(ctx, 31, 0x7994E4u);
    ctx->pc = 0x7994E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994DCu;
    // 0x7994e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7994DCu, 0x7994E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994E4u;
label_7994e4:
    // 0x7994e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994e8: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7994E8u;
    {
        const bool branch_taken_0x7994e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x7994ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994E8u;
        // 0x7994ec: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994e8) {
            ctx->pc = 0x7994D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994d0;
        }
    }
    ctx->pc = 0x7994F0u;
    // 0x7994f0: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7994f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7994f4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994F4u;
    SET_GPR_U32(ctx, 31, 0x7994FCu);
    ctx->pc = 0x7994F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F4u;
    // 0x7994f8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994F4u, 0x7994FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994FCu;
label_7994fc:
    // 0x7994fc: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7994fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799500: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799504: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799504u;
    // 0x799508: 0x26259380  addiu       $a1, $s1, -0x6C80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799510: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799510u;
    SET_GPR_U32(ctx, 31, 0x799518u);
    ctx->pc = 0x799514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799510u;
    // 0x799514: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799510u, 0x799518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799518u;
label_799518:
    // 0x799518: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79951c:
    // 0x79951c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x79951cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799524: 0x3e00008  jr          $ra
    ctx->pc = 0x799524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799524u;
        // 0x799528: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79952Cu;
    // 0x79952c: 0x0  nop
    ctx->pc = 0x79952cu;
    // NOP
    ctx->pc = 0x799530u;
}
} // namespace gh_r703
