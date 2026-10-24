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

// Function: func_00153B00
// Address: 0x153b00 - 0x154240
void func_00153B00_0x153b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00153B00_0x153b00");
#endif

    switch (ctx->pc) {
        case 0x153b60u: goto label_153b60;
        case 0x153c30u: goto label_153c30;
        case 0x153c7cu: goto label_153c7c;
        case 0x153cacu: goto label_153cac;
        case 0x153cd0u: goto label_153cd0;
        case 0x153d20u: goto label_153d20;
        case 0x153d70u: goto label_153d70;
        case 0x153da0u: goto label_153da0;
        case 0x1540e0u: goto label_1540e0;
        default: break;
    }

    ctx->pc = 0x153b00u;

    // 0x153b00: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x153b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x153b04: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x153b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x153b08: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x153b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x153b0c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x153b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x153b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x153b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x153b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x153b18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x153b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153b1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x153b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x153b20: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x153b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x153b24: 0x245474a0  addiu       $s4, $v0, 0x74A0
    ctx->pc = 0x153b24u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x153b28: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x153b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x153b2c: 0x8e430380  lw          $v1, 0x380($s2)
    ctx->pc = 0x153b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x153b30: 0x8e820210  lw          $v0, 0x210($s4)
    ctx->pc = 0x153b30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7476B0u));
    // 0x153b34: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x153b34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x153b38: 0x146001b9  bnez        $v1, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x153B38u;
    {
        const bool branch_taken_0x153b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153B38u;
        // 0x153b3c: 0x30530001  andi        $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153b38) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x153B40u;
    // 0x153b40: 0x240200d0  addiu       $v0, $zero, 0xD0
    ctx->pc = 0x153b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
    // 0x153b44: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x153b44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x153b48: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x153b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x153b4c: 0x24a56940  addiu       $a1, $a1, 0x6940
    ctx->pc = 0x153b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26944));
    // 0x153b50: 0x24420160  addiu       $v0, $v0, 0x160
    ctx->pc = 0x153b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x153b54: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x153b54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x153b58: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x153B58u;
    SET_GPR_U32(ctx, 31, 0x153B60u);
    ctx->pc = 0x153B5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153B58u;
    // 0x153b5c: 0x26040090  addiu       $a0, $s0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x153B58u, 0x153B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153B60u;
label_153b60:
    // 0x153b60: 0x922202b6  lbu         $v0, 0x2B6($s1)
    ctx->pc = 0x153b60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 694)));
    // 0x153b64: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x153b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x153b68: 0x922302b7  lbu         $v1, 0x2B7($s1)
    ctx->pc = 0x153b68u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 695)));
    // 0x153b6c: 0x44822800  mtc1        $v0, $f5
    ctx->pc = 0x153b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x153b70: 0x0  nop
    ctx->pc = 0x153b70u;
    // NOP
    // 0x153b74: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x153b74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x153b78: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x153b78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x153b7c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x153b7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x153b80: 0x44834000  mtc1        $v1, $f8
    ctx->pc = 0x153b80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x153b84: 0x0  nop
    ctx->pc = 0x153b84u;
    // NOP
    // 0x153b88: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x153b88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
    // 0x153b8c: 0xc64103ac  lwc1        $f1, 0x3AC($s2)
    ctx->pc = 0x153b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153b90: 0x922202bc  lbu         $v0, 0x2BC($s1)
    ctx->pc = 0x153b90u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 700)));
    // 0x153b94: 0x46072943  div.s       $f5, $f5, $f7
    ctx->pc = 0x153b94u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[7]);
    // 0x153b98: 0xc620024c  lwc1        $f0, 0x24C($s1)
    ctx->pc = 0x153b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153b9c: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x153b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153ba0: 0x0  nop
    ctx->pc = 0x153ba0u;
    // NOP
    // 0x153ba4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x153ba4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x153ba8: 0xc64603a0  lwc1        $f6, 0x3A0($s2)
    ctx->pc = 0x153ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x153bac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x153bacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x153bb0: 0xc6220240  lwc1        $f2, 0x240($s1)
    ctx->pc = 0x153bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x153bb4: 0x0  nop
    ctx->pc = 0x153bb4u;
    // NOP
    // 0x153bb8: 0x0  nop
    ctx->pc = 0x153bb8u;
    // NOP
    // 0x153bbc: 0x46074203  div.s       $f8, $f8, $f7
    ctx->pc = 0x153bbcu;
    ctx->f[8] = ps2FpuDivide(ctx->fcr31, ctx->f[8], ctx->f[7]);
    // 0x153bc0: 0xc6230244  lwc1        $f3, 0x244($s1)
    ctx->pc = 0x153bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153bc4: 0x0  nop
    ctx->pc = 0x153bc4u;
    // NOP
    // 0x153bc8: 0x0  nop
    ctx->pc = 0x153bc8u;
    // NOP
    // 0x153bcc: 0x46072103  div.s       $f4, $f4, $f7
    ctx->pc = 0x153bccu;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[7]);
    // 0x153bd0: 0xc64903a4  lwc1        $f9, 0x3A4($s2)
    ctx->pc = 0x153bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x153bd4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x153bd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x153bd8: 0xc6210248  lwc1        $f1, 0x248($s1)
    ctx->pc = 0x153bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153bdc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x153bdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x153be0: 0xc64603a8  lwc1        $f6, 0x3A8($s2)
    ctx->pc = 0x153be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x153be4: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x153be4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x153be8: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x153be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x153bec: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x153becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x153bf0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x153bf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x153bf4: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x153bf4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x153bf8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x153bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x153bfc: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x153bfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x153c00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x153c00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x153c04: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x153c04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x153c08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153C08u;
    {
        const bool branch_taken_0x153c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C08u;
        // 0x153c0c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c08) {
            ctx->pc = 0x153C20u;
            goto label_153c20;
        }
    }
    ctx->pc = 0x153C10u;
    // 0x153c10: 0x8e820598  lw          $v0, 0x598($s4)
    ctx->pc = 0x153c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1432)));
    // 0x153c14: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x153c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x153c18: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x153C18u;
    {
        const bool branch_taken_0x153c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153c18) {
            ctx->pc = 0x153C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153C18u;
            // 0x153c1c: 0x8e220250  lw          $v0, 0x250($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153C50u;
            goto label_153c50;
        }
    }
    ctx->pc = 0x153C20u;
