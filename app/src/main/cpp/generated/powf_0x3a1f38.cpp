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

// Function: powf
// Address: 0x3a1f38 - 0x3a2440
void powf_0x3a1f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("powf_0x3a1f38");
#endif

    switch (ctx->pc) {
        case 0x3a1f70u: goto label_3a1f70;
        case 0x3a1f88u: goto label_3a1f88;
        case 0x3a1f98u: goto label_3a1f98;
        case 0x3a1fd0u: goto label_3a1fd0;
        case 0x3a1fdcu: goto label_3a1fdc;
        case 0x3a1fe8u: goto label_3a1fe8;
        case 0x3a1ff8u: goto label_3a1ff8;
        case 0x3a2010u: goto label_3a2010;
        case 0x3a2020u: goto label_3a2020;
        case 0x3a2064u: goto label_3a2064;
        case 0x3a2070u: goto label_3a2070;
        case 0x3a2088u: goto label_3a2088;
        case 0x3a2098u: goto label_3a2098;
        case 0x3a20a8u: goto label_3a20a8;
        case 0x3a20dcu: goto label_3a20dc;
        case 0x3a20e8u: goto label_3a20e8;
        case 0x3a210cu: goto label_3a210c;
        case 0x3a2128u: goto label_3a2128;
        case 0x3a2138u: goto label_3a2138;
        case 0x3a2148u: goto label_3a2148;
        case 0x3a2158u: goto label_3a2158;
        case 0x3a2168u: goto label_3a2168;
        case 0x3a2178u: goto label_3a2178;
        case 0x3a219cu: goto label_3a219c;
        case 0x3a21a8u: goto label_3a21a8;
        case 0x3a21e0u: goto label_3a21e0;
        case 0x3a21f0u: goto label_3a21f0;
        case 0x3a2214u: goto label_3a2214;
        case 0x3a2220u: goto label_3a2220;
        case 0x3a223cu: goto label_3a223c;
        case 0x3a224cu: goto label_3a224c;
        case 0x3a2254u: goto label_3a2254;
        case 0x3a2260u: goto label_3a2260;
        case 0x3a226cu: goto label_3a226c;
        case 0x3a227cu: goto label_3a227c;
        case 0x3a2284u: goto label_3a2284;
        case 0x3a2290u: goto label_3a2290;
        case 0x3a229cu: goto label_3a229c;
        case 0x3a22ccu: goto label_3a22cc;
        case 0x3a22dcu: goto label_3a22dc;
        case 0x3a22e4u: goto label_3a22e4;
        case 0x3a22f0u: goto label_3a22f0;
        case 0x3a22fcu: goto label_3a22fc;
        case 0x3a230cu: goto label_3a230c;
        case 0x3a2314u: goto label_3a2314;
        case 0x3a2320u: goto label_3a2320;
        case 0x3a232cu: goto label_3a232c;
        case 0x3a233cu: goto label_3a233c;
        case 0x3a2368u: goto label_3a2368;
        case 0x3a2378u: goto label_3a2378;
        case 0x3a239cu: goto label_3a239c;
        case 0x3a23a8u: goto label_3a23a8;
        case 0x3a23ccu: goto label_3a23cc;
        case 0x3a23dcu: goto label_3a23dc;
        case 0x3a23f8u: goto label_3a23f8;
        case 0x3a2408u: goto label_3a2408;
        default: break;
    }

    ctx->pc = 0x3a1f38u;

    // 0x3a1f38: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3a1f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3a1f3c: 0xe7b70098  swc1        $f23, 0x98($sp)
    ctx->pc = 0x3a1f3cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x3a1f40: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x3a1f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x3a1f44: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x3a1f44u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x3a1f48: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x3a1f48u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x3a1f4c: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x3a1f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x3a1f50: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3a1f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3a1f54: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x3a1f54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x3a1f58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3a1f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3a1f5c: 0x3c130046  lui         $s3, 0x46
    ctx->pc = 0x3a1f5cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)70 << 16));
    // 0x3a1f60: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x3a1f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x3a1f64: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3a1f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3a1f68: 0xc0e8bb6  jal         func_3A2ED8
    ctx->pc = 0x3A1F68u;
    SET_GPR_U32(ctx, 31, 0x3A1F70u);
    ctx->pc = 0x3A1F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1F68u;
    // 0x3a1f6c: 0xe7b60090  swc1        $f22, 0x90($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2ED8u, 0x3A1F68u, 0x3A1F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F70u;
label_3a1f70:
    // 0x3a1f70: 0x8e70f024  lw          $s0, -0xFDC($s3)
    ctx->pc = 0x3a1f70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963236)));
    // 0x3a1f74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3a1f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3a1f78: 0x12020125  beq         $s0, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x3A1F78u;
    {
        const bool branch_taken_0x3a1f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F78u;
        // 0x3a1f7c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f78) {
            ctx->pc = 0x3A2410u;
            goto label_3a2410;
        }
    }
    ctx->pc = 0x3A1F80u;
    // 0x3a1f80: 0xc0e9380  jal         func_3A4E00
    ctx->pc = 0x3A1F80u;
    SET_GPR_U32(ctx, 31, 0x3A1F88u);
    ctx->pc = 0x3A1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1F80u;
    // 0x3a1f84: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E00u, 0x3A1F80u, 0x3A1F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F88u;
