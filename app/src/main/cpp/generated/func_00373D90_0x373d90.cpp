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

// Function: func_00373D90
// Address: 0x373d90 - 0x373f38
void func_00373D90_0x373d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00373D90_0x373d90");
#endif

    switch (ctx->pc) {
        case 0x373eb4u: goto label_373eb4;
        case 0x373eccu: goto label_373ecc;
        case 0x373ed8u: goto label_373ed8;
        case 0x373eecu: goto label_373eec;
        case 0x373f00u: goto label_373f00;
        case 0x373f10u: goto label_373f10;
        default: break;
    }

    ctx->pc = 0x373d90u;

    // 0x373d90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x373d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x373d94: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x373d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x373d98: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x373d98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x373d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x373d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373da0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x373da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x373da4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x373da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373da8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x373da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x373dac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x373dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373db0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x373db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x373db4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x373db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x373db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x373db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x373dbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x373dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x373dc0: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x373DC0u;
    {
        const bool branch_taken_0x373dc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373DC0u;
        // 0x373dc4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373dc0) {
            ctx->pc = 0x373EBCu;
            goto label_373ebc;
        }
    }
    ctx->pc = 0x373DC8u;
    // 0x373dc8: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x373dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x373dcc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x373dccu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373dd0: 0x92230010  lbu         $v1, 0x10($s1)
    ctx->pc = 0x373dd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x373dd4: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x373dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373ddc: 0x0  nop
    ctx->pc = 0x373ddcu;
    // NOP
    // 0x373de0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x373de0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x373de4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x373de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x373de8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x373de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x373dec: 0x3900a  movz        $s2, $zero, $v1
    ctx->pc = 0x373decu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
    // 0x373df0: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x373df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x373df4: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x373df4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x373df8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373dfc: 0x0  nop
    ctx->pc = 0x373dfcu;
    // NOP
    // 0x373e00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x373e00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x373e04: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x373e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x373e08: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x373e08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x373e0c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x373e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x373e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373e14: 0x0  nop
    ctx->pc = 0x373e14u;
    // NOP
    // 0x373e18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x373e18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x373e1c: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x373e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x373e20: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x373e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x373e24: 0x9223000c  lbu         $v1, 0xC($s1)
    ctx->pc = 0x373e24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x373e28: 0x9222000d  lbu         $v0, 0xD($s1)
    ctx->pc = 0x373e28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 13)));
    // 0x373e2c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x373e2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x373e30: 0x0  nop
    ctx->pc = 0x373e30u;
    // NOP
    // 0x373e34: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x373e34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x373e38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373e3c: 0x0  nop
    ctx->pc = 0x373e3cu;
    // NOP
    // 0x373e40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x373e40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x373e44: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x373e44u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x373e48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x373e48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x373e4c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x373e4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x373e50: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x373e50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x373e54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x373e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x373e58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x373e58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373e5c: 0x0  nop
    ctx->pc = 0x373e5cu;
    // NOP
    // 0x373e60: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x373e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x373e64: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x373e64u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x373e68: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x373e68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x373e6c: 0x96230008  lhu         $v1, 0x8($s1)
    ctx->pc = 0x373e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x373e70: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x373e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x373e74: 0x9222000b  lbu         $v0, 0xB($s1)
    ctx->pc = 0x373e74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
    // 0x373e78: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x373e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x373e7c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x373e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x373e80: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373E80u;
    {
        const bool branch_taken_0x373e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x373E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373E80u;
        // 0x373e84: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373e80) {
            ctx->pc = 0x373E90u;
            goto label_373e90;
        }
    }
    ctx->pc = 0x373E88u;
    // 0x373e88: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x373e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x373e8c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x373e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_373e90:
    // 0x373e90: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x373e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x373e94: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x373e94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x373e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373e9c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x373e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ea0: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x373ea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x373ea4: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x373ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x373ea8: 0x96250008  lhu         $a1, 0x8($s1)
    ctx->pc = 0x373ea8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x373eac: 0xc0dceea  jal         func_373BA8
    ctx->pc = 0x373EACu;
    SET_GPR_U32(ctx, 31, 0x373EB4u);
    ctx->pc = 0x373EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EACu;
    // 0x373eb0: 0x9226000f  lbu         $a2, 0xF($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 15)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373BA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373BA8u, 0x373EACu, 0x373EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EB4u;
