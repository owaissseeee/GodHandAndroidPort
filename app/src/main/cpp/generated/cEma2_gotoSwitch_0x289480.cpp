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

// Function: cEma2_gotoSwitch
// Address: 0x289480 - 0x2894b8
void cEma2_gotoSwitch_0x289480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEma2_gotoSwitch_0x289480");
#endif

    ctx->pc = 0x289480u;

    // 0x289480: 0x248215a0  addiu       $v0, $a0, 0x15A0
    ctx->pc = 0x289480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 5536));
    // 0x289484: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x289484u;
    {
        const bool branch_taken_0x289484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x289484) {
            ctx->pc = 0x289488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289484u;
            // 0x289488: 0x8c8215b0  lw          $v0, 0x15B0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2894A8u;
            goto label_2894a8;
        }
    }
    ctx->pc = 0x28948Cu;
    // 0x28948c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x28948cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x289490: 0xe48015a0  swc1        $f0, 0x15A0($a0)
    ctx->pc = 0x289490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5536), bits); }
    // 0x289494: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x289494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x289498: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x289498u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x28949c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x28949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2894a0: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2894a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2894a4: 0x8c8215b0  lw          $v0, 0x15B0($a0)
    ctx->pc = 0x2894a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5552)));
label_2894a8:
    // 0x2894a8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2894a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2894ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2894ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2894B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2894ACu;
        // 0x2894b0: 0xac8215b0  sw          $v0, 0x15B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 5552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2894ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2894B4u;
    // 0x2894b4: 0x0  nop
    ctx->pc = 0x2894b4u;
    // NOP
    ctx->pc = 0x2894b8u;
}
