#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r101_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r101
{
// Function: func_00799768
// Address: 0x799768 - 0x799de8
void func_00799768_0x799768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799768_0x799768");
#endif

    switch (ctx->pc) {
        case 0x7997b4u: goto label_7997b4;
        case 0x7997bcu: goto label_7997bc;
        case 0x7997dcu: goto label_7997dc;
        case 0x7997e4u: goto label_7997e4;
        case 0x7997f0u: goto label_7997f0;
        case 0x7997fcu: goto label_7997fc;
        case 0x799830u: goto label_799830;
        case 0x79983cu: goto label_79983c;
        case 0x799850u: goto label_799850;
        case 0x799864u: goto label_799864;
        case 0x799890u: goto label_799890;
        case 0x79989cu: goto label_79989c;
        case 0x7998b0u: goto label_7998b0;
        case 0x7998c0u: goto label_7998c0;
        case 0x7998ecu: goto label_7998ec;
        case 0x7998f8u: goto label_7998f8;
        case 0x79990cu: goto label_79990c;
        case 0x79991cu: goto label_79991c;
        case 0x799938u: goto label_799938;
        case 0x799948u: goto label_799948;
        case 0x799958u: goto label_799958;
        case 0x799970u: goto label_799970;
        case 0x799980u: goto label_799980;
        case 0x79998cu: goto label_79998c;
        case 0x799a20u: goto label_799a20;
        case 0x799a4cu: goto label_799a4c;
        case 0x799a70u: goto label_799a70;
        case 0x799a7cu: goto label_799a7c;
        case 0x799a8cu: goto label_799a8c;
        case 0x799aa8u: goto label_799aa8;
        case 0x799b14u: goto label_799b14;
        case 0x799b40u: goto label_799b40;
        case 0x799b68u: goto label_799b68;
        case 0x799b74u: goto label_799b74;
        case 0x799b84u: goto label_799b84;
        case 0x799ba0u: goto label_799ba0;
        case 0x799c0cu: goto label_799c0c;
        case 0x799c38u: goto label_799c38;
        case 0x799c60u: goto label_799c60;
        case 0x799c6cu: goto label_799c6c;
        case 0x799c7cu: goto label_799c7c;
        case 0x799c98u: goto label_799c98;
        case 0x799ca4u: goto label_799ca4;
        case 0x799cd8u: goto label_799cd8;
        case 0x799ce4u: goto label_799ce4;
        case 0x799cf4u: goto label_799cf4;
        case 0x799d10u: goto label_799d10;
        case 0x799d20u: goto label_799d20;
        case 0x799d28u: goto label_799d28;
        case 0x799d38u: goto label_799d38;
        case 0x799d48u: goto label_799d48;
        case 0x799d58u: goto label_799d58;
        case 0x799d64u: goto label_799d64;
        case 0x799d98u: goto label_799d98;
        case 0x799da4u: goto label_799da4;
        case 0x799dacu: goto label_799dac;
        case 0x799db8u: goto label_799db8;
        default: break;
    }

    ctx->pc = 0x799768u;

    // 0x799768: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x799768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x79976c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79976cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799770: 0x8c442f84  lw          $a0, 0x2F84($v0)
    ctx->pc = 0x799770u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799778: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x79977c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x79977cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x799780: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x799780u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799784: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799788: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x799788u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x79978c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x79978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x799790: 0x3c11007a  lui         $s1, 0x7A
    ctx->pc = 0x799790u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)122 << 16));
    // 0x799794: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x799794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799798: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x799798u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79979c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x79979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x7997a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7997a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7997a4: 0xe7b60080  swc1        $f22, 0x80($sp)
    ctx->pc = 0x7997a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x7997a8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x7997a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x7997ac: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x7997ACu;
    SET_GPR_U32(ctx, 31, 0x7997B4u);
    ctx->pc = 0x7997B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997ACu;
    // 0x7997b0: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x7997ACu, 0x7997B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997B4u;
label_7997b4:
    // 0x7997b4: 0xc07ea54  jal         func_1FA950
    ctx->pc = 0x7997B4u;
    SET_GPR_U32(ctx, 31, 0x7997BCu);
    ctx->pc = 0x7997B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B4u;
    // 0x7997b8: 0x26049b70  addiu       $a0, $s0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA950u, 0x7997B4u, 0x7997BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997BCu;
