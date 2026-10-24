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

// Function: func_00144368
// Address: 0x144368 - 0x144ad0
void func_00144368_0x144368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00144368_0x144368");
#endif

    switch (ctx->pc) {
        case 0x144400u: goto label_144400;
        case 0x1444a8u: goto label_1444a8;
        case 0x144658u: goto label_144658;
        case 0x144660u: goto label_144660;
        case 0x1446b8u: goto label_1446b8;
        case 0x144708u: goto label_144708;
        case 0x144738u: goto label_144738;
        case 0x144760u: goto label_144760;
        case 0x144988u: goto label_144988;
        case 0x144a08u: goto label_144a08;
        case 0x144a48u: goto label_144a48;
        case 0x144a50u: goto label_144a50;
        case 0x144a68u: goto label_144a68;
        case 0x144a70u: goto label_144a70;
        case 0x144a8cu: goto label_144a8c;
        default: break;
    }

    ctx->pc = 0x144368u;

    // 0x144368: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x144368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x14436c: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x14436cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x144370: 0x90a3d6f4  lbu         $v1, -0x290C($a1)
    ctx->pc = 0x144370u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3BD6F4u));
    // 0x144374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x144374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144378: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x144378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x14437c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x14437cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x144380: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x144380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x144384: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x144384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x144388: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x144388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x14438c: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x14438cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x144390: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x144390u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144394: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x144394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x144398: 0x2c420081  sltiu       $v0, $v0, 0x81
    ctx->pc = 0x144398u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x14439c: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x14439cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x1443a0: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x1443a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x1443a4: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x1443a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x1443a8: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x1443a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x1443ac: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x1443acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x1443b0: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x1443b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x1443b4: 0xe7b80190  swc1        $f24, 0x190($sp)
    ctx->pc = 0x1443b4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1443b8: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x1443b8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x1443bc: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x1443bcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x1443c0: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x1443c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x1443c4: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x1443c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x1443c8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1443C8u;
    {
        const bool branch_taken_0x1443c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1443CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443C8u;
        // 0x1443cc: 0xa0a3d6f4  sb          $v1, -0x290C($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 4294956788), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1443c8) {
            ctx->pc = 0x1443D4u;
            goto label_1443d4;
        }
    }
    ctx->pc = 0x1443D0u;
    // 0x1443d0: 0xa0a0d6f4  sb          $zero, -0x290C($a1)
    ctx->pc = 0x1443d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294956788), (uint8_t)GPR_U32(ctx, 0));
label_1443d4:
    // 0x1443d4: 0x822305dc  lb          $v1, 0x5DC($s1)
    ctx->pc = 0x1443d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1500)));
    // 0x1443d8: 0x3c070042  lui         $a3, 0x42
    ctx->pc = 0x1443d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)66 << 16));
    // 0x1443dc: 0x24e2e780  addiu       $v0, $a3, -0x1880
    ctx->pc = 0x1443dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961024));
    // 0x1443e0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1443e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1443e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1443e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1443e8: 0x0  nop
    ctx->pc = 0x1443e8u;
    // NOP
    // 0x1443ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1443ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1443f0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1443f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1443f4: 0x263204b0  addiu       $s2, $s1, 0x4B0
    ctx->pc = 0x1443f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1200));
    // 0x1443f8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1443f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1443fc: 0x0  nop
    ctx->pc = 0x1443fcu;
    // NOP
label_144400:
    // 0x144400: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x144400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144404: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x144404u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x144408: 0x0  nop
    ctx->pc = 0x144408u;
    // NOP
    // 0x14440c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x14440Cu;
    {
        const bool branch_taken_0x14440c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x144410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14440Cu;
        // 0x144410: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14440c) {
            ctx->pc = 0x144424u;
            goto label_144424;
        }
    }
    ctx->pc = 0x144414u;
    // 0x144414: 0x24660008  addiu       $a2, $v1, 0x8
    ctx->pc = 0x144414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x144418: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x144418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x14441c: 0x1000fff8  b           . + 4 + (-0x8 << 2)
    ctx->pc = 0x14441Cu;
    {
        const bool branch_taken_0x14441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14441Cu;
        // 0x144420: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14441c) {
            ctx->pc = 0x144400u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144400;
        }
    }
    ctx->pc = 0x144424u;
