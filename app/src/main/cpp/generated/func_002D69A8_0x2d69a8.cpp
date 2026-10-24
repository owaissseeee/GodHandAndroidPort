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

// Function: func_002D69A8
// Address: 0x2d69a8 - 0x2d69f0
void func_002D69A8_0x2d69a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D69A8_0x2d69a8");
#endif

    ctx->pc = 0x2d69a8u;

    // 0x2d69a8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2d69a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d69ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x2D69ACu;
    {
        const bool branch_taken_0x2d69ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D69B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69ACu;
        // 0x2d69b0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d69ac) {
            ctx->pc = 0x2D69E8u;
            goto label_2d69e8;
        }
    }
    ctx->pc = 0x2D69B4u;
    // 0x2d69b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d69b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d69b8: 0xe48c0064  swc1        $f12, 0x64($a0)
    ctx->pc = 0x2d69b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x2d69bc: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x2d69bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x2d69c0: 0xe48d0068  swc1        $f13, 0x68($a0)
    ctx->pc = 0x2d69c0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x2d69c4: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x2d69c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d69c8: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x2d69c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x2d69cc: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x2d69ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d69d0: 0xa4850074  sh          $a1, 0x74($a0)
    ctx->pc = 0x2d69d0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d69d4: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D69D4u;
    {
        const bool branch_taken_0x2d69d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D69D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69D4u;
        // 0x2d69d8: 0xe4810070  swc1        $f1, 0x70($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d69d4) {
            ctx->pc = 0x2D69E4u;
            goto label_2d69e4;
        }
    }
    ctx->pc = 0x2D69DCu;
    // 0x2d69dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d69e0: 0xa4820074  sh          $v0, 0x74($a0)
    ctx->pc = 0x2d69e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 2));
label_2d69e4:
    // 0x2d69e4: 0xa4800076  sh          $zero, 0x76($a0)
    ctx->pc = 0x2d69e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 0));
label_2d69e8:
    // 0x2d69e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D69E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D69E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D69F0u;
}
