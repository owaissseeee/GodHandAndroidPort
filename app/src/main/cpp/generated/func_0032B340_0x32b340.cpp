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

// Function: func_0032B340
// Address: 0x32b340 - 0x32b488
void func_0032B340_0x32b340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032B340_0x32b340");
#endif

    switch (ctx->pc) {
        case 0x32b36cu: goto label_32b36c;
        case 0x32b38cu: goto label_32b38c;
        case 0x32b3b0u: goto label_32b3b0;
        case 0x32b3c0u: goto label_32b3c0;
        case 0x32b3ecu: goto label_32b3ec;
        case 0x32b454u: goto label_32b454;
        default: break;
    }

    ctx->pc = 0x32b340u;

    // 0x32b340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32b340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32b344: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x32b344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x32b348: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x32b348u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b34c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x32b34cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32b350: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x32b350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b354: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x32b354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x32b358: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x32B358u;
    {
        const bool branch_taken_0x32b358 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x32B35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B358u;
        // 0x32b35c: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b358) {
            ctx->pc = 0x32B378u;
            goto label_32b378;
        }
    }
    ctx->pc = 0x32B360u;
    // 0x32b360: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32b360u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32b364: 0xc0cfc4c  jal         func_33F130
    ctx->pc = 0x32B364u;
    SET_GPR_U32(ctx, 31, 0x32B36Cu);
    ctx->pc = 0x32B368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B364u;
    // 0x32b368: 0x24842630  addiu       $a0, $a0, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33F130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F130u, 0x32B364u, 0x32B36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B36Cu;
label_32b36c:
    // 0x32b36c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x32B36Cu;
    {
        const bool branch_taken_0x32b36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B36Cu;
        // 0x32b370: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b36c) {
            ctx->pc = 0x32B458u;
            goto label_32b458;
        }
    }
    ctx->pc = 0x32B374u;
    // 0x32b374: 0x0  nop
    ctx->pc = 0x32b374u;
    // NOP
label_32b378:
    // 0x32b378: 0x82420072  lb          $v0, 0x72($s2)
    ctx->pc = 0x32b378u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 114)));
    // 0x32b37c: 0x12020035  beq         $s0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x32B37Cu;
    {
        const bool branch_taken_0x32b37c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x32B380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B37Cu;
        // 0x32b380: 0x82510001  lb          $s1, 0x1($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b37c) {
            ctx->pc = 0x32B454u;
            goto label_32b454;
        }
    }
    ctx->pc = 0x32B384u;
    // 0x32b384: 0xc0cf99e  jal         func_33E678
    ctx->pc = 0x32B384u;
    SET_GPR_U32(ctx, 31, 0x32B38Cu);
    ctx->pc = 0x33E678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E678u, 0x32B384u, 0x32B38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B38Cu;
label_32b38c:
    // 0x32b38c: 0x2622fffd  addiu       $v0, $s1, -0x3
    ctx->pc = 0x32b38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
    // 0x32b390: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x32b390u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32b394: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x32B394u;
    {
        const bool branch_taken_0x32b394 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B394u;
        // 0x32b398: 0xa2500072  sb          $s0, 0x72($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 114), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b394) {
            ctx->pc = 0x32B44Cu;
            goto label_32b44c;
        }
    }
    ctx->pc = 0x32B39Cu;
    // 0x32b39c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32b3a0: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x32B3A0u;
    {
        const bool branch_taken_0x32b3a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x32B3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3A0u;
        // 0x32b3a4: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3a0) {
            ctx->pc = 0x32B3B8u;
            goto label_32b3b8;
        }
    }
    ctx->pc = 0x32B3A8u;
    // 0x32b3a8: 0xc0c98ce  jal         func_326338
    ctx->pc = 0x32B3A8u;
    SET_GPR_U32(ctx, 31, 0x32B3B0u);
    ctx->pc = 0x32B3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3A8u;
    // 0x32b3ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326338u, 0x32B3A8u, 0x32B3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3B0u;
