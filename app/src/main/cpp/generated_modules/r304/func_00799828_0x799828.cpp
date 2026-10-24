#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r304_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r304
{
// Function: func_00799828
// Address: 0x799828 - 0x799928
void func_00799828_0x799828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799828_0x799828");
#endif

    switch (ctx->pc) {
        case 0x79984cu: goto label_79984c;
        case 0x799858u: goto label_799858;
        case 0x799864u: goto label_799864;
        case 0x799878u: goto label_799878;
        case 0x79988cu: goto label_79988c;
        case 0x7998a0u: goto label_7998a0;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998d0u: goto label_7998d0;
        case 0x7998e4u: goto label_7998e4;
        case 0x7998fcu: goto label_7998fc;
        case 0x799904u: goto label_799904;
        case 0x799910u: goto label_799910;
        default: break;
    }

    ctx->pc = 0x799828u;

    // 0x799828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x79982c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799830: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799834: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799838: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79983c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x79983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x799840: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799844: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799844u;
    SET_GPR_U32(ctx, 31, 0x79984Cu);
    ctx->pc = 0x799848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799844u;
    // 0x799848: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799844u, 0x79984Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79984Cu;
label_79984c:
    // 0x79984c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x79984cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799850: 0xc1e6888  jal         func_79A220
    ctx->pc = 0x799850u;
    SET_GPR_U32(ctx, 31, 0x799858u);
    ctx->pc = 0x799854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799850u;
    // 0x799854: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A220u, 0x799850u, 0x799858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79985c: 0xc1e6900  jal         func_79A400
    ctx->pc = 0x79985Cu;
    SET_GPR_U32(ctx, 31, 0x799864u);
    ctx->pc = 0x799860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79985Cu;
    // 0x799860: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79A400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79A400u, 0x79985Cu, 0x799864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799868: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x79986c: 0x24a59a88  addiu       $a1, $a1, -0x6578
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941320));
    // 0x799870: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799870u;
    SET_GPR_U32(ctx, 31, 0x799878u);
    ctx->pc = 0x799874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799870u;
    // 0x799874: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799870u, 0x799878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799878u;
label_799878:
    // 0x799878: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79987c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799880: 0x24a59ca0  addiu       $a1, $a1, -0x6360
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941856));
    // 0x799884: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799884u;
    SET_GPR_U32(ctx, 31, 0x79988Cu);
    ctx->pc = 0x799888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799884u;
    // 0x799888: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79988cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799890: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799894: 0x24a5a5e0  addiu       $a1, $a1, -0x5A20
    ctx->pc = 0x799894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944224));
    // 0x799898: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799898u;
    SET_GPR_U32(ctx, 31, 0x7998A0u);
    ctx->pc = 0x79989Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799898u;
    // 0x79989c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799898u, 0x7998A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A0u;
label_7998a0:
    // 0x7998a0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7998a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998a4: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x7998a8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998ac: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x7998acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x7998b0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x7998b4: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x7998B4u;
    SET_GPR_U32(ctx, 31, 0x7998BCu);
    ctx->pc = 0x7998B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B4u;
    // 0x7998b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7998B4u, 0x7998BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998BCu;
label_7998bc:
    // 0x7998bc: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x7998bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x7998c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7998c4: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x7998c4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x7998c8: 0xc0a566c  jal         func_2959B0
    ctx->pc = 0x7998C8u;
    SET_GPR_U32(ctx, 31, 0x7998D0u);
    ctx->pc = 0x7998CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C8u;
    // 0x7998cc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2959B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2959B0u, 0x7998C8u, 0x7998D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D0u;
label_7998d0:
    // 0x7998d0: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x7998d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x7998d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7998d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998dc: 0xc0b0a92  jal         func_2C2A48
    ctx->pc = 0x7998DCu;
    SET_GPR_U32(ctx, 31, 0x7998E4u);
    ctx->pc = 0x7998E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998DCu;
    // 0x7998e0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A48u, 0x7998DCu, 0x7998E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E4u;
label_7998e4:
    // 0x7998e4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x7998e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7998e8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x7998ec: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x7998ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x7998f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998f4: 0xc0a5874  jal         func_2961D0
    ctx->pc = 0x7998F4u;
    SET_GPR_U32(ctx, 31, 0x7998FCu);
    ctx->pc = 0x7998F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F4u;
    // 0x7998f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961D0u, 0x7998F4u, 0x7998FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0xc0a5860  jal         func_296180
    ctx->pc = 0x7998FCu;
    SET_GPR_U32(ctx, 31, 0x799904u);
    ctx->pc = 0x799900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998FCu;
    // 0x799900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296180u, 0x7998FCu, 0x799904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799904u;
label_799904:
    // 0x799904: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x799904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799908: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799908u;
    SET_GPR_U32(ctx, 31, 0x799910u);
    ctx->pc = 0x79990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799908u;
    // 0x79990c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799908u, 0x799910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799910u;
label_799910:
    // 0x799910: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799910u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799914: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799918: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79991c: 0x3e00008  jr          $ra
    ctx->pc = 0x79991Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79991Cu;
        // 0x799920: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79991Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799924u;
    // 0x799924: 0x0  nop
    ctx->pc = 0x799924u;
    // NOP
    ctx->pc = 0x799928u;
}
} // namespace gh_r304
