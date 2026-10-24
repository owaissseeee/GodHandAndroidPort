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

// Function: func_002F48A8
// Address: 0x2f48a8 - 0x2f4b28
void func_002F48A8_0x2f48a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F48A8_0x2f48a8");
#endif

    switch (ctx->pc) {
        case 0x2f48c4u: goto label_2f48c4;
        case 0x2f4984u: goto label_2f4984;
        case 0x2f498cu: goto label_2f498c;
        case 0x2f499cu: goto label_2f499c;
        case 0x2f49c8u: goto label_2f49c8;
        case 0x2f49dcu: goto label_2f49dc;
        case 0x2f49ecu: goto label_2f49ec;
        case 0x2f4abcu: goto label_2f4abc;
        default: break;
    }

    ctx->pc = 0x2f48a8u;

    // 0x2f48a8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f48a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f48ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f48acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2f48b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f48b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f48b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2f48b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2f48b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f48b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f48bc: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F48BCu;
    SET_GPR_U32(ctx, 31, 0x2F48C4u);
    ctx->pc = 0x2F48C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F48BCu;
    // 0x2f48c0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F48BCu, 0x2F48C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F48C4u;
label_2f48c4:
    // 0x2f48c4: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x2f48c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f48c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f48c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f48cc: 0xc62102d8  lwc1        $f1, 0x2D8($s1)
    ctx->pc = 0x2f48ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f48d0: 0xc62202c4  lwc1        $f2, 0x2C4($s1)
    ctx->pc = 0x2f48d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f48d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f48d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f48d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f48d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f48dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2f48dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2f48e0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2f48e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2f48e4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2f48e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f48e8: 0xe62102d8  swc1        $f1, 0x2D8($s1)
    ctx->pc = 0x2f48e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
    // 0x2f48ec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2F48ECu;
    {
        const bool branch_taken_0x2f48ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F48ECu;
        // 0x2f48f0: 0xe62002c0  swc1        $f0, 0x2C0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 704), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f48ec) {
            ctx->pc = 0x2F48F8u;
            goto label_2f48f8;
        }
    }
    ctx->pc = 0x2F48F4u;
    // 0x2f48f4: 0xe62302d8  swc1        $f3, 0x2D8($s1)
    ctx->pc = 0x2f48f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
label_2f48f8:
    // 0x2f48f8: 0xc62002d8  lwc1        $f0, 0x2D8($s1)
    ctx->pc = 0x2f48f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f48fc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f48fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4900: 0x0  nop
    ctx->pc = 0x2f4900u;
    // NOP
    // 0x2f4904: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2f4904u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f4908: 0x0  nop
    ctx->pc = 0x2f4908u;
    // NOP
    // 0x2f490c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F490Cu;
    {
        const bool branch_taken_0x2f490c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f490c) {
            ctx->pc = 0x2F4910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F490Cu;
            // 0x2f4910: 0xe62102d8  swc1        $f1, 0x2D8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 728), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4914u;
            goto label_2f4914;
        }
    }
    ctx->pc = 0x2F4914u;
label_2f4914:
    // 0x2f4914: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f4914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2f4918: 0x8c4204d0  lw          $v0, 0x4D0($v0)
    ctx->pc = 0x2f4918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1232)));
    // 0x2f491c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F491Cu;
    {
        const bool branch_taken_0x2f491c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f491c) {
            ctx->pc = 0x2F492Cu;
            goto label_2f492c;
        }
    }
    ctx->pc = 0x2F4924u;
    // 0x2f4924: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x2f4924u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2f4928: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x2f4928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2f492c:
    // 0x2f492c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F492Cu;
    {
        const bool branch_taken_0x2f492c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2F4930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F492Cu;
        // 0x2f4930: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f492c) {
            ctx->pc = 0x2F4948u;
            goto label_2f4948;
        }
    }
    ctx->pc = 0x2F4934u;
    // 0x2f4934: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2f4934u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4938: 0x0  nop
    ctx->pc = 0x2f4938u;
    // NOP
    // 0x2f493c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f493cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f4940: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4940u;
    {
        const bool branch_taken_0x2f4940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4940u;
        // 0x2f4944: 0xc62d02d8  lwc1        $f13, 0x2D8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4940) {
            ctx->pc = 0x2F4964u;
            goto label_2f4964;
        }
    }
    ctx->pc = 0x2F4948u;