label_3a1f88:
    // 0x3a1f88: 0x14400122  bnez        $v0, . + 4 + (0x122 << 2)
    ctx->pc = 0x3A1F88u;
    {
        const bool branch_taken_0x3a1f88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1F88u;
        // 0x3a1f8c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1f88) {
            ctx->pc = 0x3A2414u;
            goto label_3a2414;
        }
    }
    ctx->pc = 0x3A1F90u;
    // 0x3a1f90: 0xc0e9380  jal         func_3A4E00
    ctx->pc = 0x3A1F90u;
    SET_GPR_U32(ctx, 31, 0x3A1F98u);
    ctx->pc = 0x3A1F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1F90u;
    // 0x3a1f94: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E00u, 0x3A1F90u, 0x3A1F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1F98u;
label_3a1f98:
    // 0x3a1f98: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x3A1F98u;
    {
        const bool branch_taken_0x3a1f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a1f98) {
            ctx->pc = 0x3A2028u;
            goto label_3a2028;
        }
    }
    ctx->pc = 0x3A1FA0u;
    // 0x3a1fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a1fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a1fa4: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x3a1fa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a1fa8: 0x0  nop
    ctx->pc = 0x3a1fa8u;
    // NOP
    // 0x3a1fac: 0x45000118  bc1f        . + 4 + (0x118 << 2)
    ctx->pc = 0x3A1FACu;
    {
        const bool branch_taken_0x3a1fac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A1FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1FACu;
        // 0x3a1fb0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1fac) {
            ctx->pc = 0x3A2410u;
            goto label_3a2410;
        }
    }
    ctx->pc = 0x3A1FB4u;
    // 0x3a1fb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a1fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a1fb8: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x3a1fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x3a1fbc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a1fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a1fc0: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a1fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a1fc4: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a1fc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a1fc8: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A1FC8u;
    SET_GPR_U32(ctx, 31, 0x3A1FD0u);
    ctx->pc = 0x3A1FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1FC8u;
    // 0x3a1fcc: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A1FC8u, 0x3A1FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1FD0u;
label_3a1fd0:
    // 0x3a1fd0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a1fd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a1fd4: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A1FD4u;
    SET_GPR_U32(ctx, 31, 0x3A1FDCu);
    ctx->pc = 0x3A1FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1FD4u;
    // 0x3a1fd8: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A1FD4u, 0x3A1FDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1FDCu;
label_3a1fdc:
    // 0x3a1fdc: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x3a1fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x3a1fe0: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A1FE0u;
    SET_GPR_U32(ctx, 31, 0x3A1FE8u);
    ctx->pc = 0x3A1FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1FE0u;
    // 0x3a1fe4: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A1FE0u, 0x3A1FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1FE8u;
label_3a1fe8:
    // 0x3a1fe8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3a1fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    // 0x3a1fec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a1ff0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A1FF0u;
    {
        const bool branch_taken_0x3a1ff0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x3a1ff0) {
            ctx->pc = 0x3A2008u;
            goto label_3a2008;
        }
    }
    ctx->pc = 0x3A1FF8u;
label_3a1ff8:
    // 0x3a1ff8: 0x3402ffc0  ori         $v0, $zero, 0xFFC0
    ctx->pc = 0x3a1ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a1ffc: 0x213bc  dsll32      $v0, $v0, 14
    ctx->pc = 0x3a1ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 14));
    // 0x3a2000: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x3A2000u;
    {
        const bool branch_taken_0x3a2000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2000u;
        // 0x3a2004: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2000) {
            ctx->pc = 0x3A23E4u;
            goto label_3a23e4;
        }
    }
    ctx->pc = 0x3A2008u;
label_3a2008:
    // 0x3a2008: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A2008u;
    SET_GPR_U32(ctx, 31, 0x3A2010u);
    ctx->pc = 0x3A200Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2008u;
    // 0x3a200c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A2008u, 0x3A2010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2010u;
label_3a2010:
    // 0x3a2010: 0x144000f5  bnez        $v0, . + 4 + (0xF5 << 2)
    ctx->pc = 0x3A2010u;
    {
        const bool branch_taken_0x3a2010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2010u;
        // 0x3a2014: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2010) {
            ctx->pc = 0x3A23E8u;
            goto label_3a23e8;
        }
    }
    ctx->pc = 0x3A2018u;
    // 0x3a2018: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A2018u;
    SET_GPR_U32(ctx, 31, 0x3A2020u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A2018u, 0x3A2020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2020u;
label_3a2020:
    // 0x3a2020: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x3A2020u;
    {
        const bool branch_taken_0x3a2020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2020u;
        // 0x3a2024: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2020) {
            ctx->pc = 0x3A23E0u;
            goto label_3a23e0;
        }
    }
    ctx->pc = 0x3A2028u;
