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

// Function: CustomIDWork_SetScaleAnimNormal
// Address: 0x2d6968 - 0x2d69a8
void CustomIDWork_SetScaleAnimNormal_0x2d6968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetScaleAnimNormal_0x2d6968");
#endif

    ctx->pc = 0x2d6968u;

    // 0x2d6968: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d6968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d696c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D696Cu;
    {
        const bool branch_taken_0x2d696c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D696Cu;
        // 0x2d6970: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d696c) {
            ctx->pc = 0x2D69A0u;
            goto label_2d69a0;
        }
    }
    ctx->pc = 0x2D6974u;
    // 0x2d6974: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2d6974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d6978: 0xe48c006c  swc1        $f12, 0x6C($a0)
    ctx->pc = 0x2d6978u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x2d697c: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x2d697cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x2d6980: 0xe48d0070  swc1        $f13, 0x70($a0)
    ctx->pc = 0x2d6980u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2d6984: 0xe48c0064  swc1        $f12, 0x64($a0)
    ctx->pc = 0x2d6984u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x2d6988: 0xe48d0068  swc1        $f13, 0x68($a0)
    ctx->pc = 0x2d6988u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x2d698c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D698Cu;
    {
        const bool branch_taken_0x2d698c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D698Cu;
        // 0x2d6990: 0xa4850074  sh          $a1, 0x74($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d698c) {
            ctx->pc = 0x2D699Cu;
            goto label_2d699c;
        }
    }
    ctx->pc = 0x2D6994u;
    // 0x2d6994: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6998: 0xa4820074  sh          $v0, 0x74($a0)
    ctx->pc = 0x2d6998u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 2));
label_2d699c:
    // 0x2d699c: 0xa4800076  sh          $zero, 0x76($a0)
    ctx->pc = 0x2d699cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 0));
label_2d69a0:
    // 0x2d69a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D69A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D69A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D69A8u;
}