label_153c20:
    // 0x153c20: 0x26030080  addiu       $v1, $s0, 0x80
    ctx->pc = 0x153c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x153c24: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153c28: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x153c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c2c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x153c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_153c30:
    // 0x153c30: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x153c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153c34: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x153c38: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x153c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x153c3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x153c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x153c40: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x153C40u;
    {
        const bool branch_taken_0x153c40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x153C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C40u;
        // 0x153c44: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c40) {
            ctx->pc = 0x153C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153c30;
        }
    }
    ctx->pc = 0x153C48u;
    // 0x153c48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x153C48u;
    {
        const bool branch_taken_0x153c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C48u;
        // 0x153c4c: 0x8e220250  lw          $v0, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c48) {
            ctx->pc = 0x153CB0u;
            goto label_153cb0;
        }
    }
    ctx->pc = 0x153C50u;
label_153c50:
    // 0x153c50: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x153c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x153c54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x153C54u;
    {
        const bool branch_taken_0x153c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C54u;
        // 0x153c58: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c54) {
            ctx->pc = 0x153C84u;
            goto label_153c84;
        }
    }
    ctx->pc = 0x153C5Cu;
    // 0x153c5c: 0x8e2800f0  lw          $t0, 0xF0($s1)
    ctx->pc = 0x153c5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x153c60: 0x922a02cc  lbu         $t2, 0x2CC($s1)
    ctx->pc = 0x153c60u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 716)));
    // 0x153c64: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x153c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x153c68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x153c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153c6c: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x153c6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x153c70: 0x26070050  addiu       $a3, $s0, 0x50
    ctx->pc = 0x153c70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x153c74: 0xc0b5f94  jal         func_2D7E50
    ctx->pc = 0x153C74u;
    SET_GPR_U32(ctx, 31, 0x153C7Cu);
    ctx->pc = 0x153C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153C74u;
    // 0x153c78: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7E50u, 0x153C74u, 0x153C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153C7Cu;
label_153c7c:
    // 0x153c7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x153C7Cu;
    {
        const bool branch_taken_0x153c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153C7Cu;
        // 0x153c80: 0x8e220250  lw          $v0, 0x250($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153c7c) {
            ctx->pc = 0x153CB0u;
            goto label_153cb0;
        }
    }
    ctx->pc = 0x153C84u;
label_153c84:
    // 0x153c84: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x153c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x153c88: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x153c88u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x153c8c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x153c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x153c90: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x153c90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x153c94: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x153c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x153c98: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x153c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x153c9c: 0x26060050  addiu       $a2, $s0, 0x50
    ctx->pc = 0x153c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x153ca0: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x153ca0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x153ca4: 0xc0b6002  jal         func_2D8008
    ctx->pc = 0x153CA4u;
    SET_GPR_U32(ctx, 31, 0x153CACu);
    ctx->pc = 0x153CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153CA4u;
    // 0x153ca8: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8008u, 0x153CA4u, 0x153CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153CACu;