label_3a2028:
    // 0x3a2028: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x3a2028u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3a202c: 0x4616b832  c.eq.s      $f23, $f22
    ctx->pc = 0x3a202cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[23], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2030: 0x45000043  bc1f        . + 4 + (0x43 << 2)
    ctx->pc = 0x3A2030u;
    {
        const bool branch_taken_0x3a2030 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3a2030) {
            ctx->pc = 0x3A2140u;
            goto label_3a2140;
        }
    }
    ctx->pc = 0x3A2038u;
    // 0x3a2038: 0x4616a032  c.eq.s      $f20, $f22
    ctx->pc = 0x3a2038u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a203c: 0x0  nop
    ctx->pc = 0x3a203cu;
    // NOP
    // 0x3a2040: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x3A2040u;
    {
        const bool branch_taken_0x3a2040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A2044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2040u;
        // 0x3a2044: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2040) {
            ctx->pc = 0x3A20A0u;
            goto label_3a20a0;
        }
    }
    ctx->pc = 0x3A2048u;
    // 0x3a2048: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a204c: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x3a204cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x3a2050: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a2050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a2054: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a2054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a2058: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a2058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a205c: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A205Cu;
    SET_GPR_U32(ctx, 31, 0x3A2064u);
    ctx->pc = 0x3A2060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A205Cu;
    // 0x3a2060: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A205Cu, 0x3A2064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2064u;
label_3a2064:
    // 0x3a2064: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a2064u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a2068: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2068u;
    SET_GPR_U32(ctx, 31, 0x3A2070u);
    ctx->pc = 0x3A206Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2068u;
    // 0x3a206c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2068u, 0x3A2070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2070u;
label_3a2070:
    // 0x3a2070: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x3a2070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x3a2074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a2074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2078: 0x1600ffdf  bnez        $s0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3A2078u;
    {
        const bool branch_taken_0x3a2078 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A207Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2078u;
        // 0x3a207c: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2078) {
            ctx->pc = 0x3A1FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1ff8;
        }
    }
    ctx->pc = 0x3A2080u;
    // 0x3a2080: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A2080u;
    SET_GPR_U32(ctx, 31, 0x3A2088u);
    ctx->pc = 0x3A2084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2080u;
    // 0x3a2084: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A2080u, 0x3A2088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2088u;
label_3a2088:
    // 0x3a2088: 0x144000d7  bnez        $v0, . + 4 + (0xD7 << 2)
    ctx->pc = 0x3A2088u;
    {
        const bool branch_taken_0x3a2088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2088u;
        // 0x3a208c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2088) {
            ctx->pc = 0x3A23E8u;
            goto label_3a23e8;
        }
    }
    ctx->pc = 0x3A2090u;
    // 0x3a2090: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A2090u;
    SET_GPR_U32(ctx, 31, 0x3A2098u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A2090u, 0x3A2098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2098u;
label_3a2098:
    // 0x3a2098: 0x100000d1  b           . + 4 + (0xD1 << 2)
    ctx->pc = 0x3A2098u;
    {
        const bool branch_taken_0x3a2098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2098u;
        // 0x3a209c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2098) {
            ctx->pc = 0x3A23E0u;
            goto label_3a23e0;
        }
    }
    ctx->pc = 0x3A20A0u;
label_3a20a0:
    // 0x3a20a0: 0xc0e933c  jal         func_3A4CF0
    ctx->pc = 0x3A20A0u;
    SET_GPR_U32(ctx, 31, 0x3A20A8u);
    ctx->pc = 0x3A20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20A0u;
    // 0x3a20a4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CF0u, 0x3A20A0u, 0x3A20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20A8u;
label_3a20a8:
    // 0x3a20a8: 0x104000da  beqz        $v0, . + 4 + (0xDA << 2)
    ctx->pc = 0x3A20A8u;
    {
        const bool branch_taken_0x3a20a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20A8u;
        // 0x3a20ac: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20a8) {
            ctx->pc = 0x3A2414u;
            goto label_3a2414;
        }
    }
    ctx->pc = 0x3A20B0u;
    // 0x3a20b0: 0x4616a034  c.lt.s      $f20, $f22
    ctx->pc = 0x3a20b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a20b4: 0x0  nop
    ctx->pc = 0x3a20b4u;
    // NOP
    // 0x3a20b8: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
    ctx->pc = 0x3A20B8u;
    {
        const bool branch_taken_0x3a20b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20B8u;
        // 0x3a20bc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20b8) {
            ctx->pc = 0x3A2414u;
            goto label_3a2414;
        }
    }
    ctx->pc = 0x3A20C0u;
    // 0x3a20c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a20c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a20c4: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x3a20c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x3a20c8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a20c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a20cc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a20d0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a20d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a20d4: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A20D4u;
    SET_GPR_U32(ctx, 31, 0x3A20DCu);
    ctx->pc = 0x3A20D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20D4u;
    // 0x3a20d8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A20D4u, 0x3A20DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20DCu;