label_144424:
    // 0x144424: 0x822505dc  lb          $a1, 0x5DC($s1)
    ctx->pc = 0x144424u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1500)));
    // 0x144428: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x144428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x14442c: 0x24e3e780  addiu       $v1, $a3, -0x1880
    ctx->pc = 0x14442cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961024));
    // 0x144430: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x144430u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x144434: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x144434u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x144438: 0x0  nop
    ctx->pc = 0x144438u;
    // NOP
    // 0x14443c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14443cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x144440: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x144440u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144444: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x144444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x144448: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x144448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14444c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x14444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144450: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x144450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x144454: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x144454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144458: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x144458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x14445c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x14445cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x144460: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x144460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x144464: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x144464u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x144468: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x144468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14446c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x14446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144470: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x144470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x144474: 0x922305dc  lbu         $v1, 0x5DC($s1)
    ctx->pc = 0x144474u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1500)));
    // 0x144478: 0x2442e7a8  addiu       $v0, $v0, -0x1858
    ctx->pc = 0x144478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961064));
    // 0x14447c: 0x0  nop
    ctx->pc = 0x14447cu;
    // NOP
    // 0x144480: 0x0  nop
    ctx->pc = 0x144480u;
    // NOP
    // 0x144484: 0x46011103  div.s       $f4, $f2, $f1
    ctx->pc = 0x144484u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x144488: 0x24440005  addiu       $a0, $v0, 0x5
    ctx->pc = 0x144488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x14448c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x14448cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x144490: 0x60782d  daddu       $t7, $v1, $zero
    ctx->pc = 0x144490u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144494: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x144494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x144498: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x144498u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14449c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x14449cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1444a0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1444a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1444a4: 0xe62005d4  swc1        $f0, 0x5D4($s1)
    ctx->pc = 0x1444a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1492), bits); }
label_1444a8:
    // 0x1444a8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1444a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1444ac: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x1444acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1444b0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1444B0u;
    {
        const bool branch_taken_0x1444b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1444B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444B0u;
        // 0x1444b4: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444b0) {
            ctx->pc = 0x1444C8u;
            goto label_1444c8;
        }
    }
    ctx->pc = 0x1444B8u;
    // 0x1444b8: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x1444b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1444bc: 0x24840005  addiu       $a0, $a0, 0x5
    ctx->pc = 0x1444bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5));
    // 0x1444c0: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x1444C0u;
    {
        const bool branch_taken_0x1444c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1444C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444C0u;
        // 0x1444c4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444c0) {
            ctx->pc = 0x1444A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1444a8;
        }
    }
    ctx->pc = 0x1444C8u;
