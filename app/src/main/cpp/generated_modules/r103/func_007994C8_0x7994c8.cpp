#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r103_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r103
{
// Function: func_007994C8
// Address: 0x7994c8 - 0x7995b8
void func_007994C8_0x7994c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007994C8_0x7994c8");
#endif

    switch (ctx->pc) {
        case 0x7994f8u: goto label_7994f8;
        case 0x79950cu: goto label_79950c;
        case 0x79951cu: goto label_79951c;
        case 0x799544u: goto label_799544;
        case 0x799554u: goto label_799554;
        case 0x799560u: goto label_799560;
        case 0x799570u: goto label_799570;
        case 0x799598u: goto label_799598;
        case 0x7995a4u: goto label_7995a4;
        default: break;
    }

    ctx->pc = 0x7994c8u;

    // 0x7994c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7994c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7994cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7994ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7994d0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x7994d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x7994d4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x7994d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x7994d8: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x7994d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x7994dc: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7994dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7994e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x7994e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x7994e4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7994e4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7994e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7994e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7994ec: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x7994ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x7994f0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7994F0u;
    SET_GPR_U32(ctx, 31, 0x7994F8u);
    ctx->pc = 0x7994F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994F0u;
    // 0x7994f4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7994F0u, 0x7994F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994F8u;
label_7994f8:
    // 0x7994f8: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x7994f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x7994fc: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x7994fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799500: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x799500u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x799504: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799504u;
    SET_GPR_U32(ctx, 31, 0x79950Cu);
    ctx->pc = 0x799508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799504u;
    // 0x799508: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799504u, 0x79950Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79950Cu;
label_79950c:
    // 0x79950c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x79950Cu;
    {
        const bool branch_taken_0x79950c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79950Cu;
        // 0x799510: 0x93a50000  lbu         $a1, 0x0($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79950c) {
            ctx->pc = 0x799544u;
            goto label_799544;
        }
    }
    ctx->pc = 0x799514u;
    // 0x799514: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799514u;
    SET_GPR_U32(ctx, 31, 0x79951Cu);
    ctx->pc = 0x799518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799514u;
    // 0x799518: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799514u, 0x79951Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79951Cu;
label_79951c:
    // 0x79951c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799520: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799520u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799524: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799528: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79952c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x799530: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799530u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799534: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799534u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799538: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x79953Cu;
    SET_GPR_U32(ctx, 31, 0x799544u);
    ctx->pc = 0x799540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79953Cu;
    // 0x799540: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x79953Cu, 0x799544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799544u;
label_799544:
    // 0x799544: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799548: 0x2405005a  addiu       $a1, $zero, 0x5A
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x79954c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79954Cu;
    SET_GPR_U32(ctx, 31, 0x799554u);
    ctx->pc = 0x799550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79954Cu;
    // 0x799550: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79954Cu, 0x799554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799554u;
label_799554:
    // 0x799554: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799554u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799558: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799558u;
    SET_GPR_U32(ctx, 31, 0x799560u);
    ctx->pc = 0x79955Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799558u;
    // 0x79955c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799558u, 0x799560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799560u;
label_799560:
    // 0x799560: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799560u;
    {
        const bool branch_taken_0x799560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799560u;
        // 0x799564: 0x93a50010  lbu         $a1, 0x10($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799560) {
            ctx->pc = 0x799598u;
            goto label_799598;
        }
    }
    ctx->pc = 0x799568u;
    // 0x799568: 0xc0a421a  jal         func_290868
    ctx->pc = 0x799568u;
    SET_GPR_U32(ctx, 31, 0x799570u);
    ctx->pc = 0x79956Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799568u;
    // 0x79956c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290868u, 0x799568u, 0x799570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799570u;
label_799570:
    // 0x799570: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799574: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x799574u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799578: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x79957c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799580: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x799580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x799584: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799584u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799588: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799588u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79958c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79958cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799590: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x799590u;
    SET_GPR_U32(ctx, 31, 0x799598u);
    ctx->pc = 0x799594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799590u;
    // 0x799594: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x799590u, 0x799598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799598u;
label_799598:
    // 0x799598: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79959c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79959Cu;
    SET_GPR_U32(ctx, 31, 0x7995A4u);
    ctx->pc = 0x7995A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79959Cu;
    // 0x7995a0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79959Cu, 0x7995A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A4u;
label_7995a4:
    // 0x7995a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x7995a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7995a8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x7995a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7995ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x7995acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7995b0: 0x3e00008  jr          $ra
    ctx->pc = 0x7995B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7995B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995B0u;
        // 0x7995b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7995B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7995B8u;
}
} // namespace gh_r103
