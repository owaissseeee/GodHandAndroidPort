#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r001_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r001
{
// Function: func_00799C48
// Address: 0x799c48 - 0x799cf0
void func_00799C48_0x799c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799C48_0x799c48");
#endif

    switch (ctx->pc) {
        case 0x799c64u: goto label_799c64;
        case 0x799c74u: goto label_799c74;
        case 0x799ca0u: goto label_799ca0;
        default: break;
    }

    ctx->pc = 0x799c48u;

    // 0x799c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x799c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x799c4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799c50: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x799c50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x799c54: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x799c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x799c58: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x799c58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x799c5c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799C5Cu;
    SET_GPR_U32(ctx, 31, 0x799C64u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799C5Cu, 0x799C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C64u;
label_799c64:
    // 0x799c64: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x799C64u;
    {
        const bool branch_taken_0x799c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799C64u;
        // 0x799c68: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799c64) {
            ctx->pc = 0x799CA8u;
            goto label_799ca8;
        }
    }
    ctx->pc = 0x799C6Cu;
    // 0x799c6c: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799C6Cu;
    SET_GPR_U32(ctx, 31, 0x799C74u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799C6Cu, 0x799C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799C74u;
label_799c74:
    // 0x799c74: 0x8c4200f0  lw          $v0, 0xF0($v0)
    ctx->pc = 0x799c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x799c78: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x799C78u;
    {
        const bool branch_taken_0x799c78 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x799c78) {
            ctx->pc = 0x799C98u;
            goto label_799c98;
        }
    }
    ctx->pc = 0x799C80u;
    // 0x799c80: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x799c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799c84: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x799c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799c88: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x799c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799c8c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799c90: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x799c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799c94: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_799c98:
    // 0x799c98: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x799C98u;
    SET_GPR_U32(ctx, 31, 0x799CA0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x799C98u, 0x799CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799CA0u;
label_799ca0:
    // 0x799ca0: 0xc4540104  lwc1        $f20, 0x104($v0)
    ctx->pc = 0x799ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799ca4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x799ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
label_799ca8:
    // 0x799ca8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799cac: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x799cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
    // 0x799cb0: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x799cb0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
    // 0x799cb4: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x799cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
    // 0x799cb8: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
    ctx->pc = 0x799CB8u;
    {
        const bool branch_taken_0x799cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x799CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CB8u;
        // 0x799cbc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x799cb8) {
            ctx->pc = 0x799CD8u;
            goto label_799cd8;
        }
    }
    ctx->pc = 0x799CC0u;
    // 0x799cc0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x799cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x799cc4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x799cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x799cc8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x799cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x799ccc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x799cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x799cd0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x799cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x799cd4: 0x8c822f84  lw          $v0, 0x2F84($a0)
    ctx->pc = 0x799cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12164)));
label_799cd8:
    // 0x799cd8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x799cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799cdc: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x799cdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x799ce0: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x799ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x799ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x799CE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799CE4u;
        // 0x799ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799CE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799CECu;
    // 0x799cec: 0x0  nop
    ctx->pc = 0x799cecu;
    // NOP
    ctx->pc = 0x799cf0u;
}
} // namespace gh_r001