label_7997bc:
    // 0x7997bc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7997BCu;
    {
        const bool branch_taken_0x7997bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997BCu;
        // 0x7997c0: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997bc) {
            ctx->pc = 0x7997F4u;
            goto label_7997f4;
        }
    }
    ctx->pc = 0x7997C4u;
    // 0x7997c4: 0x2626ace8  addiu       $a2, $s1, -0x5318
    ctx->pc = 0x7997c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946024));
    // 0x7997c8: 0x24053003  addiu       $a1, $zero, 0x3003
    ctx->pc = 0x7997c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12291));
    // 0x7997cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7997ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7997d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7997d4: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x7997D4u;
    SET_GPR_U32(ctx, 31, 0x7997DCu);
    ctx->pc = 0x7997D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D4u;
    // 0x7997d8: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x7997D4u, 0x7997DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997DCu;
label_7997dc:
    // 0x7997dc: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x7997DCu;
    SET_GPR_U32(ctx, 31, 0x7997E4u);
    ctx->pc = 0x7997E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997DCu;
    // 0x7997e0: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x7997DCu, 0x7997E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E4u;
label_7997e4:
    // 0x7997e4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x7997e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x7997e8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7997E8u;
    SET_GPR_U32(ctx, 31, 0x7997F0u);
    ctx->pc = 0x7997ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997E8u;
    // 0x7997ec: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7997E8u, 0x7997F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997F0u;
label_7997f0:
    // 0x7997f0: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x7997f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_7997f4:
    // 0x7997f4: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x7997F4u;
    SET_GPR_U32(ctx, 31, 0x7997FCu);
    ctx->pc = 0x7997F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997F4u;
    // 0x7997f8: 0x2625ace8  addiu       $a1, $s1, -0x5318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x7997F4u, 0x7997FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997FCu;
label_7997fc:
    // 0x7997fc: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799800: 0x3c050800  lui         $a1, 0x800
    ctx->pc = 0x799800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2048 << 16));
    // 0x799804: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799808: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79980c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x79980cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x799810: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x799810u;
    {
        const bool branch_taken_0x799810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799810u;
        // 0x799814: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799810) {
            ctx->pc = 0x799858u;
            goto label_799858;
        }
    }
    ctx->pc = 0x799818u;
    // 0x799818: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x79981c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79981cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799820: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799824: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799828: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x799828u;
    SET_GPR_U32(ctx, 31, 0x799830u);
    ctx->pc = 0x79982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799828u;
    // 0x79982c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x799828u, 0x799830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799830u;
label_799830:
    // 0x799830: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x799834: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799834u;
    SET_GPR_U32(ctx, 31, 0x79983Cu);
    ctx->pc = 0x799838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799834u;
    // 0x799838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799834u, 0x79983Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79983Cu;
label_79983c:
    // 0x79983c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79983cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799840: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x799844: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799844u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799848: 0xc0b6cdc  jal         func_2DB370
    ctx->pc = 0x799848u;
    SET_GPR_U32(ctx, 31, 0x799850u);
    ctx->pc = 0x79984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799848u;
    // 0x79984c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB370u, 0x799848u, 0x799850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799850u;
label_799850:
    // 0x799850: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799850u;
    {
        const bool branch_taken_0x799850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799850u;
        // 0x799854: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799850) {
            ctx->pc = 0x799868u;
            goto label_799868;
        }
    }
    ctx->pc = 0x799858u;
label_799858:
    // 0x799858: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x79985c: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x79985Cu;
    SET_GPR_U32(ctx, 31, 0x799864u);
    ctx->pc = 0x799860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79985Cu;
    // 0x799860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x79985Cu, 0x799864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799864u;
label_799864:
    // 0x799864: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x799864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_799868:
    // 0x799868: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x799868u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x79986c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x79986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799870: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799874: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x799874u;
    {
        const bool branch_taken_0x799874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799874u;
        // 0x799878: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799874) {
            ctx->pc = 0x7998B8u;
            goto label_7998b8;
        }
    }
    ctx->pc = 0x79987Cu;
    // 0x79987c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79987cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799880: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799884: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799888: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x799888u;
    SET_GPR_U32(ctx, 31, 0x799890u);
    ctx->pc = 0x79988Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799888u;
    // 0x79988c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x799888u, 0x799890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799890u;
label_799890:
    // 0x799890: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x799890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x799894: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799894u;
    SET_GPR_U32(ctx, 31, 0x79989Cu);
    ctx->pc = 0x799898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799894u;
    // 0x799898: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799894u, 0x79989Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79989Cu;
