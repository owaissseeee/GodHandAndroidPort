#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_00248738
// Address: 0x248738 - 0x248d00
void func_00248738_0x248738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00248738_0x248738");
#endif

    switch (ctx->pc) {
        case 0x2487d8u: goto label_2487d8;
        case 0x248804u: goto label_248804;
        case 0x248810u: goto label_248810;
        case 0x248834u: goto label_248834;
        case 0x248870u: goto label_248870;
        case 0x24887cu: goto label_24887c;
        case 0x2488b4u: goto label_2488b4;
        case 0x2488c8u: goto label_2488c8;
        case 0x24890cu: goto label_24890c;
        case 0x248918u: goto label_248918;
        case 0x248928u: goto label_248928;
        case 0x248954u: goto label_248954;
        case 0x248990u: goto label_248990;
        case 0x2489bcu: goto label_2489bc;
        case 0x248a44u: goto label_248a44;
        case 0x248a6cu: goto label_248a6c;
        case 0x248a74u: goto label_248a74;
        case 0x248a80u: goto label_248a80;
        case 0x248a8cu: goto label_248a8c;
        case 0x248aa8u: goto label_248aa8;
        case 0x248b74u: goto label_248b74;
        case 0x248c5cu: goto label_248c5c;
        case 0x248c7cu: goto label_248c7c;
        case 0x248c84u: goto label_248c84;
        case 0x248c90u: goto label_248c90;
        case 0x248c9cu: goto label_248c9c;
        case 0x248cc4u: goto label_248cc4;
        default: break;
    }

    ctx->pc = 0x248738u;

    // 0x248738: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x248738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x24873c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x24873cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x248740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248744: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x248744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x248748: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x248748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x24874c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x24874cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x248750: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x248750u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x248754: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x248754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x248758: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x248758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24875c: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x24875cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x248760: 0x8e030250  lw          $v1, 0x250($s0)
    ctx->pc = 0x248760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 592)));
    // 0x248764: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x248764u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x248768: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x248768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x24876c: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x24876cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x248770: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x248770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x248774: 0xae0216d0  sw          $v0, 0x16D0($s0)
    ctx->pc = 0x248774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
    // 0x248778: 0x10b10093  beq         $a1, $s1, . + 4 + (0x93 << 2)
    ctx->pc = 0x248778u;
    {
        const bool branch_taken_0x248778 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x24877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248778u;
        // 0x24877c: 0xae030250  sw          $v1, 0x250($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 592), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248778) {
            ctx->pc = 0x2489C8u;
            goto label_2489c8;
        }
    }
    ctx->pc = 0x248780u;
    // 0x248780: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x248780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x248784: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x248784u;
    {
        const bool branch_taken_0x248784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x248784) {
            ctx->pc = 0x248788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248784u;
            // 0x248788: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24879Cu;
            goto label_24879c;
        }
    }
    ctx->pc = 0x24878Cu;
    // 0x24878c: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x24878Cu;
    {
        const bool branch_taken_0x24878c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x24878c) {
            ctx->pc = 0x248790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24878Cu;
            // 0x248790: 0xc6010618  lwc1        $f1, 0x618($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2487B4u;
            goto label_2487b4;
        }
    }
    ctx->pc = 0x248794u;
    // 0x248794: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x248794u;
    {
        const bool branch_taken_0x248794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248794u;
        // 0x248798: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248794) {
            ctx->pc = 0x248CE8u;
            goto label_248ce8;
        }
    }
    ctx->pc = 0x24879Cu;
