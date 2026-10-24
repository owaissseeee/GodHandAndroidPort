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

// Function: CustomIDWork_SetScaleAnimSin
// Address: 0x2d69f0 - 0x2d6a30
void CustomIDWork_SetScaleAnimSin_0x2d69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CustomIDWork_SetScaleAnimSin_0x2d69f0");
#endif

    ctx->pc = 0x2d69f0u;

    // 0x2d69f0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d69f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2d69f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D69F4u;
    {
        const bool branch_taken_0x2d69f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D69F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D69F4u;
        // 0x2d69f8: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d69f4) {
            ctx->pc = 0x2D6A28u;
            goto label_2d6a28;
        }
    }
    ctx->pc = 0x2D69FCu;
    // 0x2d69fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d69fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d6a00: 0xe48c006c  swc1        $f12, 0x6C($a0)
    ctx->pc = 0x2d6a00u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x2d6a04: 0xac82005c  sw          $v0, 0x5C($a0)
    ctx->pc = 0x2d6a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 2));
    // 0x2d6a08: 0xe48d0070  swc1        $f13, 0x70($a0)
    ctx->pc = 0x2d6a08u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x2d6a0c: 0xe48c0064  swc1        $f12, 0x64($a0)
    ctx->pc = 0x2d6a0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x2d6a10: 0xe48d0068  swc1        $f13, 0x68($a0)
    ctx->pc = 0x2d6a10u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x2d6a14: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6A14u;
    {
        const bool branch_taken_0x2d6a14 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A14u;
        // 0x2d6a18: 0xa4850074  sh          $a1, 0x74($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a14) {
            ctx->pc = 0x2D6A24u;
            goto label_2d6a24;
        }
    }
    ctx->pc = 0x2D6A1Cu;
    // 0x2d6a1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6a20: 0xa4820074  sh          $v0, 0x74($a0)
    ctx->pc = 0x2d6a20u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 2));
label_2d6a24:
    // 0x2d6a24: 0xa4800076  sh          $zero, 0x76($a0)
    ctx->pc = 0x2d6a24u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 0));
label_2d6a28:
    // 0x2d6a28: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6A30u;
}
