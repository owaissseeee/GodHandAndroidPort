#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r202_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r202
{
// Function: func_00799480
// Address: 0x799480 - 0x799558
void func_00799480_0x799480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799480_0x799480");
#endif

    switch (ctx->pc) {
        case 0x7994a4u: goto label_7994a4;
        case 0x7994bcu: goto label_7994bc;
        case 0x7994d0u: goto label_7994d0;
        case 0x7994ecu: goto label_7994ec;
        case 0x7994f8u: goto label_7994f8;
        case 0x799504u: goto label_799504;
        case 0x79950cu: goto label_79950c;
        case 0x799524u: goto label_799524;
        case 0x799534u: goto label_799534;
        case 0x799540u: goto label_799540;
        default: break;
    }

    ctx->pc = 0x799480u;

    // 0x799480: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x799480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x799484: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799488: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x79948c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79948cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799490: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x799490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x799494: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x799494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x799498: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x79949c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x79949Cu;
    SET_GPR_U32(ctx, 31, 0x7994A4u);
    ctx->pc = 0x7994A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79949Cu;
    // 0x7994a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x79949Cu, 0x7994A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7994a8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7994A8u;
    {
        const bool branch_taken_0x7994a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994A8u;
        // 0x7994ac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994a8) {
            ctx->pc = 0x7994C4u;
            goto label_7994c4;
        }
    }
    ctx->pc = 0x7994B0u;
    // 0x7994b0: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x7994b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7994b4: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7994B4u;
    SET_GPR_U32(ctx, 31, 0x7994BCu);
    ctx->pc = 0x7994B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994B4u;
    // 0x7994b8: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7994B4u, 0x7994BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994BCu;
label_7994bc:
    // 0x7994bc: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x7994BCu;
    {
        const bool branch_taken_0x7994bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994BCu;
        // 0x7994c0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994bc) {
            ctx->pc = 0x799544u;
            goto label_799544;
        }
    }
    ctx->pc = 0x7994C4u;
label_7994c4:
    // 0x7994c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7994c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7994c8: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7994C8u;
    SET_GPR_U32(ctx, 31, 0x7994D0u);
    ctx->pc = 0x7994CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994C8u;
    // 0x7994cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7994C8u, 0x7994D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994D0u;
label_7994d0:
    // 0x7994d0: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7994d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7994d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x7994dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x7994e0: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x7994e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7994e4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994E4u;
    SET_GPR_U32(ctx, 31, 0x7994ECu);
    ctx->pc = 0x7994E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994E4u;
    // 0x7994e8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994E4u, 0x7994ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994ECu;
label_7994ec:
    // 0x7994ec: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7994ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7994f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7994F0u;
    {
        const bool branch_taken_0x7994f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7994F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994F0u;
        // 0x7994f4: 0x3c11007a  lui         $s1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7994f0) {
            ctx->pc = 0x799504u;
            goto label_799504;
        }
    }
    ctx->pc = 0x7994F8u;
label_7994f8:
    // 0x7994f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994fc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994FCu;
    SET_GPR_U32(ctx, 31, 0x799504u);
    ctx->pc = 0x799500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994FCu;
    // 0x799500: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994FCu, 0x799504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799504u;
label_799504:
    // 0x799504: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799504u;
    // 0x799508: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799510: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799510u;
    {
        const bool branch_taken_0x799510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799510u;
        // 0x799514: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799510) {
            ctx->pc = 0x7994F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7994f8;
        }
    }
    ctx->pc = 0x799518u;
    // 0x799518: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x79951c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79951Cu;
    SET_GPR_U32(ctx, 31, 0x799524u);
    ctx->pc = 0x799520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79951Cu;
    // 0x799520: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79951Cu, 0x799524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799524u;
label_799524:
    // 0x799524: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799528: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79952c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79952Cu;
    SET_GPR_U32(ctx, 31, 0x799534u);
    ctx->pc = 0x799530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79952Cu;
    // 0x799530: 0x262593c8  addiu       $a1, $s1, -0x6C38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294939592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79952Cu, 0x799534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799534u;
label_799534:
    // 0x799534: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x799534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799538: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799538u;
    SET_GPR_U32(ctx, 31, 0x799540u);
    ctx->pc = 0x79953Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799538u;
    // 0x79953c: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799538u, 0x799540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799540u;
label_799540:
    // 0x799540: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x799540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_799544:
    // 0x799544: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x799544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799548: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799548u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79954c: 0x3e00008  jr          $ra
    ctx->pc = 0x79954Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79954Cu;
        // 0x799550: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79954Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799554u;
    // 0x799554: 0x0  nop
    ctx->pc = 0x799554u;
    // NOP
    ctx->pc = 0x799558u;
}
} // namespace gh_r202