label_32b3b0:
    // 0x32b3b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x32B3B0u;
    {
        const bool branch_taken_0x32b3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32B3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B3B0u;
        // 0x32b3b4: 0x3c10003d  lui         $s0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b3b0) {
            ctx->pc = 0x32B3D0u;
            goto label_32b3d0;
        }
    }
    ctx->pc = 0x32B3B8u;
label_32b3b8:
    // 0x32b3b8: 0xc0c98ce  jal         func_326338
    ctx->pc = 0x32B3B8u;
    SET_GPR_U32(ctx, 31, 0x32B3C0u);
    ctx->pc = 0x32B3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3B8u;
    // 0x32b3bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326338u, 0x32B3B8u, 0x32B3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3C0u;
label_32b3c0:
    // 0x32b3c0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x32b3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x32b3c4: 0x8c437418  lw          $v1, 0x7418($v0)
    ctx->pc = 0x32b3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C7418u));
    // 0x32b3c8: 0xae4300a0  sw          $v1, 0xA0($s2)
    ctx->pc = 0x32b3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 3));
    // 0x32b3cc: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x32b3ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
label_32b3d0:
    // 0x32b3d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x32b3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b3d4: 0x26101408  addiu       $s0, $s0, 0x1408
    ctx->pc = 0x32b3d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5128));
    // 0x32b3d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x32b3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32b3dc: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x32b3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32b3e0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x32b3e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x32b3e4: 0xc0ca86c  jal         func_32A1B0
    ctx->pc = 0x32B3E4u;
    SET_GPR_U32(ctx, 31, 0x32B3ECu);
    ctx->pc = 0x32B3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32B3E4u;
    // 0x32b3e8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A1B0u, 0x32B3E4u, 0x32B3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B3ECu;
label_32b3ec:
    // 0x32b3ec: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x32b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x32b3f0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x32b3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32b3f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32b3f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x32b3f8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x32b3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
    // 0x32b3fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x32b3fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x32b400: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x32b400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x32b404: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x32b404u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x32b408: 0xc4411454  lwc1        $f1, 0x1454($v0)
    ctx->pc = 0x32b408u;
    { uint32_t bits = FAST_READ32(0x3D1454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32b40c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x32b40cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x32b410: 0x0  nop
    ctx->pc = 0x32b410u;
    // NOP
    // 0x32b414: 0x0  nop
    ctx->pc = 0x32b414u;
    // NOP
    // 0x32b418: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x32b418u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x32b41c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x32b41cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x32b420: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x32b420u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x32b424: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b424u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b428: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b428u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b42c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x32B42Cu;
    {
        const bool branch_taken_0x32b42c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x32B430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B42Cu;
        // 0x32b430: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32b42c) {
            ctx->pc = 0x32B448u;
            goto label_32b448;
        }
    }
    ctx->pc = 0x32B434u;
    // 0x32b434: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x32b434u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x32b438: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x32b438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x32b43c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x32b43cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x32b440: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x32b440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x32b444: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x32b444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_32b448:
    // 0x32b448: 0xae43009c  sw          $v1, 0x9C($s2)
    ctx->pc = 0x32b448u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 3));
label_32b44c:
    // 0x32b44c: 0xc0cf9a4  jal         func_33E690
    ctx->pc = 0x32B44Cu;
    SET_GPR_U32(ctx, 31, 0x32B454u);
    ctx->pc = 0x33E690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33E690u, 0x32B44Cu, 0x32B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32B454u;
label_32b454:
    // 0x32b454: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x32b454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_32b458:
    // 0x32b458: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x32b458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32b45c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x32b45cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32b460: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x32b460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x32b464: 0x3e00008  jr          $ra
    ctx->pc = 0x32B464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32B468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32B464u;
        // 0x32b468: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32B464u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32B46Cu;
    // 0x32b46c: 0x0  nop
    ctx->pc = 0x32b46cu;
    // NOP
    // 0x32b470: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32b470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32b474: 0x0  nop
    ctx->pc = 0x32b474u;
    // NOP
    // 0x32b478: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32b478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32b47c: 0x0  nop
    ctx->pc = 0x32b47cu;
    // NOP
    // 0x32b480: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x32b480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32b484: 0x0  nop
    ctx->pc = 0x32b484u;
    // NOP
    ctx->pc = 0x32b488u;
}