label_79989c:
    // 0x79989c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79989cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7998a0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x7998a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x7998a4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x7998a4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x7998a8: 0xc0b6cdc  jal         func_2DB370
    ctx->pc = 0x7998A8u;
    SET_GPR_U32(ctx, 31, 0x7998B0u);
    ctx->pc = 0x7998ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998A8u;
    // 0x7998ac: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB370u, 0x7998A8u, 0x7998B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998B0u;
label_7998b0:
    // 0x7998b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7998B0u;
    {
        const bool branch_taken_0x7998b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7998B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998B0u;
        // 0x7998b4: 0x8e828658  lw          $v0, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998b0) {
            ctx->pc = 0x7998C4u;
            goto label_7998c4;
        }
    }
    ctx->pc = 0x7998B8u;
label_7998b8:
    // 0x7998b8: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x7998B8u;
    SET_GPR_U32(ctx, 31, 0x7998C0u);
    ctx->pc = 0x7998BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998B8u;
    // 0x7998bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x7998B8u, 0x7998C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998C0u;
label_7998c0:
    // 0x7998c0: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x7998c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_7998c4:
    // 0x7998c4: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x7998c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x7998c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x7998c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x7998cc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7998ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7998d0: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x7998D0u;
    {
        const bool branch_taken_0x7998d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7998D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7998D0u;
        // 0x7998d4: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7998d0) {
            ctx->pc = 0x799914u;
            goto label_799914;
        }
    }
    ctx->pc = 0x7998D8u;
    // 0x7998d8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7998d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7998dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7998dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7998e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7998e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7998e4: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x7998E4u;
    SET_GPR_U32(ctx, 31, 0x7998ECu);
    ctx->pc = 0x7998E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998E4u;
    // 0x7998e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x7998E4u, 0x7998ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998ECu;
label_7998ec:
    // 0x7998ec: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x7998ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x7998f0: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x7998F0u;
    SET_GPR_U32(ctx, 31, 0x7998F8u);
    ctx->pc = 0x7998F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7998F0u;
    // 0x7998f4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x7998F0u, 0x7998F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7998F8u;
label_7998f8:
    // 0x7998f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x7998f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x7998fc: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x7998fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x799900: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x799900u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x799904: 0xc0b6cdc  jal         func_2DB370
    ctx->pc = 0x799904u;
    SET_GPR_U32(ctx, 31, 0x79990Cu);
    ctx->pc = 0x799908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799904u;
    // 0x799908: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB370u, 0x799904u, 0x79990Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79990Cu;
label_79990c:
    // 0x79990c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x79990Cu;
    {
        const bool branch_taken_0x79990c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79990Cu;
        // 0x799910: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79990c) {
            ctx->pc = 0x799920u;
            goto label_799920;
        }
    }
    ctx->pc = 0x799914u;
label_799914:
    // 0x799914: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799914u;
    SET_GPR_U32(ctx, 31, 0x79991Cu);
    ctx->pc = 0x799918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799914u;
    // 0x799918: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799914u, 0x79991Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79991Cu;
label_79991c:
    // 0x79991c: 0x8e642f84  lw          $a0, 0x2F84($s3)
    ctx->pc = 0x79991cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799920:
    // 0x799920: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799920u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799924: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799924u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799928: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799928u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79992c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x79992cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799930: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799930u;
    SET_GPR_U32(ctx, 31, 0x799938u);
    ctx->pc = 0x799934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799930u;
    // 0x799934: 0x24053002  addiu       $a1, $zero, 0x3002 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12290));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799930u, 0x799938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799938u;
label_799938:
    // 0x799938: 0x26928658  addiu       $s2, $s4, -0x79A8
    ctx->pc = 0x799938u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x79993c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79993cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799940: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799940u;
    SET_GPR_U32(ctx, 31, 0x799948u);
    ctx->pc = 0x799944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799940u;
    // 0x799944: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799940u, 0x799948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799948u;
label_799948:
    // 0x799948: 0x26b09b70  addiu       $s0, $s5, -0x6490
    ctx->pc = 0x799948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    // 0x79994c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x79994cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799950: 0xc07ea54  jal         func_1FA950
    ctx->pc = 0x799950u;
    SET_GPR_U32(ctx, 31, 0x799958u);
    ctx->pc = 0x799954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799950u;
    // 0x799954: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA950u, 0x799950u, 0x799958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799958u;
