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

// Function: func_0032B530
// Address: 0x32b530 - 0x32b618
void func_0032B530_0x32b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B530_0x32b530");
#endif

    switch (ctx->pc) {
        case 0x32b568u: goto label_32b568;
        case 0x32b570u: goto label_32b570;
        case 0x32b588u: goto label_32b588;
        default: break;
    }

    ctx->pc = 0x32b530u;

    // 0x32b530: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x32b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x32b534: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x32b534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x32b538: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x32b538u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b53c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32b540: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32b540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x32b544: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x32b548: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x32b548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x32b54c: 0x82630072  lb          $v1, 0x72($s3)
    ctx->pc = 0x32b54cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 114)));
    // 0x32b550: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x32B550u;
    {
        const bool branch_taken_0x32b550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B550u;
        // 0x32b554: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b550) {
            ctx->pc = 0x32B5F8u;
            goto label_32b5f8;
        }
    }
    ctx->pc = 0x32B558u;
    // 0x32b558: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x32b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x32b55c: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x32b55cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x32b560: 0xc0c991a  jal         func_326468
    ctx->pc = 0x32B560u;
    SET_GPR_U32(ctx, 31, 0x32B568u);
    ctx->pc = 0x32B564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B560u;
    // 0x32b564: 0x26101408  addiu       $s0, $s0, 0x1408 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326468u, 0x32B560u, 0x32B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B568u;
label_32b568:
    // 0x32b568: 0xc0cabe2  jal         func_32AF88
    ctx->pc = 0x32B568u;
    SET_GPR_U32(ctx, 31, 0x32B570u);
    ctx->pc = 0x32B56Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B568u;
    // 0x32b56c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32AF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32AF88u, 0x32B568u, 0x32B570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B570u;
label_32b570:
    // 0x32b570: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x32b570u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32b574: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32b574u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b578: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x32b578u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x32b57c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x32b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b580: 0xc0ca86c  jal         func_32A1B0
    ctx->pc = 0x32B580u;
    SET_GPR_U32(ctx, 31, 0x32B588u);
    ctx->pc = 0x32B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B580u;
    // 0x32b584: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A1B0u, 0x32B580u, 0x32B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B588u;
label_32b588:
    // 0x32b588: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32b588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32b58c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x32b58cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b590: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b590u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b594: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x32b594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x32b598: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32b598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32b59c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x32b59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32b5a0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32b5a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b5a4: 0xc4411454  lwc1        $f1, 0x1454($v0)
    ctx->pc = 0x32b5a4u;
    { uint32_t bits = FAST_READ32(0x3D1454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b5a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32b5a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b5ac: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x32b5acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x32b5b0: 0x0  nop
    ctx->pc = 0x32b5b0u;
    // NOP
    // 0x32b5b4: 0x0  nop
    ctx->pc = 0x32b5b4u;
    // NOP
    // 0x32b5b8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x32b5b8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x32b5bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b5bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b5c0: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x32b5c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b5c4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b5c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b5c8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x32b5c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x32b5cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x32B5CCu;
    {
        const bool branch_taken_0x32b5cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32B5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B5CCu;
        // 0x32b5d0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b5cc) {
            ctx->pc = 0x32B5E8u;
            goto label_32b5e8;
        }
    }
    ctx->pc = 0x32B5D4u;
    // 0x32b5d4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x32b5d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x32b5d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b5d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b5dc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x32b5dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x32b5e0: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x32b5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x32b5e4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x32b5e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_32b5e8:
    // 0x32b5e8: 0xae64009c  sw          $a0, 0x9C($s3)
    ctx->pc = 0x32b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 4));
    // 0x32b5ec: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x32b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x32b5f0: 0x8c647418  lw          $a0, 0x7418($v1)
    ctx->pc = 0x32b5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C7418u));
    // 0x32b5f4: 0xae6400a0  sw          $a0, 0xA0($s3)
    ctx->pc = 0x32b5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 4));
label_32b5f8:
    // 0x32b5f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32b5f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32b5fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32b5fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32b600: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32b600u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b604: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x32b604u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32b608: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x32b608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x32b60c: 0x3e00008  jr          $ra
    ctx->pc = 0x32B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B60Cu;
        // 0x32b610: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B614u;
    // 0x32b614: 0x0  nop
    ctx->pc = 0x32b614u;
    // NOP
    ctx->pc = 0x32b618u;
}
