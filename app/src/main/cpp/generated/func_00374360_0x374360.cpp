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

// Function: func_00374360
// Address: 0x374360 - 0x374508
void func_00374360_0x374360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00374360_0x374360");
#endif

    switch (ctx->pc) {
        case 0x374398u: goto label_374398;
        case 0x374488u: goto label_374488;
        case 0x374498u: goto label_374498;
        case 0x3744a4u: goto label_3744a4;
        case 0x3744b0u: goto label_3744b0;
        case 0x3744c0u: goto label_3744c0;
        case 0x3744d0u: goto label_3744d0;
        case 0x3744e0u: goto label_3744e0;
        default: break;
    }

    ctx->pc = 0x374360u;

    // 0x374360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x374364: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x374364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x374368: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x374368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37436c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37436cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374370: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x374370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x374374: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x374374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374378: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x374378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37437c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x374380: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x374380u;
    {
        const bool branch_taken_0x374380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374380u;
        // 0x374384: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374380) {
            ctx->pc = 0x3744E8u;
            goto label_3744e8;
        }
    }
    ctx->pc = 0x374388u;
    // 0x374388: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x374388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x37438c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x37438Cu;
    {
        const bool branch_taken_0x37438c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x374390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37438Cu;
        // 0x374390: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37438c) {
            ctx->pc = 0x3743C8u;
            goto label_3743c8;
        }
    }
    ctx->pc = 0x374394u;
    // 0x374394: 0x26030024  addiu       $v1, $s0, 0x24
    ctx->pc = 0x374394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_374398:
    // 0x374398: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x374398u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x37439c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3743a0: 0xac60fff8  sw          $zero, -0x8($v1)
    ctx->pc = 0x3743a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), GPR_U32(ctx, 0));
    // 0x3743a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3743a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3743a8: 0x0  nop
    ctx->pc = 0x3743a8u;
    // NOP
    // 0x3743ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3743acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3743b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3743b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x3743b4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x3743b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x3743b8: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x3743b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x3743bc: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3743bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3743c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x3743C0u;
    {
        const bool branch_taken_0x3743c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3743C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3743C0u;
        // 0x3743c4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3743c0) {
            ctx->pc = 0x374398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374398;
        }
    }
    ctx->pc = 0x3743C8u;
label_3743c8:
    // 0x3743c8: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x3743c8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3743cc: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x3743ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x3743d0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3743d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3743d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3743d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3743d8: 0x0  nop
    ctx->pc = 0x3743d8u;
    // NOP
    // 0x3743dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3743dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3743e0: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x3743e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x3743e4: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x3743e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3743e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3743e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3743ec: 0x0  nop
    ctx->pc = 0x3743ecu;
    // NOP
    // 0x3743f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3743f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3743f4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x3743f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x3743f8: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x3743f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3743fc: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x3743fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x374400: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x374400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x374404: 0x0  nop
    ctx->pc = 0x374404u;
    // NOP
    // 0x374408: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x374408u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x37440c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37440cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374410: 0x0  nop
    ctx->pc = 0x374410u;
    // NOP
    // 0x374414: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x374414u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x374418: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x374418u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x37441c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x37441cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x374420: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x374424: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x374424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x374428: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x374428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x37442c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37442cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x374430: 0x0  nop
    ctx->pc = 0x374430u;
    // NOP
    // 0x374434: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x374434u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x374438: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x374438u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x37443c: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x37443cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x374440: 0x9223000a  lbu         $v1, 0xA($s1)
    ctx->pc = 0x374440u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x374444: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x374444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x374448: 0x9222000b  lbu         $v0, 0xB($s1)
    ctx->pc = 0x374448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x37444c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x37444cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x374450: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x374450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x374454: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x374454u;
    {
        const bool branch_taken_0x374454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x374458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374454u;
        // 0x374458: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374454) {
            ctx->pc = 0x374464u;
            goto label_374464;
        }
    }
    ctx->pc = 0x37445Cu;
    // 0x37445c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x37445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374460: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x374460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_374464:
    // 0x374464: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x374464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x374468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x374468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37446c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37446cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x374470: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x374470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x374474: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x374474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
    // 0x374478: 0x96250008  lhu         $a1, 0x8($s1)
    ctx->pc = 0x374478u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x37447c: 0x9226000f  lbu         $a2, 0xF($s1)
    ctx->pc = 0x37447cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    // 0x374480: 0xc0dd084  jal         func_374210
    ctx->pc = 0x374480u;
    SET_GPR_U32(ctx, 31, 0x374488u);
    ctx->pc = 0x374484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374480u;
    // 0x374484: 0x9227000a  lbu         $a3, 0xA($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374210u, 0x374480u, 0x374488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374488u;
