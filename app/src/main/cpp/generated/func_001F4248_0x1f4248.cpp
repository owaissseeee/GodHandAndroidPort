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

// Function: func_001F4248
// Address: 0x1f4248 - 0x1f4428
void func_001F4248_0x1f4248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F4248_0x1f4248");
#endif

    switch (ctx->pc) {
        case 0x1f4274u: goto label_1f4274;
        case 0x1f42acu: goto label_1f42ac;
        case 0x1f43b8u: goto label_1f43b8;
        case 0x1f43dcu: goto label_1f43dc;
        case 0x1f4408u: goto label_1f4408;
        default: break;
    }

    ctx->pc = 0x1f4248u;

    // 0x1f4248: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1f4248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1f424c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1f424cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1f4250: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1f4250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1f4254: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4258: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1f4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1f425c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1f425cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1f4260: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1f4260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1f4264: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4268: 0x860537a8  lh          $a1, 0x37A8($s0)
    ctx->pc = 0x1f4268u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14248)));
    // 0x1f426c: 0xc07d14c  jal         func_1F4530
    ctx->pc = 0x1F426Cu;
    SET_GPR_U32(ctx, 31, 0x1F4274u);
    ctx->pc = 0x1F4270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F426Cu;
    // 0x1f4270: 0x960637ac  lhu         $a2, 0x37AC($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 14252)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4530u, 0x1F426Cu, 0x1F4274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4274u;
label_1f4274:
    // 0x1f4274: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1F4274u;
    {
        const bool branch_taken_0x1f4274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4274u;
        // 0x1f4278: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4274) {
            ctx->pc = 0x1F43E4u;
            goto label_1f43e4;
        }
    }
    ctx->pc = 0x1F427Cu;
    // 0x1f427c: 0x860337bc  lh          $v1, 0x37BC($s0)
    ctx->pc = 0x1f427cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14268)));
    // 0x1f4280: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4280u;
    {
        const bool branch_taken_0x1f4280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4280u;
        // 0x1f4284: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4280) {
            ctx->pc = 0x1F42A0u;
            goto label_1f42a0;
        }
    }
    ctx->pc = 0x1F4288u;
    // 0x1f4288: 0x861437be  lh          $s4, 0x37BE($s0)
    ctx->pc = 0x1f4288u;
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14270)));
    // 0x1f428c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1f428cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f4290: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x1f4290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x1f4294: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4298: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1F4298u;
    {
        const bool branch_taken_0x1f4298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4298u;
        // 0x1f429c: 0x29c03  sra         $s3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4298) {
            ctx->pc = 0x1F4308u;
            goto label_1f4308;
        }
    }
    ctx->pc = 0x1F42A0u;
label_1f42a0:
    // 0x1f42a0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1f42a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1f42a4: 0xc07eb20  jal         func_1FAC80
    ctx->pc = 0x1F42A4u;
    SET_GPR_U32(ctx, 31, 0x1F42ACu);
    ctx->pc = 0x1F42A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F42A4u;
    // 0x1f42a8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAC80u, 0x1F42A4u, 0x1F42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F42ACu;
label_1f42ac:
    // 0x1f42ac: 0x860337be  lh          $v1, 0x37BE($s0)
    ctx->pc = 0x1f42acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14270)));
    // 0x1f42b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f42b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f42b4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1f42b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1f42b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f42b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f42bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f42bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f42c0: 0x0  nop
    ctx->pc = 0x1f42c0u;
    // NOP
    // 0x1f42c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f42c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f42c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f42c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f42cc: 0x0  nop
    ctx->pc = 0x1f42ccu;
    // NOP
    // 0x1f42d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F42D0u;
    {
        const bool branch_taken_0x1f42d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F42D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F42D0u;
        // 0x1f42d4: 0x29c03  sra         $s3, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f42d0) {
            ctx->pc = 0x1F42DCu;
            goto label_1f42dc;
        }
    }
    ctx->pc = 0x1F42D8u;
    // 0x1f42d8: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x1f42d8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_1f42dc:
    // 0x1f42dc: 0x0  nop
    ctx->pc = 0x1f42dcu;
    // NOP
    // 0x1f42e0: 0x0  nop
    ctx->pc = 0x1f42e0u;
    // NOP
    // 0x1f42e4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f42e4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1f42e8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1f42e8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f42ec: 0x0  nop
    ctx->pc = 0x1f42ecu;
    // NOP
    // 0x1f42f0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f42f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f42f4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f42f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f42f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f42f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f42fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f42fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f4300: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4300u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4304: 0x2a403  sra         $s4, $v0, 16
    ctx->pc = 0x1f4304u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 16));