label_24879c:
    // 0x24879c: 0x10a200bd  beq         $a1, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x24879Cu;
    {
        const bool branch_taken_0x24879c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2487A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24879Cu;
        // 0x2487a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24879c) {
            ctx->pc = 0x248A94u;
            goto label_248a94;
        }
    }
    ctx->pc = 0x2487A4u;
    // 0x2487a4: 0x50a2010d  beql        $a1, $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x2487A4u;
    {
        const bool branch_taken_0x2487a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2487a4) {
            ctx->pc = 0x2487A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2487A4u;
            // 0x2487a8: 0xc60005a8  lwc1        $f0, 0x5A8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x248BDCu;
            goto label_248bdc;
        }
    }
    ctx->pc = 0x2487ACu;
    // 0x2487ac: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x2487ACu;
    {
        const bool branch_taken_0x2487ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2487B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2487ACu;
        // 0x2487b0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2487ac) {
            ctx->pc = 0x248CE8u;
            goto label_248ce8;
        }
    }
    ctx->pc = 0x2487B4u;
label_2487b4:
    // 0x2487b4: 0x3c014210  lui         $at, 0x4210
    ctx->pc = 0x2487b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16912 << 16));
    // 0x2487b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2487b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2487bc: 0x0  nop
    ctx->pc = 0x2487bcu;
    // NOP
    // 0x2487c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2487c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2487c4: 0x0  nop
    ctx->pc = 0x2487c4u;
    // NOP
    // 0x2487c8: 0x45000027  bc1f        . + 4 + (0x27 << 2)
    ctx->pc = 0x2487C8u;
    {
        const bool branch_taken_0x2487c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2487c8) {
            ctx->pc = 0x248868u;
            goto label_248868;
        }
    }
    ctx->pc = 0x2487D0u;
    // 0x2487d0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x2487D0u;
    SET_GPR_U32(ctx, 31, 0x2487D8u);
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x2487D0u, 0x2487D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2487D8u;
label_2487d8:
    // 0x2487d8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x2487d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x2487dc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2487dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2487e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2487e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2487e4: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x2487e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x2487e8: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2487e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2487ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2487ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2487f0: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x2487f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2487f4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2487f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2487f8: 0x46016300  add.s       $f12, $f12, $f1
    ctx->pc = 0x2487f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x2487fc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2487FCu;
    SET_GPR_U32(ctx, 31, 0x248804u);
    ctx->pc = 0x248800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2487FCu;
    // 0x248800: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2487FCu, 0x248804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248804u;
label_248804:
    // 0x248804: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x248804u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x248808: 0xc051e62  jal         func_147988
    ctx->pc = 0x248808u;
    SET_GPR_U32(ctx, 31, 0x248810u);
    ctx->pc = 0x24880Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248808u;
    // 0x24880c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x248808u, 0x248810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248810u;
label_248810:
    // 0x248810: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248814: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248814u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248818: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x248818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24881c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x24881cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x248820: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x248820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248824: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x248824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x248828: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x248828u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24882c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24882Cu;
    SET_GPR_U32(ctx, 31, 0x248834u);
    ctx->pc = 0x248830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24882Cu;
    // 0x248830: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24882Cu, 0x248834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248834u;
label_248834:
    // 0x248834: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x248834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x248838: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x248838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24883c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24883Cu;
    {
        const bool branch_taken_0x24883c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24883Cu;
        // 0x248840: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24883c) {
            ctx->pc = 0x248858u;
            goto label_248858;
        }
    }
    ctx->pc = 0x248844u;
    // 0x248844: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x248844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248848: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x248848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x24884c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24884cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x248850: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x248850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248854: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x248854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_248858:
    // 0x248858: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x248858u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x24885c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24885cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248860: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x248860u;
    {
        const bool branch_taken_0x248860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248860u;
        // 0x248864: 0xa21102f7  sb          $s1, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248860) {
            ctx->pc = 0x248984u;
            goto label_248984;
        }
    }
    ctx->pc = 0x248868u;
