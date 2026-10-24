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

// Function: func_00366110
// Address: 0x366110 - 0x366368
void func_00366110_0x366110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00366110_0x366110");
#endif

    switch (ctx->pc) {
        case 0x366170u: goto label_366170;
        case 0x366200u: goto label_366200;
        case 0x366258u: goto label_366258;
        case 0x3662f8u: goto label_3662f8;
        default: break;
    }

    ctx->pc = 0x366110u;

    // 0x366110: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x366110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x366114: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x366114u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366118: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x366118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x36611c: 0x30ad00ff  andi        $t5, $a1, 0xFF
    ctx->pc = 0x36611cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x366120: 0x3c014301  lui         $at, 0x4301
    ctx->pc = 0x366120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17153 << 16));
    // 0x366124: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x366124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
    // 0x366128: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x366128u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x36612c: 0x30ce00ff  andi        $t6, $a2, 0xFF
    ctx->pc = 0x36612cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x366130: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x366130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x366134: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x366134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x366138: 0x30ef00ff  andi        $t7, $a3, 0xFF
    ctx->pc = 0x366138u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x36613c: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x36613cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
    // 0x366140: 0x3421b439  ori         $at, $at, 0xB439
    ctx->pc = 0x366140u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46137);
    // 0x366144: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x366144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x366148: 0x254c0800  addiu       $t4, $t2, 0x800
    ctx->pc = 0x366148u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 2048));
    // 0x36614c: 0x3c01c250  lui         $at, 0xC250
    ctx->pc = 0x36614cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49744 << 16));
    // 0x366150: 0x342120c4  ori         $at, $at, 0x20C4
    ctx->pc = 0x366150u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8388);
    // 0x366154: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x366154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x366158: 0x254b1000  addiu       $t3, $t2, 0x1000
    ctx->pc = 0x366158u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 4096));
    // 0x36615c: 0x3c0142cc  lui         $at, 0x42CC
    ctx->pc = 0x36615cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17100 << 16));
    // 0x366160: 0x342149ba  ori         $at, $at, 0x49BA
    ctx->pc = 0x366160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18874);
    // 0x366164: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x366164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x366168: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x366168u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36616c: 0x0  nop
    ctx->pc = 0x36616cu;
    // NOP
label_366170:
    // 0x366170: 0x2522ff80  addiu       $v0, $t1, -0x80
    ctx->pc = 0x366170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967168));
    // 0x366174: 0x918c0  sll         $v1, $t1, 3
    ctx->pc = 0x366174u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
    // 0x366178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x366178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36617c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36617cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366180: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x366180u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x366184: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x366184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x366188: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x366188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x36618c: 0x29280100  slti        $t0, $t1, 0x100
    ctx->pc = 0x36618cu;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x366190: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x366190u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x366194: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x366194u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x366198: 0x46050042  mul.s       $f1, $f0, $f5
    ctx->pc = 0x366198u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x36619c: 0x46080082  mul.s       $f2, $f0, $f8
    ctx->pc = 0x36619cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x3661a0: 0x460700c2  mul.s       $f3, $f0, $f7
    ctx->pc = 0x3661a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x3661a4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x3661a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x3661a8: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x3661a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x3661ac: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x3661acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x3661b0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3661b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x3661b4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3661b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3661b8: 0x46000a64  .word       0x46000A64                   # cvt.w.s     $f9, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3661b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[9], &tmp, sizeof(tmp)); }
    // 0x3661bc: 0x44074800  mfc1        $a3, $f9
    ctx->pc = 0x3661bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[9], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x3661c0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3661c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3661c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x3661c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3661c8: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3661c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3661cc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x3661ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3661d0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3661d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3661d4: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3661d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3661d8: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x3661d8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x3661dc: 0xa4640002  sh          $a0, 0x2($v1)
    ctx->pc = 0x3661dcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 4));
    // 0x3661e0: 0xa4c50002  sh          $a1, 0x2($a2)
    ctx->pc = 0x3661e0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x3661e4: 0xa4c70000  sh          $a3, 0x0($a2)
    ctx->pc = 0x3661e4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x3661e8: 0xa4c00006  sh          $zero, 0x6($a2)
    ctx->pc = 0x3661e8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x3661ec: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3661ECu;
    {
        const bool branch_taken_0x3661ec = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3661F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3661ECu;
        // 0x3661f0: 0xa4c00004  sh          $zero, 0x4($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3661ec) {
            ctx->pc = 0x366170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366170;
        }
    }
    ctx->pc = 0x3661F4u;
    // 0x3661f4: 0x140102d  daddu       $v0, $t2, $zero
    ctx->pc = 0x3661f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3661f8: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x3661f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3661fc: 0x0  nop
    ctx->pc = 0x3661fcu;
    // NOP
