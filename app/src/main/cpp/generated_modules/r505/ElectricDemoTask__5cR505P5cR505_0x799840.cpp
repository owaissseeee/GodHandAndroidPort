#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: ElectricDemoTask__5cR505P5cR505
// Address: 0x799840 - 0x799918
void ElectricDemoTask__5cR505P5cR505_0x799840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ElectricDemoTask__5cR505P5cR505_0x799840");
#endif

    switch (ctx->pc) {
        case 0x799870u: goto label_799870;
        case 0x79987cu: goto label_79987c;
        case 0x79988cu: goto label_79988c;
        case 0x7998a4u: goto label_7998a4;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998d4u: goto label_7998d4;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998e8u: goto label_7998e8;
        case 0x7998f4u: goto label_7998f4;
        default: break;
    }

    ctx->pc = 0x799840u;

    // 0x799840: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x799844: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x799844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x799848: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x799848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x79984c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x79984cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799850: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x799850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x799854: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x799854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x799858: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x799858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x79985c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79985cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799860: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799860u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799864: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
    // 0x799868: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799868u;
    {
        const bool branch_taken_0x799868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799868u;
        // 0x79986c: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799868) {
            ctx->pc = 0x79987Cu;
            goto label_79987c;
        }
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799874: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799874u;
    SET_GPR_U32(ctx, 31, 0x79987Cu);
    ctx->pc = 0x799878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799874u;
    // 0x799878: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799874u, 0x79987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79987Cu;
label_79987c:
    // 0x79987c: 0x2664ea60  addiu       $a0, $s3, -0x15A0
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961760));
    // 0x799880: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x799884: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x799884u;
    SET_GPR_U32(ctx, 31, 0x79988Cu);
    ctx->pc = 0x799888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799884u;
    // 0x799888: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x799884u, 0x79988Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79988Cu;
label_79988c:
    // 0x79988c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x79988cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799894: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x799894u;
    {
        const bool branch_taken_0x799894 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x799898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799894u;
        // 0x799898: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799894) {
            ctx->pc = 0x799870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799870;
        }
    }
    ctx->pc = 0x79989Cu;
    // 0x79989c: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79989Cu;
    SET_GPR_U32(ctx, 31, 0x7998A4u);
    ctx->pc = 0x7998A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79989Cu;
    // 0x7998a0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79989Cu, 0x7998A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7998a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7998a8: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7998A8u;
    SET_GPR_U32(ctx, 31, 0x7998B0u);
    ctx->pc = 0x7998ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A8u;
    // 0x7998ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7998A8u, 0x7998B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x3c014130  lui         $at, 0x4130
    ctx->pc = 0x7998b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16688 << 16));
    // 0x7998b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7998b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7998b8: 0x2685c150  addiu       $a1, $s4, -0x3EB0
    ctx->pc = 0x7998b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294951248));
    // 0x7998bc: 0xa2500044  sb          $s0, 0x44($s2)
    ctx->pc = 0x7998bcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 68), (uint8_t)GPR_U32(ctx, 16));
    // 0x7998c0: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x7998c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x7998c4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x7998C4u;
    SET_GPR_U32(ctx, 31, 0x7998CCu);
    ctx->pc = 0x7998C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C4u;
    // 0x7998c8: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7998C4u, 0x7998CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x7998CCu;
    SET_GPR_U32(ctx, 31, 0x7998D4u);
    ctx->pc = 0x7998D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998CCu;
    // 0x7998d0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x7998CCu, 0x7998D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0xa2400044  sb          $zero, 0x44($s2)
    ctx->pc = 0x7998d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x7998d8: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x7998D8u;
    SET_GPR_U32(ctx, 31, 0x7998E0u);
    ctx->pc = 0x7998DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998D8u;
    // 0x7998dc: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7998D8u, 0x7998E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E0u;
label_7998e0:
    // 0x7998e0: 0xc06cd74  jal         func_1B35D0
    ctx->pc = 0x7998E0u;
    SET_GPR_U32(ctx, 31, 0x7998E8u);
    ctx->pc = 0x7998E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998E0u;
    // 0x7998e4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B35D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B35D0u, 0x7998E0u, 0x7998E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E8u;
label_7998e8:
    // 0x7998e8: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7998e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7998ec: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7998ECu;
    SET_GPR_U32(ctx, 31, 0x7998F4u);
    ctx->pc = 0x7998F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ECu;
    // 0x7998f0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7998ECu, 0x7998F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F4u;
label_7998f4:
    // 0x7998f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x7998f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7998f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x7998f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7998fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x7998fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799900: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x799900u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799904: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x799904u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799908: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79990c: 0x3e00008  jr          $ra
    ctx->pc = 0x79990Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79990Cu;
        // 0x799910: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79990Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799914u;
    // 0x799914: 0x0  nop
    ctx->pc = 0x799914u;
    // NOP
    ctx->pc = 0x799918u;
}
} // namespace gh_r505
