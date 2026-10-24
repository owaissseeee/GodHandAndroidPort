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

// Function: func_002FD078
// Address: 0x2fd078 - 0x2fd530
void func_002FD078_0x2fd078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FD078_0x2fd078");
#endif

    switch (ctx->pc) {
        case 0x2fd094u: goto label_2fd094;
        case 0x2fd0e8u: goto label_2fd0e8;
        case 0x2fd124u: goto label_2fd124;
        case 0x2fd40cu: goto label_2fd40c;
        case 0x2fd4e0u: goto label_2fd4e0;
        case 0x2fd51cu: goto label_2fd51c;
        default: break;
    }

    ctx->pc = 0x2fd078u;

    // 0x2fd078: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fd07c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2fd07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2fd080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fd080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd084: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fd084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fd088: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2fd088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd08c: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2FD08Cu;
    SET_GPR_U32(ctx, 31, 0x2FD094u);
    ctx->pc = 0x2FD090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD08Cu;
    // 0x2fd090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2FD08Cu, 0x2FD094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD094u;
label_2fd094:
    // 0x2fd094: 0x92030140  lbu         $v1, 0x140($s0)
    ctx->pc = 0x2fd094u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2fd098: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fd09c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD09Cu;
    {
        const bool branch_taken_0x2fd09c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2FD0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD09Cu;
        // 0x2fd0a0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd09c) {
            ctx->pc = 0x2FD0B4u;
            goto label_2fd0b4;
        }
    }
    ctx->pc = 0x2FD0A4u;
    // 0x2fd0a4: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x2fd0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
    // 0x2fd0a8: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x2fd0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2fd0ac: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2FD0ACu;
    {
        const bool branch_taken_0x2fd0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd0ac) {
            ctx->pc = 0x2FD1B0u;
            goto label_2fd1b0;
        }
    }
    ctx->pc = 0x2FD0B4u;
label_2fd0b4:
    // 0x2fd0b4: 0xc6010234  lwc1        $f1, 0x234($s0)
    ctx->pc = 0x2fd0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd0b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fd0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd0bc: 0x86020238  lh          $v0, 0x238($s0)
    ctx->pc = 0x2fd0bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 568)));
    // 0x2fd0c0: 0x2603014c  addiu       $v1, $s0, 0x14C
    ctx->pc = 0x2fd0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 332));
    // 0x2fd0c4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fd0c4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2fd0c8: 0x44090000  mfc1        $t1, $f0
    ctx->pc = 0x2fd0c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 9, bits); }
    // 0x2fd0cc: 0xc6060144  lwc1        $f6, 0x144($s0)
    ctx->pc = 0x2fd0ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2fd0d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2fd0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fd0d4: 0x0  nop
    ctx->pc = 0x2fd0d4u;
    // NOP
    // 0x2fd0d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2fd0d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2fd0dc: 0x26070154  addiu       $a3, $s0, 0x154
    ctx->pc = 0x2fd0dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 340));
    // 0x2fd0e0: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x2fd0e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2fd0e4: 0x0  nop
    ctx->pc = 0x2fd0e4u;
    // NOP