label_373eb4:
    // 0x373eb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x373EB4u;
    {
        const bool branch_taken_0x373eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x373eb4) {
            ctx->pc = 0x373EC4u;
            goto label_373ec4;
        }
    }
    ctx->pc = 0x373EBCu;
label_373ebc:
    // 0x373ebc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x373EBCu;
    {
        const bool branch_taken_0x373ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x373EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373EBCu;
        // 0x373ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ebc) {
            ctx->pc = 0x373F14u;
            goto label_373f14;
        }
    }
    ctx->pc = 0x373EC4u;
label_373ec4:
    // 0x373ec4: 0xc0dcfe8  jal         func_373FA0
    ctx->pc = 0x373EC4u;
    SET_GPR_U32(ctx, 31, 0x373ECCu);
    ctx->pc = 0x373EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EC4u;
    // 0x373ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373FA0u, 0x373EC4u, 0x373ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373ECCu;
label_373ecc:
    // 0x373ecc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x373eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x373ed0: 0xc0cac62  jal         func_32B188
    ctx->pc = 0x373ED0u;
    SET_GPR_U32(ctx, 31, 0x373ED8u);
    ctx->pc = 0x373ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373ED0u;
    // 0x373ed4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32B188u, 0x373ED0u, 0x373ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373ED8u;
label_373ed8:
    // 0x373ed8: 0x16550006  bne         $s2, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x373ED8u;
    {
        const bool branch_taken_0x373ed8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x373EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373ED8u;
        // 0x373edc: 0x96260002  lhu         $a2, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373ed8) {
            ctx->pc = 0x373EF4u;
            goto label_373ef4;
        }
    }
    ctx->pc = 0x373EE0u;
    // 0x373ee0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x373ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ee4: 0xc0caf70  jal         func_32BDC0
    ctx->pc = 0x373EE4u;
    SET_GPR_U32(ctx, 31, 0x373EECu);
    ctx->pc = 0x373EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EE4u;
    // 0x373ee8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BDC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BDC0u, 0x373EE4u, 0x373EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373EECu;
label_373eec:
    // 0x373eec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x373EECu;
    {
        const bool branch_taken_0x373eec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x373eec) {
            ctx->pc = 0x373F00u;
            goto label_373f00;
        }
    }
    ctx->pc = 0x373EF4u;
label_373ef4:
    // 0x373ef4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x373ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x373ef8: 0xc0caed2  jal         func_32BB48
    ctx->pc = 0x373EF8u;
    SET_GPR_U32(ctx, 31, 0x373F00u);
    ctx->pc = 0x373EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373EF8u;
    // 0x373efc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32BB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32BB48u, 0x373EF8u, 0x373F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F00u;
label_373f00:
    // 0x373f00: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x373f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x373f04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x373f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x373f08: 0xc0dd06c  jal         func_3741B0
    ctx->pc = 0x373F08u;
    SET_GPR_U32(ctx, 31, 0x373F10u);
    ctx->pc = 0x373F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x373F08u;
    // 0x373f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3741B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3741B0u, 0x373F08u, 0x373F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x373F10u;
label_373f10:
    // 0x373f10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x373f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_373f14:
    // 0x373f14: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x373f14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x373f18: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x373f18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x373f1c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x373f1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x373f20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x373f20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x373f24: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x373f24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x373f28: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x373f28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x373f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x373f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x373f30: 0x3e00008  jr          $ra
    ctx->pc = 0x373F30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x373F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373F30u;
        // 0x373f34: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373F30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373F38u;
}