label_248868:
    // 0x248868: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x248868u;
    SET_GPR_U32(ctx, 31, 0x248870u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x248868u, 0x248870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248870u;
label_248870:
    // 0x248870: 0x8c4400f0  lw          $a0, 0xF0($v0)
    ctx->pc = 0x248870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x248874: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x248874u;
    SET_GPR_U32(ctx, 31, 0x24887Cu);
    ctx->pc = 0x248878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248874u;
    // 0x248878: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x248874u, 0x24887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24887Cu;
label_24887c:
    // 0x24887c: 0x0  nop
    ctx->pc = 0x24887cu;
    // NOP
    // 0x248880: 0x0  nop
    ctx->pc = 0x248880u;
    // NOP
    // 0x248884: 0x46000504  c1          0x504
    ctx->pc = 0x248884u;
    ctx->f[20] = ps2FpuSqrt(ctx->fcr31, ctx->f[0]);
    // 0x248888: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x248888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x24888c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24888cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248890: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x248890u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x248894: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248894u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248898: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x248898u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x24889c: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x24889cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2488a0: 0x0  nop
    ctx->pc = 0x2488a0u;
    // NOP
    // 0x2488a4: 0x4502001e  bc1fl       . + 4 + (0x1E << 2)
    ctx->pc = 0x2488A4u;
    {
        const bool branch_taken_0x2488a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2488a4) {
            ctx->pc = 0x2488A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2488A4u;
            // 0x2488a8: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x248920u;
            goto label_248920;
        }
    }
    ctx->pc = 0x2488ACu;
    // 0x2488ac: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2488ACu;
    SET_GPR_U32(ctx, 31, 0x2488B4u);
    ctx->pc = 0x2488B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2488ACu;
    // 0x2488b0: 0x46000d06  mov.s       $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2488ACu, 0x2488B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488B4u;
label_2488b4:
    // 0x2488b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2488b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2488b8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x2488B8u;
    {
        const bool branch_taken_0x2488b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2488b8) {
            ctx->pc = 0x2488BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2488B8u;
            // 0x2488bc: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x248910u;
            goto label_248910;
        }
    }
    ctx->pc = 0x2488C0u;
    // 0x2488c0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2488C0u;
    SET_GPR_U32(ctx, 31, 0x2488C8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2488C0u, 0x2488C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2488C8u;
label_2488c8:
    // 0x2488c8: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x2488c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x2488cc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2488ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2488d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2488d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2488d4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2488D4u;
    {
        const bool branch_taken_0x2488d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488D4u;
        // 0x2488d8: 0xc6010104  lwc1        $f1, 0x104($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488d4) {
            ctx->pc = 0x2488F0u;
            goto label_2488f0;
        }
    }
    ctx->pc = 0x2488DCu;
    // 0x2488dc: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2488dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2488e0: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2488e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2488e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2488e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2488e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2488E8u;
    {
        const bool branch_taken_0x2488e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2488ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2488E8u;
        // 0x2488ec: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2488e8) {
            ctx->pc = 0x248904u;
            goto label_248904;
        }
    }
    ctx->pc = 0x2488F0u;
label_2488f0:
    // 0x2488f0: 0x3c013f86  lui         $at, 0x3F86
    ctx->pc = 0x2488f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16262 << 16));
    // 0x2488f4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x2488f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x2488f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2488f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2488fc: 0x0  nop
    ctx->pc = 0x2488fcu;
    // NOP
    // 0x248900: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x248900u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_248904:
    // 0x248904: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x248904u;
    SET_GPR_U32(ctx, 31, 0x24890Cu);
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x248904u, 0x24890Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24890Cu;
label_24890c:
    // 0x24890c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x24890cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_248910:
    // 0x248910: 0xc051e62  jal         func_147988
    ctx->pc = 0x248910u;
    SET_GPR_U32(ctx, 31, 0x248918u);
    ctx->pc = 0x248914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248910u;
    // 0x248914: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x248910u, 0x248918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248918u;
label_248918:
    // 0x248918: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x248918u;
    {
        const bool branch_taken_0x248918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248918) {
            ctx->pc = 0x248928u;
            goto label_248928;
        }
    }
    ctx->pc = 0x248920u;
label_248920:
    // 0x248920: 0xc051e62  jal         func_147988
    ctx->pc = 0x248920u;
    SET_GPR_U32(ctx, 31, 0x248928u);
    ctx->pc = 0x248924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248920u;
    // 0x248924: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x248920u, 0x248928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248928u;
