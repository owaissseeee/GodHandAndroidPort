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
// Function: r6xx_setLever__FPCc14eR6xx_Obj_Statff
// Address: 0x7997b0 - 0x799938
void r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x7997b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("r6xx_setLever__FPCc14eR6xx_Obj_Statff_0x7997b0");
#endif

    switch (ctx->pc) {
        case 0x7997f8u: goto label_7997f8;
        case 0x799828u: goto label_799828;
        case 0x799870u: goto label_799870;
        case 0x79989cu: goto label_79989c;
        case 0x7998acu: goto label_7998ac;
        case 0x7998bcu: goto label_7998bc;
        case 0x7998ccu: goto label_7998cc;
        case 0x7998e0u: goto label_7998e0;
        case 0x7998f4u: goto label_7998f4;
        case 0x799908u: goto label_799908;
        case 0x79991cu: goto label_79991c;
        default: break;
    }

    ctx->pc = 0x7997b0u;

    // 0x7997b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x7997b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x7997b4: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x7997b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x7997b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x7997b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x7997bc: 0x24484c58  addiu       $t0, $v0, 0x4C58
    ctx->pc = 0x7997bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 19544));
    // 0x7997c0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x7997c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x7997c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7997c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997c8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x7997c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x7997cc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x7997ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x7997d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x7997d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x7997d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x7997d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x7997d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7997d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7997dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7997dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997e0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x7997e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x7997e4: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x7997E4u;
    {
        const bool branch_taken_0x7997e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E4u;
        // 0x7997e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e4) {
            ctx->pc = 0x799820u;
            goto label_799820;
        }
    }
    ctx->pc = 0x7997ECu;
    // 0x7997ec: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997f0: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7997f4: 0x0  nop
    ctx->pc = 0x7997f4u;
    // NOP
label_7997f8:
    // 0x7997f8: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x7997fc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x799800: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x799804: 0x821014  dsllv       $v0, $v0, $a0
    ctx->pc = 0x799804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x799808: 0x28e30008  slti        $v1, $a3, 0x8
    ctx->pc = 0x799808u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x79980c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x79980Cu;
    {
        const bool branch_taken_0x79980c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79980Cu;
        // 0x799810: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79980c) {
            ctx->pc = 0x799820u;
            goto label_799820;
        }
    }
    ctx->pc = 0x799814u;
    // 0x799814: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x799818: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x799818u;
    {
        const bool branch_taken_0x799818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799818) {
            ctx->pc = 0x79981Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799818u;
            // 0x79981c: 0x80c20000  lb          $v0, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7997F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997f8;
        }
    }
    ctx->pc = 0x799820u;
label_799820:
    // 0x799820: 0xc053f66  jal         func_14FD98
    ctx->pc = 0x799820u;
    SET_GPR_U32(ctx, 31, 0x799828u);
    ctx->pc = 0x799824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799820u;
    // 0x799824: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD98u, 0x799820u, 0x799828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799828u;
label_799828:
    // 0x799828: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x799828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79982c: 0x5200003c  beql        $s0, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x79982Cu;
    {
        const bool branch_taken_0x79982c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79982c) {
            ctx->pc = 0x799830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79982Cu;
            // 0x799830: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x799834u;
    // 0x799834: 0x3c01c479  lui         $at, 0xC479
    ctx->pc = 0x799834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50297 << 16));
    // 0x799838: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x799838u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x79983c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79983cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x799840: 0x0  nop
    ctx->pc = 0x799840u;
    // NOP
    // 0x799844: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x799844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799848: 0x0  nop
    ctx->pc = 0x799848u;
    // NOP
    // 0x79984c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x79984Cu;
    {
        const bool branch_taken_0x79984c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x799850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79984Cu;
        // 0x799850: 0x2e220008  sltiu       $v0, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79984c) {
            ctx->pc = 0x799874u;
            goto label_799874;
        }
    }
    ctx->pc = 0x799854u;
    // 0x799854: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x799854u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799858: 0x0  nop
    ctx->pc = 0x799858u;
    // NOP
    // 0x79985c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x79985Cu;
    {
        const bool branch_taken_0x79985c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x799860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79985Cu;
        // 0x799860: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79985c) {
            ctx->pc = 0x799874u;
            goto label_799874;
        }
    }
    ctx->pc = 0x799864u;
    // 0x799864: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x799864u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x799868: 0xc0693f8  jal         func_1A4FE0
    ctx->pc = 0x799868u;
    SET_GPR_U32(ctx, 31, 0x799870u);
    ctx->pc = 0x79986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799868u;
    // 0x79986c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4FE0u, 0x799868u, 0x799870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799870u;
