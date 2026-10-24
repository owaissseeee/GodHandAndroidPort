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

// Function: func_00178980
// Address: 0x178980 - 0x1789f8
void func_00178980_0x178980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00178980_0x178980");
#endif

    ctx->pc = 0x178980u;

    // 0x178980: 0xc4800600  lwc1        $f0, 0x600($a0)
    ctx->pc = 0x178980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x178984: 0x3c013c03  lui         $at, 0x3C03
    ctx->pc = 0x178984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15363 << 16));
    // 0x178988: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x178988u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x17898c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17898cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x178990: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x178990u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x178994: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x178994u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x178998: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x178998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17899c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x17899cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1789a0: 0x0  nop
    ctx->pc = 0x1789a0u;
    // NOP
    // 0x1789a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1789A4u;
    {
        const bool branch_taken_0x1789a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1789A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789A4u;
        // 0x1789a8: 0xe4800600  swc1        $f0, 0x600($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1536), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789a4) {
            ctx->pc = 0x1789B0u;
            goto label_1789b0;
        }
    }
    ctx->pc = 0x1789ACu;
    // 0x1789ac: 0xe4820600  swc1        $f2, 0x600($a0)
    ctx->pc = 0x1789acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1536), bits); }
label_1789b0:
    // 0x1789b0: 0xc4800600  lwc1        $f0, 0x600($a0)
    ctx->pc = 0x1789b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1789b4: 0x3c013c8e  lui         $at, 0x3C8E
    ctx->pc = 0x1789b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15502 << 16));
    // 0x1789b8: 0x3421fa35  ori         $at, $at, 0xFA35
    ctx->pc = 0x1789b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)64053);
    // 0x1789bc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1789bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1789c0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1789c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1789c4: 0xc4810100  lwc1        $f1, 0x100($a0)
    ctx->pc = 0x1789c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1789c8: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1789c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1789cc: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x1789ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x1789d0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1789d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1789d4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1789d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1789d8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1789d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1789dc: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x1789dcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1789e0: 0x0  nop
    ctx->pc = 0x1789e0u;
    // NOP
    // 0x1789e4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1789E4u;
    {
        const bool branch_taken_0x1789e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1789E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789E4u;
        // 0x1789e8: 0xe4810100  swc1        $f1, 0x100($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1789e4) {
            ctx->pc = 0x1789F0u;
            goto label_1789f0;
        }
    }
    ctx->pc = 0x1789ECu;
    // 0x1789ec: 0xe4830100  swc1        $f3, 0x100($a0)
    ctx->pc = 0x1789ecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 256), bits); }
label_1789f0:
    // 0x1789f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1789F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1789F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1789F8u;
}