label_248928:
    // 0x248928: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x248928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x24892c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x24892cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x248930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248934: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x248934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x248938: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x248938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x24893c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x24893cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248940: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x248940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x248944: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x248944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x248948: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x248948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24894c: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x24894Cu;
    SET_GPR_U32(ctx, 31, 0x248954u);
    ctx->pc = 0x248950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24894Cu;
    // 0x248950: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x24894Cu, 0x248954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248954u;
label_248954:
    // 0x248954: 0x26030580  addiu       $v1, $s0, 0x580
    ctx->pc = 0x248954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x248958: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x248958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x24895c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24895Cu;
    {
        const bool branch_taken_0x24895c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x248960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24895Cu;
        // 0x248960: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24895c) {
            ctx->pc = 0x248978u;
            goto label_248978;
        }
    }
    ctx->pc = 0x248964u;
    // 0x248964: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x248964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248968: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x248968u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x24896c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x24896cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x248970: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x248970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248974: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x248974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_248978:
    // 0x248978: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x248978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x24897c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24897cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248980: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x248980u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_248984:
    // 0x248984: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x248984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
    // 0x248988: 0xc09d91a  jal         func_276468
    ctx->pc = 0x248988u;
    SET_GPR_U32(ctx, 31, 0x248990u);
    ctx->pc = 0x24898Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248988u;
    // 0x24898c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x248988u, 0x248990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248990u;
label_248990:
    // 0x248990: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x248990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x248994: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x248994u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x248998: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x248998u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24899c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24899cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489a0: 0x8c6538b8  lw          $a1, 0x38B8($v1)
    ctx->pc = 0x2489a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14520)));
    // 0x2489a4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x2489a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2489a8: 0x8c6638bc  lw          $a2, 0x38BC($v1)
    ctx->pc = 0x2489a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14524)));
    // 0x2489ac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2489acu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2489b0: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x2489b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2489b4: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2489B4u;
    SET_GPR_U32(ctx, 31, 0x2489BCu);
    ctx->pc = 0x2489B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2489B4u;
    // 0x2489b8: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2489B4u, 0x2489BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2489BCu;
label_2489bc:
    // 0x2489bc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2489bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2489c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2489c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2489c4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2489c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2489c8:
    // 0x2489c8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x2489c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2489cc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2489ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2489d0: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x2489d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x2489d4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x2489d4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2489d8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2489d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2489dc: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2489dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2489e0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2489e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2489e4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2489e4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2489e8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2489e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2489ec: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x2489ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2489f0: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x2489f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2489f4: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x2489f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2489f8: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x2489f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2489fc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x2489fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248a00: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x248a00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248a04: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x248a04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248a08: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x248a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248a0c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x248a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248a10: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x248a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248a14: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x248a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248a18: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x248a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248a1c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x248a1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x248a20: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x248a20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248a24: 0x0  nop
    ctx->pc = 0x248a24u;
    // NOP
    // 0x248a28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x248A28u;
    {
        const bool branch_taken_0x248a28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A28u;
        // 0x248a2c: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a28) {
            ctx->pc = 0x248A3Cu;
            goto label_248a3c;
        }
    }
    ctx->pc = 0x248A30u;
    // 0x248a30: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x248a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x248a34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x248a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x248a38: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x248a38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_248a3c:
    // 0x248a3c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x248A3Cu;
    SET_GPR_U32(ctx, 31, 0x248A44u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x248A3Cu, 0x248A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A44u;
label_248a44:
    // 0x248a44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248a48: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248a4c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a54: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x248a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x248a58: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248a58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248a5c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248a5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248a60: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x248a60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x248a64: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x248A64u;
    SET_GPR_U32(ctx, 31, 0x248A6Cu);
    ctx->pc = 0x248A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A64u;
    // 0x248a68: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x248A64u, 0x248A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A6Cu;
label_248a6c:
    // 0x248a6c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x248A6Cu;
    SET_GPR_U32(ctx, 31, 0x248A74u);
    ctx->pc = 0x248A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A6Cu;
    // 0x248a70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x248A6Cu, 0x248A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A74u;
label_248a74:
    // 0x248a74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248a74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a78: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x248A78u;
    SET_GPR_U32(ctx, 31, 0x248A80u);
    ctx->pc = 0x248A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A78u;
    // 0x248a7c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x248A78u, 0x248A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A80u;
label_248a80:
    // 0x248a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248a84: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x248A84u;
    SET_GPR_U32(ctx, 31, 0x248A8Cu);
    ctx->pc = 0x248A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248A84u;
    // 0x248a88: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x248A84u, 0x248A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248A8Cu;
label_248a8c:
    // 0x248a8c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x248A8Cu;
    {
        const bool branch_taken_0x248a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248A8Cu;
        // 0x248a90: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248a8c) {
            ctx->pc = 0x248CE8u;
            goto label_248ce8;
        }
    }
    ctx->pc = 0x248A94u;
