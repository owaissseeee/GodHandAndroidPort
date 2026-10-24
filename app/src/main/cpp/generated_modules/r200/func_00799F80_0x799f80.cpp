#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r200_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r200
{
// Function: func_00799F80
// Address: 0x799f80 - 0x79a0a0
void func_00799F80_0x799f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799F80_0x799f80");
#endif

    switch (ctx->pc) {
        case 0x799f80u: goto label_799f80;
        case 0x799f84u: goto label_799f84;
        case 0x799f88u: goto label_799f88;
        case 0x799f8cu: goto label_799f8c;
        case 0x799f90u: goto label_799f90;
        case 0x799f94u: goto label_799f94;
        case 0x799f98u: goto label_799f98;
        case 0x799f9cu: goto label_799f9c;
        case 0x799fa0u: goto label_799fa0;
        case 0x799fa4u: goto label_799fa4;
        case 0x799fa8u: goto label_799fa8;
        case 0x799facu: goto label_799fac;
        case 0x799fb0u: goto label_799fb0;
        case 0x799fb4u: goto label_799fb4;
        case 0x799fb8u: goto label_799fb8;
        case 0x799fbcu: goto label_799fbc;
        case 0x799fc0u: goto label_799fc0;
        case 0x799fc4u: goto label_799fc4;
        case 0x799fc8u: goto label_799fc8;
        case 0x799fccu: goto label_799fcc;
        case 0x799fd0u: goto label_799fd0;
        case 0x799fd4u: goto label_799fd4;
        case 0x799fd8u: goto label_799fd8;
        case 0x799fdcu: goto label_799fdc;
        case 0x799fe0u: goto label_799fe0;
        case 0x799fe4u: goto label_799fe4;
        case 0x799fe8u: goto label_799fe8;
        case 0x799fecu: goto label_799fec;
        case 0x799ff0u: goto label_799ff0;
        case 0x799ff4u: goto label_799ff4;
        case 0x799ff8u: goto label_799ff8;
        case 0x799ffcu: goto label_799ffc;
        case 0x79a000u: goto label_79a000;
        case 0x79a004u: goto label_79a004;
        case 0x79a008u: goto label_79a008;
        case 0x79a00cu: goto label_79a00c;
        case 0x79a010u: goto label_79a010;
        case 0x79a014u: goto label_79a014;
        case 0x79a018u: goto label_79a018;
        case 0x79a01cu: goto label_79a01c;
        case 0x79a020u: goto label_79a020;
        case 0x79a024u: goto label_79a024;
        case 0x79a028u: goto label_79a028;
        case 0x79a02cu: goto label_79a02c;
        case 0x79a030u: goto label_79a030;
        case 0x79a034u: goto label_79a034;
        case 0x79a038u: goto label_79a038;
        case 0x79a03cu: goto label_79a03c;
        case 0x79a040u: goto label_79a040;
        case 0x79a044u: goto label_79a044;
        case 0x79a048u: goto label_79a048;
        case 0x79a04cu: goto label_79a04c;
        case 0x79a050u: goto label_79a050;
        case 0x79a054u: goto label_79a054;
        case 0x79a058u: goto label_79a058;
        case 0x79a05cu: goto label_79a05c;
        case 0x79a060u: goto label_79a060;
        case 0x79a064u: goto label_79a064;
        case 0x79a068u: goto label_79a068;
        case 0x79a06cu: goto label_79a06c;
        case 0x79a070u: goto label_79a070;
        case 0x79a074u: goto label_79a074;
        case 0x79a078u: goto label_79a078;
        case 0x79a07cu: goto label_79a07c;
        case 0x79a080u: goto label_79a080;
        case 0x79a084u: goto label_79a084;
        case 0x79a088u: goto label_79a088;
        case 0x79a08cu: goto label_79a08c;
        case 0x79a090u: goto label_79a090;
        case 0x79a094u: goto label_79a094;
        case 0x79a098u: goto label_79a098;
        case 0x79a09cu: goto label_79a09c;
        default: break;
    }

    ctx->pc = 0x799f80u;

label_799f80:
    // 0x799f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_799f84:
    // 0x799f84: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x799f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_799f88:
    // 0x799f88: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x799f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_799f8c:
    // 0x799f8c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x799f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_799f90:
    // 0x799f90: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799f90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_799f94:
    // 0x799f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x799f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_799f98:
    // 0x799f98: 0x26106ab0  addiu       $s0, $s0, 0x6AB0
    ctx->pc = 0x799f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27312));