label_153cac:
    // 0x153cac: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x153cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
label_153cb0:
    // 0x153cb0: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x153cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x153cb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x153cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x153cb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x153CB8u;
    {
        const bool branch_taken_0x153cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CB8u;
        // 0x153cbc: 0x26030080  addiu       $v1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cb8) {
            ctx->pc = 0x153CE8u;
            goto label_153ce8;
        }
    }
    ctx->pc = 0x153CC0u;
    // 0x153cc0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x153cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153cc4: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x153cc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153cc8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x153cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153ccc: 0x0  nop
    ctx->pc = 0x153cccu;
    // NOP
label_153cd0:
    // 0x153cd0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x153cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153cd4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x153cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x153cd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x153cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x153cdc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x153cdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x153ce0: 0x1485fffb  bne         $a0, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x153CE0u;
    {
        const bool branch_taken_0x153ce0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x153CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CE0u;
        // 0x153ce4: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ce0) {
            ctx->pc = 0x153CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153cd0;
        }
    }
    ctx->pc = 0x153CE8u;
label_153ce8:
    // 0x153ce8: 0x8e420414  lw          $v0, 0x414($s2)
    ctx->pc = 0x153ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1044)));
    // 0x153cec: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x153cecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x153cf0: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x153cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x153cf4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x153cf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x153cf8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x153CF8u;
    {
        const bool branch_taken_0x153cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x153CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153CF8u;
        // 0x153cfc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153cf8) {
            ctx->pc = 0x153D20u;
            goto label_153d20;
        }
    }
    ctx->pc = 0x153D00u;
    // 0x153d00: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x153d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x153d04: 0x8c46aff0  lw          $a2, -0x5010($v0)
    ctx->pc = 0x153d04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294946800)));
    // 0x153d08: 0x26250080  addiu       $a1, $s1, 0x80
    ctx->pc = 0x153d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x153d0c: 0xdcc20210  ld          $v0, 0x210($a2)
    ctx->pc = 0x153d0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 528)));
    // 0x153d10: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x153d10u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x153d14: 0x8cc30218  lw          $v1, 0x218($a2)
    ctx->pc = 0x153d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 536)));
    // 0x153d18: 0xc0c2952  jal         func_30A548
    ctx->pc = 0x153D18u;
    SET_GPR_U32(ctx, 31, 0x153D20u);
    ctx->pc = 0x153D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D18u;
    // 0x153d1c: 0xae030058  sw          $v1, 0x58($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A548u, 0x153D18u, 0x153D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153D20u;
label_153d20:
    // 0x153d20: 0x922302be  lbu         $v1, 0x2BE($s1)
    ctx->pc = 0x153d20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 702)));
    // 0x153d24: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x153d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x153d28: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x153D28u;
    {
        const bool branch_taken_0x153d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x153D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D28u;
        // 0x153d2c: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d28) {
            ctx->pc = 0x153D88u;
            goto label_153d88;
        }
    }
    ctx->pc = 0x153D30u;
    // 0x153d30: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x153D30u;
    {
        const bool branch_taken_0x153d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x153D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D30u;
        // 0x153d34: 0x27a30010  addiu       $v1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d30) {
            ctx->pc = 0x153D88u;
            goto label_153d88;
        }
    }
    ctx->pc = 0x153D38u;
    // 0x153d38: 0xc640038c  lwc1        $f0, 0x38C($s2)
    ctx->pc = 0x153d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153d3c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x153d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x153d40: 0xc6410390  lwc1        $f1, 0x390($s2)
    ctx->pc = 0x153d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153d44: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x153d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x153d48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x153d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x153d4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x153d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x153d50: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x153d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x153d54: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x153d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x153d58: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x153d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x153d5c: 0xe7a2002c  swc1        $f2, 0x2C($sp)
    ctx->pc = 0x153d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x153d60: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x153d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x153d64: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x153d64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x153d68: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x153d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x153d6c: 0x0  nop
    ctx->pc = 0x153d6cu;
    // NOP
label_153d70:
    // 0x153d70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x153d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x153d74: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x153d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x153d78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x153d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x153d7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x153d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x153d80: 0x14a6fffb  bne         $a1, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x153D80u;
    {
        const bool branch_taken_0x153d80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x153D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153D80u;
        // 0x153d84: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153d80) {
            ctx->pc = 0x153D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_153d70;
        }
    }
    ctx->pc = 0x153D88u;