label_1f4308:
    // 0x1f4308: 0x860337c0  lh          $v1, 0x37C0($s0)
    ctx->pc = 0x1f4308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14272)));
    // 0x1f430c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f430cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4310: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1F4310u;
    {
        const bool branch_taken_0x1f4310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4310u;
        // 0x1f4314: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4310) {
            ctx->pc = 0x1F4340u;
            goto label_1f4340;
        }
    }
    ctx->pc = 0x1F4318u;
    // 0x1f4318: 0xc60037c4  lwc1        $f0, 0x37C4($s0)
    ctx->pc = 0x1f4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f431c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1f431cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f4320: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4320u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f4324: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1f4324u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1f4328: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x1f4328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    // 0x1f432c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1f432cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1f4330: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4334: 0x39403  sra         $s2, $v1, 16
    ctx->pc = 0x1f4334u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1f4338: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F4338u;
    {
        const bool branch_taken_0x1f4338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4338u;
        // 0x1f433c: 0x28c03  sra         $s1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4338) {
            ctx->pc = 0x1F439Cu;
            goto label_1f439c;
        }
    }
    ctx->pc = 0x1F4340u;
label_1f4340:
    // 0x1f4340: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1f4340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x1f4344: 0xc60137c4  lwc1        $f1, 0x37C4($s0)
    ctx->pc = 0x1f4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 14276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f4348: 0xc440b000  lwc1        $f0, -0x5000($v0)
    ctx->pc = 0x1f4348u;
    { uint32_t bits = FAST_READ32(0x5CB000u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f434c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1f434cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1f4350: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1f4350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1f4354: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f4354u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1f4358: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x1f4358u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f435c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x1f435cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f4360: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4364: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1F4364u;
    {
        const bool branch_taken_0x1f4364 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4364u;
        // 0x1f4368: 0x28c03  sra         $s1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4364) {
            ctx->pc = 0x1F4370u;
            goto label_1f4370;
        }
    }
    ctx->pc = 0x1F436Cu;
    // 0x1f436c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x1f436cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_1f4370:
    // 0x1f4370: 0x0  nop
    ctx->pc = 0x1f4370u;
    // NOP
    // 0x1f4374: 0x0  nop
    ctx->pc = 0x1f4374u;
    // NOP
    // 0x1f4378: 0x46020803  div.s       $f0, $f1, $f2
    ctx->pc = 0x1f4378u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x1f437c: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1f437cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f4380: 0x0  nop
    ctx->pc = 0x1f4380u;
    // NOP
    // 0x1f4384: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f4384u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f4388: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f4388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f438c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f438cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1f4390: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f4390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f4394: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1f4394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1f4398: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x1f4398u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
label_1f439c:
    // 0x1f439c: 0x860a37c8  lh          $t2, 0x37C8($s0)
    ctx->pc = 0x1f439cu;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14280)));
    // 0x1f43a0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f43a4: 0x15420004  bne         $t2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F43A4u;
    {
        const bool branch_taken_0x1f43a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43A4u;
        // 0x1f43a8: 0x140102d  daddu       $v0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43a4) {
            ctx->pc = 0x1F43B8u;
            goto label_1f43b8;
        }
    }
    ctx->pc = 0x1F43ACu;
    // 0x1f43ac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1f43acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1f43b0: 0xc07ebb8  jal         func_1FAEE0
    ctx->pc = 0x1F43B0u;
    SET_GPR_U32(ctx, 31, 0x1F43B8u);
    ctx->pc = 0x1F43B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F43B0u;
    // 0x1f43b4: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FAEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FAEE0u, 0x1F43B0u, 0x1F43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43B8u;
label_1f43b8:
    // 0x1f43b8: 0x920b37ca  lbu         $t3, 0x37CA($s0)
    ctx->pc = 0x1f43b8u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14282)));
    // 0x1f43bc: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1f43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1f43c0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1f43c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1f43c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43c8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f43c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43cc: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1f43ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43d0: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x1f43d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43d4: 0xc07d594  jal         func_1F5650
    ctx->pc = 0x1F43D4u;
    SET_GPR_U32(ctx, 31, 0x1F43DCu);
    ctx->pc = 0x1F43D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F43D4u;
    // 0x1f43d8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5650u, 0x1F43D4u, 0x1F43DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F43DCu;
label_1f43dc:
    // 0x1f43dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F43DCu;
    {
        const bool branch_taken_0x1f43dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F43E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F43DCu;
        // 0x1f43e0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f43dc) {
            ctx->pc = 0x1F440Cu;
            goto label_1f440c;
        }
    }
    ctx->pc = 0x1F43E4u;
label_1f43e4:
    // 0x1f43e4: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x1f43e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1f43e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f43e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f43ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f43ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f43f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f43f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f43f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f43fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f43fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4400: 0xc07d594  jal         func_1F5650
    ctx->pc = 0x1F4400u;
    SET_GPR_U32(ctx, 31, 0x1F4408u);
    ctx->pc = 0x1F4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4400u;
    // 0x1f4404: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5650u, 0x1F4400u, 0x1F4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4408u;
label_1f4408:
    // 0x1f4408: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1f4408u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f440c:
    // 0x1f440c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1f440cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4410: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1f4410u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4414: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1f4414u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4418: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1f4418u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f441c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f441cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4420: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4420u;
        // 0x1f4424: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4428u;
}