label_3a20dc:
    // 0x3a20dc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a20dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a20e0: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A20E0u;
    SET_GPR_U32(ctx, 31, 0x3A20E8u);
    ctx->pc = 0x3A20E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A20E0u;
    // 0x3a20e4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A20E0u, 0x3A20E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A20E8u;
label_3a20e8:
    // 0x3a20e8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A20E8u;
    {
        const bool branch_taken_0x3a20e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A20ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20E8u;
        // 0x3a20ec: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20e8) {
            ctx->pc = 0x3A20FCu;
            goto label_3a20fc;
        }
    }
    ctx->pc = 0x3A20F0u;
    // 0x3a20f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a20f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a20f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3A20F4u;
    {
        const bool branch_taken_0x3a20f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A20F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A20F4u;
        // 0x3a20f8: 0xffa40018  sd          $a0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a20f4) {
            ctx->pc = 0x3A2110u;
            goto label_3a2110;
        }
    }
    ctx->pc = 0x3A20FCu;
label_3a20fc:
    // 0x3a20fc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a2100: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a2100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2104: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A2104u;
    SET_GPR_U32(ctx, 31, 0x3A210Cu);
    ctx->pc = 0x3A2108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2104u;
    // 0x3a2108: 0xdc45ea00  ld          $a1, -0x1600($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294961664)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A2104u, 0x3A210Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A210Cu;
label_3a210c:
    // 0x3a210c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3a210cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_3a2110:
    // 0x3a2110: 0x8e63f024  lw          $v1, -0xFDC($s3)
    ctx->pc = 0x3a2110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963236)));
    // 0x3a2114: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a2114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a2118: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A2118u;
    {
        const bool branch_taken_0x3a2118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a2118) {
            ctx->pc = 0x3A2130u;
            goto label_3a2130;
        }
    }
    ctx->pc = 0x3A2120u;
    // 0x3a2120: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A2120u;
    SET_GPR_U32(ctx, 31, 0x3A2128u);
    ctx->pc = 0x3A2124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2120u;
    // 0x3a2124: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A2120u, 0x3A2128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2128u;
label_3a2128:
    // 0x3a2128: 0x144000af  bnez        $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x3A2128u;
    {
        const bool branch_taken_0x3a2128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A212Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2128u;
        // 0x3a212c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2128) {
            ctx->pc = 0x3A23E8u;
            goto label_3a23e8;
        }
    }
    ctx->pc = 0x3A2130u;
label_3a2130:
    // 0x3a2130: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A2130u;
    SET_GPR_U32(ctx, 31, 0x3A2138u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A2130u, 0x3A2138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2138u;
label_3a2138:
    // 0x3a2138: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x3A2138u;
    {
        const bool branch_taken_0x3a2138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2138u;
        // 0x3a213c: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2138) {
            ctx->pc = 0x3A23E0u;
            goto label_3a23e0;
        }
    }
    ctx->pc = 0x3A2140u;
label_3a2140:
    // 0x3a2140: 0xc0e933c  jal         func_3A4CF0
    ctx->pc = 0x3A2140u;
    SET_GPR_U32(ctx, 31, 0x3A2148u);
    ctx->pc = 0x3A2144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2140u;
    // 0x3a2144: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CF0u, 0x3A2140u, 0x3A2148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2148u;
label_3a2148:
    // 0x3a2148: 0x14400080  bnez        $v0, . + 4 + (0x80 << 2)
    ctx->pc = 0x3A2148u;
    {
        const bool branch_taken_0x3a2148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a2148) {
            ctx->pc = 0x3A234Cu;
            goto label_3a234c;
        }
    }
    ctx->pc = 0x3A2150u;
    // 0x3a2150: 0xc0e933c  jal         func_3A4CF0
    ctx->pc = 0x3A2150u;
    SET_GPR_U32(ctx, 31, 0x3A2158u);
    ctx->pc = 0x3A2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2150u;
    // 0x3a2154: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CF0u, 0x3A2150u, 0x3A2158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2158u;
label_3a2158:
    // 0x3a2158: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x3A2158u;
    {
        const bool branch_taken_0x3a2158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2158) {
            ctx->pc = 0x3A234Cu;
            goto label_3a234c;
        }
    }
    ctx->pc = 0x3A2160u;
    // 0x3a2160: 0xc0e933c  jal         func_3A4CF0
    ctx->pc = 0x3A2160u;
    SET_GPR_U32(ctx, 31, 0x3A2168u);
    ctx->pc = 0x3A2164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2160u;
    // 0x3a2164: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CF0u, 0x3A2160u, 0x3A2168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2168u;