label_248a94:
    // 0x248a94: 0x26110580  addiu       $s1, $s0, 0x580
    ctx->pc = 0x248a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x248a98: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x248a98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248a9c: 0xfba00060  sqc2        $vf0, 0x60($sp)
    ctx->pc = 0x248a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x248aa0: 0xc04078a  jal         func_101E28
    ctx->pc = 0x248AA0u;
    SET_GPR_U32(ctx, 31, 0x248AA8u);
    ctx->pc = 0x248AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248AA0u;
    // 0x248aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101E28u, 0x248AA0u, 0x248AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248AA8u;
label_248aa8:
    // 0x248aa8: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x248aa8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x248aac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x248aacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248ab0: 0x0  nop
    ctx->pc = 0x248ab0u;
    // NOP
    // 0x248ab4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x248ab4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248ab8: 0x0  nop
    ctx->pc = 0x248ab8u;
    // NOP
    // 0x248abc: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x248ABCu;
    {
        const bool branch_taken_0x248abc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248ABCu;
        // 0x248ac0: 0x27a20060  addiu       $v0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248abc) {
            ctx->pc = 0x248B04u;
            goto label_248b04;
        }
    }
    ctx->pc = 0x248AC4u;
    // 0x248ac4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248ac8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x248ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248acc: 0xc6010580  lwc1        $f1, 0x580($s0)
    ctx->pc = 0x248accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248ad0: 0x0  nop
    ctx->pc = 0x248ad0u;
    // NOP
    // 0x248ad4: 0x0  nop
    ctx->pc = 0x248ad4u;
    // NOP
    // 0x248ad8: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x248ad8u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x248adc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x248adcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x248ae0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x248ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x248ae4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x248ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248ae8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x248ae8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x248aec: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x248aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x248af0: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x248af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248af4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x248af4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x248af8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x248af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x248afc: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x248afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248b00: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x248b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_248b04:
    // 0x248b04: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x248b04u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248b08: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x248b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248b0c: 0x12320006  beq         $s1, $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x248B0Cu;
    {
        const bool branch_taken_0x248b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x248B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B0Cu;
        // 0x248b10: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b0c) {
            ctx->pc = 0x248B28u;
            goto label_248b28;
        }
    }
    ctx->pc = 0x248B14u;
    // 0x248b14: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x248b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248b18: 0xe6000580  swc1        $f0, 0x580($s0)
    ctx->pc = 0x248b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1408), bits); }
    // 0x248b1c: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x248b1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x248b20: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x248b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248b24: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x248b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_248b28:
    // 0x248b28: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x248b28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x248b2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248b30: 0xda040580  lqc2        $vf4, 0x580($s0)
    ctx->pc = 0x248b30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x248b34: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x248b34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x248b38: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x248b38u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x248b3c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x248b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248b40: 0xfa040580  sqc2        $vf4, 0x580($s0)
    ctx->pc = 0x248b40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248b44: 0xc6020618  lwc1        $f2, 0x618($s0)
    ctx->pc = 0x248b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x248b48: 0x3c014144  lui         $at, 0x4144
    ctx->pc = 0x248b48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16708 << 16));
    // 0x248b4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248b4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248b50: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x248b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x248b54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248b54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248b58: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x248b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248b5c: 0x0  nop
    ctx->pc = 0x248b5cu;
    // NOP
    // 0x248b60: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x248B60u;
    {
        const bool branch_taken_0x248b60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B60u;
        // 0x248b64: 0xe6010600  swc1        $f1, 0x600($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b60) {
            ctx->pc = 0x248BCCu;
            goto label_248bcc;
        }
    }
    ctx->pc = 0x248B68u;
    // 0x248b68: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x248b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x248b6c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x248B6Cu;
    SET_GPR_U32(ctx, 31, 0x248B74u);
    ctx->pc = 0x248B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248B6Cu;
    // 0x248b70: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x248B6Cu, 0x248B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248B74u;
