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

// Function: func_0012F288
// Address: 0x12f288 - 0x12f4c8
void func_0012F288_0x12f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012F288_0x12f288");
#endif

    switch (ctx->pc) {
        case 0x12f2f0u: goto label_12f2f0;
        case 0x12f308u: goto label_12f308;
        default: break;
    }

    ctx->pc = 0x12f288u;

    // 0x12f288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f28c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12f28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12f290: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x12f290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x12f294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12f294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f298: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12f298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12f29c: 0x26120090  addiu       $s2, $s0, 0x90
    ctx->pc = 0x12f29cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x12f2a0: 0x12450007  beq         $s2, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F2A0u;
    {
        const bool branch_taken_0x12f2a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x12F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2A0u;
        // 0x12f2a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2a0) {
            ctx->pc = 0x12F2C0u;
            goto label_12f2c0;
        }
    }
    ctx->pc = 0x12F2A8u;
    // 0x12f2a8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x12f2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f2ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x12f2acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x12f2b0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x12f2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f2b4: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x12f2b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x12f2b8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x12f2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f2bc: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x12f2bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_12f2c0:
    // 0x12f2c0: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x12f2c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x12f2c4: 0x12260007  beq         $s1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x12F2C4u;
    {
        const bool branch_taken_0x12f2c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        ctx->pc = 0x12F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2C4u;
        // 0x12f2c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2c4) {
            ctx->pc = 0x12F2E4u;
            goto label_12f2e4;
        }
    }
    ctx->pc = 0x12F2CCu;
    // 0x12f2cc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x12f2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f2d0: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x12f2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x12f2d4: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x12f2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f2d8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x12f2d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x12f2dc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x12f2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f2e0: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x12f2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_12f2e4:
    // 0x12f2e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f2e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2e8: 0xc04ce52  jal         func_133948
    ctx->pc = 0x12F2E8u;
    SET_GPR_U32(ctx, 31, 0x12F2F0u);
    ctx->pc = 0x12F2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2E8u;
    // 0x12f2ec: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133948u, 0x12F2E8u, 0x12F2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2F0u;
label_12f2f0:
    // 0x12f2f0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x12f2f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2f4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x12f2f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2fc: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x12f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x12f300: 0xc04cd02  jal         func_133408
    ctx->pc = 0x12F300u;
    SET_GPR_U32(ctx, 31, 0x12F308u);
    ctx->pc = 0x12F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F300u;
    // 0x12f304: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133408u, 0x12F300u, 0x12F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F308u;
label_12f308:
    // 0x12f308: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x12F308u;
    {
        const bool branch_taken_0x12f308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F308u;
        // 0x12f30c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f308) {
            ctx->pc = 0x12F4B0u;
            goto label_12f4b0;
        }
    }
    ctx->pc = 0x12F310u;
    // 0x12f310: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x12f310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f314: 0xc6030090  lwc1        $f3, 0x90($s0)
    ctx->pc = 0x12f314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f318: 0xc6040050  lwc1        $f4, 0x50($s0)
    ctx->pc = 0x12f318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12f31c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x12f31cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12f320: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x12f320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f324: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x12f324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f328: 0xc6000098  lwc1        $f0, 0x98($s0)
    ctx->pc = 0x12f328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f32c: 0xc6050038  lwc1        $f5, 0x38($s0)
    ctx->pc = 0x12f32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12f330: 0x0  nop
    ctx->pc = 0x12f330u;
    // NOP
    // 0x12f334: 0x0  nop
    ctx->pc = 0x12f334u;
    // NOP
    // 0x12f338: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x12f338u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[4]);
    // 0x12f33c: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x12f33cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x12f340: 0xc6040054  lwc1        $f4, 0x54($s0)
    ctx->pc = 0x12f340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12f344: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x12f344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x12f348: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x12f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f34c: 0x0  nop
    ctx->pc = 0x12f34cu;
    // NOP
    // 0x12f350: 0x0  nop
    ctx->pc = 0x12f350u;
    // NOP
    // 0x12f354: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x12f354u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x12f358: 0x0  nop
    ctx->pc = 0x12f358u;
    // NOP
    // 0x12f35c: 0x0  nop
    ctx->pc = 0x12f35cu;
    // NOP
    // 0x12f360: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12f360u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x12f364: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f364u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12f368: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x12f368u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f36c: 0xae02006c  sw          $v0, 0x6C($s0)
    ctx->pc = 0x12f36cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 2));
    // 0x12f370: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f370u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12f374: 0xe6010070  swc1        $f1, 0x70($s0)
    ctx->pc = 0x12f374u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x12f378: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12f37c: 0xe6010074  swc1        $f1, 0x74($s0)
    ctx->pc = 0x12f37cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x12f380: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F380u;
    {
        const bool branch_taken_0x12f380 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x12f380) {
            ctx->pc = 0x12F384u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F380u;
            // 0x12f384: 0xae00006c  sw          $zero, 0x6C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F388u;
            goto label_12f388;
        }
    }
    ctx->pc = 0x12F388u;