label_799870:
    // 0x799870: 0x2e220008  sltiu       $v0, $s1, 0x8
    ctx->pc = 0x799870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_799874:
    // 0x799874: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x799874u;
    {
        const bool branch_taken_0x799874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799874u;
        // 0x799878: 0x3c02007a  lui         $v0, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799874) {
            ctx->pc = 0x79991Cu;
            goto label_79991c;
        }
    }
    ctx->pc = 0x79987Cu;
    // 0x79987c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x799880: 0x24429e30  addiu       $v0, $v0, -0x61D0
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942256));
    // 0x799884: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799888: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x799888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x79988c: 0x800008  jr          $a0
    ctx->pc = 0x79988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x799894u: goto label_799894;
            case 0x7998A4u: goto label_7998a4;
            case 0x7998B4u: goto label_7998b4;
            case 0x7998C4u: goto label_7998c4;
            case 0x7998D4u: goto label_7998d4;
            case 0x7998E8u: goto label_7998e8;
            case 0x7998FCu: goto label_7998fc;
            case 0x799910u: goto label_799910;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79988Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x799894u;
label_799894:
    // 0x799894: 0xc069352  jal         func_1A4D48
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4D48u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x79989Cu;
    {
        const bool branch_taken_0x79989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79989Cu;
        // 0x7998a0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79989c) {
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x7998A4u;
label_7998a4:
    // 0x7998a4: 0xc069380  jal         func_1A4E00
    ctx->pc = 0x7998A4u;
    SET_GPR_U32(ctx, 31, 0x7998ACu);
    ctx->pc = 0x7998A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A4u;
    // 0x7998a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E00u, 0x7998A4u, 0x7998ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998ACu;
label_7998ac:
    // 0x7998ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x7998ACu;
    {
        const bool branch_taken_0x7998ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998ACu;
        // 0x7998b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998ac) {
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x7998B4u;
label_7998b4:
    // 0x7998b4: 0xc06936a  jal         func_1A4DA8
    ctx->pc = 0x7998B4u;
    SET_GPR_U32(ctx, 31, 0x7998BCu);
    ctx->pc = 0x7998B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B4u;
    // 0x7998b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4DA8u, 0x7998B4u, 0x7998BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998BCu;
label_7998bc:
    // 0x7998bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7998BCu;
    {
        const bool branch_taken_0x7998bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998BCu;
        // 0x7998c0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998bc) {
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x7998C4u;
label_7998c4:
    // 0x7998c4: 0xc0693a2  jal         func_1A4E88
    ctx->pc = 0x7998C4u;
    SET_GPR_U32(ctx, 31, 0x7998CCu);
    ctx->pc = 0x7998C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998C4u;
    // 0x7998c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4E88u, 0x7998C4u, 0x7998CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998CCu;
label_7998cc:
    // 0x7998cc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x7998CCu;
    {
        const bool branch_taken_0x7998cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998CCu;
        // 0x7998d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998cc) {
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x7998D4u;
label_7998d4:
    // 0x7998d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998d8: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x7998D8u;
    SET_GPR_U32(ctx, 31, 0x7998E0u);
    ctx->pc = 0x7998DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998D8u;
    // 0x7998dc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x7998D8u, 0x7998E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998E0u;
label_7998e0:
    // 0x7998e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7998E0u;
    {
        const bool branch_taken_0x7998e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998E0u;
        // 0x7998e4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998e0) {
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x7998E8u;
label_7998e8:
    // 0x7998e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7998ec: 0xc0693ca  jal         func_1A4F28
    ctx->pc = 0x7998ECu;
    SET_GPR_U32(ctx, 31, 0x7998F4u);
    ctx->pc = 0x7998F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998ECu;
    // 0x7998f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F28u, 0x7998ECu, 0x7998F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F4u;
label_7998f4:
    // 0x7998f4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7998F4u;
    {
        const bool branch_taken_0x7998f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998F4u;
        // 0x7998f8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998f4) {
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x7998FCu;
label_7998fc:
    // 0x7998fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7998fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799900: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x799900u;
    SET_GPR_U32(ctx, 31, 0x799908u);
    ctx->pc = 0x799904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799900u;
    // 0x799904: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x799900u, 0x799908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799908u;
label_799908:
    // 0x799908: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799908u;
    {
        const bool branch_taken_0x799908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79990Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799908u;
        // 0x79990c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799908) {
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x799910u;
label_799910:
    // 0x799910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799914: 0xc0693c8  jal         func_1A4F20
    ctx->pc = 0x799914u;
    SET_GPR_U32(ctx, 31, 0x79991Cu);
    ctx->pc = 0x799918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799914u;
    // 0x799918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4F20u, 0x799914u, 0x79991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79991Cu;
label_79991c:
    // 0x79991c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79991cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_799920:
    // 0x799920: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x799920u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799928: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x799928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x79992c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x79992cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799930: 0x3e00008  jr          $ra
    ctx->pc = 0x799930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799930u;
        // 0x799934: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799938u;
}
} // namespace gh_r602
