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

// Function: func_00365EC0
// Address: 0x365ec0 - 0x366110
void func_00365EC0_0x365ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00365EC0_0x365ec0");
#endif

    switch (ctx->pc) {
        case 0x365eecu: goto label_365eec;
        case 0x365f40u: goto label_365f40;
        case 0x366038u: goto label_366038;
        case 0x3660a0u: goto label_3660a0;
        default: break;
    }

    ctx->pc = 0x365ec0u;

    // 0x365ec0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x365ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x365ec4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x365ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x365ec8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x365ec8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ecc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x365eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x365ed0: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x365ed0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365ed4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x365ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x365ed8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x365ed8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365edc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x365edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x365ee0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x365ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x365ee4: 0xc0d8354  jal         func_360D50
    ctx->pc = 0x365EE4u;
    SET_GPR_U32(ctx, 31, 0x365EECu);
    ctx->pc = 0x365EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x365EE4u;
    // 0x365ee8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x360D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x360D50u, 0x365EE4u, 0x365EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365EECu;
label_365eec:
    // 0x365eec: 0x3c014294  lui         $at, 0x4294
    ctx->pc = 0x365eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17044 << 16));
    // 0x365ef0: 0x3421fdf3  ori         $at, $at, 0xFDF3
    ctx->pc = 0x365ef0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65011);
    // 0x365ef4: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x365ef4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x365ef8: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x365ef8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365efc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x365efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x365f00: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x365f00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x365f04: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x365f04u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365f08: 0x3c014301  lui         $at, 0x4301
    ctx->pc = 0x365f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17153 << 16));
    // 0x365f0c: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x365f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
    // 0x365f10: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x365f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x365f14: 0x262e0800  addiu       $t6, $s1, 0x800
    ctx->pc = 0x365f14u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 2048));
    // 0x365f18: 0x3c01c1c8  lui         $at, 0xC1C8
    ctx->pc = 0x365f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49608 << 16));
    // 0x365f1c: 0x3421b439  ori         $at, $at, 0xB439
    ctx->pc = 0x365f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46137);
    // 0x365f20: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x365f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x365f24: 0x262d1000  addiu       $t5, $s1, 0x1000
    ctx->pc = 0x365f24u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 4096));
    // 0x365f28: 0x3c01c250  lui         $at, 0xC250
    ctx->pc = 0x365f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49744 << 16));
    // 0x365f2c: 0x342120c4  ori         $at, $at, 0x20C4
    ctx->pc = 0x365f2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8388);
    // 0x365f30: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x365f30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x365f34: 0x3c0142cc  lui         $at, 0x42CC
    ctx->pc = 0x365f34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17100 << 16));
    // 0x365f38: 0x342149ba  ori         $at, $at, 0x49BA
    ctx->pc = 0x365f38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)18874);
    // 0x365f3c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x365f3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_365f40:
    // 0x365f40: 0x2562fff0  addiu       $v0, $t3, -0x10
    ctx->pc = 0x365f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967280));
    // 0x365f44: 0x2563ff80  addiu       $v1, $t3, -0x80
    ctx->pc = 0x365f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967168));
    // 0x365f48: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x365f48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x365f4c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x365f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x365f50: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x365f50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x365f54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x365f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x365f58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x365f58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x365f5c: 0x8e1821  addu        $v1, $a0, $t6
    ctx->pc = 0x365f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 14)));
    // 0x365f60: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x365f60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x365f64: 0x8d2821  addu        $a1, $a0, $t5
    ctx->pc = 0x365f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
    // 0x365f68: 0x296a0100  slti        $t2, $t3, 0x100
    ctx->pc = 0x365f68u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x365f6c: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x365f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x365f70: 0x460a18c2  mul.s       $f3, $f3, $f10
    ctx->pc = 0x365f70u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[10]);
    // 0x365f74: 0x46060102  mul.s       $f4, $f0, $f6
    ctx->pc = 0x365f74u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x365f78: 0x46090042  mul.s       $f1, $f0, $f9
    ctx->pc = 0x365f78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
    // 0x365f7c: 0x46080082  mul.s       $f2, $f0, $f8
    ctx->pc = 0x365f7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x365f80: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x365f80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x365f84: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x365f84u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x365f88: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x365f88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x365f8c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x365f8cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x365f90: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x365f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x365f94: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x365f94u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x365f98: 0x46001ae4  .word       0x46001AE4                   # cvt.w.s     $f11, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x365f98u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[11], &tmp, sizeof(tmp)); }
    // 0x365f9c: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x365f9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x365fa0: 0x460008e4  .word       0x460008E4                   # cvt.w.s     $f3, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x365fa0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x365fa4: 0x44061800  mfc1        $a2, $f3
    ctx->pc = 0x365fa4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x365fa8: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x365fa8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x365fac: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x365facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x365fb0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x365fb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x365fb4: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x365fb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x365fb8: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x365fb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x365fbc: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x365fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x365fc0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x365fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x365fc4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x365fc4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x365fc8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x365fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x365fcc: 0xa4820004  sh          $v0, 0x4($a0)
    ctx->pc = 0x365fccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x365fd0: 0xa4820002  sh          $v0, 0x2($a0)
    ctx->pc = 0x365fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x365fd4: 0xa4660004  sh          $a2, 0x4($v1)
    ctx->pc = 0x365fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x365fd8: 0xa4670002  sh          $a3, 0x2($v1)
    ctx->pc = 0x365fd8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 7));
    // 0x365fdc: 0xa4600006  sh          $zero, 0x6($v1)
    ctx->pc = 0x365fdcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x365fe0: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x365fe0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x365fe4: 0xa4a80002  sh          $t0, 0x2($a1)
    ctx->pc = 0x365fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 8));
    // 0x365fe8: 0xa4a90000  sh          $t1, 0x0($a1)
    ctx->pc = 0x365fe8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 9));
    // 0x365fec: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x365fecu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
    // 0x365ff0: 0x1540ffd3  bnez        $t2, . + 4 + (-0x2D << 2)
    ctx->pc = 0x365FF0u;
    {
        const bool branch_taken_0x365ff0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x365FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365FF0u;
        // 0x365ff4: 0xa4a00004  sh          $zero, 0x4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365ff0) {
            ctx->pc = 0x365F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365f40;
        }
    }
    ctx->pc = 0x365FF8u;
    // 0x365ff8: 0x2501823  subu        $v1, $s2, $s0
    ctx->pc = 0x365ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x365ffc: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x365ffcu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366000: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x366000u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366004: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x366004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x366008: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x366008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x36600c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36600cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x366010: 0x0  nop
    ctx->pc = 0x366010u;
    // NOP
    // 0x366014: 0x0  nop
    ctx->pc = 0x366014u;
    // NOP
    // 0x366018: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x366018u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x36601c: 0x5662001e  bnel        $s3, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x36601Cu;
    {
        const bool branch_taken_0x36601c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x36601c) {
            ctx->pc = 0x366020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36601Cu;
            // 0x366020: 0xc1980  sll         $v1, $t4, 6 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x366098u;
            goto label_366098;
        }
    }
    ctx->pc = 0x366024u;
    // 0x366024: 0xc2180  sll         $a0, $t4, 6
    ctx->pc = 0x366024u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 6));
    // 0x366028: 0x26270006  addiu       $a3, $s1, 0x6
    ctx->pc = 0x366028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x36602c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x36602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x366030: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x366030u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x366034: 0x0  nop
    ctx->pc = 0x366034u;
    // NOP