label_12f388:
    // 0x12f388: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x12f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x12f38c: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F38Cu;
    {
        const bool branch_taken_0x12f38c = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x12f38c) {
            ctx->pc = 0x12F390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F38Cu;
            // 0x12f390: 0xae000070  sw          $zero, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F394u;
            goto label_12f394;
        }
    }
    ctx->pc = 0x12F394u;
label_12f394:
    // 0x12f394: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x12f394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x12f398: 0x4420001  bltzl       $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F398u;
    {
        const bool branch_taken_0x12f398 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x12f398) {
            ctx->pc = 0x12F39Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F398u;
            // 0x12f39c: 0xae000074  sw          $zero, 0x74($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F3A0u;
            goto label_12f3a0;
        }
    }
    ctx->pc = 0x12F3A0u;
label_12f3a0:
    // 0x12f3a0: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x12f3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x12f3a4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x12f3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x12f3a8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x12f3a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x12f3ac: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x12F3ACu;
    {
        const bool branch_taken_0x12f3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3ACu;
        // 0x12f3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3ac) {
            ctx->pc = 0x12F4B0u;
            goto label_12f4b0;
        }
    }
    ctx->pc = 0x12F3B4u;
    // 0x12f3b4: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x12f3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x12f3b8: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x12f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x12f3bc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x12f3bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12f3c0: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x12F3C0u;
    {
        const bool branch_taken_0x12f3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3C0u;
        // 0x12f3c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3c0) {
            ctx->pc = 0x12F4B0u;
            goto label_12f4b0;
        }
    }
    ctx->pc = 0x12F3C8u;
    // 0x12f3c8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x12f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x12f3cc: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x12f3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x12f3d0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x12f3d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x12f3d4: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x12F3D4u;
    {
        const bool branch_taken_0x12f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F3D4u;
        // 0x12f3d8: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f3d4) {
            ctx->pc = 0x12F4ACu;
            goto label_12f4ac;
        }
    }
    ctx->pc = 0x12F3DCu;
    // 0x12f3dc: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x12f3dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f3e0: 0xc60300a0  lwc1        $f3, 0xA0($s0)
    ctx->pc = 0x12f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12f3e4: 0xc6040050  lwc1        $f4, 0x50($s0)
    ctx->pc = 0x12f3e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12f3e8: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x12f3e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12f3ec: 0xc60200a4  lwc1        $f2, 0xA4($s0)
    ctx->pc = 0x12f3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12f3f0: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x12f3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f3f4: 0xc60100a8  lwc1        $f1, 0xA8($s0)
    ctx->pc = 0x12f3f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12f3f8: 0xc6050038  lwc1        $f5, 0x38($s0)
    ctx->pc = 0x12f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x12f3fc: 0x0  nop
    ctx->pc = 0x12f3fcu;
    // NOP
    // 0x12f400: 0x0  nop
    ctx->pc = 0x12f400u;
    // NOP
    // 0x12f404: 0x460418c3  div.s       $f3, $f3, $f4
    ctx->pc = 0x12f404u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[4]);
    // 0x12f408: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x12f408u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x12f40c: 0xc6040054  lwc1        $f4, 0x54($s0)
    ctx->pc = 0x12f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x12f410: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x12f410u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x12f414: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x12f414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f418: 0x0  nop
    ctx->pc = 0x12f418u;
    // NOP
    // 0x12f41c: 0x0  nop
    ctx->pc = 0x12f41cu;
    // NOP
    // 0x12f420: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x12f420u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x12f424: 0x0  nop
    ctx->pc = 0x12f424u;
    // NOP
    // 0x12f428: 0x0  nop
    ctx->pc = 0x12f428u;
    // NOP
    // 0x12f42c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x12f42cu;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
    // 0x12f430: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f430u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f434: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x12f434u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x12f438: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x12f438u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12f43c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x12f43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
    // 0x12f440: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f440u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f444: 0xe600007c  swc1        $f0, 0x7C($s0)
    ctx->pc = 0x12f444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    // 0x12f448: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12f448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12f44c: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x12f44cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x12f450: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F450u;
    {
        const bool branch_taken_0x12f450 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f450) {
            ctx->pc = 0x12F454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F450u;
            // 0x12f454: 0xae040078  sw          $a0, 0x78($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F458u;
            goto label_12f458;
        }
    }
    ctx->pc = 0x12F458u;
