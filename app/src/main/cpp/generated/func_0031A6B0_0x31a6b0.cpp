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

// Function: func_0031A6B0
// Address: 0x31a6b0 - 0x31a718
void func_0031A6B0_0x31a6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031A6B0_0x31a6b0");
#endif

    switch (ctx->pc) {
        case 0x31a6d4u: goto label_31a6d4;
        default: break;
    }

    ctx->pc = 0x31a6b0u;

    // 0x31a6b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31a6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31a6b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x31a6b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a6b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x31a6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x31a6bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x31a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x31a6c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31a6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a6c4: 0x8c45aff0  lw          $a1, -0x5010($v0)
    ctx->pc = 0x31a6c4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x31a6c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x31a6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x31a6cc: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x31A6CCu;
    SET_GPR_U32(ctx, 31, 0x31A6D4u);
    ctx->pc = 0x31A6D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31A6CCu;
    // 0x31a6d0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x31A6CCu, 0x31A6D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31A6D4u;
label_31a6d4:
    // 0x31a6d4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x31a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31a6d8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x31a6d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x31a6dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x31a6dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31a6e0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x31a6e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x31a6e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31a6e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x31a6e8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x31a6e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31a6ec: 0x0  nop
    ctx->pc = 0x31a6ecu;
    // NOP
    // 0x31a6f0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x31A6F0u;
    {
        const bool branch_taken_0x31a6f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x31A6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A6F0u;
        // 0x31a6f4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a6f0) {
            ctx->pc = 0x31A700u;
            goto label_31a700;
        }
    }
    ctx->pc = 0x31A6F8u;
    // 0x31a6f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x31a6f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x31a6fc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x31a6fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_31a700:
    // 0x31a700: 0x92020b58  lbu         $v0, 0xB58($s0)
    ctx->pc = 0x31a700u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2904)));
    // 0x31a704: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x31a704u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31a708: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x31a708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31a70c: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x31a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x31a710: 0x3e00008  jr          $ra
    ctx->pc = 0x31A710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31A710u;
        // 0x31a714: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31A710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31A718u;
}
