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

// Function: func_001FFF30
// Address: 0x1fff30 - 0x1fff80
void func_001FFF30_0x1fff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001FFF30_0x1fff30");
#endif

    switch (ctx->pc) {
        case 0x1fff74u: goto label_1fff74;
        default: break;
    }

    ctx->pc = 0x1fff30u;

    // 0x1fff30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fff34: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fff34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fff38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fff3c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x1fff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fff40: 0xa4450014  sh          $a1, 0x14($v0)
    ctx->pc = 0x1fff40u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x1fff44: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1fff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fff48: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1fff48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1fff4c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1fff4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fff50: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1fff50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1fff54: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1fff54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fff58: 0xe44c0010  swc1        $f12, 0x10($v0)
    ctx->pc = 0x1fff58u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x1fff5c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1fff5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1fff60: 0xa0430016  sb          $v1, 0x16($v0)
    ctx->pc = 0x1fff60u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fff64: 0xa0470017  sb          $a3, 0x17($v0)
    ctx->pc = 0x1fff64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 23), (uint8_t)GPR_U32(ctx, 7));
    // 0x1fff68: 0xac480018  sw          $t0, 0x18($v0)
    ctx->pc = 0x1fff68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 8));
    // 0x1fff6c: 0xc07ffe0  jal         func_1FFF80
    ctx->pc = 0x1FFF6Cu;
    SET_GPR_U32(ctx, 31, 0x1FFF74u);
    ctx->pc = 0x1FFF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FFF6Cu;
    // 0x1fff70: 0xa049003a  sb          $t1, 0x3A($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 58), (uint8_t)GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFF80u, 0x1FFF6Cu, 0x1FFF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FFF74u;
label_1fff74:
    // 0x1fff74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fff74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fff78: 0x3e00008  jr          $ra
    ctx->pc = 0x1FFF78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FFF78u;
        // 0x1fff7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FFF78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FFF80u;
}