label_799958:
    // 0x799958: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x799958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x79995c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79995cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799960: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x799960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799964: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x799964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x799968: 0xc07ea42  jal         func_1FA908
    ctx->pc = 0x799968u;
    SET_GPR_U32(ctx, 31, 0x799970u);
    ctx->pc = 0x79996Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799968u;
    // 0x79996c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA908u, 0x799968u, 0x799970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799970u;
label_799970:
    // 0x799970: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799974: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799978: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799978u;
    SET_GPR_U32(ctx, 31, 0x799980u);
    ctx->pc = 0x79997Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799978u;
    // 0x79997c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799978u, 0x799980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799980u;
label_799980:
    // 0x799980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799984: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799984u;
    SET_GPR_U32(ctx, 31, 0x79998Cu);
    ctx->pc = 0x799988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799984u;
    // 0x799988: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799984u, 0x79998Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79998Cu;
label_79998c:
    // 0x79998c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x79998cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x799990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799994: 0x50620083  beql        $v1, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x799994u;
    {
        const bool branch_taken_0x799994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x799994) {
            ctx->pc = 0x799998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799994u;
            // 0x799998: 0x8e858658  lw          $a1, -0x79A8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799BA4u;
            goto label_799ba4;
        }
    }
    ctx->pc = 0x79999Cu;
    // 0x79999c: 0x106000be  beqz        $v1, . + 4 + (0xBE << 2)
    ctx->pc = 0x79999Cu;
    {
        const bool branch_taken_0x79999c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79999Cu;
        // 0x7999a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79999c) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x7999A4u;
    // 0x7999a4: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x7999A4u;
    {
        const bool branch_taken_0x7999a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7999A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999A4u;
        // 0x7999a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999a4) {
            ctx->pc = 0x799AA8u;
            goto label_799aa8;
        }
    }
    ctx->pc = 0x7999ACu;
    // 0x7999ac: 0x146200bb  bne         $v1, $v0, . + 4 + (0xBB << 2)
    ctx->pc = 0x7999ACu;
    {
        const bool branch_taken_0x7999ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x7999B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ACu;
        // 0x7999b0: 0x26848658  addiu       $a0, $s4, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ac) {
            ctx->pc = 0x799C9Cu;
            goto label_799c9c;
        }
    }
    ctx->pc = 0x7999B4u;
    // 0x7999b4: 0x8e858658  lw          $a1, -0x79A8($s4)
    ctx->pc = 0x7999b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x7999b8: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x7999b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
    // 0x7999bc: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x7999bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x7999c0: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x7999c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7999c4: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
    ctx->pc = 0x7999C4u;
    {
        const bool branch_taken_0x7999c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7999c4) {
            ctx->pc = 0x7999C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7999C4u;
            // 0x7999c8: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799AA0u;
            goto label_799aa0;
        }
    }
    ctx->pc = 0x7999CCu;
    // 0x7999cc: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x7999ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x7999d0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x7999d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x7999d4: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x7999d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x7999d8: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x7999d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7999dc: 0x641024  and         $v0, $v1, $a0
    ctx->pc = 0x7999dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7999e0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x7999E0u;
    {
        const bool branch_taken_0x7999e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999E0u;
        // 0x7999e4: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999e0) {
            ctx->pc = 0x799A28u;
            goto label_799a28;
        }
    }
    ctx->pc = 0x7999E8u;
    // 0x7999e8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7999e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7999ec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7999ECu;
    {
        const bool branch_taken_0x7999ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999ECu;
        // 0x7999f0: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999ec) {
            ctx->pc = 0x799A28u;
            goto label_799a28;
        }
    }
    ctx->pc = 0x7999F4u;
    // 0x7999f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x7999f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x7999f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7999F8u;
    {
        const bool branch_taken_0x7999f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7999FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7999F8u;
        // 0x7999fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7999f8) {
            ctx->pc = 0x799A28u;
            goto label_799a28;
        }
    }
    ctx->pc = 0x799A00u;
    // 0x799a00: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799a04: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799a08: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x799a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x799a0c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a10: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a14: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a14u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a18: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A18u;
    SET_GPR_U32(ctx, 31, 0x799A20u);
    ctx->pc = 0x799A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A18u;
    // 0x799a1c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A18u, 0x799A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A20u;