label_366200:
    // 0x366200: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x366200u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x366204: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x366204u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x366208: 0xa4400002  sh          $zero, 0x2($v0)
    ctx->pc = 0x366208u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x36620c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x36620cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x366210: 0xa44d0006  sh          $t5, 0x6($v0)
    ctx->pc = 0x366210u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 13));
    // 0x366214: 0x521fffa  bgez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x366214u;
    {
        const bool branch_taken_0x366214 = (GPR_S64(ctx, 9) >= 0);
        ctx->pc = 0x366218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366214u;
        // 0x366218: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366214) {
            ctx->pc = 0x366200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366200;
        }
    }
    ctx->pc = 0x36621Cu;
    // 0x36621c: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x36621cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x366220: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x366220u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x366224: 0xe3180  sll         $a2, $t6, 6
    ctx->pc = 0x366224u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
    // 0x366228: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x366228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x36622c: 0x24090009  addiu       $t1, $zero, 0x9
    ctx->pc = 0x36622cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x366230: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x366230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x366234: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x366234u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x366238: 0x25430048  addiu       $v1, $t2, 0x48
    ctx->pc = 0x366238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 72));
    // 0x36623c: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x36623cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x366240: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x366240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x366244: 0x3c014014  lui         $at, 0x4014
    ctx->pc = 0x366244u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16404 << 16));
    // 0x366248: 0x34215d17  ori         $at, $at, 0x5D17
    ctx->pc = 0x366248u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23831);
    // 0x36624c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x36624cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x366250: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x366250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x366254: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x366254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_366258:
    // 0x366258: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x366258u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36625c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x36625cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366260: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x366260u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x366264: 0x29240086  slti        $a0, $t1, 0x86
    ctx->pc = 0x366264u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)134) ? 1 : 0);
    // 0x366268: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x366268u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x36626c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x36626cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366270: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x366270u;
    {
        const bool branch_taken_0x366270 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x366274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366270u;
        // 0x366274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366270) {
            ctx->pc = 0x3662A0u;
            goto label_3662a0;
        }
    }
    ctx->pc = 0x366278u;
    // 0x366278: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x366278u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36627c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x36627Cu;
    {
        const bool branch_taken_0x36627c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x366280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36627Cu;
        // 0x366280: 0x240293c9  addiu       $v0, $zero, -0x6C37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294939593));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36627c) {
            ctx->pc = 0x3662A0u;
            goto label_3662a0;
        }
    }
    ctx->pc = 0x366284u;
    // 0x366284: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x366284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x366288: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x366288u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36628c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36628cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x366290: 0x460001e4  .word       0x460001E4                   # cvt.w.s     $f7, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366290u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[7], &tmp, sizeof(tmp)); }
    // 0x366294: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x366294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366298: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x366298u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36629c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x36629cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_3662a0:
    // 0x3662a0: 0xa4660006  sh          $a2, 0x6($v1)
    ctx->pc = 0x3662a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 6));
    // 0x3662a4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x3662a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x3662a8: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x3662a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x3662ac: 0xa4620002  sh          $v0, 0x2($v1)
    ctx->pc = 0x3662acu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x3662b0: 0x1480ffe9  bnez        $a0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x3662B0u;
    {
        const bool branch_taken_0x3662b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3662B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3662B0u;
        // 0x3662b4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3662b0) {
            ctx->pc = 0x366258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366258;
        }
    }
    ctx->pc = 0x3662B8u;
    // 0x3662b8: 0x3c01437b  lui         $at, 0x437B
    ctx->pc = 0x3662b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17275 << 16));
    // 0x3662bc: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x3662bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x3662c0: 0xf3980  sll         $a3, $t7, 6
    ctx->pc = 0x3662c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 15), 6));
    // 0x3662c4: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x3662c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3662c8: 0x25440430  addiu       $a0, $t2, 0x430
    ctx->pc = 0x3662c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 1072));
    // 0x3662cc: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x3662ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x3662d0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x3662d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3662d4: 0x24090086  addiu       $t1, $zero, 0x86
    ctx->pc = 0x3662d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
    // 0x3662d8: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x3662d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x3662dc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x3662dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3662e0: 0x3c014014  lui         $at, 0x4014
    ctx->pc = 0x3662e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16404 << 16));
    // 0x3662e4: 0x34215d17  ori         $at, $at, 0x5D17
    ctx->pc = 0x3662e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23831);
    // 0x3662e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3662e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3662ec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x3662ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x3662f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3662f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3662f4: 0x0  nop
    ctx->pc = 0x3662f4u;
    // NOP
label_3662f8:
    // 0x3662f8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3662f8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3662fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3662fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366300: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x366300u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x366304: 0x29230100  slti        $v1, $t1, 0x100
    ctx->pc = 0x366304u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x366308: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x366308u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x36630c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x36630cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x366310: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x366310u;
    {
        const bool branch_taken_0x366310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x366314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366310u;
        // 0x366314: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366310) {
            ctx->pc = 0x366340u;
            goto label_366340;
        }
    }
    ctx->pc = 0x366318u;
    // 0x366318: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x366318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x36631c: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x36631Cu;
    {
        const bool branch_taken_0x36631c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x366320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36631Cu;
        // 0x366320: 0x240293c9  addiu       $v0, $zero, -0x6C37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294939593));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36631c) {
            ctx->pc = 0x366340u;
            goto label_366340;
        }
    }
    ctx->pc = 0x366324u;
    // 0x366324: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x366324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x366328: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x366328u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x36632c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36632cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x366330: 0x460001e4  .word       0x460001E4                   # cvt.w.s     $f7, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x366330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[7], &tmp, sizeof(tmp)); }
    // 0x366334: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x366334u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366338: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x366338u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x36633c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x36633cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_366340:
    // 0x366340: 0xa4870006  sh          $a3, 0x6($a0)
    ctx->pc = 0x366340u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 7));
    // 0x366344: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x366344u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x366348: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x366348u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x36634c: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x36634cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x366350: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x366350u;
    {
        const bool branch_taken_0x366350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x366354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366350u;
        // 0x366354: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366350) {
            ctx->pc = 0x3662F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3662f8;
        }
    }
    ctx->pc = 0x366358u;
    // 0x366358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x366358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x36635c: 0x3e00008  jr          $ra
    ctx->pc = 0x36635Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x366360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36635Cu;
        // 0x366360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36635Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366364u;
    // 0x366364: 0x0  nop
    ctx->pc = 0x366364u;
    // NOP
    ctx->pc = 0x366368u;
}