label_248b74:
    // 0x248b74: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x248b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x248b78: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x248b78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x248b7c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x248B7Cu;
    {
        const bool branch_taken_0x248b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x248B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248B7Cu;
        // 0x248b80: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248b7c) {
            ctx->pc = 0x248B9Cu;
            goto label_248b9c;
        }
    }
    ctx->pc = 0x248B84u;
    // 0x248b84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x248b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x248b88: 0x2442d7b0  addiu       $v0, $v0, -0x2850
    ctx->pc = 0x248b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956976));
    // 0x248b8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x248b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x248b90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248b94: 0x800008  jr          $a0
    ctx->pc = 0x248B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x248B9Cu: goto label_248b9c;
            case 0x248BACu: goto label_248bac;
            case 0x248BBCu: goto label_248bbc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248B94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x248B9Cu;
label_248b9c:
    // 0x248b9c: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x248b9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x248ba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248ba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248ba4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x248BA4u;
    {
        const bool branch_taken_0x248ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BA4u;
        // 0x248ba8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248ba4) {
            ctx->pc = 0x248BCCu;
            goto label_248bcc;
        }
    }
    ctx->pc = 0x248BACu;
label_248bac:
    // 0x248bac: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x248bacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x248bb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248bb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248bb4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x248BB4u;
    {
        const bool branch_taken_0x248bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x248BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248BB4u;
        // 0x248bb8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248bb4) {
            ctx->pc = 0x248BCCu;
            goto label_248bcc;
        }
    }
    ctx->pc = 0x248BBCu;
label_248bbc:
    // 0x248bbc: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x248bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x248bc0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x248bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x248bc4: 0x0  nop
    ctx->pc = 0x248bc4u;
    // NOP
    // 0x248bc8: 0xe6000600  swc1        $f0, 0x600($s0)
    ctx->pc = 0x248bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
label_248bcc:
    // 0x248bcc: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x248bccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x248bd0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x248bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x248bd4: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x248bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x248bd8: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_248bdc:
    // 0x248bdc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x248bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x248be0: 0x26020580  addiu       $v0, $s0, 0x580
    ctx->pc = 0x248be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
    // 0x248be4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x248be4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248be8: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248bec: 0xdba40060  lqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248becu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x248bf0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x248bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x248bf4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x248bf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x248bf8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x248bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248bfc: 0xfba40060  sqc2        $vf4, 0x60($sp)
    ctx->pc = 0x248bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248c00: 0xd8840000  lqc2        $vf4, 0x0($a0)
    ctx->pc = 0x248c00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x248c04: 0xfba40050  sqc2        $vf4, 0x50($sp)
    ctx->pc = 0x248c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248c08: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x248c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x248c0c: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x248c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x248c10: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x248c10u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x248c14: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x248c14u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x248c18: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x248c18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248c1c: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x248c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248c20: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248c24: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x248c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x248c28: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x248c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x248c2c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x248c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x248c30: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x248c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x248c34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x248c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x248c38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x248c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x248c3c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x248c3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x248c40: 0xda040580  lqc2        $vf4, 0x580($s0)
    ctx->pc = 0x248c40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 1408)));
    // 0x248c44: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x248c44u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x248c48: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x248c48u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x248c4c: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x248c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x248c50: 0xfa040580  sqc2        $vf4, 0x580($s0)
    ctx->pc = 0x248c50u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 1408), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x248c54: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x248C54u;
    SET_GPR_U32(ctx, 31, 0x248C5Cu);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x248C54u, 0x248C5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C5Cu;
