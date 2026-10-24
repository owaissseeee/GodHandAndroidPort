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

// Function: func_003745C0
// Address: 0x3745c0 - 0x374720
void func_003745C0_0x3745c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003745C0_0x3745c0");
#endif

    switch (ctx->pc) {
        case 0x374634u: goto label_374634;
        case 0x374698u: goto label_374698;
        case 0x3746acu: goto label_3746ac;
        case 0x3746ecu: goto label_3746ec;
        default: break;
    }

    ctx->pc = 0x3745c0u;

    // 0x3745c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3745c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3745c4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3745c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3745c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3745c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3745cc: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3745ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3745d0: 0xe7b60060  swc1        $f22, 0x60($sp)
    ctx->pc = 0x3745d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3745d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3745d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3745d8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3745d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3745dc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x3745dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x3745e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3745e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3745e4: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x3745e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x3745e8: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x3745e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3745ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3745ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3745f0: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3745F0u;
    {
        const bool branch_taken_0x3745f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3745F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3745F0u;
        // 0x3745f4: 0x46006586  mov.s       $f22, $f12 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3745f0) {
            ctx->pc = 0x3746F8u;
            goto label_3746f8;
        }
    }
    ctx->pc = 0x3745F8u;
    // 0x3745f8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3745f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3745fc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3745fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x374600: 0x2442ee00  addiu       $v0, $v0, -0x1200
    ctx->pc = 0x374600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x374604: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x374604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x374608: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x374608u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x37460c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x37460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x374610: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x374610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374614: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x374614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x374618: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x374618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37461c: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x37461cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x374620: 0x46150503  div.s       $f20, $f0, $f21
    ctx->pc = 0x374620u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[21]);
    // 0x374624: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x374624u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
    // 0x374628: 0x46150d03  div.s       $f20, $f1, $f21
    ctx->pc = 0x374628u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[21]);
    // 0x37462c: 0xc0dd5bc  jal         func_3756F0
    ctx->pc = 0x37462Cu;
    SET_GPR_U32(ctx, 31, 0x374634u);
    ctx->pc = 0x3756F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3756F0u, 0x37462Cu, 0x374634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374634u;
label_374634:
    // 0x374634: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x374634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x374638: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x374638u;
    {
        const bool branch_taken_0x374638 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x374638) {
            ctx->pc = 0x37463Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374638u;
            // 0x37463c: 0xc640003c  lwc1        $f0, 0x3C($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x37464Cu;
            goto label_37464c;
        }
    }
    ctx->pc = 0x374640u;
    // 0x374640: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x374640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x374644: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x374644u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x374648: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x374648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37464c:
    // 0x37464c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x37464cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x374650: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x374650u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x374654: 0x0  nop
    ctx->pc = 0x374654u;
    // NOP
    // 0x374658: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x374658u;
    {
        const bool branch_taken_0x374658 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x374658) {
            ctx->pc = 0x37465Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374658u;
            // 0x37465c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x374660u;
            goto label_374660;
        }
    }
    ctx->pc = 0x374660u;
label_374660:
    // 0x374660: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x374660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x374664: 0x56020018  bnel        $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x374664u;
    {
        const bool branch_taken_0x374664 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x374664) {
            ctx->pc = 0x374668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x374664u;
            // 0x374668: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3746C8u;
            goto label_3746c8;
        }
    }
    ctx->pc = 0x37466Cu;
    // 0x37466c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x37466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x374670: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x374670u;
    {
        const bool branch_taken_0x374670 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x374674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374670u;
        // 0x374674: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374670) {
            ctx->pc = 0x3746F8u;
            goto label_3746f8;
        }
    }
    ctx->pc = 0x374678u;
    // 0x374678: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x374678u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x37467c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x37467cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x374680: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x374680u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x374684: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x374684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x374688: 0x24422060  addiu       $v0, $v0, 0x2060
    ctx->pc = 0x374688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8288));
    // 0x37468c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x37468cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x374690: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x374690u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x374694: 0x0  nop
    ctx->pc = 0x374694u;
    // NOP
label_374698:
    // 0x374698: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x374698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x37469c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3746a0: 0x86660000  lh          $a2, 0x0($s3)
    ctx->pc = 0x3746a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3746a4: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x3746A4u;
    SET_GPR_U32(ctx, 31, 0x3746ACu);
    ctx->pc = 0x3746A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3746A4u;
    // 0x3746a8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x3746A4u, 0x3746ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746ACu;
label_3746ac:
    // 0x3746ac: 0xe6360000  swc1        $f22, 0x0($s1)
    ctx->pc = 0x3746acu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x3746b0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3746b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3746b4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3746b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3746b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3746B8u;
    {
        const bool branch_taken_0x3746b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3746BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746B8u;
        // 0x3746bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3746b8) {
            ctx->pc = 0x374698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_374698;
        }
    }
    ctx->pc = 0x3746C0u;
    // 0x3746c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x3746C0u;
    {
        const bool branch_taken_0x3746c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3746C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3746C0u;
        // 0x3746c4: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3746c0) {
            ctx->pc = 0x3746FCu;
            goto label_3746fc;
        }
    }
    ctx->pc = 0x3746C8u;
label_3746c8:
    // 0x3746c8: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3746c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3746cc: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3746ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3746d0: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x3746d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x3746d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3746d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3746d8: 0x24632060  addiu       $v1, $v1, 0x2060
    ctx->pc = 0x3746d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8288));
    // 0x3746dc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x3746dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x3746e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3746e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3746e4: 0xc0cbb1e  jal         func_32EC78
    ctx->pc = 0x3746E4u;
    SET_GPR_U32(ctx, 31, 0x3746ECu);
    ctx->pc = 0x3746E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3746E4u;
    // 0x3746e8: 0x84460000  lh          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32EC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32EC78u, 0x3746E4u, 0x3746ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3746ECu;
label_3746ec:
    // 0x3746ec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3746ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x3746f0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x3746f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x3746f4: 0xe4560014  swc1        $f22, 0x14($v0)
    ctx->pc = 0x3746f4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_3746f8:
    // 0x3746f8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3746f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3746fc:
    // 0x3746fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3746fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x374700: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x374700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374704: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x374704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374708: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37470c: 0xc7b60060  lwc1        $f22, 0x60($sp)
    ctx->pc = 0x37470cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x374710: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x374710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x374714: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x374714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x374718: 0x3e00008  jr          $ra
    ctx->pc = 0x374718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374718u;
        // 0x37471c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374720u;
}