label_799f9c:
    // 0x799f9c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x799f9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_799fa0:
    // 0x799fa0: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x799fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
label_799fa4:
    // 0x799fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_799fa8:
    // 0x799fa8: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
label_799fac:
    // 0x799fac: 0xc0a54b4  jal         func_2952D0
label_799fb0:
    if (ctx->pc == 0x799FB0u) {
        ctx->pc = 0x799FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FACu;
        // 0x799fb0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FB4u;
        goto label_799fb4;
    }
    ctx->pc = 0x799FACu;
    SET_GPR_U32(ctx, 31, 0x799FB4u);
    ctx->pc = 0x799FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FACu;
    // 0x799fb0: 0x24050015  addiu       $a1, $zero, 0x15 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799FACu, 0x799FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FB4u;
label_799fb4:
    // 0x799fb4: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
label_799fb8:
    // 0x799fb8: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799fb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
label_799fbc:
    // 0x799fbc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799fbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_799fc0:
    // 0x799fc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799fc4:
    // 0x799fc4: 0xc0a578e  jal         func_295E38
label_799fc8:
    if (ctx->pc == 0x799FC8u) {
        ctx->pc = 0x799FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FC4u;
        // 0x799fc8: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FCCu;
        goto label_799fcc;
    }
    ctx->pc = 0x799FC4u;
    SET_GPR_U32(ctx, 31, 0x799FCCu);
    ctx->pc = 0x799FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FC4u;
    // 0x799fc8: 0x240503d9  addiu       $a1, $zero, 0x3D9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 985));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799FC4u, 0x799FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FCCu;
label_799fcc:
    // 0x799fcc: 0x93a50010  lbu         $a1, 0x10($sp)
    ctx->pc = 0x799fccu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_799fd0:
    // 0x799fd0: 0xc0a54b4  jal         func_2952D0
label_799fd4:
    if (ctx->pc == 0x799FD4u) {
        ctx->pc = 0x799FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FD0u;
        // 0x799fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FD8u;
        goto label_799fd8;
    }
    ctx->pc = 0x799FD0u;
    SET_GPR_U32(ctx, 31, 0x799FD8u);
    ctx->pc = 0x799FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD0u;
    // 0x799fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799FD0u, 0x799FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD8u;
label_799fd8:
    // 0x799fd8: 0xc0b6dac  jal         func_2DB6B0
label_799fdc:
    if (ctx->pc == 0x799FDCu) {
        ctx->pc = 0x799FE0u;
        goto label_799fe0;
    }
    ctx->pc = 0x799FD8u;
    SET_GPR_U32(ctx, 31, 0x799FE0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799FD8u, 0x799FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FE0u;
label_799fe0:
    // 0x799fe0: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x799fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_799fe4:
    // 0x799fe4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x799fe4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_799fe8:
    // 0x799fe8: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x799fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_799fec:
    // 0x799fec: 0xa0f809  jalr        $a1
label_799ff0:
    if (ctx->pc == 0x799FF0u) {
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x799FF4u;
        goto label_799ff4;
    }
    ctx->pc = 0x799FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x799FF4u);
        ctx->pc = 0x799FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799FECu;
        // 0x799ff0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799FECu, 0x799FF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x799FF4u;
label_799ff4:
    // 0x799ff4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_799ff8:
    // 0x799ff8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_799ffc:
    // 0x799ffc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799ffcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79a000:
    // 0x79a000: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a004:
    // 0x79a004: 0xc0a57e0  jal         func_295F80
label_79a008:
    if (ctx->pc == 0x79A008u) {
        ctx->pc = 0x79A008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A004u;
        // 0x79a008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A00Cu;
        goto label_79a00c;
    }
    ctx->pc = 0x79A004u;
    SET_GPR_U32(ctx, 31, 0x79A00Cu);
    ctx->pc = 0x79A008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A004u;
    // 0x79a008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A004u, 0x79A00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A00Cu;
label_79a00c:
    // 0x79a00c: 0xc0b6dac  jal         func_2DB6B0
label_79a010:
    if (ctx->pc == 0x79A010u) {
        ctx->pc = 0x79A010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A00Cu;
        // 0x79a010: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A014u;
        goto label_79a014;
    }
    ctx->pc = 0x79A00Cu;
    SET_GPR_U32(ctx, 31, 0x79A014u);
    ctx->pc = 0x79A010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A00Cu;
    // 0x79a010: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79A00Cu, 0x79A014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A014u;
label_79a014:
    // 0x79a014: 0x8c430214  lw          $v1, 0x214($v0)
    ctx->pc = 0x79a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_79a018:
    // 0x79a018: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_79a01c:
    // 0x79a01c: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_79a020:
    // 0x79a020: 0xa0f809  jalr        $a1
