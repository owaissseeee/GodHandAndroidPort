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

// Function: func_0015A190
// Address: 0x15a190 - 0x15a3e8
void func_0015A190_0x15a190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0015A190_0x15a190");
#endif

    switch (ctx->pc) {
        case 0x15a20cu: goto label_15a20c;
        case 0x15a314u: goto label_15a314;
        default: break;
    }

    ctx->pc = 0x15a190u;

    // 0x15a190: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15a190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15a194: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x15a194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15a198: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x15a198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x15a19c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x15a19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x15a1a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15a1a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a1a4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x15a1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x15a1a8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x15a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x15a1ac: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x15a1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x15a1b0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x15a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x15a1b4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x15a1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x15a1b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15a1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15a1bc: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x15a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15a1c0: 0xc6020014  lwc1        $f2, 0x14($s0)
    ctx->pc = 0x15a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a1c4: 0xc6040028  lwc1        $f4, 0x28($s0)
    ctx->pc = 0x15a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15a1c8: 0x46021800  add.s       $f0, $f3, $f2
    ctx->pc = 0x15a1c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x15a1cc: 0x46040300  add.s       $f12, $f0, $f4
    ctx->pc = 0x15a1ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x15a1d0: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x15a1d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a1d4: 0x0  nop
    ctx->pc = 0x15a1d4u;
    // NOP
    // 0x15a1d8: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x15A1D8u;
    {
        const bool branch_taken_0x15a1d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A1D8u;
        // 0x15a1dc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a1d8) {
            ctx->pc = 0x15A26Cu;
            goto label_15a26c;
        }
    }
    ctx->pc = 0x15A1E0u;
    // 0x15a1e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a1e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a1e4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x15a1e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15a1e8: 0x0  nop
    ctx->pc = 0x15a1e8u;
    // NOP
    // 0x15a1ec: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x15a1ecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x15a1f0: 0x460c0004  c1          0xC0004
    ctx->pc = 0x15a1f0u;
    ctx->f[0] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x15a1f4: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x15a1f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a1f8: 0x0  nop
    ctx->pc = 0x15a1f8u;
    // NOP
    // 0x15a1fc: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x15A1FCu;
    {
        const bool branch_taken_0x15a1fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a1fc) {
            ctx->pc = 0x15A20Cu;
            goto label_15a20c;
        }
    }
    ctx->pc = 0x15A204u;
    // 0x15a204: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x15A204u;
    SET_GPR_U32(ctx, 31, 0x15A20Cu);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x15A204u, 0x15A20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A20Cu;
label_15a20c:
    // 0x15a20c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15a20cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15a210: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15a210u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15a214: 0x0  nop
    ctx->pc = 0x15a214u;
    // NOP
    // 0x15a218: 0x46030042  mul.s       $f1, $f0, $f3
    ctx->pc = 0x15a218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15a21c: 0x0  nop
    ctx->pc = 0x15a21cu;
    // NOP
    // 0x15a220: 0x0  nop
    ctx->pc = 0x15a220u;
    // NOP
    // 0x15a224: 0x460018c3  div.s       $f3, $f3, $f0
    ctx->pc = 0x15a224u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[0]);
    // 0x15a228: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x15a228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x15a22c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x15a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a230: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x15a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a234: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15a234u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15a238: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15a238u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15a23c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x15a23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x15a240: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x15a240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a244: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x15a244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a248: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15a248u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15a24c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15a24cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15a250: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x15a250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x15a254: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x15a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a258: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x15a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a25c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x15a25cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x15a260: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15a260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15a264: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x15A264u;
    {
        const bool branch_taken_0x15a264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A264u;
        // 0x15a268: 0xe6600008  swc1        $f0, 0x8($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a264) {
            ctx->pc = 0x15A3BCu;
            goto label_15a3bc;
        }
    }
    ctx->pc = 0x15A26Cu;
label_15a26c:
    // 0x15a26c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x15a26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a270: 0x0  nop
    ctx->pc = 0x15a270u;
    // NOP
    // 0x15a274: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x15A274u;
    {
        const bool branch_taken_0x15a274 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A274u;
        // 0x15a278: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a274) {
            ctx->pc = 0x15A280u;
            goto label_15a280;
        }
    }
    ctx->pc = 0x15A27Cu;
    // 0x15a27c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x15a27cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a280:
    // 0x15a280: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x15a280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15a284: 0x2c61818  mult        $v1, $s6, $a2
    ctx->pc = 0x15a284u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15a288: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x15a288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15a28c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x15a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a290: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x15a290u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a294: 0x0  nop
    ctx->pc = 0x15a294u;
    // NOP
    // 0x15a298: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15A298u;
    {
        const bool branch_taken_0x15a298 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a298) {
            ctx->pc = 0x15A29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A298u;
            // 0x15a29c: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A2A0u;
            goto label_15a2a0;
        }
    }
    ctx->pc = 0x15A2A0u;