label_2fd0e8:
    // 0x2fd0e8: 0xc4e40000  lwc1        $f4, 0x0($a3)
    ctx->pc = 0x2fd0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fd0ec: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x2fd0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2fd0f0: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x2fd0f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2fd0f4: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2fd0f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2fd0f8: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2fd0f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2fd0fc: 0x49102a  slt         $v0, $v0, $t1
    ctx->pc = 0x2fd0fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2fd100: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FD100u;
    {
        const bool branch_taken_0x2fd100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD100u;
        // 0x2fd104: 0x100302d  daddu       $a2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd100) {
            ctx->pc = 0x2FD154u;
            goto label_2fd154;
        }
    }
    ctx->pc = 0x2FD108u;
    // 0x2fd108: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2fd108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd10c: 0x24c80008  addiu       $t0, $a2, 0x8
    ctx->pc = 0x2fd10cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2fd110: 0x2c820003  sltiu       $v0, $a0, 0x3
    ctx->pc = 0x2fd110u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2fd114: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2FD114u;
    {
        const bool branch_taken_0x2fd114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD114u;
        // 0x2fd118: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd114) {
            ctx->pc = 0x2FD0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd0e8;
        }
    }
    ctx->pc = 0x2FD11Cu;
    // 0x2fd11c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd120: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fd120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2fd124:
    // 0x2fd124: 0xc6000148  lwc1        $f0, 0x148($s0)
    ctx->pc = 0x2fd124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd128: 0x46013082  mul.s       $f2, $f6, $f1
    ctx->pc = 0x2fd128u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x2fd12c: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fd130: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2fd130u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2fd134: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2fd134u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fd138: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2fd138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fd13c: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2fd13cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2fd140: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2fd140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2fd144: 0x104000f3  beqz        $v0, . + 4 + (0xF3 << 2)
    ctx->pc = 0x2FD144u;
    {
        const bool branch_taken_0x2fd144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD144u;
        // 0x2fd148: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd144) {
            ctx->pc = 0x2FD514u;
            goto label_2fd514;
        }
    }
    ctx->pc = 0x2FD14Cu;
    // 0x2fd14c: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x2FD14Cu;
    {
        const bool branch_taken_0x2fd14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD14Cu;
        // 0x2fd150: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd14c) {
            ctx->pc = 0x2FD514u;
            goto label_2fd514;
        }
    }
    ctx->pc = 0x2FD154u;
label_2fd154:
    // 0x2fd154: 0x0  nop
    ctx->pc = 0x2fd154u;
    // NOP
    // 0x2fd158: 0x0  nop
    ctx->pc = 0x2fd158u;
    // NOP
    // 0x2fd15c: 0x46020883  div.s       $f2, $f1, $f2
    ctx->pc = 0x2fd15cu;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2fd160: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2fd160u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2fd164: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fd164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fd168: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2fd168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2fd16c: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2fd16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2fd170: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2fd170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2fd174: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fd174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fd178: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x2fd178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x2fd17c: 0x46052101  sub.s       $f4, $f4, $f5
    ctx->pc = 0x2fd17cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[5]);
    // 0x2fd180: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2fd180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2fd184: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2fd184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd188: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x2fd188u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x2fd18c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2fd18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd190: 0x0  nop
    ctx->pc = 0x2fd190u;
    // NOP
    // 0x2fd194: 0x0  nop
    ctx->pc = 0x2fd194u;
    // NOP
    // 0x2fd198: 0x46041083  div.s       $f2, $f2, $f4
    ctx->pc = 0x2fd198u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[4]);
    // 0x2fd19c: 0x460218c1  sub.s       $f3, $f3, $f2
    ctx->pc = 0x2fd19cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
    // 0x2fd1a0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fd1a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fd1a4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fd1a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fd1a8: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x2FD1A8u;
    {
        const bool branch_taken_0x2fd1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1A8u;
        // 0x2fd1ac: 0x46000840  add.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1a8) {
            ctx->pc = 0x2FD124u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd124;
        }
    }
    ctx->pc = 0x2FD1B0u;
label_2fd1b0:
    // 0x2fd1b0: 0x1460005d  bnez        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x2FD1B0u;
    {
        const bool branch_taken_0x2fd1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1B0u;
        // 0x2fd1b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1b0) {
            ctx->pc = 0x2FD328u;
            goto label_2fd328;
        }
    }
    ctx->pc = 0x2FD1B8u;
    // 0x2fd1b8: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fd1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fd1bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fd1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd1c0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fd1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fd1c4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD1C4u;
    {
        const bool branch_taken_0x2fd1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1C4u;
        // 0x2fd1c8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1c4) {
            ctx->pc = 0x2FD1DCu;
            goto label_2fd1dc;
        }
    }
    ctx->pc = 0x2FD1CCu;
    // 0x2fd1cc: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x2fd1ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x2fd1d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FD1D0u;
    {
        const bool branch_taken_0x2fd1d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1D0u;
        // 0x2fd1d4: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1d0) {
            ctx->pc = 0x2FD1F0u;
            goto label_2fd1f0;
        }
    }
    ctx->pc = 0x2FD1D8u;
    // 0x2fd1d8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fd1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2fd1dc:
    // 0x2fd1dc: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fd1e0: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fd1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fd1e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fd1e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fd1e8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FD1E8u;
    {
        const bool branch_taken_0x2fd1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD1E8u;
        // 0x2fd1ec: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1e8) {
            ctx->pc = 0x2FD22Cu;
            goto label_2fd22c;
        }
    }
    ctx->pc = 0x2FD1F0u;
