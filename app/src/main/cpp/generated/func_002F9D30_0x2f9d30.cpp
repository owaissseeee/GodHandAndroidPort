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

// Function: func_002F9D30
// Address: 0x2f9d30 - 0x2f9dc8
void func_002F9D30_0x2f9d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F9D30_0x2f9d30");
#endif

    ctx->pc = 0x2f9d30u;

    // 0x2f9d30: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2f9d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f9d34: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f9d34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9d38: 0x8ca20110  lw          $v0, 0x110($a1)
    ctx->pc = 0x2f9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x2f9d3c: 0xc441013c  lwc1        $f1, 0x13C($v0)
    ctx->pc = 0x2f9d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9d40: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f9d40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9d44: 0x0  nop
    ctx->pc = 0x2f9d44u;
    // NOP
    // 0x2f9d48: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9D48u;
    {
        const bool branch_taken_0x2f9d48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f9d48) {
            ctx->pc = 0x2F9D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9D48u;
            // 0x2f9d4c: 0xe4a102b0  swc1        $f1, 0x2B0($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 688), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D60u;
            goto label_2f9d60;
        }
    }
    ctx->pc = 0x2F9D50u;
    // 0x2f9d50: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x2f9d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x2f9d54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9d54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9d58: 0x0  nop
    ctx->pc = 0x2f9d58u;
    // NOP
    // 0x2f9d5c: 0xe4a002b0  swc1        $f0, 0x2B0($a1)
    ctx->pc = 0x2f9d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 688), bits); }
label_2f9d60:
    // 0x2f9d60: 0x8ca20110  lw          $v0, 0x110($a1)
    ctx->pc = 0x2f9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x2f9d64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2f9d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9d68: 0xc4410148  lwc1        $f1, 0x148($v0)
    ctx->pc = 0x2f9d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f9d6c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2f9d6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9d70: 0x0  nop
    ctx->pc = 0x2f9d70u;
    // NOP
    // 0x2f9d74: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2F9D74u;
    {
        const bool branch_taken_0x2f9d74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f9d74) {
            ctx->pc = 0x2F9D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9D74u;
            // 0x2f9d78: 0xe4a102b8  swc1        $f1, 0x2B8($a1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 696), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9D8Cu;
            goto label_2f9d8c;
        }
    }
    ctx->pc = 0x2F9D7Cu;
    // 0x2f9d7c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2f9d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2f9d80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9d84: 0x0  nop
    ctx->pc = 0x2f9d84u;
    // NOP
    // 0x2f9d88: 0xe4a002b8  swc1        $f0, 0x2B8($a1)
    ctx->pc = 0x2f9d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 696), bits); }
label_2f9d8c:
    // 0x2f9d8c: 0x8ca20110  lw          $v0, 0x110($a1)
    ctx->pc = 0x2f9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x2f9d90: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2f9d90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f9d94: 0xc440014c  lwc1        $f0, 0x14C($v0)
    ctx->pc = 0x2f9d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f9d98: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2f9d98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f9d9c: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2f9d9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2f9da0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2f9da0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f9da4: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2F9DA4u;
    {
        const bool branch_taken_0x2f9da4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f9da4) {
            ctx->pc = 0x2F9DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9DA4u;
            // 0x2f9da8: 0xc4400148  lwc1        $f0, 0x148($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9DACu;
            goto label_2f9dac;
        }
    }
    ctx->pc = 0x2F9DACu;
label_2f9dac:
    // 0x2f9dac: 0xe4a002bc  swc1        $f0, 0x2BC($a1)
    ctx->pc = 0x2f9dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 700), bits); }
    // 0x2f9db0: 0x8ca40110  lw          $a0, 0x110($a1)
    ctx->pc = 0x2f9db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
    // 0x2f9db4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f9db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f9db8: 0x8083018c  lb          $v1, 0x18C($a0)
    ctx->pc = 0x2f9db8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 396)));
    // 0x2f9dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2F9DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9DBCu;
        // 0x2f9dc0: 0xaca302b4  sw          $v1, 0x2B4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9DC4u;
    // 0x2f9dc4: 0x0  nop
    ctx->pc = 0x2f9dc4u;
    // NOP
    ctx->pc = 0x2f9dc8u;
}