label_1444c8:
    // 0x1444c8: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x1444c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1444cc: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x1444ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x1444d0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1444d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1444d4: 0x2484e7a8  addiu       $a0, $a0, -0x1858
    ctx->pc = 0x1444d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961064));
    // 0x1444d8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1444d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1444dc: 0xf33821  addu        $a3, $a3, $s3
    ctx->pc = 0x1444dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 19)));
    // 0x1444e0: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1444e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1444e4: 0xf1600  sll         $v0, $t7, 24
    ctx->pc = 0x1444e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x1444e8: 0x90680000  lbu         $t0, 0x0($v1)
    ctx->pc = 0x1444e8u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1444ec: 0xe43021  addu        $a2, $a3, $a0
    ctx->pc = 0x1444ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1444f0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1444f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1444f4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1444f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1444f8: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x1444f8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1444fc: 0x0  nop
    ctx->pc = 0x1444fcu;
    // NOP
    // 0x144500: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x144500u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x144504: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x144504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x144508: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x144508u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14450c: 0x0  nop
    ctx->pc = 0x14450cu;
    // NOP
    // 0x144510: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x144510u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x144514: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x144514u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x144518: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x144518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14451c: 0x0  nop
    ctx->pc = 0x14451cu;
    // NOP
    // 0x144520: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x144520u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x144524: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x144524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x144528: 0x24890004  addiu       $t1, $a0, 0x4
    ctx->pc = 0x144528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14452c: 0x24880002  addiu       $t0, $a0, 0x2
    ctx->pc = 0x14452cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x144530: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x144530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x144534: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x144534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x144538: 0x24840003  addiu       $a0, $a0, 0x3
    ctx->pc = 0x144538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x14453c: 0xa98021  addu        $s0, $a1, $t1
    ctx->pc = 0x14453cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x144540: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x144540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x144544: 0x904d0000  lbu         $t5, 0x0($v0)
    ctx->pc = 0x144544u;
    SET_GPR_ZE32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144548: 0x0  nop
    ctx->pc = 0x144548u;
    // NOP
    // 0x14454c: 0x0  nop
    ctx->pc = 0x14454cu;
    // NOP
    // 0x144550: 0x46020103  div.s       $f4, $f0, $f2
    ctx->pc = 0x144550u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x144554: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x144554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x144558: 0x906e0000  lbu         $t6, 0x0($v1)
    ctx->pc = 0x144558u;
    SET_GPR_ZE32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14455c: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x14455cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x144560: 0xe84021  addu        $t0, $a3, $t0
    ctx->pc = 0x144560u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x144564: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x144564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x144568: 0x90ac0000  lbu         $t4, 0x0($a1)
    ctx->pc = 0x144568u;
    SET_GPR_ZE32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x14456c: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x14456cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x144570: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x144570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x144574: 0x4d1023  subu        $v0, $v0, $t5
    ctx->pc = 0x144574u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x144578: 0x920b0000  lbu         $t3, 0x0($s0)
    ctx->pc = 0x144578u;
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x14457c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x14457cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x144580: 0x0  nop
    ctx->pc = 0x144580u;
    // NOP
    // 0x144584: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x144584u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x144588: 0x90e40000  lbu         $a0, 0x0($a3)
    ctx->pc = 0x144588u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14458c: 0x6e1823  subu        $v1, $v1, $t6
    ctx->pc = 0x14458cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x144590: 0x91250000  lbu         $a1, 0x0($t1)
    ctx->pc = 0x144590u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x144594: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x144594u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x144598: 0x0  nop
    ctx->pc = 0x144598u;
    // NOP
    // 0x14459c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14459cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1445a0: 0x8c2023  subu        $a0, $a0, $t4
    ctx->pc = 0x1445a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
    // 0x1445a4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1445a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1445a8: 0xab2823  subu        $a1, $a1, $t3
    ctx->pc = 0x1445a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x1445ac: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1445acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1445b0: 0x0  nop
    ctx->pc = 0x1445b0u;
    // NOP
    // 0x1445b4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1445b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1445b8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1445b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1445bc: 0x0  nop
    ctx->pc = 0x1445bcu;
    // NOP
    // 0x1445c0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1445c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1445c4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x1445c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x1445c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x1445c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x1445cc: 0xf5600  sll         $t2, $t7, 24
    ctx->pc = 0x1445ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 15), 24));
    // 0x1445d0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1445d0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1445d4: 0xa5603  sra         $t2, $t2, 24
    ctx->pc = 0x1445d4u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 10), 24));
    // 0x1445d8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1445d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1445dc: 0x294a0010  slti        $t2, $t2, 0x10
    ctx->pc = 0x1445dcu;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1445e0: 0x46001924  .word       0x46001924                   # cvt.w.s     $f4, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1445e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x1445e4: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x1445e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1445e8: 0xa22f05dc  sb          $t7, 0x5DC($s1)
    ctx->pc = 0x1445e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1500), (uint8_t)GPR_U32(ctx, 15));
    // 0x1445ec: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1445ecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x1445f0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x1445f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1445f4: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1445f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1445f8: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x1445f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1445fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1445fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x144600: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x144600u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x144604: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x144604u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x144608: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x144608u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x14460c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x14460cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x144610: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x144610u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x144614: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x144614u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x144618: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x144618u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x14461c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x14461cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x144620: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x144620u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x144624: 0x1a26821  addu        $t5, $t5, $v0
    ctx->pc = 0x144624u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x144628: 0x1c37021  addu        $t6, $t6, $v1
    ctx->pc = 0x144628u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x14462c: 0x1846021  addu        $t4, $t4, $a0
    ctx->pc = 0x14462cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x144630: 0x1655821  addu        $t3, $t3, $a1
    ctx->pc = 0x144630u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 5)));
    // 0x144634: 0xa22d05db  sb          $t5, 0x5DB($s1)
    ctx->pc = 0x144634u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1499), (uint8_t)GPR_U32(ctx, 13));
    // 0x144638: 0xa22e05d8  sb          $t6, 0x5D8($s1)
    ctx->pc = 0x144638u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1496), (uint8_t)GPR_U32(ctx, 14));
    // 0x14463c: 0xa22c05d9  sb          $t4, 0x5D9($s1)
    ctx->pc = 0x14463cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1497), (uint8_t)GPR_U32(ctx, 12));
    // 0x144640: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x144640u;
    {
        const bool branch_taken_0x144640 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x144644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144640u;
        // 0x144644: 0xa22b05da  sb          $t3, 0x5DA($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1498), (uint8_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144640) {
            ctx->pc = 0x14464Cu;
            goto label_14464c;
        }
    }
    ctx->pc = 0x144648u;
    // 0x144648: 0xa22005dc  sb          $zero, 0x5DC($s1)
    ctx->pc = 0x144648u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1500), (uint8_t)GPR_U32(ctx, 0));
label_14464c:
    // 0x14464c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144650: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x144650u;
    SET_GPR_U32(ctx, 31, 0x144658u);
    ctx->pc = 0x144654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144650u;
    // 0x144654: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x144650u, 0x144658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144658u;
label_144658:
    // 0x144658: 0x8e22049c  lw          $v0, 0x49C($s1)
    ctx->pc = 0x144658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
    // 0x14465c: 0x0  nop
    ctx->pc = 0x14465cu;
    // NOP