label_2fd1f0:
    // 0x2fd1f0: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2fd1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2fd1f4: 0xc4617a14  lwc1        $f1, 0x7A14($v1)
    ctx->pc = 0x2fd1f4u;
    { uint32_t bits = FAST_READ32(0x747A14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd1f8: 0xc4421dc0  lwc1        $f2, 0x1DC0($v0)
    ctx->pc = 0x2fd1f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 7616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd1fc: 0xc6040144  lwc1        $f4, 0x144($s0)
    ctx->pc = 0x2fd1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2fd200: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2fd200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2fd204: 0xc600014c  lwc1        $f0, 0x14C($s0)
    ctx->pc = 0x2fd204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd208: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x2fd208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd20c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2fd20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd210: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fd210u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fd214: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x2fd214u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2fd218: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2fd218u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fd21c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2fd21cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2fd220: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fd220u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fd224: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2FD224u;
    {
        const bool branch_taken_0x2fd224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD224u;
        // 0x2fd228: 0xe7a30000  swc1        $f3, 0x0($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd224) {
            ctx->pc = 0x2FD24Cu;
            goto label_2fd24c;
        }
    }
    ctx->pc = 0x2FD22Cu;
label_2fd22c:
    // 0x2fd22c: 0xc6020144  lwc1        $f2, 0x144($s0)
    ctx->pc = 0x2fd22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd230: 0xc603014c  lwc1        $f3, 0x14C($s0)
    ctx->pc = 0x2fd230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd234: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fd234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd238: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2fd238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd23c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2fd23cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2fd240: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2fd240u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2fd244: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2fd244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fd248: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2fd248u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2fd24c:
    // 0x2fd24c: 0xc6010148  lwc1        $f1, 0x148($s0)
    ctx->pc = 0x2fd24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd250: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2fd250u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2fd254: 0x0  nop
    ctx->pc = 0x2fd254u;
    // NOP
    // 0x2fd258: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2fd258u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd25c: 0x0  nop
    ctx->pc = 0x2fd25cu;
    // NOP
    // 0x2fd260: 0x45030014  bc1tl       . + 4 + (0x14 << 2)
    ctx->pc = 0x2FD260u;
    {
        const bool branch_taken_0x2fd260 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd260) {
            ctx->pc = 0x2FD264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD260u;
            // 0x2fd264: 0xc6010150  lwc1        $f1, 0x150($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD2B4u;
            goto label_2fd2b4;
        }
    }
    ctx->pc = 0x2FD268u;
    // 0x2fd268: 0xc6000144  lwc1        $f0, 0x144($s0)
    ctx->pc = 0x2fd268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd26c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2fd26cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd270: 0x0  nop
    ctx->pc = 0x2fd270u;
    // NOP
    // 0x2fd274: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD274u;
    {
        const bool branch_taken_0x2fd274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd274) {
            ctx->pc = 0x2FD28Cu;
            goto label_2fd28c;
        }
    }
    ctx->pc = 0x2FD27Cu;
    // 0x2fd27c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2fd27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd280: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fd280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd284: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FD284u;
    {
        const bool branch_taken_0x2fd284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd284) {
            ctx->pc = 0x2FD2A0u;
            goto label_2fd2a0;
        }
    }
    ctx->pc = 0x2FD28Cu;
label_2fd28c:
    // 0x2fd28c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fd28cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd290: 0x0  nop
    ctx->pc = 0x2fd290u;
    // NOP
    // 0x2fd294: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD294u;
    {
        const bool branch_taken_0x2fd294 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD294u;
        // 0x2fd298: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd294) {
            ctx->pc = 0x2FD2ACu;
            goto label_2fd2ac;
        }
    }
    ctx->pc = 0x2FD29Cu;
    // 0x2fd29c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fd29cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fd2a0:
    // 0x2fd2a0: 0x0  nop
    ctx->pc = 0x2fd2a0u;
    // NOP
    // 0x2fd2a4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FD2A4u;
    {
        const bool branch_taken_0x2fd2a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd2a4) {
            ctx->pc = 0x2FD2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD2A4u;
            // 0x2fd2a8: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD2ACu;
            goto label_2fd2ac;
        }
    }
    ctx->pc = 0x2FD2ACu;