label_79a024:
    if (ctx->pc == 0x79A024u) {
        ctx->pc = 0x79A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A020u;
        // 0x79a024: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A028u;
        goto label_79a028;
    }
    ctx->pc = 0x79A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x79A028u);
        ctx->pc = 0x79A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A020u;
        // 0x79a024: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A020u, 0x79A028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x79A028u;
label_79a028:
    // 0x79a028: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79a028u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_79a02c:
    // 0x79a02c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x79a02cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_79a030:
    // 0x79a030: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a030u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_79a034:
    // 0x79a034: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79a034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79a038:
    // 0x79a038: 0xc0a57e0  jal         func_295F80
label_79a03c:
    if (ctx->pc == 0x79A03Cu) {
        ctx->pc = 0x79A03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A038u;
        // 0x79a03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A040u;
        goto label_79a040;
    }
    ctx->pc = 0x79A038u;
    SET_GPR_U32(ctx, 31, 0x79A040u);
    ctx->pc = 0x79A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A038u;
    // 0x79a03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79A038u, 0x79A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A040u;
label_79a040:
    // 0x79a040: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x79a040u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
label_79a044:
    // 0x79a044: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x79a044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_79a048:
    // 0x79a048: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x79a048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
label_79a04c:
    // 0x79a04c: 0xc0b0a7e  jal         func_2C29F8
label_79a050:
    if (ctx->pc == 0x79A050u) {
        ctx->pc = 0x79A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A04Cu;
        // 0x79a050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A054u;
        goto label_79a054;
    }
    ctx->pc = 0x79A04Cu;
    SET_GPR_U32(ctx, 31, 0x79A054u);
    ctx->pc = 0x79A050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A04Cu;
    // 0x79a050: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A04Cu, 0x79A054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A054u;
label_79a054:
    // 0x79a054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_79a058:
    // 0x79a058: 0xc0b0a7e  jal         func_2C29F8
label_79a05c:
    if (ctx->pc == 0x79A05Cu) {
        ctx->pc = 0x79A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A058u;
        // 0x79a05c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A060u;
        goto label_79a060;
    }
    ctx->pc = 0x79A058u;
    SET_GPR_U32(ctx, 31, 0x79A060u);
    ctx->pc = 0x79A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A058u;
    // 0x79a05c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x79A058u, 0x79A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A060u;
label_79a060:
    // 0x79a060: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x79a060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
label_79a064:
    // 0x79a064: 0x3c052000  lui         $a1, 0x2000
    ctx->pc = 0x79a064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8192 << 16));
label_79a068:
    // 0x79a068: 0x8c648658  lw          $a0, -0x79A8($v1)
    ctx->pc = 0x79a068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936152)));
label_79a06c:
    // 0x79a06c: 0x3c06003c  lui         $a2, 0x3C
    ctx->pc = 0x79a06cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)60 << 16));
label_79a070:
    // 0x79a070: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x79a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_79a074:
    // 0x79a074: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x79a074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_79a078:
    // 0x79a078: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x79a078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_79a07c:
    // 0x79a07c: 0x8cc32f84  lw          $v1, 0x2F84($a2)
    ctx->pc = 0x79a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12164)));
label_79a080:
    // 0x79a080: 0xc0b5692  jal         func_2D5A48
label_79a084:
    if (ctx->pc == 0x79A084u) {
        ctx->pc = 0x79A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A080u;
        // 0x79a084: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A088u;
        goto label_79a088;
    }
    ctx->pc = 0x79A080u;
    SET_GPR_U32(ctx, 31, 0x79A088u);
    ctx->pc = 0x79A084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A080u;
    // 0x79a084: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A080u, 0x79A088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A088u;
label_79a088:
    // 0x79a088: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x79a088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_79a08c:
    // 0x79a08c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x79a08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_79a090:
    // 0x79a090: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x79a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_79a094:
    // 0x79a094: 0x3e00008  jr          $ra
label_79a098:
    if (ctx->pc == 0x79A098u) {
        ctx->pc = 0x79A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A094u;
        // 0x79a098: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x79A09Cu;
        goto label_79a09c;
    }
    ctx->pc = 0x79A094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A094u;
        // 0x79a098: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A09Cu;
label_79a09c:
    // 0x79a09c: 0x0  nop
    ctx->pc = 0x79a09cu;
    // NOP
    ctx->pc = 0x79a0a0u;
}
} // namespace gh_r200