label_3a2168:
    // 0x3a2168: 0x10400078  beqz        $v0, . + 4 + (0x78 << 2)
    ctx->pc = 0x3A2168u;
    {
        const bool branch_taken_0x3a2168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a2168) {
            ctx->pc = 0x3A234Cu;
            goto label_3a234c;
        }
    }
    ctx->pc = 0x3A2170u;
    // 0x3a2170: 0xc0e9380  jal         func_3A4E00
    ctx->pc = 0x3A2170u;
    SET_GPR_U32(ctx, 31, 0x3A2178u);
    ctx->pc = 0x3A2174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2170u;
    // 0x3a2174: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E00u, 0x3A2170u, 0x3A2178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2178u;
label_3a2178:
    // 0x3a2178: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3A2178u;
    {
        const bool branch_taken_0x3a2178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2178u;
        // 0x3a217c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2178) {
            ctx->pc = 0x3A21F8u;
            goto label_3a21f8;
        }
    }
    ctx->pc = 0x3A2180u;
    // 0x3a2180: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a2180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a2184: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x3a2184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x3a2188: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a2188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a218c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a218cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a2190: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a2190u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a2194: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2194u;
    SET_GPR_U32(ctx, 31, 0x3A219Cu);
    ctx->pc = 0x3A2198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2194u;
    // 0x3a2198: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2194u, 0x3A219Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A219Cu;
label_3a219c:
    // 0x3a219c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a219cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a21a0: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A21A0u;
    SET_GPR_U32(ctx, 31, 0x3A21A8u);
    ctx->pc = 0x3A21A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A21A0u;
    // 0x3a21a4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A21A0u, 0x3A21A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A21A8u;
label_3a21a8:
    // 0x3a21a8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A21A8u;
    {
        const bool branch_taken_0x3a21a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21A8u;
        // 0x3a21ac: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21a8) {
            ctx->pc = 0x3A21BCu;
            goto label_3a21bc;
        }
    }
    ctx->pc = 0x3A21B0u;
    // 0x3a21b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a21b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a21b4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A21B4u;
    {
        const bool branch_taken_0x3a21b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A21B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21B4u;
        // 0x3a21b8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21b4) {
            ctx->pc = 0x3A21C8u;
            goto label_3a21c8;
        }
    }
    ctx->pc = 0x3A21BCu;
label_3a21bc:
    // 0x3a21bc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a21bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a21c0: 0xdc43eaa0  ld          $v1, -0x1560($v0)
    ctx->pc = 0x3a21c0u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x45EAA0u));
    // 0x3a21c4: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x3a21c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_3a21c8:
    // 0x3a21c8: 0x8e63f024  lw          $v1, -0xFDC($s3)
    ctx->pc = 0x3a21c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963236)));
    // 0x3a21cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a21d0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A21D0u;
    {
        const bool branch_taken_0x3a21d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a21d0) {
            ctx->pc = 0x3A21E8u;
            goto label_3a21e8;
        }
    }
    ctx->pc = 0x3A21D8u;
    // 0x3a21d8: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A21D8u;
    SET_GPR_U32(ctx, 31, 0x3A21E0u);
    ctx->pc = 0x3A21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A21D8u;
    // 0x3a21dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A21D8u, 0x3A21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A21E0u;
label_3a21e0:
    // 0x3a21e0: 0x14400081  bnez        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x3A21E0u;
    {
        const bool branch_taken_0x3a21e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21E0u;
        // 0x3a21e4: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21e0) {
            ctx->pc = 0x3A23E8u;
            goto label_3a23e8;
        }
    }
    ctx->pc = 0x3A21E8u;
label_3a21e8:
    // 0x3a21e8: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A21E8u;
    SET_GPR_U32(ctx, 31, 0x3A21F0u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A21E8u, 0x3A21F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A21F0u;
label_3a21f0:
    // 0x3a21f0: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x3A21F0u;
    {
        const bool branch_taken_0x3a21f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A21F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A21F0u;
        // 0x3a21f4: 0x24030021  addiu       $v1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a21f0) {
            ctx->pc = 0x3A23E0u;
            goto label_3a23e0;
        }
    }
    ctx->pc = 0x3A21F8u;
label_3a21f8:
    // 0x3a21f8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a21f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a21fc: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x3a21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x3a2200: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a2200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a2204: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a2204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a2208: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a2208u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a220c: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A220Cu;
    SET_GPR_U32(ctx, 31, 0x3A2214u);
    ctx->pc = 0x3A2210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A220Cu;
    // 0x3a2210: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A220Cu, 0x3A2214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2214u;
label_3a2214:
    // 0x3a2214: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a2214u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a2218: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2218u;
    SET_GPR_U32(ctx, 31, 0x3A2220u);
    ctx->pc = 0x3A221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2218u;
    // 0x3a221c: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2218u, 0x3A2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2220u;
label_3a2220:
    // 0x3a2220: 0x16000024  bnez        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A2220u;
    {
        const bool branch_taken_0x3a2220 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A2224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2220u;
        // 0x3a2224: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2220) {
            ctx->pc = 0x3A22B4u;
            goto label_3a22b4;
        }
    }
    ctx->pc = 0x3A2228u;
    // 0x3a2228: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3a2228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x3a222c: 0xdc22eaa8  ld          $v0, -0x1558($at)
    ctx->pc = 0x3a222cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x45EAA8u));
    // 0x3a2230: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a2230u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a2234: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2234u;
    SET_GPR_U32(ctx, 31, 0x3A223Cu);
    ctx->pc = 0x3A2238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2234u;
    // 0x3a2238: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2234u, 0x3A223Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A223Cu;