label_2fd2ac:
    // 0x2fd2ac: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x2fd2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd2b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2fd2b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2fd2b4:
    // 0x2fd2b4: 0x0  nop
    ctx->pc = 0x2fd2b4u;
    // NOP
    // 0x2fd2b8: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x2fd2b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd2bc: 0x0  nop
    ctx->pc = 0x2fd2bcu;
    // NOP
    // 0x2fd2c0: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2FD2C0u;
    {
        const bool branch_taken_0x2fd2c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd2c0) {
            ctx->pc = 0x2FD2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD2C0u;
            // 0x2fd2c4: 0x8e030110  lw          $v1, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD310u;
            goto label_2fd310;
        }
    }
    ctx->pc = 0x2FD2C8u;
    // 0x2fd2c8: 0xc600014c  lwc1        $f0, 0x14C($s0)
    ctx->pc = 0x2fd2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd2cc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2fd2ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd2d0: 0x0  nop
    ctx->pc = 0x2fd2d0u;
    // NOP
    // 0x2fd2d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD2D4u;
    {
        const bool branch_taken_0x2fd2d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd2d4) {
            ctx->pc = 0x2FD2ECu;
            goto label_2fd2ec;
        }
    }
    ctx->pc = 0x2FD2DCu;
    // 0x2fd2dc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2fd2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd2e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fd2e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd2e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2FD2E4u;
    {
        const bool branch_taken_0x2fd2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd2e4) {
            ctx->pc = 0x2FD300u;
            goto label_2fd300;
        }
    }
    ctx->pc = 0x2FD2ECu;
label_2fd2ec:
    // 0x2fd2ec: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2fd2ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd2f0: 0x0  nop
    ctx->pc = 0x2fd2f0u;
    // NOP
    // 0x2fd2f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD2F4u;
    {
        const bool branch_taken_0x2fd2f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD2F4u;
        // 0x2fd2f8: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd2f4) {
            ctx->pc = 0x2FD30Cu;
            goto label_2fd30c;
        }
    }
    ctx->pc = 0x2FD2FCu;
    // 0x2fd2fc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2fd2fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2fd300:
    // 0x2fd300: 0x0  nop
    ctx->pc = 0x2fd300u;
    // NOP
    // 0x2fd304: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2FD304u;
    {
        const bool branch_taken_0x2fd304 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd304) {
            ctx->pc = 0x2FD308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD304u;
            // 0x2fd308: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD30Cu;
            goto label_2fd30c;
        }
    }
    ctx->pc = 0x2FD30Cu;
label_2fd30c:
    // 0x2fd30c: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fd30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2fd310:
    // 0x2fd310: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2fd310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2fd314: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2fd314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2fd318: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x2FD318u;
    {
        const bool branch_taken_0x2fd318 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD318u;
        // 0x2fd31c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd318) {
            ctx->pc = 0x2FD510u;
            goto label_2fd510;
        }
    }
    ctx->pc = 0x2FD320u;
    // 0x2fd320: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x2FD320u;
    {
        const bool branch_taken_0x2fd320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD320u;
        // 0x2fd324: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd320) {
            ctx->pc = 0x2FD510u;
            goto label_2fd510;
        }
    }
    ctx->pc = 0x2FD328u;
