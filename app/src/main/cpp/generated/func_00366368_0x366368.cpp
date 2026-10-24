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

// Function: func_00366368
// Address: 0x366368 - 0x3665c0
void func_00366368_0x366368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366368_0x366368");
#endif

    switch (ctx->pc) {
        case 0x3663c8u: goto label_3663c8;
        case 0x366458u: goto label_366458;
        case 0x3664b0u: goto label_3664b0;
        case 0x366550u: goto label_366550;
        default: break;
    }

    ctx->pc = 0x366368u;

    // 0x366368: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x36636c: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x36636cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x366374: 0x30ad00ff  andi        $t5, $a1, 0xFF
    ctx->pc = 0x366374u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x366378: 0x3c014301  lui         $at, 0x4301
    ctx->pc = 0x366378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17153 << 16));
    // 0x36637c: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x36637cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
    // 0x366380: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x366380u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x366384: 0x30ce00ff  andi        $t6, $a2, 0xFF
    ctx->pc = 0x366384u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x366388: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x366388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x36638c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x36638cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x366390: 0x30ef00ff  andi        $t7, $a3, 0xFF
    ctx->pc = 0x366390u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x366394: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x366394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
    // 0x366398: 0x3421b439  ori         $at, $at, 0xB439
    ctx->pc = 0x366398u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46137);
    // 0x36639c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x36639cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x3663a0: 0x254c0800  addiu       $t4, $t2, 0x800
    ctx->pc = 0x3663a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2048));
    // 0x3663a4: 0x3c01c250  lui         $at, 0xC250
    ctx->pc = 0x3663a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49744 << 16));
    // 0x3663a8: 0x342120c4  ori         $at, $at, 0x20C4
    ctx->pc = 0x3663a8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8388);
    // 0x3663ac: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3663acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3663b0: 0x254b1000  addiu       $t3, $t2, 0x1000
    ctx->pc = 0x3663b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4096));
    // 0x3663b4: 0x3c0142cc  lui         $at, 0x42CC
    ctx->pc = 0x3663b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17100 << 16));
    // 0x3663b8: 0x342149ba  ori         $at, $at, 0x49BA
    ctx->pc = 0x3663b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18874);
    // 0x3663bc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x3663bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3663c0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3663c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3663c4: 0x0  nop
    ctx->pc = 0x3663c4u;
    // NOP