label_3a223c:
    // 0x3a223c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3a223cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3a2240: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a2240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a2244: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A2244u;
    SET_GPR_U32(ctx, 31, 0x3A224Cu);
    ctx->pc = 0x3A2248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2244u;
    // 0x3a2248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A2244u, 0x3A224Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A224Cu;
label_3a224c:
    // 0x3a224c: 0xc0c7ab8  jal         func_31EAE0
    ctx->pc = 0x3A224Cu;
    SET_GPR_U32(ctx, 31, 0x3A2254u);
    ctx->pc = 0x3A2250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A224Cu;
    // 0x3a2250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3A224Cu, 0x3A2254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2254u;
label_3a2254:
    // 0x3a2254: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a2254u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a2258: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2258u;
    SET_GPR_U32(ctx, 31, 0x3A2260u);
    ctx->pc = 0x3A225Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2258u;
    // 0x3a225c: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2258u, 0x3A2260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2260u;
label_3a2260:
    // 0x3a2260: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a2260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2264: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A2264u;
    SET_GPR_U32(ctx, 31, 0x3A226Cu);
    ctx->pc = 0x3A2268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2264u;
    // 0x3a2268: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A2264u, 0x3A226Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A226Cu;
label_3a226c:
    // 0x3a226c: 0x4410035  bgez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x3A226Cu;
    {
        const bool branch_taken_0x3a226c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3A2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A226Cu;
        // 0x3a2270: 0x8e63f024  lw          $v1, -0xFDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a226c) {
            ctx->pc = 0x3A2344u;
            goto label_3a2344;
        }
    }
    ctx->pc = 0x3A2274u;
    // 0x3a2274: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2274u;
    SET_GPR_U32(ctx, 31, 0x3A227Cu);
    ctx->pc = 0x3A2278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2274u;
    // 0x3a2278: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2274u, 0x3A227Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A227Cu;
label_3a227c:
    // 0x3a227c: 0xc0e92bc  jal         func_3A4AF0
    ctx->pc = 0x3A227Cu;
    SET_GPR_U32(ctx, 31, 0x3A2284u);
    ctx->pc = 0x3A2280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A227Cu;
    // 0x3a2280: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AF0u, 0x3A227Cu, 0x3A2284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2284u;
label_3a2284:
    // 0x3a2284: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a2284u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2288: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2288u;
    SET_GPR_U32(ctx, 31, 0x3A2290u);
    ctx->pc = 0x3A228Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2288u;
    // 0x3a228c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2288u, 0x3A2290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2290u;
label_3a2290:
    // 0x3a2290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2294: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A2294u;
    SET_GPR_U32(ctx, 31, 0x3A229Cu);
    ctx->pc = 0x3A2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2294u;
    // 0x3a2298: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A2294u, 0x3A229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A229Cu;
label_3a229c:
    // 0x3a229c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x3A229Cu;
    {
        const bool branch_taken_0x3a229c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A229Cu;
        // 0x3a22a0: 0x8e63f024  lw          $v1, -0xFDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a229c) {
            ctx->pc = 0x3A2344u;
            goto label_3a2344;
        }
    }
    ctx->pc = 0x3A22A4u;
    // 0x3a22a4: 0x3c010046  lui         $at, 0x46
    ctx->pc = 0x3a22a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)70 << 16));
    // 0x3a22a8: 0xdc22eab0  ld          $v0, -0x1550($at)
    ctx->pc = 0x3a22a8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x45EAB0u));
    // 0x3a22ac: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x3A22ACu;
    {
        const bool branch_taken_0x3a22ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A22B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22ACu;
        // 0x3a22b0: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22ac) {
            ctx->pc = 0x3A2344u;
            goto label_3a2344;
        }
    }
    ctx->pc = 0x3A22B4u;
label_3a22b4:
    // 0x3a22b4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a22b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a22b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a22bc: 0xdc51ea00  ld          $s1, -0x1600($v0)
    ctx->pc = 0x3a22bcu;
    SET_GPR_U64(ctx, 17, FAST_READ64(0x45EA00u));
    // 0x3a22c0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3a22c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a22c4: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A22C4u;
    SET_GPR_U32(ctx, 31, 0x3A22CCu);
    ctx->pc = 0x3A22C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A22C4u;
    // 0x3a22c8: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A22C4u, 0x3A22CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A22CCu;
label_3a22cc:
    // 0x3a22cc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3a22ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3a22d0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a22d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a22d4: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A22D4u;
    SET_GPR_U32(ctx, 31, 0x3A22DCu);
    ctx->pc = 0x3A22D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A22D4u;
    // 0x3a22d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A22D4u, 0x3A22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A22DCu;