label_2fd328:
    // 0x2fd328: 0x5462007a  bnel        $v1, $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x2FD328u;
    {
        const bool branch_taken_0x2fd328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2fd328) {
            ctx->pc = 0x2FD32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD328u;
            // 0x2fd32c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD514u;
            goto label_2fd514;
        }
    }
    ctx->pc = 0x2FD330u;
    // 0x2fd330: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fd330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fd334: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2fd334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2fd338: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2fd338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2fd33c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FD33Cu;
    {
        const bool branch_taken_0x2fd33c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD33Cu;
        // 0x2fd340: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd33c) {
            ctx->pc = 0x2FD354u;
            goto label_2fd354;
        }
    }
    ctx->pc = 0x2FD344u;
    // 0x2fd344: 0x30820100  andi        $v0, $a0, 0x100
    ctx->pc = 0x2fd344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x2fd348: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2FD348u;
    {
        const bool branch_taken_0x2fd348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd348) {
            ctx->pc = 0x2FD34Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD348u;
            // 0x2fd34c: 0x8603022e  lh          $v1, 0x22E($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD36Cu;
            goto label_2fd36c;
        }
    }
    ctx->pc = 0x2FD350u;
    // 0x2fd350: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2fd350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_2fd354:
    // 0x2fd354: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x2fd354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x2fd358: 0x8c437a84  lw          $v1, 0x7A84($v0)
    ctx->pc = 0x2fd358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31364)));
    // 0x2fd35c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fd35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fd360: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FD360u;
    {
        const bool branch_taken_0x2fd360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd360) {
            ctx->pc = 0x2FD364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD360u;
            // 0x2fd364: 0xc600014c  lwc1        $f0, 0x14C($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD37Cu;
            goto label_2fd37c;
        }
    }
    ctx->pc = 0x2FD368u;
    // 0x2fd368: 0x8603022e  lh          $v1, 0x22E($s0)
    ctx->pc = 0x2fd368u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 558)));
label_2fd36c:
    // 0x2fd36c: 0x86020230  lh          $v0, 0x230($s0)
    ctx->pc = 0x2fd36cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x2fd370: 0x5062006b  beql        $v1, $v0, . + 4 + (0x6B << 2)
    ctx->pc = 0x2FD370u;
    {
        const bool branch_taken_0x2fd370 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2fd370) {
            ctx->pc = 0x2FD374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FD370u;
            // 0x2fd374: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FD520u;
            goto label_2fd520;
        }
    }
    ctx->pc = 0x2FD378u;
    // 0x2fd378: 0xc600014c  lwc1        $f0, 0x14C($s0)
    ctx->pc = 0x2fd378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2fd37c:
    // 0x2fd37c: 0xc6010144  lwc1        $f1, 0x144($s0)
    ctx->pc = 0x2fd37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd380: 0xc6020154  lwc1        $f2, 0x154($s0)
    ctx->pc = 0x2fd380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd384: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2fd384u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2fd388: 0xc6030148  lwc1        $f3, 0x148($s0)
    ctx->pc = 0x2fd388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2fd38c: 0x86020160  lh          $v0, 0x160($s0)
    ctx->pc = 0x2fd38cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x2fd390: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2fd390u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2fd394: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x2fd394u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2fd398: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2fd398u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2fd39c: 0xe600014c  swc1        $f0, 0x14C($s0)
    ctx->pc = 0x2fd39cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 332), bits); }
    // 0x2fd3a0: 0xe6010144  swc1        $f1, 0x144($s0)
    ctx->pc = 0x2fd3a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x2fd3a4: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FD3A4u;
    {
        const bool branch_taken_0x2fd3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3A4u;
        // 0x2fd3a8: 0x96040160  lhu         $a0, 0x160($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3a4) {
            ctx->pc = 0x2FD43Cu;
            goto label_2fd43c;
        }
    }
    ctx->pc = 0x2FD3ACu;
    // 0x2fd3ac: 0x96030164  lhu         $v1, 0x164($s0)
    ctx->pc = 0x2fd3acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2fd3b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fd3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fd3b4: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2fd3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fd3b8: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2fd3b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2fd3bc: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x2fd3bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2fd3c0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD3C0u;
    {
        const bool branch_taken_0x2fd3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3C0u;
        // 0x2fd3c4: 0xa6030164  sh          $v1, 0x164($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3c0) {
            ctx->pc = 0x2FD3D0u;
            goto label_2fd3d0;
        }
    }
    ctx->pc = 0x2FD3C8u;
    // 0x2fd3c8: 0x2462f800  addiu       $v0, $v1, -0x800
    ctx->pc = 0x2fd3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x2fd3cc: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x2fd3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