label_153d88:
    // 0x153d88: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x153d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x153d8c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x153d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x153d90: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x153D90u;
    {
        const bool branch_taken_0x153d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x153d90) {
            ctx->pc = 0x153D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x153D90u;
            // 0x153d94: 0x922302bd  lbu         $v1, 0x2BD($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 701)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x153DA4u;
            goto label_153da4;
        }
    }
    ctx->pc = 0x153D98u;
    // 0x153d98: 0xc0c2968  jal         func_30A5A0
    ctx->pc = 0x153D98u;
    SET_GPR_U32(ctx, 31, 0x153DA0u);
    ctx->pc = 0x153D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153D98u;
    // 0x153d9c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A5A0u, 0x153D98u, 0x153DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153DA0u;
label_153da0:
    // 0x153da0: 0x922302bd  lbu         $v1, 0x2BD($s1)
    ctx->pc = 0x153da0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 701)));
label_153da4:
    // 0x153da4: 0x146000d0  bnez        $v1, . + 4 + (0xD0 << 2)
    ctx->pc = 0x153DA4u;
    {
        const bool branch_taken_0x153da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DA4u;
        // 0x153da8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153da4) {
            ctx->pc = 0x1540E8u;
            goto label_1540e8;
        }
    }
    ctx->pc = 0x153DACu;
    // 0x153dac: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x153dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x153db0: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x153db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x153db4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x153db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x153db8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x153DB8u;
    {
        const bool branch_taken_0x153db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x153DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DB8u;
        // 0x153dbc: 0x3c030074  lui         $v1, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153db8) {
            ctx->pc = 0x153DD0u;
            goto label_153dd0;
        }
    }
    ctx->pc = 0x153DC0u;
    // 0x153dc0: 0x8c627a2c  lw          $v0, 0x7A2C($v1)
    ctx->pc = 0x153dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31276)));
    // 0x153dc4: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x153dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x153dc8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x153DC8u;
    {
        const bool branch_taken_0x153dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DC8u;
        // 0x153dcc: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dc8) {
            ctx->pc = 0x153DF4u;
            goto label_153df4;
        }
    }
    ctx->pc = 0x153DD0u;
label_153dd0:
    // 0x153dd0: 0x3c01c43f  lui         $at, 0xC43F
    ctx->pc = 0x153dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50239 << 16));
    // 0x153dd4: 0x34213fff  ori         $at, $at, 0x3FFF
    ctx->pc = 0x153dd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16383);
    // 0x153dd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x153dd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x153ddc: 0x3c014f36  lui         $at, 0x4F36
    ctx->pc = 0x153ddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20278 << 16));
    // 0x153de0: 0x342163e6  ori         $at, $at, 0x63E6
    ctx->pc = 0x153de0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25574);
    // 0x153de4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x153de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x153de8: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x153de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x153dec: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x153DECu;
    {
        const bool branch_taken_0x153dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DECu;
        // 0x153df0: 0xe601002c  swc1        $f1, 0x2C($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x153dec) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x153DF4u;
label_153df4:
    // 0x153df4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x153df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x153df8: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x153DF8u;
    {
        const bool branch_taken_0x153df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153DF8u;
        // 0x153dfc: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153df8) {
            ctx->pc = 0x153E9Cu;
            goto label_153e9c;
        }
    }
    ctx->pc = 0x153E00u;
    // 0x153e00: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x153e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x153e04: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x153e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x153e08: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x153e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x153e0c: 0x24a54700  addiu       $a1, $a1, 0x4700
    ctx->pc = 0x153e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
    // 0x153e10: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x153e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x153e14: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x153e14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153e18: 0xc4a30064  lwc1        $f3, 0x64($a1)
    ctx->pc = 0x153e18u;
    { uint32_t bits = FAST_READ32(0x604764u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153e1c: 0xc4a10068  lwc1        $f1, 0x68($a1)
    ctx->pc = 0x153e1cu;
    { uint32_t bits = FAST_READ32(0x604768u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153e20: 0x26260220  addiu       $a2, $s1, 0x220
    ctx->pc = 0x153e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x153e24: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x153e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x153e28: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x153e28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x153e2c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x153e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x153e30: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x153e30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x153e34: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x153e34u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x153e38: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x153e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x153e3c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x153e3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x153e40: 0x0  nop
    ctx->pc = 0x153e40u;
    // NOP
    // 0x153e44: 0x0  nop
    ctx->pc = 0x153e44u;
    // NOP
    // 0x153e48: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x153e48u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[2]);
    // 0x153e4c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x153e4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x153e50: 0x0  nop
    ctx->pc = 0x153e50u;
    // NOP
    // 0x153e54: 0x0  nop
    ctx->pc = 0x153e54u;
    // NOP
    // 0x153e58: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x153e58u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x153e5c: 0x0  nop
    ctx->pc = 0x153e5cu;
    // NOP
    // 0x153e60: 0x0  nop
    ctx->pc = 0x153e60u;
    // NOP
    // 0x153e64: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x153e64u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[2]);
    // 0x153e68: 0x0  nop
    ctx->pc = 0x153e68u;
    // NOP
    // 0x153e6c: 0x0  nop
    ctx->pc = 0x153e6cu;
    // NOP
    // 0x153e70: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x153e70u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x153e74: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x153e74u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x153e78: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x153e78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x153e7c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x153e7cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x153e80: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x153e80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x153e84: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x153e84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x153e88: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x153e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x153e8c: 0x90a30061  lbu         $v1, 0x61($a1)
    ctx->pc = 0x153e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x604761u));
    // 0x153e90: 0x90a40062  lbu         $a0, 0x62($a1)
    ctx->pc = 0x153e90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x604762u));
    // 0x153e94: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x153E94u;
    {
        const bool branch_taken_0x153e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153E94u;
        // 0x153e98: 0x90a20060  lbu         $v0, 0x60($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153e94) {
            ctx->pc = 0x154098u;
            goto label_154098;
        }
    }
    ctx->pc = 0x153E9Cu;