label_2f4948:
    // 0x2f4948: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2f4948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2f494c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2f494cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2f4950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4954: 0x0  nop
    ctx->pc = 0x2f4954u;
    // NOP
    // 0x2f4958: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f495c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2f495cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2f4960: 0xc62d02d8  lwc1        $f13, 0x2D8($s1)
    ctx->pc = 0x2f4960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2f4964:
    // 0x2f4964: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f4964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4968: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f4968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2f496c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f496cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4970: 0x460d0342  mul.s       $f13, $f0, $f13
    ctx->pc = 0x2f4970u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x2f4974: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2f4974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4978: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2f4978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2f497c: 0xc055d5a  jal         func_157568
    ctx->pc = 0x2F497Cu;
    SET_GPR_U32(ctx, 31, 0x2F4984u);
    ctx->pc = 0x2F4980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F497Cu;
    // 0x2f4980: 0x8c8504d0  lw          $a1, 0x4D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157568u, 0x2F497Cu, 0x2F4984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4984u;
label_2f4984:
    // 0x2f4984: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2F4984u;
    SET_GPR_U32(ctx, 31, 0x2F498Cu);
    ctx->pc = 0x2F4988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4984u;
    // 0x2f4988: 0x8e2402b0  lw          $a0, 0x2B0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2F4984u, 0x2F498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F498Cu;
label_2f498c:
    // 0x2f498c: 0x8e3002b0  lw          $s0, 0x2B0($s1)
    ctx->pc = 0x2f498cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2f4990: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f4990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f4994: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F4994u;
    SET_GPR_U32(ctx, 31, 0x2F499Cu);
    ctx->pc = 0x2F4998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4994u;
    // 0x2f4998: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F4994u, 0x2F499Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F499Cu;
label_2f499c:
    // 0x2f499c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2f499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2f49a0: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F49A0u;
    {
        const bool branch_taken_0x2f49a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F49A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49A0u;
        // 0x2f49a4: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49a0) {
            ctx->pc = 0x2F49BCu;
            goto label_2f49bc;
        }
    }
    ctx->pc = 0x2F49A8u;
    // 0x2f49a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f49a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f49ac: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f49acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f49b0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f49b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f49b4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f49b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f49b8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f49b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f49bc:
    // 0x2f49bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f49bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f49c0: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2F49C0u;
    SET_GPR_U32(ctx, 31, 0x2F49C8u);
    ctx->pc = 0x2F49C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49C0u;
    // 0x2f49c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2F49C0u, 0x2F49C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49C8u;
label_2f49c8:
    // 0x2f49c8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f49c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f49cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f49ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f49d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f49d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f49d4: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2F49D4u;
    SET_GPR_U32(ctx, 31, 0x2F49DCu);
    ctx->pc = 0x2F49D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49D4u;
    // 0x2f49d8: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2F49D4u, 0x2F49DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49DCu;
label_2f49dc:
    // 0x2f49dc: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2f49dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f49e0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f49e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f49e4: 0xc0ad834  jal         func_2B60D0
    ctx->pc = 0x2F49E4u;
    SET_GPR_U32(ctx, 31, 0x2F49ECu);
    ctx->pc = 0x2F49E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F49E4u;
    // 0x2f49e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2F49E4u, 0x2F49ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F49ECu;
label_2f49ec:
    // 0x2f49ec: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f49ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2f49f0: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2f49f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2f49f4: 0x10500007  beq         $v0, $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F49F4u;
    {
        const bool branch_taken_0x2f49f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2F49F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F49F4u;
        // 0x2f49f8: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f49f4) {
            ctx->pc = 0x2F4A14u;
            goto label_2f4a14;
        }
    }
    ctx->pc = 0x2F49FCu;
    // 0x2f49fc: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2f49fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x2f4a00: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f4a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4a04: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f4a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f4a08: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2f4a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4a0c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f4a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f4a10: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f4a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