label_2fd3d0:
    // 0x2fd3d0: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x2fd3d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2fd3d4: 0x2842fc00  slti        $v0, $v0, -0x400
    ctx->pc = 0x2fd3d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966272) ? 1 : 0);
    // 0x2fd3d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD3D8u;
    {
        const bool branch_taken_0x2fd3d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD3D8u;
        // 0x2fd3dc: 0x96030164  lhu         $v1, 0x164($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3d8) {
            ctx->pc = 0x2FD3E8u;
            goto label_2fd3e8;
        }
    }
    ctx->pc = 0x2FD3E0u;
    // 0x2fd3e0: 0x24620800  addiu       $v0, $v1, 0x800
    ctx->pc = 0x2fd3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2fd3e4: 0xa6020164  sh          $v0, 0x164($s0)
    ctx->pc = 0x2fd3e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 356), (uint16_t)GPR_U32(ctx, 2));
label_2fd3e8:
    // 0x2fd3e8: 0x86020164  lh          $v0, 0x164($s0)
    ctx->pc = 0x2fd3e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 356)));
    // 0x2fd3ec: 0x3c013b49  lui         $at, 0x3B49
    ctx->pc = 0x2fd3ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15177 << 16));
    // 0x2fd3f0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2fd3f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2fd3f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fd3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd3f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd3f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd3fc: 0x0  nop
    ctx->pc = 0x2fd3fcu;
    // NOP
    // 0x2fd400: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2fd400u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2fd404: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2FD404u;
    SET_GPR_U32(ctx, 31, 0x2FD40Cu);
    ctx->pc = 0x2FD408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD404u;
    // 0x2fd408: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2FD404u, 0x2FD40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD40Cu;
label_2fd40c:
    // 0x2fd40c: 0x8602015c  lh          $v0, 0x15C($s0)
    ctx->pc = 0x2fd40cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 348)));
    // 0x2fd410: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2fd410u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2fd414: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2fd414u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2fd418: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fd418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fd41c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fd41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fd420: 0x0  nop
    ctx->pc = 0x2fd420u;
    // NOP
    // 0x2fd424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fd424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fd428: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2fd428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd42c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fd42cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fd430: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd430u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd434: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2fd434u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2fd438: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x2fd438u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2fd43c:
    // 0x2fd43c: 0x8e030110  lw          $v1, 0x110($s0)
    ctx->pc = 0x2fd43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
    // 0x2fd440: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2fd440u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2fd444: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2fd444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2fd448: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD448u;
    {
        const bool branch_taken_0x2fd448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD448u;
        // 0x2fd44c: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd448) {
            ctx->pc = 0x2FD458u;
            goto label_2fd458;
        }
    }
    ctx->pc = 0x2FD450u;
    // 0x2fd450: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x2FD450u;
    {
        const bool branch_taken_0x2fd450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD450u;
        // 0x2fd454: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd450) {
            ctx->pc = 0x2FD510u;
            goto label_2fd510;
        }
    }
    ctx->pc = 0x2FD458u;