label_3663c8:
    // 0x3663c8: 0x2522ff80  addiu       $v0, $t1, -0x80
    ctx->pc = 0x3663c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
    // 0x3663cc: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x3663ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x3663d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3663d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3663d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3663d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3663d8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3663d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3663dc: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x3663dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x3663e0: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x3663e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x3663e4: 0x29280100  slti        $t0, $t1, 0x100
    ctx->pc = 0x3663e4u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3663e8: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x3663e8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x3663ec: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x3663ecu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x3663f0: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x3663f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x3663f4: 0x46080082  mul.s       $f2, $f0, $f8
    ctx->pc = 0x3663f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3663f8: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x3663f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3663fc: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3663fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x366400: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x366400u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x366404: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x366404u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x366408: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x366408u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x36640c: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x36640cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x366410: 0x46000a64  .word       0x46000A64                   # cvt.w.s     $f9, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366410u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[9], &tmp, sizeof(tmp)); }
    // 0x366414: 0x44074800  mfc1        $a3, $f9
    ctx->pc = 0x366414u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x366418: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366418u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36641c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x36641cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366420: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366420u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x366424: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x366424u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x366428: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366428u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x36642c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x36642cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x366430: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x366430u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x366434: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x366434u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x366438: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x366438u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x36643c: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x36643cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x366440: 0xa4c00006  sh          $zero, 0x6($a2)
    ctx->pc = 0x366440u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x366444: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x366444u;
    {
        const bool branch_taken_0x366444 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x366448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366444u;
        // 0x366448: 0xa4c00004  sh          $zero, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366444) {
            ctx->pc = 0x3663C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3663c8;
        }
    }
    ctx->pc = 0x36644Cu;
    // 0x36644c: 0x2402fb78  addiu       $v0, $zero, -0x488
    ctx->pc = 0x36644cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966136));
    // 0x366450: 0x140182d  daddu       $v1, $t2, $zero
    ctx->pc = 0x366450u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366454: 0x2409002f  addiu       $t1, $zero, 0x2F
    ctx->pc = 0x366454u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_366458:
    // 0x366458: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x366458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x36645c: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x36645cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x366460: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x366460u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x366464: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x366464u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x366468: 0xa46d0006  sh          $t5, 0x6($v1)
    ctx->pc = 0x366468u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 13));
    // 0x36646c: 0x521fffa  bgez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36646Cu;
    {
        const bool branch_taken_0x36646c = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x366470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36646Cu;
        // 0x366470: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36646c) {
            ctx->pc = 0x366458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366458;
        }
    }
    ctx->pc = 0x366474u;
    // 0x366474: 0x3c014288  lui         $at, 0x4288
    ctx->pc = 0x366474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17032 << 16));
    // 0x366478: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x366478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x36647c: 0xe3180  sll         $a2, $t6, 6
    ctx->pc = 0x36647cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
    // 0x366480: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x366480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x366484: 0x24090030  addiu       $t1, $zero, 0x30
    ctx->pc = 0x366484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x366488: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x366488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x36648c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x36648cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x366490: 0x25430180  addiu       $v1, $t2, 0x180
    ctx->pc = 0x366490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 384));
    // 0x366494: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x366494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x366498: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x366498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x36649c: 0x3c014094  lui         $at, 0x4094
    ctx->pc = 0x36649cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16532 << 16));
    // 0x3664a0: 0x34215d17  ori         $at, $at, 0x5D17
    ctx->pc = 0x3664a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23831);
    // 0x3664a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3664a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3664a8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3664a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3664ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3664acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3664b0:
    // 0x3664b0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3664b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3664b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3664b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3664b8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3664b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3664bc: 0x29240082  slti        $a0, $t1, 0x82
    ctx->pc = 0x3664bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)130) ? 1 : 0);
    // 0x3664c0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x3664c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x3664c4: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x3664c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3664c8: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x3664C8u;
    {
        const bool branch_taken_0x3664c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3664CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664C8u;
        // 0x3664cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3664c8) {
            ctx->pc = 0x3664F8u;
            goto label_3664f8;
        }
    }
    ctx->pc = 0x3664D0u;
    // 0x3664d0: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x3664d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3664d4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x3664D4u;
    {
        const bool branch_taken_0x3664d4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3664D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3664D4u;
        // 0x3664d8: 0x24022791  addiu       $v0, $zero, 0x2791 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3664d4) {
            ctx->pc = 0x3664F8u;
            goto label_3664f8;
        }
    }
    ctx->pc = 0x3664DCu;
    // 0x3664dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3664dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3664e0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3664e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3664e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3664e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3664e8: 0x460001e4  .word       0x460001E4                   # cvt.w.s     $f7, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3664e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[7], &tmp, sizeof(tmp)); }
    // 0x3664ec: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x3664ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3664f0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x3664f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x3664f4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x3664f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_3664f8:
    // 0x3664f8: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x3664f8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x3664fc: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3664fcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x366500: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x366500u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x366504: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x366504u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x366508: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x366508u;
    {
        const bool branch_taken_0x366508 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366508u;
        // 0x36650c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366508) {
            ctx->pc = 0x3664B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3664b0;
        }
    }
    ctx->pc = 0x366510u;
    // 0x366510: 0x3c014377  lui         $at, 0x4377
    ctx->pc = 0x366510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17271 << 16));
    // 0x366514: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x366514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x366518: 0xf3980  sll         $a3, $t7, 6
    ctx->pc = 0x366518u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 6));
    // 0x36651c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x36651cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x366520: 0x25440410  addiu       $a0, $t2, 0x410
    ctx->pc = 0x366520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1040));
    // 0x366524: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x366524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x366528: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x366528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x36652c: 0x24090082  addiu       $t1, $zero, 0x82
    ctx->pc = 0x36652cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
    // 0x366530: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x366530u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x366534: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x366534u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x366538: 0x3c014013  lui         $at, 0x4013
    ctx->pc = 0x366538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16403 << 16));
    // 0x36653c: 0x342106eb  ori         $at, $at, 0x6EB
    ctx->pc = 0x36653cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1771);
    // 0x366540: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x366540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x366544: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x366544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x366548: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x366548u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36654c: 0x0  nop
    ctx->pc = 0x36654cu;
    // NOP
label_366550:
    // 0x366550: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x366550u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366554: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x366554u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366558: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x366558u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x36655c: 0x29230100  slti        $v1, $t1, 0x100
    ctx->pc = 0x36655cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x366560: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x366560u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x366564: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x366564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366568: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x366568u;
    {
        const bool branch_taken_0x366568 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x36656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366568u;
        // 0x36656c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366568) {
            ctx->pc = 0x366598u;
            goto label_366598;
        }
    }
    ctx->pc = 0x366570u;
    // 0x366570: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x366570u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366574: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x366574u;
    {
        const bool branch_taken_0x366574 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x366578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366574u;
        // 0x366578: 0x24029274  addiu       $v0, $zero, -0x6D8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294939252));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366574) {
            ctx->pc = 0x366598u;
            goto label_366598;
        }
    }
    ctx->pc = 0x36657Cu;
    // 0x36657c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x36657cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x366580: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x366580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x366584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x366584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x366588: 0x460001e4  .word       0x460001E4                   # cvt.w.s     $f7, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[7], &tmp, sizeof(tmp)); }
    // 0x36658c: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x36658cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366590: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x366590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x366594: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x366594u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_366598:
    // 0x366598: 0xa4870006  sh          $a3, 0x6($a0)
    ctx->pc = 0x366598u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x36659c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x36659cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3665a0: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x3665a0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x3665a4: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x3665a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3665a8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3665A8u;
    {
        const bool branch_taken_0x3665a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3665ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3665A8u;
        // 0x3665ac: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3665a8) {
            ctx->pc = 0x366550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366550;
        }
    }
    ctx->pc = 0x3665B0u;
    // 0x3665b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3665b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3665b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3665B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3665B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3665B4u;
        // 0x3665b8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3665B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3665BCu;
    // 0x3665bc: 0x0  nop
    ctx->pc = 0x3665bcu;
    // NOP
    ctx->pc = 0x3665c0u;
}
