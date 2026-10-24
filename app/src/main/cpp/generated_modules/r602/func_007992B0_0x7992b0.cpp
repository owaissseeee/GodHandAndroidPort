#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r602_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r602
{
// Function: func_007992B0
// Address: 0x7992b0 - 0x7993b0
void func_007992B0_0x7992b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007992B0_0x7992b0");
#endif

    switch (ctx->pc) {
        case 0x7992ecu: goto label_7992ec;
        case 0x7992f8u: goto label_7992f8;
        case 0x799320u: goto label_799320;
        case 0x79932cu: goto label_79932c;
        case 0x799338u: goto label_799338;
        case 0x799344u: goto label_799344;
        case 0x79934cu: goto label_79934c;
        case 0x799364u: goto label_799364;
        case 0x799384u: goto label_799384;
        case 0x799390u: goto label_799390;
        default: break;
    }

    ctx->pc = 0x7992b0u;

    // 0x7992b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7992b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7992b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x7992b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x7992b8: 0x3c12005f  lui         $s2, 0x5F
    ctx->pc = 0x7992b8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)95 << 16));
    // 0x7992bc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x7992bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x7992c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x7992c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x7992c4: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7992c4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7992c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x7992c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x7992cc: 0x3c118000  lui         $s1, 0x8000
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32768 << 16));
    // 0x7992d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7992d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7992d4: 0x8e438658  lw          $v1, -0x79A8($s2)
    ctx->pc = 0x7992d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x7992d8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7992dc: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x7992DCu;
    {
        const bool branch_taken_0x7992dc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x7992E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992DCu;
        // 0x7992e0: 0x3c130058  lui         $s3, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992dc) {
            ctx->pc = 0x799320u;
            goto label_799320;
        }
    }
    ctx->pc = 0x7992E4u;
    // 0x7992e4: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x7992E4u;
    SET_GPR_U32(ctx, 31, 0x7992ECu);
    ctx->pc = 0x7992E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E4u;
    // 0x7992e8: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x7992E4u, 0x7992ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992ECu;
label_7992ec:
    // 0x7992ec: 0x26646af0  addiu       $a0, $s3, 0x6AF0
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27376));
    // 0x7992f0: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7992F0u;
    SET_GPR_U32(ctx, 31, 0x7992F8u);
    ctx->pc = 0x7992F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F0u;
    // 0x7992f4: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7992F0u, 0x7992F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992F8u;
label_7992f8:
    // 0x7992f8: 0x8e428658  lw          $v0, -0x79A8($s2)
    ctx->pc = 0x7992f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936152)));
    // 0x7992fc: 0x3c08003c  lui         $t0, 0x3C
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)60 << 16));
    // 0x799300: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799304: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799308: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79930c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79930cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799310: 0x711825  or          $v1, $v1, $s1
    ctx->pc = 0x799310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 17));
    // 0x799314: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x799314u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x799318: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799318u;
    SET_GPR_U32(ctx, 31, 0x799320u);
    ctx->pc = 0x79931Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799318u;
    // 0x79931c: 0x8d04264c  lw          $a0, 0x264C($t0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799318u, 0x799320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799320u;
label_799320:
    // 0x799320: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x799320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799324: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799324u;
    SET_GPR_U32(ctx, 31, 0x79932Cu);
    ctx->pc = 0x799328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799324u;
    // 0x799328: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799324u, 0x79932Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79932Cu;
label_79932c:
    // 0x79932c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x79932cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799330: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799330u;
    {
        const bool branch_taken_0x799330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799330u;
        // 0x799334: 0x3c110074  lui         $s1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799330) {
            ctx->pc = 0x799344u;
            goto label_799344;
        }
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79933c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79933Cu;
    SET_GPR_U32(ctx, 31, 0x799344u);
    ctx->pc = 0x799340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79933Cu;
    // 0x799340: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79933Cu, 0x799344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799344u;
label_799344:
    // 0x799344: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799344u;
    SET_GPR_U32(ctx, 31, 0x79934Cu);
    ctx->pc = 0x799348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799344u;
    // 0x799348: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799344u, 0x79934Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x79934cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799350: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799350u;
    {
        const bool branch_taken_0x799350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x799354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799350u;
        // 0x799354: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799350) {
            ctx->pc = 0x799338u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799338;
        }
    }
    ctx->pc = 0x799358u;
    // 0x799358: 0x26646af0  addiu       $a0, $s3, 0x6AF0
    ctx->pc = 0x799358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27376));
    // 0x79935c: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x79935Cu;
    SET_GPR_U32(ctx, 31, 0x799364u);
    ctx->pc = 0x799360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79935Cu;
    // 0x799360: 0x24050026  addiu       $a1, $zero, 0x26 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x79935Cu, 0x799364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799364u;
label_799364:
    // 0x799364: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799368: 0x26267b00  addiu       $a2, $s1, 0x7B00
    ctx->pc = 0x799368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 31488));
    // 0x79936c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x79936cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x799370: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799374: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x799374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799378: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x799378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x79937c: 0xc0b1152  jal         func_2C4548
    ctx->pc = 0x79937Cu;
    SET_GPR_U32(ctx, 31, 0x799384u);
    ctx->pc = 0x799380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79937Cu;
    // 0x799380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4548u, 0x79937Cu, 0x799384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799384u;
label_799384:
    // 0x799384: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799388: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799388u;
    SET_GPR_U32(ctx, 31, 0x799390u);
    ctx->pc = 0x79938Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799388u;
    // 0x79938c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799388u, 0x799390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799390u;
label_799390:
    // 0x799390: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x799390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799394: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x799394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799398: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x799398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79939c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x79939cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7993a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7993a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7993a4: 0x3e00008  jr          $ra
    ctx->pc = 0x7993A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7993A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993A4u;
        // 0x7993a8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7993A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7993ACu;
    // 0x7993ac: 0x0  nop
    ctx->pc = 0x7993acu;
    // NOP
    ctx->pc = 0x7993b0u;
}
} // namespace gh_r602