label_15a2a0:
    // 0x15a2a0: 0x2c61818  mult        $v1, $s6, $a2
    ctx->pc = 0x15a2a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15a2a4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x15a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x15a2a8: 0x2442ee48  addiu       $v0, $v0, -0x11B8
    ctx->pc = 0x15a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962760));
    // 0x15a2ac: 0x16a880  sll         $s5, $s6, 2
    ctx->pc = 0x15a2acu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x15a2b0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x15a2b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x15a2b4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x15a2b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x15a2b8: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x15a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15a2bc: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x15a2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x15a2c0: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x15a2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15a2c4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x15a2c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15a2c8: 0x12a080  sll         $s4, $s2, 2
    ctx->pc = 0x15a2c8u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x15a2cc: 0x2461818  mult        $v1, $s2, $a2
    ctx->pc = 0x15a2ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15a2d0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x15a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x15a2d4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x15a2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15a2d8: 0x2261018  mult        $v0, $s1, $a2
    ctx->pc = 0x15a2d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15a2dc: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x15a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15a2e0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x15a2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a2e4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x15a2e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x15a2e8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x15a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x15a2ec: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x15a2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a2f0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x15a2f0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x15a2f4: 0x46031300  add.s       $f12, $f2, $f3
    ctx->pc = 0x15a2f4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x15a2f8: 0x460c0044  c1          0xC0044
    ctx->pc = 0x15a2f8u;
    ctx->f[1] = ps2FpuSqrt(ctx->fcr31, ctx->f[12]);
    // 0x15a2fc: 0x46010832  c.eq.s      $f1, $f1
    ctx->pc = 0x15a2fcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a300: 0x0  nop
    ctx->pc = 0x15a300u;
    // NOP
    // 0x15a304: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x15A304u;
    {
        const bool branch_taken_0x15a304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a304) {
            ctx->pc = 0x15A318u;
            goto label_15a318;
        }
    }
    ctx->pc = 0x15A30Cu;
    // 0x15a30c: 0xc0e8910  jal         func_3A2440
    ctx->pc = 0x15A30Cu;
    SET_GPR_U32(ctx, 31, 0x15A314u);
    ctx->pc = 0x3A2440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2440u, 0x15A30Cu, 0x15A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A314u;
label_15a314:
    // 0x15a314: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x15a314u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_15a318:
    // 0x15a318: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15a318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15a31c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x15a31cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15a320: 0x114080  sll         $t0, $s1, 2
    ctx->pc = 0x15a320u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15a324: 0x123100  sll         $a2, $s2, 4
    ctx->pc = 0x15a324u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x15a328: 0x113900  sll         $a3, $s1, 4
    ctx->pc = 0x15a328u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x15a32c: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x15a32cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15a330: 0x2752021  addu        $a0, $s3, $s5
    ctx->pc = 0x15a330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x15a334: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x15a334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x15a338: 0x2871821  addu        $v1, $s4, $a3
    ctx->pc = 0x15a338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x15a33c: 0x0  nop
    ctx->pc = 0x15a33cu;
    // NOP
    // 0x15a340: 0x0  nop
    ctx->pc = 0x15a340u;
    // NOP
    // 0x15a344: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x15a344u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x15a348: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x15a348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15a34c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x15a34cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x15a350: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x15a350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x15a354: 0x162100  sll         $a0, $s6, 4
    ctx->pc = 0x15a354u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x15a358: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x15a358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x15a35c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x15a35cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a360: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x15a360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x15a364: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x15a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a368: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x15a368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x15a36c: 0x2063021  addu        $a2, $s0, $a2
    ctx->pc = 0x15a36cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x15a370: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x15a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x15a374: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x15a374u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15a378: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x15a378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x15a37c: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x15a37cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    // 0x15a380: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x15a380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x15a384: 0x2073821  addu        $a3, $s0, $a3
    ctx->pc = 0x15a384u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x15a388: 0x2684021  addu        $t0, $s3, $t0
    ctx->pc = 0x15a388u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
    // 0x15a38c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15a38cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15a390: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x15a390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x15a394: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x15a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a398: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x15a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a39c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15a39cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15a3a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x15a3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x15a3a4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x15a3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x15a3a8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x15a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a3ac: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x15a3acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a3b0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x15a3b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x15a3b4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x15a3b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x15a3b8: 0xe5010000  swc1        $f1, 0x0($t0)
    ctx->pc = 0x15a3b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_15a3bc:
    // 0x15a3bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x15a3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a3c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x15a3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a3c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x15a3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a3c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x15a3c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a3cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x15a3ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a3d0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x15a3d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a3d4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x15a3d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a3d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15a3d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x15A3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A3DCu;
        // 0x15a3e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A3E4u;
    // 0x15a3e4: 0x0  nop
    ctx->pc = 0x15a3e4u;
    // NOP
    ctx->pc = 0x15a3e8u;
}