label_153e9c:
    // 0x153e9c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x153e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x153ea0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x153EA0u;
    {
        const bool branch_taken_0x153ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153EA0u;
        // 0x153ea4: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ea0) {
            ctx->pc = 0x153F44u;
            goto label_153f44;
        }
    }
    ctx->pc = 0x153EA8u;
    // 0x153ea8: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x153ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x153eac: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x153eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x153eb0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x153eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x153eb4: 0x24a54700  addiu       $a1, $a1, 0x4700
    ctx->pc = 0x153eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
    // 0x153eb8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x153eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x153ebc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x153ebcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153ec0: 0xc4a30018  lwc1        $f3, 0x18($a1)
    ctx->pc = 0x153ec0u;
    { uint32_t bits = FAST_READ32(0x604718u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153ec4: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x153ec4u;
    { uint32_t bits = FAST_READ32(0x60471Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153ec8: 0x26260220  addiu       $a2, $s1, 0x220
    ctx->pc = 0x153ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x153ecc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x153eccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x153ed0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x153ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x153ed4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x153ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x153ed8: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x153ed8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x153edc: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x153edcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x153ee0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x153ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x153ee4: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x153ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x153ee8: 0x0  nop
    ctx->pc = 0x153ee8u;
    // NOP
    // 0x153eec: 0x0  nop
    ctx->pc = 0x153eecu;
    // NOP
    // 0x153ef0: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x153ef0u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[2]);
    // 0x153ef4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x153ef4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x153ef8: 0x0  nop
    ctx->pc = 0x153ef8u;
    // NOP
    // 0x153efc: 0x0  nop
    ctx->pc = 0x153efcu;
    // NOP
    // 0x153f00: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x153f00u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x153f04: 0x0  nop
    ctx->pc = 0x153f04u;
    // NOP
    // 0x153f08: 0x0  nop
    ctx->pc = 0x153f08u;
    // NOP
    // 0x153f0c: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x153f0cu;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[2]);
    // 0x153f10: 0x0  nop
    ctx->pc = 0x153f10u;
    // NOP
    // 0x153f14: 0x0  nop
    ctx->pc = 0x153f14u;
    // NOP
    // 0x153f18: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x153f18u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x153f1c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x153f1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x153f20: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x153f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x153f24: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x153f24u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x153f28: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x153f28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x153f2c: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x153f2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x153f30: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x153f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x153f34: 0x90a30009  lbu         $v1, 0x9($a1)
    ctx->pc = 0x153f34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x604709u));
    // 0x153f38: 0x90a4000a  lbu         $a0, 0xA($a1)
    ctx->pc = 0x153f38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x60470Au));
    // 0x153f3c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x153F3Cu;
    {
        const bool branch_taken_0x153f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F3Cu;
        // 0x153f40: 0x90a20008  lbu         $v0, 0x8($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f3c) {
            ctx->pc = 0x154098u;
            goto label_154098;
        }
    }
    ctx->pc = 0x153F44u;
