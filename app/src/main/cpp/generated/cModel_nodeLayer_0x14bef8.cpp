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

// Function: cModel_nodeLayer
// Address: 0x14bef8 - 0x14bfe0
void cModel_nodeLayer_0x14bef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_nodeLayer_0x14bef8");
#endif

    ctx->pc = 0x14bef8u;

    // 0x14bef8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x14bef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14befc: 0x90c302be  lbu         $v1, 0x2BE($a2)
    ctx->pc = 0x14befcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 702)));
    // 0x14bf00: 0x240200fe  addiu       $v0, $zero, 0xFE
    ctx->pc = 0x14bf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x14bf04: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14BF04u;
    {
        const bool branch_taken_0x14bf04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14BF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF04u;
        // 0x14bf08: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf04) {
            ctx->pc = 0x14BF14u;
            goto label_14bf14;
        }
    }
    ctx->pc = 0x14BF0Cu;
    // 0x14bf0c: 0x3e00008  jr          $ra
    ctx->pc = 0x14BF0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF0Cu;
        // 0x14bf10: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BF0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BF14u;
label_14bf14:
    // 0x14bf14: 0x8d050380  lw          $a1, 0x380($t0)
    ctx->pc = 0x14bf14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 896)));
    // 0x14bf18: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x14bf18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x14bf1c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14bf20: 0x8cc40250  lw          $a0, 0x250($a2)
    ctx->pc = 0x14bf20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 592)));
    // 0x14bf24: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x14bf24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14bf28: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x14bf28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14bf2c: 0x43380a  movz        $a3, $v0, $v1
    ctx->pc = 0x14bf2cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
    // 0x14bf30: 0x30842000  andi        $a0, $a0, 0x2000
    ctx->pc = 0x14bf30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
    // 0x14bf34: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x14bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14bf38: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x14bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x14bf3c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x14bf3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x14bf40: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
    ctx->pc = 0x14BF40u;
    {
        const bool branch_taken_0x14bf40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BF40u;
        // 0x14bf44: 0x44380b  movn        $a3, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bf40) {
            ctx->pc = 0x14BFB4u;
            goto label_14bfb4;
        }
    }
    ctx->pc = 0x14BF48u;
    // 0x14bf48: 0x90c202b6  lbu         $v0, 0x2B6($a2)
    ctx->pc = 0x14bf48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 694)));
    // 0x14bf4c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x14bf4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x14bf50: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x14bf50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x14bf54: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14bf54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x14bf58: 0x0  nop
    ctx->pc = 0x14bf58u;
    // NOP
    // 0x14bf5c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x14bf5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x14bf60: 0x90c302b7  lbu         $v1, 0x2B7($a2)
    ctx->pc = 0x14bf60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 695)));
    // 0x14bf64: 0x90c202bc  lbu         $v0, 0x2BC($a2)
    ctx->pc = 0x14bf64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 700)));
    // 0x14bf68: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x14bf68u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x14bf6c: 0x0  nop
    ctx->pc = 0x14bf6cu;
    // NOP
    // 0x14bf70: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x14bf70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x14bf74: 0xc4c0024c  lwc1        $f0, 0x24C($a2)
    ctx->pc = 0x14bf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14bf78: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x14bf78u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[3]);
    // 0x14bf7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14bf7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14bf80: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x14bf80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x14bf84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x14bf84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14bf88: 0x0  nop
    ctx->pc = 0x14bf88u;
    // NOP
    // 0x14bf8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x14bf8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14bf90: 0x46031083  div.s       $f2, $f2, $f3
    ctx->pc = 0x14bf90u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[3]);
    // 0x14bf94: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x14bf94u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[3]);
    // 0x14bf98: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x14bf98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x14bf9c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x14bf9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x14bfa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14bfa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14bfa4: 0x46050032  c.eq.s      $f0, $f5
    ctx->pc = 0x14bfa4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14bfa8: 0x0  nop
    ctx->pc = 0x14bfa8u;
    // NOP
    // 0x14bfac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x14BFACu;
    {
        const bool branch_taken_0x14bfac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14bfac) {
            ctx->pc = 0x14BFB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14BFACu;
            // 0x14bfb0: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14BFB4u;
            goto label_14bfb4;
        }
    }
    ctx->pc = 0x14BFB4u;
label_14bfb4:
    // 0x14bfb4: 0x8d020414  lw          $v0, 0x414($t0)
    ctx->pc = 0x14bfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 1044)));
    // 0x14bfb8: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x14bfb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x14bfbc: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x14bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x14bfc0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x14bfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x14bfc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x14BFC4u;
    {
        const bool branch_taken_0x14bfc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFC4u;
        // 0x14bfc8: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14bfc4) {
            ctx->pc = 0x14BFD8u;
            goto label_14bfd8;
        }
    }
    ctx->pc = 0x14BFCCu;
    // 0x14bfcc: 0x24040022  addiu       $a0, $zero, 0x22
    ctx->pc = 0x14bfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x14bfd0: 0x8c437aa8  lw          $v1, 0x7AA8($v0)
    ctx->pc = 0x14bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31400)));
    // 0x14bfd4: 0x83380b  movn        $a3, $a0, $v1
    ctx->pc = 0x14bfd4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
label_14bfd8:
    // 0x14bfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x14BFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14BFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14BFD8u;
        // 0x14bfdc: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14BFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14BFE0u;
}