label_12f458:
    // 0x12f458: 0x8e030064  lw          $v1, 0x64($s0)
    ctx->pc = 0x12f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x12f45c: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x12f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x12f460: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f464: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x12f464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12f468: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F468u;
    {
        const bool branch_taken_0x12f468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f468) {
            ctx->pc = 0x12F46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F468u;
            // 0x12f46c: 0xae03007c  sw          $v1, 0x7C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F470u;
            goto label_12f470;
        }
    }
    ctx->pc = 0x12F470u;
label_12f470:
    // 0x12f470: 0x8e030068  lw          $v1, 0x68($s0)
    ctx->pc = 0x12f470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x12f474: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x12f474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x12f478: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12f478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12f47c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x12f47cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12f480: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12F480u;
    {
        const bool branch_taken_0x12f480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12f480) {
            ctx->pc = 0x12F484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12F480u;
            // 0x12f484: 0xae030080  sw          $v1, 0x80($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12F488u;
            goto label_12f488;
        }
    }
    ctx->pc = 0x12F488u;
label_12f488:
    // 0x12f488: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x12f488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x12f48c: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12F48Cu;
    {
        const bool branch_taken_0x12f48c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x12F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F48Cu;
        // 0x12f490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f48c) {
            ctx->pc = 0x12F4B0u;
            goto label_12f4b0;
        }
    }
    ctx->pc = 0x12F494u;
    // 0x12f494: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x12f494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x12f498: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12F498u;
    {
        const bool branch_taken_0x12f498 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x12F49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F498u;
        // 0x12f49c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f498) {
            ctx->pc = 0x12F4B0u;
            goto label_12f4b0;
        }
    }
    ctx->pc = 0x12F4A0u;
    // 0x12f4a0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x12f4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x12f4a4: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12F4A4u;
    {
        const bool branch_taken_0x12f4a4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x12F4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4A4u;
        // 0x12f4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f4a4) {
            ctx->pc = 0x12F4B0u;
            goto label_12f4b0;
        }
    }
    ctx->pc = 0x12F4ACu;
label_12f4ac:
    // 0x12f4ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12f4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12f4b0:
    // 0x12f4b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12f4b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f4b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12f4b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f4b8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12f4b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f4bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12f4bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12f4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F4C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F4C0u;
        // 0x12f4c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F4C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F4C8u;
}