label_144660:
    // 0x144660: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x144660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144664: 0x26be0001  addiu       $fp, $s5, 0x1
    ctx->pc = 0x144664u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x144668: 0x184000dc  blez        $v0, . + 4 + (0xDC << 2)
    ctx->pc = 0x144668u;
    {
        const bool branch_taken_0x144668 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x14466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144668u;
        // 0x14466c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144668) {
            ctx->pc = 0x1449DCu;
            goto label_1449dc;
        }
    }
    ctx->pc = 0x144670u;
    // 0x144670: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x144670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x144674: 0x3c014089  lui         $at, 0x4089
    ctx->pc = 0x144674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16521 << 16));
    // 0x144678: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x144678u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x14467c: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x14467cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x144680: 0x2454e710  addiu       $s4, $v0, -0x18F0
    ctx->pc = 0x144680u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960912));
    // 0x144684: 0x3c014060  lui         $at, 0x4060
    ctx->pc = 0x144684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16480 << 16));
    // 0x144688: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x144688u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x14468c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x14468cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x144690: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x144690u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x144694: 0x2699000c  addiu       $t9, $s4, 0xC
    ctx->pc = 0x144694u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x144698: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x144698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x14469c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x14469cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1446a0: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x1446a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1446a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1446a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1446a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1446a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1446ac: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x1446acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1446b0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1446b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1446b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1446b8:
    // 0x1446b8: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x1446b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1446bc: 0x105500c0  beq         $v0, $s5, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1446BCu;
    {
        const bool branch_taken_0x1446bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x1446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446BCu;
        // 0x1446c0: 0x2442fff8  addiu       $v0, $v0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1446bc) {
            ctx->pc = 0x1449C0u;
            goto label_1449c0;
        }
    }
    ctx->pc = 0x1446C4u;
    // 0x1446c4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1446c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1446c8: 0x544000be  bnel        $v0, $zero, . + 4 + (0xBE << 2)
    ctx->pc = 0x1446C8u;
    {
        const bool branch_taken_0x1446c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1446c8) {
            ctx->pc = 0x1446CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1446C8u;
            // 0x1446cc: 0x8e22049c  lw          $v0, 0x49C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1449C4u;
            goto label_1449c4;
        }
    }
    ctx->pc = 0x1446D0u;
    // 0x1446d0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1446d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1446d4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1446d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1446d8: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1446d8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1446dc: 0x27a900a0  addiu       $t1, $sp, 0xA0
    ctx->pc = 0x1446dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1446e0: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x1446e0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x1446e4: 0x27ab00b0  addiu       $t3, $sp, 0xB0
    ctx->pc = 0x1446e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1446e8: 0x262200a4  addiu       $v0, $s1, 0xA4
    ctx->pc = 0x1446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x1446ec: 0x2627009c  addiu       $a3, $s1, 0x9C
    ctx->pc = 0x1446ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 156));
    // 0x1446f0: 0x262300a0  addiu       $v1, $s1, 0xA0
    ctx->pc = 0x1446f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
    // 0x1446f4: 0x27ad0070  addiu       $t5, $sp, 0x70
    ctx->pc = 0x1446f4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1446f8: 0x27ae0080  addiu       $t6, $sp, 0x80
    ctx->pc = 0x1446f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1446fc: 0x27af0090  addiu       $t7, $sp, 0x90
    ctx->pc = 0x1446fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x144700: 0x3c18003c  lui         $t8, 0x3C
    ctx->pc = 0x144700u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)60 << 16));
    // 0x144704: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x144704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_144708:
    // 0x144708: 0xf8800000  sqc2        $vf0, 0x0($a0)
    ctx->pc = 0x144708u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x14470c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x14470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144710: 0x0  nop
    ctx->pc = 0x144710u;
    // NOP
    // 0x144714: 0x0  nop
    ctx->pc = 0x144714u;
    // NOP
    // 0x144718: 0x14c5fffb  bne         $a2, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x144718u;
    {
        const bool branch_taken_0x144718 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x14471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144718u;
        // 0x14471c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144718) {
            ctx->pc = 0x144708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144708;
        }
    }
    ctx->pc = 0x144720u;
    // 0x144720: 0xfba000a0  sqc2        $vf0, 0xA0($sp)
    ctx->pc = 0x144720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x144724: 0xfba000b0  sqc2        $vf0, 0xB0($sp)
    ctx->pc = 0x144724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x144728: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x144728u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14472c: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x14472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144730: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x144730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x144734: 0x2545d880  addiu       $a1, $t2, -0x2780
    ctx->pc = 0x144734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957184));