label_366038:
    // 0x366038: 0x170102a  slt         $v0, $t3, $s0
    ctx->pc = 0x366038u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x36603c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x36603Cu;
    {
        const bool branch_taken_0x36603c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x366040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36603Cu;
        // 0x366040: 0x24b102a  slt         $v0, $s2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x36603c) {
            ctx->pc = 0x366050u;
            goto label_366050;
        }
    }
    ctx->pc = 0x366044u;
    // 0x366044: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x366044u;
    {
        const bool branch_taken_0x366044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366044u;
        // 0x366048: 0xa4e40000  sh          $a0, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366044) {
            ctx->pc = 0x36607Cu;
            goto label_36607c;
        }
    }
    ctx->pc = 0x36604Cu;
    // 0x36604c: 0x0  nop
    ctx->pc = 0x36604cu;
    // NOP
label_366050:
    // 0x366050: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x366050u;
    {
        const bool branch_taken_0x366050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366050) {
            ctx->pc = 0x366060u;
            goto label_366060;
        }
    }
    ctx->pc = 0x366058u;
    // 0x366058: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x366058u;
    {
        const bool branch_taken_0x366058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x36605Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366058u;
        // 0x36605c: 0xa4e00000  sh          $zero, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366058) {
            ctx->pc = 0x36607Cu;
            goto label_36607c;
        }
    }
    ctx->pc = 0x366060u;