label_248c5c:
    // 0x248c5c: 0xc60005a8  lwc1        $f0, 0x5A8($s0)
    ctx->pc = 0x248c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248c60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c64: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x248c64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x248c68: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x248c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x248c6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x248c6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x248c70: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x248c70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x248c74: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x248C74u;
    SET_GPR_U32(ctx, 31, 0x248C7Cu);
    ctx->pc = 0x248C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C74u;
    // 0x248c78: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x248C74u, 0x248C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C7Cu;
label_248c7c:
    // 0x248c7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x248C7Cu;
    SET_GPR_U32(ctx, 31, 0x248C84u);
    ctx->pc = 0x248C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C7Cu;
    // 0x248c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x248C7Cu, 0x248C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C84u;
label_248c84:
    // 0x248c84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x248c88: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x248C88u;
    SET_GPR_U32(ctx, 31, 0x248C90u);
    ctx->pc = 0x248C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C88u;
    // 0x248c8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x248C88u, 0x248C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C90u;
label_248c90:
    // 0x248c90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x248c90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x248c94: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x248C94u;
    SET_GPR_U32(ctx, 31, 0x248C9Cu);
    ctx->pc = 0x248C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248C94u;
    // 0x248c98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x248C94u, 0x248C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248C9Cu;
label_248c9c:
    // 0x248c9c: 0xc6000600  lwc1        $f0, 0x600($s0)
    ctx->pc = 0x248c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x248ca0: 0xc60105a8  lwc1        $f1, 0x5A8($s0)
    ctx->pc = 0x248ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x248ca4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x248ca4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x248ca8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x248ca8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x248cac: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x248cacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x248cb0: 0x0  nop
    ctx->pc = 0x248cb0u;
    // NOP
    // 0x248cb4: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x248CB4u;
    {
        const bool branch_taken_0x248cb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x248CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CB4u;
        // 0x248cb8: 0xe6000600  swc1        $f0, 0x600($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x248cb4) {
            ctx->pc = 0x248CE4u;
            goto label_248ce4;
        }
    }
    ctx->pc = 0x248CBCu;
    // 0x248cbc: 0xc098aaa  jal         func_262AA8
    ctx->pc = 0x248CBCu;
    SET_GPR_U32(ctx, 31, 0x248CC4u);
    ctx->pc = 0x248CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248CBCu;
    // 0x248cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262AA8u, 0x248CBCu, 0x248CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248CC4u;
label_248cc4:
    // 0x248cc4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x248CC4u;
    {
        const bool branch_taken_0x248cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x248cc4) {
            ctx->pc = 0x248CC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x248CC4u;
            // 0x248cc8: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x248CE8u;
            goto label_248ce8;
        }
    }
    ctx->pc = 0x248CCCu;
    // 0x248ccc: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x248cccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x248cd0: 0x2402009c  addiu       $v0, $zero, 0x9C
    ctx->pc = 0x248cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x248cd4: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x248cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x248cd8: 0xa20302f7  sb          $v1, 0x2F7($s0)
    ctx->pc = 0x248cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x248cdc: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x248cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x248ce0: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x248ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_248ce4:
    // 0x248ce4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x248ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_248ce8:
    // 0x248ce8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x248ce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x248cec: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x248cecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x248cf0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x248cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x248cf4: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x248cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x248cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x248CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248CF8u;
        // 0x248cfc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x248D00u;
}