label_799a20:
    // 0x799a20: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799A20u;
    {
        const bool branch_taken_0x799a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799a20) {
            ctx->pc = 0x799A4Cu;
            goto label_799a4c;
        }
    }
    ctx->pc = 0x799A28u;
label_799a28:
    // 0x799a28: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799a28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799a2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799a30: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799a34: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x799a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x799a38: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799a38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a3c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799a40: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799a40u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799a44: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799A44u;
    SET_GPR_U32(ctx, 31, 0x799A4Cu);
    ctx->pc = 0x799A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A44u;
    // 0x799a48: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799A44u, 0x799A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A4Cu;
label_799a4c:
    // 0x799a4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799a4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799a50: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799a50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799a54: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x799a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x799a58: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x799a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x799a5c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799a60: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799a64: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799a68: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799a6c: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x799a6cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_799a70:
    // 0x799a70: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x799a74: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799A74u;
    SET_GPR_U32(ctx, 31, 0x799A7Cu);
    ctx->pc = 0x799A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A74u;
    // 0x799a78: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799A74u, 0x799A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A7Cu;
label_799a7c:
    // 0x799a7c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799a80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799a84: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799A84u;
    SET_GPR_U32(ctx, 31, 0x799A8Cu);
    ctx->pc = 0x799A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799A84u;
    // 0x799a88: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799A84u, 0x799A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799A8Cu;
label_799a8c:
    // 0x799a8c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x799a8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799a90: 0x0  nop
    ctx->pc = 0x799a90u;
    // NOP
    // 0x799a94: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x799A94u;
    {
        const bool branch_taken_0x799a94 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x799a94) {
            ctx->pc = 0x799A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799A94u;
            // 0x799a98: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799A70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799a70;
        }
    }
    ctx->pc = 0x799A9Cu;
    // 0x799a9c: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_799aa0:
    // 0x799aa0: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799AA0u;
    SET_GPR_U32(ctx, 31, 0x799AA8u);
    ctx->pc = 0x799AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799AA0u;
    // 0x799aa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799AA0u, 0x799AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799AA8u;
label_799aa8:
    // 0x799aa8: 0x8e858658  lw          $a1, -0x79A8($s4)
    ctx->pc = 0x799aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x799aac: 0x3c060400  lui         $a2, 0x400
    ctx->pc = 0x799aacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1024 << 16));
    // 0x799ab0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x799ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x799ab4: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x799ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x799ab8: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x799AB8u;
    {
        const bool branch_taken_0x799ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799ab8) {
            ctx->pc = 0x799ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799AB8u;
            // 0x799abc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B98u;
            goto label_799b98;
        }
    }
    ctx->pc = 0x799AC0u;
    // 0x799ac0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x799ac0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x799ac4: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x799ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x799ac8: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x799ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x799acc: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x799accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x799ad0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799ad4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x799ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x799ad8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x799AD8u;
    {
        const bool branch_taken_0x799ad8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AD8u;
        // 0x799adc: 0x861024  and         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ad8) {
            ctx->pc = 0x799B1Cu;
            goto label_799b1c;
        }
    }
    ctx->pc = 0x799AE0u;
    // 0x799ae0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799AE0u;
    {
        const bool branch_taken_0x799ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AE0u;
        // 0x799ae4: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799ae0) {
            ctx->pc = 0x799B1Cu;
            goto label_799b1c;
        }
    }
    ctx->pc = 0x799AE8u;
    // 0x799ae8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x799ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x799aec: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799AECu;
    {
        const bool branch_taken_0x799aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799AECu;
        // 0x799af0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799aec) {
            ctx->pc = 0x799B1Cu;
            goto label_799b1c;
        }
    }
    ctx->pc = 0x799AF4u;
    // 0x799af4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799af8: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799afc: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x799afcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x799b00: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799b00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b04: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799b04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b0c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799B0Cu;
    SET_GPR_U32(ctx, 31, 0x799B14u);
    ctx->pc = 0x799B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B0Cu;
    // 0x799b10: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799B0Cu, 0x799B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B14u;
label_799b14:
    // 0x799b14: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799B14u;
    {
        const bool branch_taken_0x799b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799b14) {
            ctx->pc = 0x799B40u;
            goto label_799b40;
        }
    }
    ctx->pc = 0x799B1Cu;