label_374488:
    // 0x374488: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x374488u;
    {
        const bool branch_taken_0x374488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374488u;
        // 0x37448c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374488) {
            ctx->pc = 0x3744ECu;
            goto label_3744ec;
        }
    }
    ctx->pc = 0x374490u;
    // 0x374490: 0xc0dd15c  jal         func_374570
    ctx->pc = 0x374490u;
    SET_GPR_U32(ctx, 31, 0x374498u);
    ctx->pc = 0x374494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374490u;
    // 0x374494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374570u, 0x374490u, 0x374498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374498u;
label_374498:
    // 0x374498: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x374498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37449c: 0xc0cb7a2  jal         func_32DE88
    ctx->pc = 0x37449Cu;
    SET_GPR_U32(ctx, 31, 0x3744A4u);
    ctx->pc = 0x3744A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37449Cu;
    // 0x3744a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DE88u, 0x37449Cu, 0x3744A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744A4u;
label_3744a4:
    // 0x3744a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3744a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3744a8: 0xc0cb7be  jal         func_32DEF8
    ctx->pc = 0x3744A8u;
    SET_GPR_U32(ctx, 31, 0x3744B0u);
    ctx->pc = 0x3744ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744A8u;
    // 0x3744ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DEF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DEF8u, 0x3744A8u, 0x3744B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744B0u;
label_3744b0:
    // 0x3744b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3744b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3744b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3744b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3744b8: 0xc0cb7dc  jal         func_32DF70
    ctx->pc = 0x3744B8u;
    SET_GPR_U32(ctx, 31, 0x3744C0u);
    ctx->pc = 0x3744BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744B8u;
    // 0x3744bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DF70u, 0x3744B8u, 0x3744C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744C0u;
label_3744c0:
    // 0x3744c0: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x3744c0u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x3744c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3744c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3744c8: 0xc0cb68a  jal         func_32DA28
    ctx->pc = 0x3744C8u;
    SET_GPR_U32(ctx, 31, 0x3744D0u);
    ctx->pc = 0x3744CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744C8u;
    // 0x3744cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32DA28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32DA28u, 0x3744C8u, 0x3744D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744D0u;
label_3744d0:
    // 0x3744d0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3744d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3744d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3744d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3744d8: 0xc0dd256  jal         func_374958
    ctx->pc = 0x3744D8u;
    SET_GPR_U32(ctx, 31, 0x3744E0u);
    ctx->pc = 0x3744DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3744D8u;
    // 0x3744dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x374958u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x374958u, 0x3744D8u, 0x3744E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3744E0u;
label_3744e0:
    // 0x3744e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3744E0u;
    {
        const bool branch_taken_0x3744e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3744E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744E0u;
        // 0x3744e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3744e0) {
            ctx->pc = 0x3744ECu;
            goto label_3744ec;
        }
    }
    ctx->pc = 0x3744E8u;
label_3744e8:
    // 0x3744e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3744e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3744ec:
    // 0x3744ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3744ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3744f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3744f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3744f4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3744f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3744f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3744f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3744fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3744FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3744FCu;
        // 0x374500: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3744FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374504u;
    // 0x374504: 0x0  nop
    ctx->pc = 0x374504u;
    // NOP
    ctx->pc = 0x374508u;
}