label_144738:
    // 0x144738: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x144738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14473c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x14473cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144740: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x144740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x144744: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x144744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x144748: 0x14c8fffb  bne         $a2, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x144748u;
    {
        const bool branch_taken_0x144748 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        ctx->pc = 0x14474Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144748u;
        // 0x14474c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144748) {
            ctx->pc = 0x144738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144738;
        }
    }
    ctx->pc = 0x144750u;
    // 0x144750: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x144750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144754: 0x2546d880  addiu       $a2, $t2, -0x2780
    ctx->pc = 0x144754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 4294957184));
    // 0x144758: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x144758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14475c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x14475cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_144760:
    // 0x144760: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x144760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144764: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x144764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x144768: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x144768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x14476c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x14476cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x144770: 0x14a8fffb  bne         $a1, $t0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x144770u;
    {
        const bool branch_taken_0x144770 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 8));
        ctx->pc = 0x144774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144770u;
        // 0x144774: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144770) {
            ctx->pc = 0x144760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144760;
        }
    }
    ctx->pc = 0x144778u;
    // 0x144778: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x144778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x14477c: 0x920400a8  lbu         $a0, 0xA8($s0)
    ctx->pc = 0x14477cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x144780: 0x1097001d  beq         $a0, $s7, . + 4 + (0x1D << 2)
    ctx->pc = 0x144780u;
    {
        const bool branch_taken_0x144780 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 23));
        ctx->pc = 0x144784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144780u;
        // 0x144784: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144780) {
            ctx->pc = 0x1447F8u;
            goto label_1447f8;
        }
    }
    ctx->pc = 0x144788u;
    // 0x144788: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x144788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14478c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14478Cu;
    {
        const bool branch_taken_0x14478c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x144790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14478Cu;
        // 0x144790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14478c) {
            ctx->pc = 0x1447A4u;
            goto label_1447a4;
        }
    }
    ctx->pc = 0x144794u;
    // 0x144794: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x144794u;
    {
        const bool branch_taken_0x144794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x144798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144794u;
        // 0x144798: 0xf21021  addu        $v0, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144794) {
            ctx->pc = 0x144844u;
            goto label_144844;
        }
    }
    ctx->pc = 0x14479Cu;
    // 0x14479c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x14479Cu;
    {
        const bool branch_taken_0x14479c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1447A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14479Cu;
        // 0x1447a0: 0x721821  addu        $v1, $v1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14479c) {
            ctx->pc = 0x144888u;
            goto label_144888;
        }
    }
    ctx->pc = 0x1447A4u;
label_1447a4:
    // 0x1447a4: 0x1096000b  beq         $a0, $s6, . + 4 + (0xB << 2)
    ctx->pc = 0x1447A4u;
    {
        const bool branch_taken_0x1447a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 22));
        ctx->pc = 0x1447A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447A4u;
        // 0x1447a8: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447a4) {
            ctx->pc = 0x1447D4u;
            goto label_1447d4;
        }
    }
    ctx->pc = 0x1447ACu;
    // 0x1447ac: 0x14820035  bne         $a0, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x1447ACu;
    {
        const bool branch_taken_0x1447ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1447B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447ACu;
        // 0x1447b0: 0xf21021  addu        $v0, $a3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447ac) {
            ctx->pc = 0x144884u;
            goto label_144884;
        }
    }
    ctx->pc = 0x1447B4u;
    // 0x1447b4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1447b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1447b8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1447b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1447bc: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1447bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1447c0: 0x46180080  add.s       $f2, $f0, $f24
    ctx->pc = 0x1447c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x1447c4: 0x461808c0  add.s       $f3, $f1, $f24
    ctx->pc = 0x1447c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[24]);
    // 0x1447c8: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x1447c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x1447cc: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1447CCu;
    {
        const bool branch_taken_0x1447cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1447D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447CCu;
        // 0x1447d0: 0x46180841  sub.s       $f1, $f1, $f24 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447cc) {
            ctx->pc = 0x1448A0u;
            goto label_1448a0;
        }
    }
    ctx->pc = 0x1447D4u;
label_1447d4:
    // 0x1447d4: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x1447d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x1447d8: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1447d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1447dc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1447dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1447e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1447e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1447e4: 0x46170080  add.s       $f2, $f0, $f23
    ctx->pc = 0x1447e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
    // 0x1447e8: 0x461708c0  add.s       $f3, $f1, $f23
    ctx->pc = 0x1447e8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[23]);
    // 0x1447ec: 0x46170001  sub.s       $f0, $f0, $f23
    ctx->pc = 0x1447ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[23]);
    // 0x1447f0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1447F0u;
    {
        const bool branch_taken_0x1447f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1447F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1447F0u;
        // 0x1447f4: 0x46170841  sub.s       $f1, $f1, $f23 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[23]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1447f0) {
            ctx->pc = 0x1448A0u;
            goto label_1448a0;
        }
    }
    ctx->pc = 0x1447F8u;