label_799b1c:
    // 0x799b1c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799b20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799b24: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799b28: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x799b28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x799b2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b30: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799b34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799b34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799b38: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799B38u;
    SET_GPR_U32(ctx, 31, 0x799B40u);
    ctx->pc = 0x799B3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B38u;
    // 0x799b3c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799B38u, 0x799B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B40u;
label_799b40:
    // 0x799b40: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799b44: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799b48: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x799b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x799b4c: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x799b4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x799b50: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799b54: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799b58: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799b5c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799b60: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x799b60u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x799b64: 0x0  nop
    ctx->pc = 0x799b64u;
    // NOP
label_799b68:
    // 0x799b68: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x799b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x799b6c: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799B6Cu;
    SET_GPR_U32(ctx, 31, 0x799B74u);
    ctx->pc = 0x799B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B6Cu;
    // 0x799b70: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799B6Cu, 0x799B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B74u;
label_799b74:
    // 0x799b74: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799b78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799b7c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799B7Cu;
    SET_GPR_U32(ctx, 31, 0x799B84u);
    ctx->pc = 0x799B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B7Cu;
    // 0x799b80: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799B7Cu, 0x799B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799B84u;
label_799b84:
    // 0x799b84: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x799b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799b88: 0x0  nop
    ctx->pc = 0x799b88u;
    // NOP
    // 0x799b8c: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x799B8Cu;
    {
        const bool branch_taken_0x799b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x799b8c) {
            ctx->pc = 0x799B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799B8Cu;
            // 0x799b90: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799b68;
        }
    }
    ctx->pc = 0x799B94u;
    // 0x799b94: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x799b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_799b98:
    // 0x799b98: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799B98u;
    SET_GPR_U32(ctx, 31, 0x799BA0u);
    ctx->pc = 0x799B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799B98u;
    // 0x799b9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799B98u, 0x799BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799BA0u;
label_799ba0:
    // 0x799ba0: 0x8e858658  lw          $a1, -0x79A8($s4)
    ctx->pc = 0x799ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_799ba4:
    // 0x799ba4: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x799ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x799ba8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x799ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x799bac: 0x861024  and         $v0, $a0, $a2
    ctx->pc = 0x799bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x799bb0: 0x54400037  bnel        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x799BB0u;
    {
        const bool branch_taken_0x799bb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799bb0) {
            ctx->pc = 0x799BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799BB0u;
            // 0x799bb4: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C90u;
            goto label_799c90;
        }
    }
    ctx->pc = 0x799BB8u;
    // 0x799bb8: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x799bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x799bbc: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x799bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x799bc0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x799bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x799bc4: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x799bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x799bc8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799bcc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x799bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x799bd0: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x799BD0u;
    {
        const bool branch_taken_0x799bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BD0u;
        // 0x799bd4: 0x3c020400  lui         $v0, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bd0) {
            ctx->pc = 0x799C14u;
            goto label_799c14;
        }
    }
    ctx->pc = 0x799BD8u;
    // 0x799bd8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x799bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x799bdc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x799BDCu;
    {
        const bool branch_taken_0x799bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BDCu;
        // 0x799be0: 0x861024  and         $v0, $a0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799bdc) {
            ctx->pc = 0x799C14u;
            goto label_799c14;
        }
    }
    ctx->pc = 0x799BE4u;
    // 0x799be4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799BE4u;
    {
        const bool branch_taken_0x799be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799BE4u;
        // 0x799be8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799be4) {
            ctx->pc = 0x799C14u;
            goto label_799c14;
        }
    }
    ctx->pc = 0x799BECu;
    // 0x799bec: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799bf0: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799bf4: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x799bf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x799bf8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799bf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799bfc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799bfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799c00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c04: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799C04u;
    SET_GPR_U32(ctx, 31, 0x799C0Cu);
    ctx->pc = 0x799C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C04u;
    // 0x799c08: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799C04u, 0x799C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C0Cu;
label_799c0c:
    // 0x799c0c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x799C0Cu;
    {
        const bool branch_taken_0x799c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x799c0c) {
            ctx->pc = 0x799C38u;
            goto label_799c38;
        }
    }
    ctx->pc = 0x799C14u;
label_799c14:
    // 0x799c14: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x799c14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x799c18: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x799c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799c1c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x799c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x799c20: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x799c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x799c24: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799c24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c28: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799c28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799c2c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x799c2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799c30: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x799C30u;
    SET_GPR_U32(ctx, 31, 0x799C38u);
    ctx->pc = 0x799C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C30u;
    // 0x799c34: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x799C30u, 0x799C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C38u;