label_366060:
    // 0x366060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x366060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x366064: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x366064u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x366068: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x366068u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x36606c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x36606cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x366070: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x366070u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x366074: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x366074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x366078: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x366078u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_36607c:
    // 0x36607c: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x36607cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x366080: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x366080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x366084: 0x29620100  slti        $v0, $t3, 0x100
    ctx->pc = 0x366084u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x366088: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x366088u;
    {
        const bool branch_taken_0x366088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x36608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366088u;
        // 0x36608c: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366088) {
            ctx->pc = 0x366038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_366038;
        }
    }
    ctx->pc = 0x366090u;
    // 0x366090: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x366090u;
    {
        const bool branch_taken_0x366090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x366094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366090u;
        // 0x366094: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x366090) {
            ctx->pc = 0x3660F8u;
            goto label_3660f8;
        }
    }
    ctx->pc = 0x366098u;
label_366098:
    // 0x366098: 0x26270006  addiu       $a3, $s1, 0x6
    ctx->pc = 0x366098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    // 0x36609c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x36609cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3660a0:
    // 0x3660a0: 0x170102a  slt         $v0, $t3, $s0
    ctx->pc = 0x3660a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x3660a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3660A4u;
    {
        const bool branch_taken_0x3660a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3660A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660A4u;
        // 0x3660a8: 0x24b102a  slt         $v0, $s2, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660a4) {
            ctx->pc = 0x3660B8u;
            goto label_3660b8;
        }
    }
    ctx->pc = 0x3660ACu;
    // 0x3660ac: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x3660ACu;
    {
        const bool branch_taken_0x3660ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3660B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660ACu;
        // 0x3660b0: 0xa4e00000  sh          $zero, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660ac) {
            ctx->pc = 0x3660E4u;
            goto label_3660e4;
        }
    }
    ctx->pc = 0x3660B4u;
    // 0x3660b4: 0x0  nop
    ctx->pc = 0x3660b4u;
    // NOP
label_3660b8:
    // 0x3660b8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3660B8u;
    {
        const bool branch_taken_0x3660b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3660BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660B8u;
        // 0x3660bc: 0x1701023  subu        $v0, $t3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660b8) {
            ctx->pc = 0x3660C8u;
            goto label_3660c8;
        }
    }
    ctx->pc = 0x3660C0u;
    // 0x3660c0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3660C0u;
    {
        const bool branch_taken_0x3660c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3660C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660C0u;
        // 0x3660c4: 0xa4e30000  sh          $v1, 0x0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660c0) {
            ctx->pc = 0x3660E4u;
            goto label_3660e4;
        }
    }
    ctx->pc = 0x3660C8u;
label_3660c8:
    // 0x3660c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3660c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3660cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3660ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3660d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3660d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3660d4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3660d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3660d8: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3660d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3660dc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x3660dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x3660e0: 0xa4e20000  sh          $v0, 0x0($a3)
    ctx->pc = 0x3660e0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 0), (uint16_t)GPR_U32(ctx, 2));
label_3660e4:
    // 0x3660e4: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x3660e4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x3660e8: 0x29620100  slti        $v0, $t3, 0x100
    ctx->pc = 0x3660e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x3660ec: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3660ECu;
    {
        const bool branch_taken_0x3660ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3660F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3660ECu;
        // 0x3660f0: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3660ec) {
            ctx->pc = 0x3660A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3660a0;
        }
    }
    ctx->pc = 0x3660F4u;
    // 0x3660f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3660f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3660f8:
    // 0x3660f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3660f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3660fc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3660fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x366100: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x366100u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x366104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x366104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x366108: 0x3e00008  jr          $ra
    ctx->pc = 0x366108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x366108u;
        // 0x36610c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x366108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x366110u;
}