label_1447f8:
    // 0x1447f8: 0xf21021  addu        $v0, $a3, $s2
    ctx->pc = 0x1447f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 18)));
    // 0x1447fc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1447fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x144800: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x144800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144804: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x144804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x144808: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x144808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14480c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x14480cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x144810: 0x46160880  add.s       $f2, $f1, $f22
    ctx->pc = 0x144810u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
    // 0x144814: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x144814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x144818: 0x461600c0  add.s       $f3, $f0, $f22
    ctx->pc = 0x144818u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
    // 0x14481c: 0x9062d6f4  lbu         $v0, -0x290C($v1)
    ctx->pc = 0x14481cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x3BD6F4u));
    // 0x144820: 0x46160841  sub.s       $f1, $f1, $f22
    ctx->pc = 0x144820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[22]);
    // 0x144824: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x144824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x144828: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x144828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x14482c: 0x442825  or          $a1, $v0, $a0
    ctx->pc = 0x14482cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x144830: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x144830u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x144834: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x144834u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x144838: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x144838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x14483c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14483Cu;
    {
        const bool branch_taken_0x14483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14483Cu;
        // 0x144840: 0xe7a300b4  swc1        $f3, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14483c) {
            ctx->pc = 0x1448B0u;
            goto label_1448b0;
        }
    }
    ctx->pc = 0x144844u;
label_144844:
    // 0x144844: 0xc62005d4  lwc1        $f0, 0x5D4($s1)
    ctx->pc = 0x144844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144848: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x144848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x14484c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14484cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x144850: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x144850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x144854: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x144854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144858: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x144858u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x14485c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x14485cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144860: 0x8e2505d8  lw          $a1, 0x5D8($s1)
    ctx->pc = 0x144860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1496)));
    // 0x144864: 0x460008c0  add.s       $f3, $f1, $f0
    ctx->pc = 0x144864u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x144868: 0x46001100  add.s       $f4, $f2, $f0
    ctx->pc = 0x144868u;
    ctx->f[4] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x14486c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x14486cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x144870: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x144870u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x144874: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x144874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x144878: 0xe7a400b0  swc1        $f4, 0xB0($sp)
    ctx->pc = 0x144878u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x14487c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14487Cu;
    {
        const bool branch_taken_0x14487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14487Cu;
        // 0x144880: 0xe7a200a0  swc1        $f2, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14487c) {
            ctx->pc = 0x1448ACu;
            goto label_1448ac;
        }
    }
    ctx->pc = 0x144884u;
label_144884:
    // 0x144884: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x144884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_144888:
    // 0x144888: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x144888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14488c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x14488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144890: 0x46150080  add.s       $f2, $f0, $f21
    ctx->pc = 0x144890u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x144894: 0x461508c0  add.s       $f3, $f1, $f21
    ctx->pc = 0x144894u;
    ctx->f[3] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
    // 0x144898: 0x46150001  sub.s       $f0, $f0, $f21
    ctx->pc = 0x144898u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x14489c: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x14489cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
label_1448a0:
    // 0x1448a0: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x1448a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1448a4: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x1448a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1448a8: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1448a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1448ac:
    // 0x1448ac: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1448acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1448b0:
    // 0x1448b0: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1448b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1448b4: 0x180202d  daddu       $a0, $t4, $zero
    ctx->pc = 0x1448b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1448b8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1448b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1448bc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1448bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1448c0: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x1448c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1448c4: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x1448c4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
    // 0x1448c8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1448c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1448cc: 0x24091cf0  addiu       $t1, $zero, 0x1CF0
    ctx->pc = 0x1448ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 7408));
    // 0x1448d0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1448d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1448d4: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x1448d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1448d8: 0xe7a30070  swc1        $f3, 0x70($sp)
    ctx->pc = 0x1448d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1448dc: 0x240b0006  addiu       $t3, $zero, 0x6
    ctx->pc = 0x1448dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1448e0: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x1448e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1448e4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1448e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x1448e8: 0xe594000c  swc1        $f20, 0xC($t4)
    ctx->pc = 0x1448e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 12), bits); }
    // 0x1448ec: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x1448ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x1448f0: 0xe5b4000c  swc1        $f20, 0xC($t5)
    ctx->pc = 0x1448f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 12), bits); }
    // 0x1448f4: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x1448f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
    // 0x1448f8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1448f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1448fc: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1448fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144900: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x144900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x144904: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x144904u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x144908: 0xe5d4000c  swc1        $f20, 0xC($t6)
    ctx->pc = 0x144908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 12), bits); }
    // 0x14490c: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x14490cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x144910: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x144910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x144914: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x144914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144918: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x144918u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14491c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x14491cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144920: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x144920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144924: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x144924u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x144928: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x144928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x14492c: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x14492cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x144930: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x144930u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x144934: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x144934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x144938: 0x2873821  addu        $a3, $s4, $a3
    ctx->pc = 0x144938u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x14493c: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x14493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x144940: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x144940u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x144944: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x144944u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x144948: 0x1194021  addu        $t0, $t0, $t9
    ctx->pc = 0x144948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 25)));
    // 0x14494c: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x14494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x144950: 0xc4e30008  lwc1        $f3, 0x8($a3)
    ctx->pc = 0x144950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x144954: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x144954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
    // 0x144958: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x144958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14495c: 0xe5f4000c  swc1        $f20, 0xC($t7)
    ctx->pc = 0x14495cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 12), bits); }
    // 0x144960: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x144960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144964: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x144964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x144968: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x144968u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x14496c: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x14496cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x144970: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x144970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x144974: 0x8f0811b0  lw          $t0, 0x11B0($t8)
    ctx->pc = 0x144974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 4528)));
    // 0x144978: 0x8e270094  lw          $a3, 0x94($s1)
    ctx->pc = 0x144978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x14497c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x14497cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x144980: 0xc056f3c  jal         func_15BCF0
    ctx->pc = 0x144980u;
    SET_GPR_U32(ctx, 31, 0x144988u);
    ctx->pc = 0x144984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144980u;
    // 0x144984: 0x7fb900c0  sq          $t9, 0xC0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15BCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15BCF0u, 0x144980u, 0x144988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144988u;