label_799c38:
    // 0x799c38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799c3c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799c3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799c40: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x799c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x799c44: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x799c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x799c48: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799c4c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799c50: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799c50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799c54: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799c58: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x799c58u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x799c5c: 0x0  nop
    ctx->pc = 0x799c5cu;
    // NOP
label_799c60:
    // 0x799c60: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x799c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x799c64: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799C64u;
    SET_GPR_U32(ctx, 31, 0x799C6Cu);
    ctx->pc = 0x799C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C64u;
    // 0x799c68: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799C64u, 0x799C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C6Cu;
label_799c6c:
    // 0x799c6c: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799c70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799c74: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799C74u;
    SET_GPR_U32(ctx, 31, 0x799C7Cu);
    ctx->pc = 0x799C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C74u;
    // 0x799c78: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799C74u, 0x799C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C7Cu;
label_799c7c:
    // 0x799c7c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x799c7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799c80: 0x0  nop
    ctx->pc = 0x799c80u;
    // NOP
    // 0x799c84: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x799C84u;
    {
        const bool branch_taken_0x799c84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x799c84) {
            ctx->pc = 0x799C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799C84u;
            // 0x799c88: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799c60;
        }
    }
    ctx->pc = 0x799C8Cu;
    // 0x799c8c: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x799c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_799c90:
    // 0x799c90: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799C90u;
    SET_GPR_U32(ctx, 31, 0x799C98u);
    ctx->pc = 0x799C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C90u;
    // 0x799c94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799C90u, 0x799C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C98u;
label_799c98:
    // 0x799c98: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x799c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
label_799c9c:
    // 0x799c9c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799C9Cu;
    SET_GPR_U32(ctx, 31, 0x799CA4u);
    ctx->pc = 0x799CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799C9Cu;
    // 0x799ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799C9Cu, 0x799CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA4u;
label_799ca4:
    // 0x799ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799ca8: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x799ca8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799cac: 0x14600019  bnez        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x799CACu;
    {
        const bool branch_taken_0x799cac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CACu;
        // 0x799cb0: 0x8e622f84  lw          $v0, 0x2F84($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cac) {
            ctx->pc = 0x799D14u;
            goto label_799d14;
        }
    }
    ctx->pc = 0x799CB4u;
    // 0x799cb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x799cb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x799cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799cbc: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x799cbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x799cc0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x799cc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x799cc4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x799cc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x799cc8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x799cc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x799ccc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x799cccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x799cd0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x799cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x799cd4: 0x4616a501  sub.s       $f20, $f20, $f22
    ctx->pc = 0x799cd4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_799cd8:
    // 0x799cd8: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x799cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799cdc: 0xc0b6cc6  jal         func_2DB318
    ctx->pc = 0x799CDCu;
    SET_GPR_U32(ctx, 31, 0x799CE4u);
    ctx->pc = 0x799CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CDCu;
    // 0x799ce0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB318u, 0x799CDCu, 0x799CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CE4u;
label_799ce4:
    // 0x799ce4: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799ce8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799cec: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799CECu;
    SET_GPR_U32(ctx, 31, 0x799CF4u);
    ctx->pc = 0x799CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799CECu;
    // 0x799cf0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799CECu, 0x799CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CF4u;
label_799cf4:
    // 0x799cf4: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x799cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x799cf8: 0x0  nop
    ctx->pc = 0x799cf8u;
    // NOP
    // 0x799cfc: 0x4503fff6  bc1tl       . + 4 + (-0xA << 2)
    ctx->pc = 0x799CFCu;
    {
        const bool branch_taken_0x799cfc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x799cfc) {
            ctx->pc = 0x799D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x799CFCu;
            // 0x799d00: 0x4616a501  sub.s       $f20, $f20, $f22 (Delay Slot)
            ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x799CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799cd8;
        }
    }
    ctx->pc = 0x799D04u;
    // 0x799d04: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x799d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799d08: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x799D08u;
    SET_GPR_U32(ctx, 31, 0x799D10u);
    ctx->pc = 0x799D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D08u;
    // 0x799d0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x799D08u, 0x799D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D10u;
label_799d10:
    // 0x799d10: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
label_799d14:
    // 0x799d14: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x799d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799d18: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799D18u;
    SET_GPR_U32(ctx, 31, 0x799D20u);
    ctx->pc = 0x799D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D18u;
    // 0x799d1c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799D18u, 0x799D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D20u;