label_3a22dc:
    // 0x3a22dc: 0xc0c7ab8  jal         func_31EAE0
    ctx->pc = 0x3A22DCu;
    SET_GPR_U32(ctx, 31, 0x3A22E4u);
    ctx->pc = 0x3A22E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A22DCu;
    // 0x3a22e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3A22DCu, 0x3A22E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A22E4u;
label_3a22e4:
    // 0x3a22e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3a22e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3a22e8: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A22E8u;
    SET_GPR_U32(ctx, 31, 0x3A22F0u);
    ctx->pc = 0x3A22ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A22E8u;
    // 0x3a22ec: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A22E8u, 0x3A22F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A22F0u;
label_3a22f0:
    // 0x3a22f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3a22f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a22f4: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A22F4u;
    SET_GPR_U32(ctx, 31, 0x3A22FCu);
    ctx->pc = 0x3A22F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A22F4u;
    // 0x3a22f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A22F4u, 0x3A22FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A22FCu;
label_3a22fc:
    // 0x3a22fc: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A22FCu;
    {
        const bool branch_taken_0x3a22fc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3A2300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A22FCu;
        // 0x3a2300: 0x8e63f024  lw          $v1, -0xFDC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a22fc) {
            ctx->pc = 0x3A2344u;
            goto label_3a2344;
        }
    }
    ctx->pc = 0x3A2304u;
    // 0x3a2304: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2304u;
    SET_GPR_U32(ctx, 31, 0x3A230Cu);
    ctx->pc = 0x3A2308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2304u;
    // 0x3a2308: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2304u, 0x3A230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A230Cu;
label_3a230c:
    // 0x3a230c: 0xc0e92bc  jal         func_3A4AF0
    ctx->pc = 0x3A230Cu;
    SET_GPR_U32(ctx, 31, 0x3A2314u);
    ctx->pc = 0x3A2310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A230Cu;
    // 0x3a2310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AF0u, 0x3A230Cu, 0x3A2314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2314u;
label_3a2314:
    // 0x3a2314: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a2314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2318: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2318u;
    SET_GPR_U32(ctx, 31, 0x3A2320u);
    ctx->pc = 0x3A231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2318u;
    // 0x3a231c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2318u, 0x3A2320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2320u;
label_3a2320:
    // 0x3a2320: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a2320u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a2324: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A2324u;
    SET_GPR_U32(ctx, 31, 0x3A232Cu);
    ctx->pc = 0x3A2328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2324u;
    // 0x3a2328: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A2324u, 0x3A232Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A232Cu;
label_3a232c:
    // 0x3a232c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A232Cu;
    {
        const bool branch_taken_0x3a232c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A232Cu;
        // 0x3a2330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a232c) {
            ctx->pc = 0x3A2340u;
            goto label_3a2340;
        }
    }
    ctx->pc = 0x3A2334u;
    // 0x3a2334: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A2334u;
    SET_GPR_U32(ctx, 31, 0x3A233Cu);
    ctx->pc = 0x3A2338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2334u;
    // 0x3a2338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A2334u, 0x3A233Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A233Cu;
label_3a233c:
    // 0x3a233c: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3a233cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_3a2340:
    // 0x3a2340: 0x8e63f024  lw          $v1, -0xFDC($s3)
    ctx->pc = 0x3a2340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963236)));
label_3a2344:
    // 0x3a2344: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x3A2344u;
    {
        const bool branch_taken_0x3a2344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A2348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2344u;
        // 0x3a2348: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2344) {
            ctx->pc = 0x3A23BCu;
            goto label_3a23bc;
        }
    }
    ctx->pc = 0x3A234Cu;
label_3a234c:
    // 0x3a234c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3a234cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a2350: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x3a2350u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3a2354: 0x0  nop
    ctx->pc = 0x3a2354u;
    // NOP
    // 0x3a2358: 0x4500002e  bc1f        . + 4 + (0x2E << 2)
    ctx->pc = 0x3A2358u;
    {
        const bool branch_taken_0x3a2358 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3A235Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2358u;
        // 0x3a235c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2358) {
            ctx->pc = 0x3A2414u;
            goto label_3a2414;
        }
    }
    ctx->pc = 0x3A2360u;
    // 0x3a2360: 0xc0e933c  jal         func_3A4CF0
    ctx->pc = 0x3A2360u;
    SET_GPR_U32(ctx, 31, 0x3A2368u);
    ctx->pc = 0x3A2364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2360u;
    // 0x3a2364: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CF0u, 0x3A2360u, 0x3A2368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2368u;
label_3a2368:
    // 0x3a2368: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x3A2368u;
    {
        const bool branch_taken_0x3a2368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2368u;
        // 0x3a236c: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2368) {
            ctx->pc = 0x3A2414u;
            goto label_3a2414;
        }
    }
    ctx->pc = 0x3A2370u;
    // 0x3a2370: 0xc0e933c  jal         func_3A4CF0
    ctx->pc = 0x3A2370u;
    SET_GPR_U32(ctx, 31, 0x3A2378u);
    ctx->pc = 0x3A2374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2370u;
    // 0x3a2374: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4CF0u, 0x3A2370u, 0x3A2378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2378u;