label_153f44:
    // 0x153f44: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x153f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x153f48: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x153f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x153f4c: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x153F4Cu;
    {
        const bool branch_taken_0x153f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F4Cu;
        // 0x153f50: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153f4c) {
            ctx->pc = 0x153FF0u;
            goto label_153ff0;
        }
    }
    ctx->pc = 0x153F54u;
    // 0x153f54: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x153f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x153f58: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x153f58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x153f5c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x153f5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x153f60: 0x24a54700  addiu       $a1, $a1, 0x4700
    ctx->pc = 0x153f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
    // 0x153f64: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x153f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x153f68: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x153f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x153f6c: 0xc4a30020  lwc1        $f3, 0x20($a1)
    ctx->pc = 0x153f6cu;
    { uint32_t bits = FAST_READ32(0x604720u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x153f70: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x153f70u;
    { uint32_t bits = FAST_READ32(0x604724u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x153f74: 0x26260220  addiu       $a2, $s1, 0x220
    ctx->pc = 0x153f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x153f78: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x153f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x153f7c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x153f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x153f80: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x153f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x153f84: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x153f84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x153f88: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x153f88u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x153f8c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x153f8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x153f90: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x153f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x153f94: 0x0  nop
    ctx->pc = 0x153f94u;
    // NOP
    // 0x153f98: 0x0  nop
    ctx->pc = 0x153f98u;
    // NOP
    // 0x153f9c: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x153f9cu;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[2]);
    // 0x153fa0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x153fa0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x153fa4: 0x0  nop
    ctx->pc = 0x153fa4u;
    // NOP
    // 0x153fa8: 0x0  nop
    ctx->pc = 0x153fa8u;
    // NOP
    // 0x153fac: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x153facu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x153fb0: 0x0  nop
    ctx->pc = 0x153fb0u;
    // NOP
    // 0x153fb4: 0x0  nop
    ctx->pc = 0x153fb4u;
    // NOP
    // 0x153fb8: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x153fb8u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[2]);
    // 0x153fbc: 0x0  nop
    ctx->pc = 0x153fbcu;
    // NOP
    // 0x153fc0: 0x0  nop
    ctx->pc = 0x153fc0u;
    // NOP
    // 0x153fc4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x153fc4u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x153fc8: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x153fc8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x153fcc: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x153fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x153fd0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x153fd0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x153fd4: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x153fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x153fd8: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x153fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x153fdc: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x153fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x153fe0: 0x90a3000d  lbu         $v1, 0xD($a1)
    ctx->pc = 0x153fe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x60470Du));
    // 0x153fe4: 0x90a4000e  lbu         $a0, 0xE($a1)
    ctx->pc = 0x153fe4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)FAST_READ8(0x60470Eu));
    // 0x153fe8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x153FE8u;
    {
        const bool branch_taken_0x153fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x153FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FE8u;
        // 0x153fec: 0x90a2000c  lbu         $v0, 0xC($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153fe8) {
            ctx->pc = 0x154098u;
            goto label_154098;
        }
    }
    ctx->pc = 0x153FF0u;
label_153ff0:
    // 0x153ff0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x153ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x153ff4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x153ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x153ff8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x153FF8u;
    {
        const bool branch_taken_0x153ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FF8u;
        // 0x153ffc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153ff8) {
            ctx->pc = 0x1540BCu;
            goto label_1540bc;
        }
    }
    ctx->pc = 0x154000u;
    // 0x154000: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x154000u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x154004: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x154004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x154008: 0x24a54700  addiu       $a1, $a1, 0x4700
    ctx->pc = 0x154008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18176));
    // 0x15400c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x15400cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x154010: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x154010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x154014: 0xc4a30070  lwc1        $f3, 0x70($a1)
    ctx->pc = 0x154014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x154018: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x154018u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x15401c: 0xc4a10074  lwc1        $f1, 0x74($a1)
    ctx->pc = 0x15401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154020: 0x26260220  addiu       $a2, $s1, 0x220
    ctx->pc = 0x154020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x154024: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x154024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x154028: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x154028u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x15402c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x15402cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x154030: 0x46030800  add.s       $f0, $f1, $f3
    ctx->pc = 0x154030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x154034: 0x46030881  sub.s       $f2, $f1, $f3
    ctx->pc = 0x154034u;
    ctx->f[2] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x154038: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x154038u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15403c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x15403cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x154040: 0x0  nop
    ctx->pc = 0x154040u;
    // NOP
    // 0x154044: 0x0  nop
    ctx->pc = 0x154044u;
    // NOP
    // 0x154048: 0x460218c3  div.s       $f3, $f3, $f2
    ctx->pc = 0x154048u;
    ctx->f[3] = ps2FpuDivide(ctx->fcr31, ctx->f[3], ctx->f[2]);
    // 0x15404c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x15404cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x154050: 0x0  nop
    ctx->pc = 0x154050u;
    // NOP
    // 0x154054: 0x0  nop
    ctx->pc = 0x154054u;
    // NOP
    // 0x154058: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x154058u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x15405c: 0x0  nop
    ctx->pc = 0x15405cu;
    // NOP
    // 0x154060: 0x0  nop
    ctx->pc = 0x154060u;
    // NOP
    // 0x154064: 0x46022943  div.s       $f5, $f5, $f2
    ctx->pc = 0x154064u;
    ctx->f[5] = ps2FpuDivide(ctx->fcr31, ctx->f[5], ctx->f[2]);
    // 0x154068: 0x0  nop
    ctx->pc = 0x154068u;
    // NOP
    // 0x15406c: 0x0  nop
    ctx->pc = 0x15406cu;
    // NOP
    // 0x154070: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x154070u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x154074: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x154074u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x154078: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x154078u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x15407c: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x15407cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x154080: 0xe601002c  swc1        $f1, 0x2C($s0)
    ctx->pc = 0x154080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x154084: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x154084u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x154088: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x154088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x15408c: 0x90a3006d  lbu         $v1, 0x6D($a1)
    ctx->pc = 0x15408cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 109)));
    // 0x154090: 0x90a4006e  lbu         $a0, 0x6E($a1)
    ctx->pc = 0x154090u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 110)));
    // 0x154094: 0x90a2006c  lbu         $v0, 0x6C($a1)
    ctx->pc = 0x154094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