label_2f4a14:
    // 0x2f4a14: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2f4a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2f4a18: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F4A18u;
    {
        const bool branch_taken_0x2f4a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F4A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A18u;
        // 0x2f4a1c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a18) {
            ctx->pc = 0x2F4A34u;
            goto label_2f4a34;
        }
    }
    ctx->pc = 0x2F4A20u;
    // 0x2f4a20: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2f4a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2f4a24: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f4a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f4a28: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f4a28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f4a2c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f4a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4a30: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f4a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f4a34:
    // 0x2f4a34: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f4a34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2f4a38: 0xc6200188  lwc1        $f0, 0x188($s1)
    ctx->pc = 0x2f4a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4a3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f4a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f4a40: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f4a40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f4a44: 0xe4600240  swc1        $f0, 0x240($v1)
    ctx->pc = 0x2f4a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
    // 0x2f4a48: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x2f4a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2f4a4c: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x2f4a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4a50: 0xe4400244  swc1        $f0, 0x244($v0)
    ctx->pc = 0x2f4a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 580), bits); }
    // 0x2f4a54: 0xc6200190  lwc1        $f0, 0x190($s1)
    ctx->pc = 0x2f4a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4a58: 0x8e2302b0  lw          $v1, 0x2B0($s1)
    ctx->pc = 0x2f4a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2f4a5c: 0xe4600248  swc1        $f0, 0x248($v1)
    ctx->pc = 0x2f4a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 584), bits); }
    // 0x2f4a60: 0x8e2402b0  lw          $a0, 0x2B0($s1)
    ctx->pc = 0x2f4a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2f4a64: 0xc6200194  lwc1        $f0, 0x194($s1)
    ctx->pc = 0x2f4a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4a68: 0xe480024c  swc1        $f0, 0x24C($a0)
    ctx->pc = 0x2f4a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 588), bits); }
    // 0x2f4a6c: 0x9222024c  lbu         $v0, 0x24C($s1)
    ctx->pc = 0x2f4a6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x2f4a70: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F4A70u;
    {
        const bool branch_taken_0x2f4a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A70u;
        // 0x2f4a74: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a70) {
            ctx->pc = 0x2F4A9Cu;
            goto label_2f4a9c;
        }
    }
    ctx->pc = 0x2F4A78u;
    // 0x2f4a78: 0x9223024d  lbu         $v1, 0x24D($s1)
    ctx->pc = 0x2f4a78u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 589)));
    // 0x2f4a7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f4a7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f4a80: 0x0  nop
    ctx->pc = 0x2f4a80u;
    // NOP
    // 0x2f4a84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f4a84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f4a88: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f4a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4a8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f4a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f4a90: 0x0  nop
    ctx->pc = 0x2f4a90u;
    // NOP
    // 0x2f4a94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f4a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f4a98: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2f4a98u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2f4a9c:
    // 0x2f4a9c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F4A9Cu;
    {
        const bool branch_taken_0x2f4a9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4A9Cu;
        // 0x2f4aa0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4a9c) {
            ctx->pc = 0x2F4AD4u;
            goto label_2f4ad4;
        }
    }
    ctx->pc = 0x2F4AA4u;
    // 0x2f4aa4: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2f4aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f4aa8: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2f4aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f4aac: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4AACu;
    {
        const bool branch_taken_0x2f4aac = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2f4aac) {
            ctx->pc = 0x2F4AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4AACu;
            // 0x2f4ab0: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4AD0u;
            goto label_2f4ad0;
        }
    }
    ctx->pc = 0x2F4AB4u;
    // 0x2f4ab4: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2F4AB4u;
    SET_GPR_U32(ctx, 31, 0x2F4ABCu);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2F4AB4u, 0x2F4ABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4ABCu;
label_2f4abc:
    // 0x2f4abc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f4abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f4ac0: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4AC0u;
    {
        const bool branch_taken_0x2f4ac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f4ac0) {
            ctx->pc = 0x2F4AC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4AC0u;
            // 0x2f4ac4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4AD4u;
            goto label_2f4ad4;
        }
    }
    ctx->pc = 0x2F4AC8u;
    // 0x2f4ac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4AC8u;
    {
        const bool branch_taken_0x2f4ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AC8u;
        // 0x2f4acc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4ac8) {
            ctx->pc = 0x2F4AD8u;
            goto label_2f4ad8;
        }
    }
    ctx->pc = 0x2F4AD0u;
label_2f4ad0:
    // 0x2f4ad0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f4ad0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f4ad4:
    // 0x2f4ad4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4ad8:
    // 0x2f4ad8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F4AD8u;
    {
        const bool branch_taken_0x2f4ad8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f4ad8) {
            ctx->pc = 0x2F4ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4AD8u;
            // 0x2f4adc: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4B00u;
            goto label_2f4b00;
        }
    }
    ctx->pc = 0x2F4AE0u;
    // 0x2f4ae0: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x2f4ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2f4ae4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f4ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f4ae8: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f4ae8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f4aec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f4aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f4af0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F4AF0u;
    {
        const bool branch_taken_0x2f4af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4AF0u;
        // 0x2f4af4: 0x8e2202b0  lw          $v0, 0x2B0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4af0) {
            ctx->pc = 0x2F4B00u;
            goto label_2f4b00;
        }
    }
    ctx->pc = 0x2F4AF8u;
    // 0x2f4af8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f4af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4afc: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2f4afcu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2f4b00:
    // 0x2f4b00: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2f4b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f4b04: 0xc440024c  lwc1        $f0, 0x24C($v0)
    ctx->pc = 0x2f4b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f4b08: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f4b08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f4b0c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f4b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2f4b10: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f4b10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f4b14: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2f4b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f4b18: 0xe440024c  swc1        $f0, 0x24C($v0)
    ctx->pc = 0x2f4b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
    // 0x2f4b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F4B1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4B1Cu;
        // 0x2f4b20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4B1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F4B24u;
    // 0x2f4b24: 0x0  nop
    ctx->pc = 0x2f4b24u;
    // NOP
    ctx->pc = 0x2f4b28u;
}