label_144988:
    // 0x144988: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x144988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14498c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14498Cu;
    {
        const bool branch_taken_0x14498c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x144990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14498Cu;
        // 0x144990: 0x7bb900c0  lq          $t9, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14498c) {
            ctx->pc = 0x1449A0u;
            goto label_1449a0;
        }
    }
    ctx->pc = 0x144994u;
    // 0x144994: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x144994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x144998: 0x3442001d  ori         $v0, $v0, 0x1D
    ctx->pc = 0x144998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29);
    // 0x14499c: 0xfc6201a0  sd          $v0, 0x1A0($v1)
    ctx->pc = 0x14499cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 416), GPR_U64(ctx, 2));
label_1449a0:
    // 0x1449a0: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x1449a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x1449a4: 0x54570007  bnel        $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x1449A4u;
    {
        const bool branch_taken_0x1449a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1449a4) {
            ctx->pc = 0x1449A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1449A4u;
            // 0x1449a8: 0x8e22049c  lw          $v0, 0x49C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1449C4u;
            goto label_1449c4;
        }
    }
    ctx->pc = 0x1449ACu;
    // 0x1449ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1449acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1449b0: 0x2652fff0  addiu       $s2, $s2, -0x10
    ctx->pc = 0x1449b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967280));
    // 0x1449b4: 0xa20200a8  sb          $v0, 0xA8($s0)
    ctx->pc = 0x1449b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 168), (uint8_t)GPR_U32(ctx, 2));
    // 0x1449b8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1449b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1449bc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x1449bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
label_1449c0:
    // 0x1449c0: 0x8e22049c  lw          $v0, 0x49C($s1)
    ctx->pc = 0x1449c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
label_1449c4:
    // 0x1449c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1449c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1449c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1449c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1449cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1449ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449d0: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1449d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1449d4: 0x1440ff38  bnez        $v0, . + 4 + (-0xC8 << 2)
    ctx->pc = 0x1449D4u;
    {
        const bool branch_taken_0x1449d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1449D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449D4u;
        // 0x1449d8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449d4) {
            ctx->pc = 0x1446B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1446b8;
        }
    }
    ctx->pc = 0x1449DCu;
