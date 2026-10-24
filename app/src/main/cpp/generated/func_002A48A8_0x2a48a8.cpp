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

// Function: func_002A48A8
// Address: 0x2a48a8 - 0x2a4950
void func_002A48A8_0x2a48a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A48A8_0x2a48a8");
#endif

    ctx->pc = 0x2a48a8u;

    // 0x2a48a8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a48a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a48ac: 0x14a20025  bne         $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2A48ACu;
    {
        const bool branch_taken_0x2a48ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a48ac) {
            ctx->pc = 0x2A4944u;
            goto label_2a4944;
        }
    }
    ctx->pc = 0x2A48B4u;
    // 0x2a48b4: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2A48B4u;
    {
        const bool branch_taken_0x2a48b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A48B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A48B4u;
        // 0x2a48b8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a48b4) {
            ctx->pc = 0x2A4944u;
            goto label_2a4944;
        }
    }
    ctx->pc = 0x2A48BCu;
    // 0x2a48bc: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a48bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a48c0: 0x8c43118c  lw          $v1, 0x118C($v0)
    ctx->pc = 0x2a48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4492)));
    // 0x2a48c4: 0x3c060058  lui         $a2, 0x58
    ctx->pc = 0x2a48c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)88 << 16));
    // 0x2a48c8: 0xc4801190  lwc1        $f0, 0x1190($a0)
    ctx->pc = 0x2a48c8u;
    { uint32_t bits = FAST_READ32(0x3C1190u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a48cc: 0x24c66c00  addiu       $a2, $a2, 0x6C00
    ctx->pc = 0x2a48ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27648));
    // 0x2a48d0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2a48d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a48d4: 0x0  nop
    ctx->pc = 0x2a48d4u;
    // NOP
    // 0x2a48d8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2a48d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2a48dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a48dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a48e0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a48e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a48e4: 0x3c0143f0  lui         $at, 0x43F0
    ctx->pc = 0x2a48e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17392 << 16));
    // 0x2a48e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2a48e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2a48ec: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x2a48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x2a48f0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2a48f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2a48f4: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x2a48f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
    // 0x2a48f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a48f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a48fc: 0x0  nop
    ctx->pc = 0x2a48fcu;
    // NOP
    // 0x2a4900: 0x0  nop
    ctx->pc = 0x2a4900u;
    // NOP
    // 0x2a4904: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x2a4904u;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[3]);
    // 0x2a4908: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a4908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a490c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x2a490cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2a4910: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2a4910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x2a4914: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x2a4914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x2a4918: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a4918u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a491c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x2a491cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2a4920: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x2a4920u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2a4924: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2a4924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2a4928: 0x3c030058  lui         $v1, 0x58
    ctx->pc = 0x2a4928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)88 << 16));
    // 0x2a492c: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x2a492cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
    // 0x2a4930: 0xac446b80  sw          $a0, 0x6B80($v0)
    ctx->pc = 0x2a4930u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x586B80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B80u, _value); } while (0);
    // 0x2a4934: 0xe4626b84  swc1        $f2, 0x6B84($v1)
    ctx->pc = 0x2a4934u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x586B84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B84u, _value); } while (0); }
    // 0x2a4938: 0xe4a46b88  swc1        $f4, 0x6B88($a1)
    ctx->pc = 0x2a4938u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x586B88u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x586B88u, _value); } while (0); }
    // 0x2a493c: 0xfcc04098  sd          $zero, 0x4098($a2)
    ctx->pc = 0x2a493cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16536), GPR_U64(ctx, 0));
    // 0x2a4940: 0xfcc040c8  sd          $zero, 0x40C8($a2)
    ctx->pc = 0x2a4940u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16584), GPR_U64(ctx, 0));
label_2a4944:
    // 0x2a4944: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A494Cu;
    // 0x2a494c: 0x0  nop
    ctx->pc = 0x2a494cu;
    // NOP
    ctx->pc = 0x2a4950u;
}
