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

// Function: func_002F3F30
// Address: 0x2f3f30 - 0x2f40c0
void func_002F3F30_0x2f3f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F3F30_0x2f3f30");
#endif

    switch (ctx->pc) {
        case 0x2f4048u: goto label_2f4048;
        case 0x2f4058u: goto label_2f4058;
        default: break;
    }

    ctx->pc = 0x2f3f30u;

    // 0x2f3f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f3f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f3f34: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2f3f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2f3f38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f3f38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f3f3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f3f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2f3f40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f3f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f3f44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f3f44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f3f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f3f4c: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x2f3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x2f3f50: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f3f50u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f3f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3f58: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f3f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3f5c: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x2f3f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f60: 0xe4600268  swc1        $f0, 0x268($v1)
    ctx->pc = 0x2f3f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 616), bits); }
    // 0x2f3f64: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f3f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3f68: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f3f68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3f6c: 0xc4400140  lwc1        $f0, 0x140($v0)
    ctx->pc = 0x2f3f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f70: 0xe460026c  swc1        $f0, 0x26C($v1)
    ctx->pc = 0x2f3f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 620), bits); }
    // 0x2f3f74: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f3f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3f78: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f3f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3f7c: 0xc4400144  lwc1        $f0, 0x144($v0)
    ctx->pc = 0x2f3f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f80: 0xe4600270  swc1        $f0, 0x270($v1)
    ctx->pc = 0x2f3f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 624), bits); }
    // 0x2f3f84: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f3f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3f88: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f3f88u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3f8c: 0xc4400148  lwc1        $f0, 0x148($v0)
    ctx->pc = 0x2f3f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3f90: 0xe4600274  swc1        $f0, 0x274($v1)
    ctx->pc = 0x2f3f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 628), bits); }
    // 0x2f3f94: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3f98: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f3f98u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3f9c: 0xc440014c  lwc1        $f0, 0x14C($v0)
    ctx->pc = 0x2f3f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3fa0: 0xe4600254  swc1        $f0, 0x254($v1)
    ctx->pc = 0x2f3fa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 596), bits); }
    // 0x2f3fa4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f3fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3fa8: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f3fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3fac: 0xc4400150  lwc1        $f0, 0x150($v0)
    ctx->pc = 0x2f3facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3fb0: 0xe4600258  swc1        $f0, 0x258($v1)
    ctx->pc = 0x2f3fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 600), bits); }
    // 0x2f3fb4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f3fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3fb8: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f3fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3fbc: 0xc4400154  lwc1        $f0, 0x154($v0)
    ctx->pc = 0x2f3fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3fc0: 0xe460025c  swc1        $f0, 0x25C($v1)
    ctx->pc = 0x2f3fc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 604), bits); }
    // 0x2f3fc4: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f3fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3fc8: 0x8c83aff0  lw          $v1, -0x5010($a0)
    ctx->pc = 0x2f3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2f3fcc: 0xc4400158  lwc1        $f0, 0x158($v0)
    ctx->pc = 0x2f3fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3fd0: 0xe4600260  swc1        $f0, 0x260($v1)
    ctx->pc = 0x2f3fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 608), bits); }
    // 0x2f3fd4: 0x8e040110  lw          $a0, 0x110($s0)
    ctx->pc = 0x2f3fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2f3fd8: 0xc480015c  lwc1        $f0, 0x15C($a0)
    ctx->pc = 0x2f3fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f3fdc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2f3fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2f3fe0: 0xe60002b8  swc1        $f0, 0x2B8($s0)
    ctx->pc = 0x2f3fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x2f3fe4: 0x9082018c  lbu         $v0, 0x18C($a0)
    ctx->pc = 0x2f3fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x2f3fe8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2f3fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2f3fec: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2f3fecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x2f3ff0: 0xa60202b0  sh          $v0, 0x2B0($s0)
    ctx->pc = 0x2f3ff0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 688), (uint16_t)GPR_U32(ctx, 2));
    // 0x2f3ff4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2f3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2f3ff8: 0x9083018d  lbu         $v1, 0x18D($a0)
    ctx->pc = 0x2f3ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 397)));
    // 0x2f3ffc: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2f3ffcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2f4000: 0x28c2ffff  slti        $v0, $a2, -0x1
    ctx->pc = 0x2f4000u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2f4004: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x2f4004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x2f4008: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x2f4008u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
    // 0x2f400c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F400Cu;
    {
        const bool branch_taken_0x2f400c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F400Cu;
        // 0x2f4010: 0xa60302b2  sh          $v1, 0x2B2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 690), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f400c) {
            ctx->pc = 0x2F4024u;
            goto label_2f4024;
        }
    }
    ctx->pc = 0x2F4014u;
    // 0x2f4014: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x2f4014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
    // 0x2f4018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f401c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F401Cu;
    {
        const bool branch_taken_0x2f401c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F401Cu;
        // 0x2f4020: 0x24a5f038  addiu       $a1, $a1, -0xFC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f401c) {
            ctx->pc = 0x2F4040u;
            goto label_2f4040;
        }
    }
    ctx->pc = 0x2F4024u;