label_1449dc:
    // 0x1449dc: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x1449dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1449e0: 0x2aa20007  slti        $v0, $s5, 0x7
    ctx->pc = 0x1449e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x1449e4: 0x5440ff1e  bnel        $v0, $zero, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x1449E4u;
    {
        const bool branch_taken_0x1449e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1449e4) {
            ctx->pc = 0x1449E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1449E4u;
            // 0x1449e8: 0x8e22049c  lw          $v0, 0x49C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144660;
        }
    }
    ctx->pc = 0x1449ECu;
    // 0x1449ec: 0x18600025  blez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x1449ECu;
    {
        const bool branch_taken_0x1449ec = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x1449F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1449ECu;
        // 0x1449f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1449ec) {
            ctx->pc = 0x144A84u;
            goto label_144a84;
        }
    }
    ctx->pc = 0x1449F4u;
    // 0x1449f4: 0x24160008  addiu       $s6, $zero, 0x8
    ctx->pc = 0x1449f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1449f8: 0x24150009  addiu       $s5, $zero, 0x9
    ctx->pc = 0x1449f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1449fc: 0x26340500  addiu       $s4, $s1, 0x500
    ctx->pc = 0x1449fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 1280));
    // 0x144a00: 0x26320550  addiu       $s2, $s1, 0x550
    ctx->pc = 0x144a00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1360));
    // 0x144a04: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x144a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144a08:
    // 0x144a08: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x144a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x144a0c: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x144a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x144a10: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x144a10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x144a14: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x144A14u;
    {
        const bool branch_taken_0x144a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144a14) {
            ctx->pc = 0x144A18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144A14u;
            // 0x144a18: 0x8e22049c  lw          $v0, 0x49C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144A74u;
            goto label_144a74;
        }
    }
    ctx->pc = 0x144A1Cu;
    // 0x144a1c: 0x920200a8  lbu         $v0, 0xA8($s0)
    ctx->pc = 0x144a1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x144a20: 0x50560005  beql        $v0, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x144A20u;
    {
        const bool branch_taken_0x144a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x144a20) {
            ctx->pc = 0x144A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144A20u;
            // 0x144a24: 0x8e2205a4  lw          $v0, 0x5A4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144A38u;
            goto label_144a38;
        }
    }
    ctx->pc = 0x144A28u;
    // 0x144a28: 0x5055000b  beql        $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x144A28u;
    {
        const bool branch_taken_0x144a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x144a28) {
            ctx->pc = 0x144A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x144A28u;
            // 0x144a2c: 0x8e2205a8  lw          $v0, 0x5A8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144A58u;
            goto label_144a58;
        }
    }
    ctx->pc = 0x144A30u;
    // 0x144a30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x144A30u;
    {
        const bool branch_taken_0x144a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A30u;
        // 0x144a34: 0x8e22049c  lw          $v0, 0x49C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a30) {
            ctx->pc = 0x144A74u;
            goto label_144a74;
        }
    }
    ctx->pc = 0x144A38u;
label_144a38:
    // 0x144a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x144a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a3c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x144a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144a40: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x144A40u;
    SET_GPR_U32(ctx, 31, 0x144A48u);
    ctx->pc = 0x144A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A40u;
    // 0x144a44: 0xe4400048  swc1        $f0, 0x48($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x144A40u, 0x144A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A48u;
label_144a48:
    // 0x144a48: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x144A48u;
    SET_GPR_U32(ctx, 31, 0x144A50u);
    ctx->pc = 0x144A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A48u;
    // 0x144a4c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x144A48u, 0x144A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A50u;
label_144a50:
    // 0x144a50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x144A50u;
    {
        const bool branch_taken_0x144a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A50u;
        // 0x144a54: 0x8e22049c  lw          $v0, 0x49C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a50) {
            ctx->pc = 0x144A74u;
            goto label_144a74;
        }
    }
    ctx->pc = 0x144A58u;
label_144a58:
    // 0x144a58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144a58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144a5c: 0xc600009c  lwc1        $f0, 0x9C($s0)
    ctx->pc = 0x144a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x144a60: 0xc0aaa90  jal         func_2AAA40
    ctx->pc = 0x144A60u;
    SET_GPR_U32(ctx, 31, 0x144A68u);
    ctx->pc = 0x144A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A60u;
    // 0x144a64: 0xe4400048  swc1        $f0, 0x48($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAA40u, 0x144A60u, 0x144A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A68u;
label_144a68:
    // 0x144a68: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x144A68u;
    SET_GPR_U32(ctx, 31, 0x144A70u);
    ctx->pc = 0x144A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A68u;
    // 0x144a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x144A68u, 0x144A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A70u;
label_144a70:
    // 0x144a70: 0x8e22049c  lw          $v0, 0x49C($s1)
    ctx->pc = 0x144a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1180)));
label_144a74:
    // 0x144a74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x144a74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x144a78: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x144a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x144a7c: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x144A7Cu;
    {
        const bool branch_taken_0x144a7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144A7Cu;
        // 0x144a80: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144a7c) {
            ctx->pc = 0x144A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144a08;
        }
    }
    ctx->pc = 0x144A84u;
label_144a84:
    // 0x144a84: 0xc0aab0a  jal         func_2AAC28
    ctx->pc = 0x144A84u;
    SET_GPR_U32(ctx, 31, 0x144A8Cu);
    ctx->pc = 0x144A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144A84u;
    // 0x144a88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AAC28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AAC28u, 0x144A84u, 0x144A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144A8Cu;
label_144a8c:
    // 0x144a8c: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x144a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x144a90: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x144a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x144a94: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x144a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x144a98: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x144a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x144a9c: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x144a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x144aa0: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x144aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x144aa4: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x144aa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x144aa8: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x144aa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x144aac: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x144aacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x144ab0: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x144ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x144ab4: 0xc7b80190  lwc1        $f24, 0x190($sp)
    ctx->pc = 0x144ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x144ab8: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x144ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x144abc: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x144abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x144ac0: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x144ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x144ac4: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x144ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x144ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x144AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144AC8u;
        // 0x144acc: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144AD0u;
}