label_154098:
    // 0x154098: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x154098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x15409c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x15409cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1540a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1540a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1540a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1540a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1540a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1540a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1540ac: 0xfca20030  sd          $v0, 0x30($a1)
    ctx->pc = 0x1540acu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 48), GPR_U64(ctx, 2));
    // 0x1540b0: 0xe605002c  swc1        $f5, 0x2C($s0)
    ctx->pc = 0x1540b0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x1540b4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1540B4u;
    {
        const bool branch_taken_0x1540b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540B4u;
        // 0x1540b8: 0xe603001c  swc1        $f3, 0x1C($s0) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540b4) {
            ctx->pc = 0x154220u;
            goto label_154220;
        }
    }
    ctx->pc = 0x1540BCu;
label_1540bc:
    // 0x1540bc: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1540bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1540c0: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x1540c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x1540c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1540c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1540c8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1540c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1540cc: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1540ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1540d0: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x1540d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x1540d4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x1540d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1540d8: 0xc0b6068  jal         func_2D81A0
    ctx->pc = 0x1540D8u;
    SET_GPR_U32(ctx, 31, 0x1540E0u);
    ctx->pc = 0x1540DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1540D8u;
    // 0x1540dc: 0x24c60030  addiu       $a2, $a2, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D81A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D81A0u, 0x1540D8u, 0x1540E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1540E0u;
label_1540e0:
    // 0x1540e0: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x1540E0u;
    {
        const bool branch_taken_0x1540e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1540E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1540E0u;
        // 0x1540e4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1540e0) {
            ctx->pc = 0x154224u;
            goto label_154224;
        }
    }
    ctx->pc = 0x1540E8u;
