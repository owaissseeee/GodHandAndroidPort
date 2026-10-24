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

// Function: func_00304BB8
// Address: 0x304bb8 - 0x304bf8
void func_00304BB8_0x304bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00304BB8_0x304bb8");
#endif

    ctx->pc = 0x304bb8u;

    // 0x304bb8: 0x8c850100  lw          $a1, 0x100($a0)
    ctx->pc = 0x304bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
    // 0x304bbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x304bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x304bc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x304bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x304bc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x304bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x304bc8: 0xc4a00248  lwc1        $f0, 0x248($a1)
    ctx->pc = 0x304bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304bcc: 0xe4800240  swc1        $f0, 0x240($a0)
    ctx->pc = 0x304bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 576), bits); }
    // 0x304bd0: 0xc4a1024c  lwc1        $f1, 0x24C($a1)
    ctx->pc = 0x304bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304bd4: 0xe4810244  swc1        $f1, 0x244($a0)
    ctx->pc = 0x304bd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 580), bits); }
    // 0x304bd8: 0xc4a00250  lwc1        $f0, 0x250($a1)
    ctx->pc = 0x304bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x304bdc: 0xe4800248  swc1        $f0, 0x248($a0)
    ctx->pc = 0x304bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 584), bits); }
    // 0x304be0: 0xc4a10254  lwc1        $f1, 0x254($a1)
    ctx->pc = 0x304be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x304be4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x304be4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x304be8: 0xe482024c  swc1        $f2, 0x24C($a0)
    ctx->pc = 0x304be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 588), bits); }
    // 0x304bec: 0x90a3027c  lbu         $v1, 0x27C($a1)
    ctx->pc = 0x304becu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 636)));
    // 0x304bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x304BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304BF0u;
        // 0x304bf4: 0xa0830254  sb          $v1, 0x254($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 596), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304BF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304BF8u;
}
