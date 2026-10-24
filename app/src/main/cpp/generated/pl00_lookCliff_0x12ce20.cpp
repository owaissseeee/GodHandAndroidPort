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

// Function: pl00_lookCliff
// Address: 0x12ce20 - 0x12ce60
void pl00_lookCliff_0x12ce20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("pl00_lookCliff_0x12ce20");
#endif

    ctx->pc = 0x12ce20u;

    // 0x12ce20: 0x24820660  addiu       $v0, $a0, 0x660
    ctx->pc = 0x12ce20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1632));
    // 0x12ce24: 0x50450008  beql        $v0, $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x12CE24u;
    {
        const bool branch_taken_0x12ce24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x12ce24) {
            ctx->pc = 0x12CE28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12CE24u;
            // 0x12ce28: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12CE48u;
            goto label_12ce48;
        }
    }
    ctx->pc = 0x12CE2Cu;
    // 0x12ce2c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x12ce2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce30: 0xe4800660  swc1        $f0, 0x660($a0)
    ctx->pc = 0x12ce30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1632), bits); }
    // 0x12ce34: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x12ce34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ce38: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x12ce38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12ce3c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x12ce3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ce40: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x12ce40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12ce44: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x12ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_12ce48:
    // 0x12ce48: 0xe48c0670  swc1        $f12, 0x670($a0)
    ctx->pc = 0x12ce48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1648), bits); }
    // 0x12ce4c: 0xa08202f5  sb          $v0, 0x2F5($a0)
    ctx->pc = 0x12ce4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x12ce50: 0xa08002f7  sb          $zero, 0x2F7($a0)
    ctx->pc = 0x12ce50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ce54: 0xa08002f4  sb          $zero, 0x2F4($a0)
    ctx->pc = 0x12ce54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x12ce58: 0x3e00008  jr          $ra
    ctx->pc = 0x12CE58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12CE58u;
        // 0x12ce5c: 0xa08002f6  sb          $zero, 0x2F6($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12CE58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12CE60u;
}