label_799d20:
    // 0x799d20: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799D20u;
    SET_GPR_U32(ctx, 31, 0x799D28u);
    ctx->pc = 0x799D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D20u;
    // 0x799d24: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799D20u, 0x799D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D28u;
label_799d28:
    // 0x799d28: 0x2404001f  addiu       $a0, $zero, 0x1F
    ctx->pc = 0x799d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x799d2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d30: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x799D30u;
    SET_GPR_U32(ctx, 31, 0x799D38u);
    ctx->pc = 0x799D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D30u;
    // 0x799d34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x799D30u, 0x799D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D38u;
label_799d38:
    // 0x799d38: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x799d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x799d3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d40: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x799D40u;
    SET_GPR_U32(ctx, 31, 0x799D48u);
    ctx->pc = 0x799D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D40u;
    // 0x799d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x799D40u, 0x799D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D48u;
label_799d48:
    // 0x799d48: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x799d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x799d4c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d50: 0xc0b6cfa  jal         func_2DB3E8
    ctx->pc = 0x799D50u;
    SET_GPR_U32(ctx, 31, 0x799D58u);
    ctx->pc = 0x799D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D50u;
    // 0x799d54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB3E8u, 0x799D50u, 0x799D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D58u;
label_799d58:
    // 0x799d58: 0x26848658  addiu       $a0, $s4, -0x79A8
    ctx->pc = 0x799d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936152));
    // 0x799d5c: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x799D5Cu;
    SET_GPR_U32(ctx, 31, 0x799D64u);
    ctx->pc = 0x799D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D5Cu;
    // 0x799d60: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x799D5Cu, 0x799D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D64u;
label_799d64:
    // 0x799d64: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x799d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x799d68: 0x2c630003  sltiu       $v1, $v1, 0x3
    ctx->pc = 0x799d68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x799d6c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x799D6Cu;
    {
        const bool branch_taken_0x799d6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799D6Cu;
        // 0x799d70: 0x8e838658  lw          $v1, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799d6c) {
            ctx->pc = 0x799DA4u;
            goto label_799da4;
        }
    }
    ctx->pc = 0x799D74u;
    // 0x799d74: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x799d74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x799d78: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x799d78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x799d7c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799d80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799d84: 0x2610ea60  addiu       $s0, $s0, -0x15A0
    ctx->pc = 0x799d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961760));
    // 0x799d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d8c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x799d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x799d90: 0xc0b0ab8  jal         func_2C2AE0
    ctx->pc = 0x799D90u;
    SET_GPR_U32(ctx, 31, 0x799D98u);
    ctx->pc = 0x799D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D90u;
    // 0x799d94: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2AE0u, 0x799D90u, 0x799D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799D98u;
label_799d98:
    // 0x799d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799d9c: 0xc0b0a02  jal         func_2C2808
    ctx->pc = 0x799D9Cu;
    SET_GPR_U32(ctx, 31, 0x799DA4u);
    ctx->pc = 0x799DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799D9Cu;
    // 0x799da0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2808u, 0x799D9Cu, 0x799DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DA4u;
label_799da4:
    // 0x799da4: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x799DA4u;
    SET_GPR_U32(ctx, 31, 0x799DACu);
    ctx->pc = 0x799DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DA4u;
    // 0x799da8: 0x8e642f84  lw          $a0, 0x2F84($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x799DA4u, 0x799DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DACu;
label_799dac:
    // 0x799dac: 0x8e622f84  lw          $v0, 0x2F84($s3)
    ctx->pc = 0x799dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12164)));
    // 0x799db0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799DB0u;
    SET_GPR_U32(ctx, 31, 0x799DB8u);
    ctx->pc = 0x799DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799DB0u;
    // 0x799db4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799DB0u, 0x799DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799DB8u;
label_799db8:
    // 0x799db8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799dbc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799dbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799dc0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799dc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799dc4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799dc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799dc8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x799dc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799dcc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x799dccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799dd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799dd4: 0xc7b60080  lwc1        $f22, 0x80($sp)
    ctx->pc = 0x799dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x799dd8: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x799dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x799ddc: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x799ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799de0: 0x3e00008  jr          $ra
    ctx->pc = 0x799DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799DE0u;
        // 0x799de4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799DE8u;
}
} // namespace gh_r101