label_3a2378:
    // 0x3a2378: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A2378u;
    {
        const bool branch_taken_0x3a2378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A237Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2378u;
        // 0x3a237c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2378) {
            ctx->pc = 0x3A2410u;
            goto label_3a2410;
        }
    }
    ctx->pc = 0x3A2380u;
    // 0x3a2380: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a2380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a2384: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x3a2384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x3a2388: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3a2388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3a238c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3a238cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3a2390: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3a2390u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3a2394: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A2394u;
    SET_GPR_U32(ctx, 31, 0x3A239Cu);
    ctx->pc = 0x3A2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2394u;
    // 0x3a2398: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A2394u, 0x3A239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A239Cu;
label_3a239c:
    // 0x3a239c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3a239cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3a23a0: 0xc0c7b74  jal         func_31EDD0
    ctx->pc = 0x3A23A0u;
    SET_GPR_U32(ctx, 31, 0x3A23A8u);
    ctx->pc = 0x3A23A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A23A0u;
    // 0x3a23a4: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EDD0u, 0x3A23A0u, 0x3A23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A23A8u;
label_3a23a8:
    // 0x3a23a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a23a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a23ac: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x3a23acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x3a23b0: 0x8e63f024  lw          $v1, -0xFDC($s3)
    ctx->pc = 0x3a23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294963236)));
    // 0x3a23b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3a23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3a23b8: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x3a23b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
label_3a23bc:
    // 0x3a23bc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A23BCu;
    {
        const bool branch_taken_0x3a23bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3a23bc) {
            ctx->pc = 0x3A23D4u;
            goto label_3a23d4;
        }
    }
    ctx->pc = 0x3A23C4u;
    // 0x3a23c4: 0xc0e92b2  jal         func_3A4AC8
    ctx->pc = 0x3A23C4u;
    SET_GPR_U32(ctx, 31, 0x3A23CCu);
    ctx->pc = 0x3A23C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A23C4u;
    // 0x3a23c8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4AC8u, 0x3A23C4u, 0x3A23CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A23CCu;
label_3a23cc:
    // 0x3a23cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A23CCu;
    {
        const bool branch_taken_0x3a23cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A23D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A23CCu;
        // 0x3a23d0: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a23cc) {
            ctx->pc = 0x3A23E8u;
            goto label_3a23e8;
        }
    }
    ctx->pc = 0x3A23D4u;
label_3a23d4:
    // 0x3a23d4: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A23D4u;
    SET_GPR_U32(ctx, 31, 0x3A23DCu);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A23D4u, 0x3A23DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A23DCu;
label_3a23dc:
    // 0x3a23dc: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x3a23dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_3a23e0:
    // 0x3a23e0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a23e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a23e4:
    // 0x3a23e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3a23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3a23e8:
    // 0x3a23e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A23E8u;
    {
        const bool branch_taken_0x3a23e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a23e8) {
            ctx->pc = 0x3A2400u;
            goto label_3a2400;
        }
    }
    ctx->pc = 0x3A23F0u;
    // 0x3a23f0: 0xc0e93ee  jal         func_3A4FB8
    ctx->pc = 0x3A23F0u;
    SET_GPR_U32(ctx, 31, 0x3A23F8u);
    ctx->pc = 0x3A4FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4FB8u, 0x3A23F0u, 0x3A23F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A23F8u;
label_3a23f8:
    // 0x3a23f8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3a23f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a23fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3a23fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3a2400:
    // 0x3a2400: 0xc0c7ab8  jal         func_31EAE0
    ctx->pc = 0x3A2400u;
    SET_GPR_U32(ctx, 31, 0x3A2408u);
    ctx->pc = 0x3A2404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A2400u;
    // 0x3a2404: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EAE0u, 0x3A2400u, 0x3A2408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A2408u;
label_3a2408:
    // 0x3a2408: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A2408u;
    {
        const bool branch_taken_0x3a2408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2408u;
        // 0x3a240c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a2408) {
            ctx->pc = 0x3A2418u;
            goto label_3a2418;
        }
    }
    ctx->pc = 0x3A2410u;
label_3a2410:
    // 0x3a2410: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x3a2410u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_3a2414:
    // 0x3a2414: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3a2414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3a2418:
    // 0x3a2418: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x3a2418u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a241c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x3a241cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a2420: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3a2420u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a2424: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3a2424u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a2428: 0xc7b70098  lwc1        $f23, 0x98($sp)
    ctx->pc = 0x3a2428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3a242c: 0xc7b60090  lwc1        $f22, 0x90($sp)
    ctx->pc = 0x3a242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3a2430: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x3a2430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3a2434: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x3a2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3a2438: 0x3e00008  jr          $ra
    ctx->pc = 0x3A2438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A243Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A2438u;
        // 0x3a243c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A2438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A2440u;
}