label_1540e8:
    // 0x1540e8: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1540E8u;
    {
        const bool branch_taken_0x1540e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1540e8) {
            ctx->pc = 0x1540ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1540E8u;
            // 0x1540ec: 0x922302bd  lbu         $v1, 0x2BD($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 701)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154184u;
            goto label_154184;
        }
    }
    ctx->pc = 0x1540F0u;
    // 0x1540f0: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1540f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1540f4: 0x133880  sll         $a3, $s3, 2
    ctx->pc = 0x1540f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1540f8: 0x24463d28  addiu       $a2, $v0, 0x3D28
    ctx->pc = 0x1540f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15656));
    // 0x1540fc: 0x90453d28  lbu         $a1, 0x3D28($v0)
    ctx->pc = 0x1540fcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15656)));
    // 0x154100: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x154100u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x154104: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x154104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x154108: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x154108u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x15410c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x15410cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x154110: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x154110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x154114: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x154114u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154118: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x154118u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x15411c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x15411cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x154120: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x154120u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x154124: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x154124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x154128: 0xfcc50030  sd          $a1, 0x30($a2)
    ctx->pc = 0x154128u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 5));
    // 0x15412c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x15412cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x154130: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x154130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x154134: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x154134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x154138: 0xc4603d20  lwc1        $f0, 0x3D20($v1)
    ctx->pc = 0x154138u;
    { uint32_t bits = FAST_READ32(0x3C3D20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15413c: 0xc4413d24  lwc1        $f1, 0x3D24($v0)
    ctx->pc = 0x15413cu;
    { uint32_t bits = FAST_READ32(0x3C3D24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154140: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x154140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x154144: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x154144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x154148: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x154148u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x15414c: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x15414cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x154150: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x154150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x154154: 0x0  nop
    ctx->pc = 0x154154u;
    // NOP
    // 0x154158: 0x0  nop
    ctx->pc = 0x154158u;
    // NOP
    // 0x15415c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x15415cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x154160: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x154160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x154164: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x154164u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x154168: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x154168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x15416c: 0xc4413d24  lwc1        $f1, 0x3D24($v0)
    ctx->pc = 0x15416cu;
    { uint32_t bits = FAST_READ32(0x3C3D24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154170: 0xc4603d20  lwc1        $f0, 0x3D20($v1)
    ctx->pc = 0x154170u;
    { uint32_t bits = FAST_READ32(0x3C3D20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154174: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x154174u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x154178: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x154178u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x15417c: 0xe602002c  swc1        $f2, 0x2C($s0)
    ctx->pc = 0x15417cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x154180: 0x922302bd  lbu         $v1, 0x2BD($s1)
    ctx->pc = 0x154180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 701)));
label_154184:
    // 0x154184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x154184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x154188: 0x54620026  bnel        $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x154188u;
    {
        const bool branch_taken_0x154188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x154188) {
            ctx->pc = 0x15418Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154188u;
            // 0x15418c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154224u;
            goto label_154224;
        }
    }
    ctx->pc = 0x154190u;
    // 0x154190: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x154190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x154194: 0x133880  sll         $a3, $s3, 2
    ctx->pc = 0x154194u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x154198: 0x24463d30  addiu       $a2, $v0, 0x3D30
    ctx->pc = 0x154198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 15664));
    // 0x15419c: 0x90453d30  lbu         $a1, 0x3D30($v0)
    ctx->pc = 0x15419cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15664)));
    // 0x1541a0: 0x90c30001  lbu         $v1, 0x1($a2)
    ctx->pc = 0x1541a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
    // 0x1541a4: 0x26220220  addiu       $v0, $s1, 0x220
    ctx->pc = 0x1541a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 544));
    // 0x1541a8: 0x90c40002  lbu         $a0, 0x2($a2)
    ctx->pc = 0x1541a8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x1541ac: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1541acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1541b0: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x1541b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x1541b4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1541b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1541b8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1541b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1541bc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1541bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1541c0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1541c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1541c4: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1541c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1541c8: 0xfcc50030  sd          $a1, 0x30($a2)
    ctx->pc = 0x1541c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 48), GPR_U64(ctx, 5));
    // 0x1541cc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1541ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x1541d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1541d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1541d4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1541d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1541d8: 0xc4603d20  lwc1        $f0, 0x3D20($v1)
    ctx->pc = 0x1541d8u;
    { uint32_t bits = FAST_READ32(0x3C3D20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1541dc: 0xc4413d24  lwc1        $f1, 0x3D24($v0)
    ctx->pc = 0x1541dcu;
    { uint32_t bits = FAST_READ32(0x3C3D24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1541e0: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1541e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x1541e4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1541e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1541e8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1541e8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1541ec: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x1541ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x1541f0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1541f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1541f4: 0x0  nop
    ctx->pc = 0x1541f4u;
    // NOP
    // 0x1541f8: 0x0  nop
    ctx->pc = 0x1541f8u;
    // NOP
    // 0x1541fc: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1541fcu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x154200: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x154200u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x154204: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x154204u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x154208: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x154208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x15420c: 0xc4413d24  lwc1        $f1, 0x3D24($v0)
    ctx->pc = 0x15420cu;
    { uint32_t bits = FAST_READ32(0x3C3D24u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154210: 0xc4603d20  lwc1        $f0, 0x3D20($v1)
    ctx->pc = 0x154210u;
    { uint32_t bits = FAST_READ32(0x3C3D20u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154214: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x154214u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x154218: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x154218u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[1]);
    // 0x15421c: 0xe602002c  swc1        $f2, 0x2C($s0)
    ctx->pc = 0x15421cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
label_154220:
    // 0x154220: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x154220u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_154224:
    // 0x154224: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x154224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x154228: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x154228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15422c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x15422cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x154230: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x154230u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x154234: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x154234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x154238: 0x3e00008  jr          $ra
    ctx->pc = 0x154238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154238u;
        // 0x15423c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154240u;
}