label_2f4024:
    // 0x2f4024: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2f4024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2f4028: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x2f4028u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2f402c: 0x28c3ffff  slti        $v1, $a2, -0x1
    ctx->pc = 0x2f402cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x2f4030: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F4030u;
    {
        const bool branch_taken_0x2f4030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4030u;
        // 0x2f4034: 0x3c050045  lui         $a1, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4030) {
            ctx->pc = 0x2F4050u;
            goto label_2f4050;
        }
    }
    ctx->pc = 0x2F4038u;
    // 0x2f4038: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f4038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f403c: 0x24a5f058  addiu       $a1, $a1, -0xFA8
    ctx->pc = 0x2f403cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963288));
label_2f4040:
    // 0x2f4040: 0xc0b67da  jal         func_2D9F68
    ctx->pc = 0x2F4040u;
    SET_GPR_U32(ctx, 31, 0x2F4048u);
    ctx->pc = 0x2D9F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9F68u, 0x2F4040u, 0x2F4048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4048u;
label_2f4048:
    // 0x2f4048: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F4048u;
    {
        const bool branch_taken_0x2f4048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F404Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4048u;
        // 0x2f404c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4048) {
            ctx->pc = 0x2F40A8u;
            goto label_2f40a8;
        }
    }
    ctx->pc = 0x2F4050u;
label_2f4050:
    // 0x2f4050: 0xc0bcf9a  jal         func_2F3E68
    ctx->pc = 0x2F4050u;
    SET_GPR_U32(ctx, 31, 0x2F4058u);
    ctx->pc = 0x2F4054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4050u;
    // 0x2f4054: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3E68u, 0x2F4050u, 0x2F4058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4058u;
label_2f4058:
    // 0x2f4058: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F4058u;
    {
        const bool branch_taken_0x2f4058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4058u;
        // 0x2f405c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4058) {
            ctx->pc = 0x2F40A4u;
            goto label_2f40a4;
        }
    }
    ctx->pc = 0x2F4060u;
    // 0x2f4060: 0x860302b0  lh          $v1, 0x2B0($s0)
    ctx->pc = 0x2f4060u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f4064: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4064u;
    {
        const bool branch_taken_0x2f4064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4064u;
        // 0x2f4068: 0x8e23aff0  lw          $v1, -0x5010($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4064) {
            ctx->pc = 0x2F4078u;
            goto label_2f4078;
        }
    }
    ctx->pc = 0x2F406Cu;
    // 0x2f406c: 0x920202b0  lbu         $v0, 0x2B0($s0)
    ctx->pc = 0x2f406cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 688)));
    // 0x2f4070: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4070u;
    {
        const bool branch_taken_0x2f4070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4070u;
        // 0x2f4074: 0xa0620278  sb          $v0, 0x278($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 632), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4070) {
            ctx->pc = 0x2F4080u;
            goto label_2f4080;
        }
    }
    ctx->pc = 0x2F4078u;
label_2f4078:
    // 0x2f4078: 0x8e22aff0  lw          $v0, -0x5010($s1)
    ctx->pc = 0x2f4078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x2f407c: 0xa0400278  sb          $zero, 0x278($v0)
    ctx->pc = 0x2f407cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 632), (uint8_t)GPR_U32(ctx, 0));
label_2f4080:
    // 0x2f4080: 0x860302b2  lh          $v1, 0x2B2($s0)
    ctx->pc = 0x2f4080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 690)));
    // 0x2f4084: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f4084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f4088: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4088u;
    {
        const bool branch_taken_0x2f4088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4088u;
        // 0x2f408c: 0x8e23aff0  lw          $v1, -0x5010($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4088) {
            ctx->pc = 0x2F409Cu;
            goto label_2f409c;
        }
    }
    ctx->pc = 0x2F4090u;
    // 0x2f4090: 0x920202b2  lbu         $v0, 0x2B2($s0)
    ctx->pc = 0x2f4090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 690)));
    // 0x2f4094: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4094u;
    {
        const bool branch_taken_0x2f4094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4094u;
        // 0x2f4098: 0xa0620264  sb          $v0, 0x264($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 612), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4094) {
            ctx->pc = 0x2F40A4u;
            goto label_2f40a4;
        }
    }
    ctx->pc = 0x2F409Cu;
label_2f409c:
    // 0x2f409c: 0x8e22aff0  lw          $v0, -0x5010($s1)
    ctx->pc = 0x2f409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294946800)));
    // 0x2f40a0: 0xa0400264  sb          $zero, 0x264($v0)
    ctx->pc = 0x2f40a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 612), (uint8_t)GPR_U32(ctx, 0));
label_2f40a4:
    // 0x2f40a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f40a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f40a8:
    // 0x2f40a8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f40a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f40ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f40acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f40b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f40b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f40b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F40B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F40B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40B4u;
        // 0x2f40b8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F40B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F40BCu;
    // 0x2f40bc: 0x0  nop
    ctx->pc = 0x2f40bcu;
    // NOP
    ctx->pc = 0x2f40c0u;
}