label_2fd458:
    // 0x2fd458: 0xc6010150  lwc1        $f1, 0x150($s0)
    ctx->pc = 0x2fd458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2fd45c: 0xc6000148  lwc1        $f0, 0x148($s0)
    ctx->pc = 0x2fd45cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd460: 0xc6020158  lwc1        $f2, 0x158($s0)
    ctx->pc = 0x2fd460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd464: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2fd464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2fd468: 0x86020162  lh          $v0, 0x162($s0)
    ctx->pc = 0x2fd468u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x2fd46c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2fd46cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2fd470: 0x96040162  lhu         $a0, 0x162($s0)
    ctx->pc = 0x2fd470u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 354)));
    // 0x2fd474: 0xe6000148  swc1        $f0, 0x148($s0)
    ctx->pc = 0x2fd474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x2fd478: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2FD478u;
    {
        const bool branch_taken_0x2fd478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD478u;
        // 0x2fd47c: 0xe6010150  swc1        $f1, 0x150($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 336), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd478) {
            ctx->pc = 0x2FD510u;
            goto label_2fd510;
        }
    }
    ctx->pc = 0x2FD480u;
    // 0x2fd480: 0x96030166  lhu         $v1, 0x166($s0)
    ctx->pc = 0x2fd480u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x2fd484: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2fd484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2fd488: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2fd488u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2fd48c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2fd48cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x2fd490: 0x28420401  slti        $v0, $v0, 0x401
    ctx->pc = 0x2fd490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1025) ? 1 : 0);
    // 0x2fd494: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD494u;
    {
        const bool branch_taken_0x2fd494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD494u;
        // 0x2fd498: 0xa6030166  sh          $v1, 0x166($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd494) {
            ctx->pc = 0x2FD4A4u;
            goto label_2fd4a4;
        }
    }
    ctx->pc = 0x2FD49Cu;
    // 0x2fd49c: 0x2462f800  addiu       $v0, $v1, -0x800
    ctx->pc = 0x2fd49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x2fd4a0: 0xa6020166  sh          $v0, 0x166($s0)
    ctx->pc = 0x2fd4a0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 2));
label_2fd4a4:
    // 0x2fd4a4: 0x86020166  lh          $v0, 0x166($s0)
    ctx->pc = 0x2fd4a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x2fd4a8: 0x2842fc00  slti        $v0, $v0, -0x400
    ctx->pc = 0x2fd4a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294966272) ? 1 : 0);
    // 0x2fd4ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FD4ACu;
    {
        const bool branch_taken_0x2fd4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4ACu;
        // 0x2fd4b0: 0x96030166  lhu         $v1, 0x166($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd4ac) {
            ctx->pc = 0x2FD4BCu;
            goto label_2fd4bc;
        }
    }
    ctx->pc = 0x2FD4B4u;
    // 0x2fd4b4: 0x24620800  addiu       $v0, $v1, 0x800
    ctx->pc = 0x2fd4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x2fd4b8: 0xa6020166  sh          $v0, 0x166($s0)
    ctx->pc = 0x2fd4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 358), (uint16_t)GPR_U32(ctx, 2));
label_2fd4bc:
    // 0x2fd4bc: 0x86020166  lh          $v0, 0x166($s0)
    ctx->pc = 0x2fd4bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 358)));
    // 0x2fd4c0: 0x3c013b49  lui         $at, 0x3B49
    ctx->pc = 0x2fd4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15177 << 16));
    // 0x2fd4c4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2fd4c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2fd4c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2fd4c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2fd4cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2fd4d0: 0x0  nop
    ctx->pc = 0x2fd4d0u;
    // NOP
    // 0x2fd4d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2fd4d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2fd4d8: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2FD4D8u;
    SET_GPR_U32(ctx, 31, 0x2FD4E0u);
    ctx->pc = 0x2FD4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD4D8u;
    // 0x2fd4dc: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2FD4D8u, 0x2FD4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD4E0u;
label_2fd4e0:
    // 0x2fd4e0: 0x8602015e  lh          $v0, 0x15E($s0)
    ctx->pc = 0x2fd4e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 350)));
    // 0x2fd4e4: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x2fd4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x2fd4e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2fd4e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2fd4ec: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2fd4ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2fd4f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2fd4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fd4f4: 0x0  nop
    ctx->pc = 0x2fd4f4u;
    // NOP
    // 0x2fd4f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2fd4f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2fd4fc: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2fd4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2fd500: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2fd500u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2fd504: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2fd504u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2fd508: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2fd508u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2fd50c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x2fd50cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2fd510:
    // 0x2fd510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fd514:
    // 0x2fd514: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2FD514u;
    SET_GPR_U32(ctx, 31, 0x2FD51Cu);
    ctx->pc = 0x2FD518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD514u;
    // 0x2fd518: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2FD514u, 0x2FD51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD51Cu;
label_2fd51c:
    // 0x2fd51c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2fd51cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fd520:
    // 0x2fd520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fd520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd524: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD524u;
        // 0x2fd528: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD524u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD52Cu;
    // 0x2fd52c: 0x0  nop
    ctx->pc = 0x2fd52cu;
    // NOP
    ctx->pc = 0x2fd530u;
}
