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

// Function: func_0028ED28
// Address: 0x28ed28 - 0x28ed78
void func_0028ED28_0x28ed28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0028ED28_0x28ed28");
#endif

    ctx->pc = 0x28ed28u;

    // 0x28ed28: 0x8c8205b4  lw          $v0, 0x5B4($a0)
    ctx->pc = 0x28ed28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x28ed2c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x28ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28ed30: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28ED30u;
    {
        const bool branch_taken_0x28ed30 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x28ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED30u;
        // 0x28ed34: 0xac8205b4  sw          $v0, 0x5B4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed30) {
            ctx->pc = 0x28ED3Cu;
            goto label_28ed3c;
        }
    }
    ctx->pc = 0x28ED38u;
    // 0x28ed38: 0xac8005b4  sw          $zero, 0x5B4($a0)
    ctx->pc = 0x28ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 0));
label_28ed3c:
    // 0x28ed3c: 0x8c8205b4  lw          $v0, 0x5B4($a0)
    ctx->pc = 0x28ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x28ed40: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x28ed40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x28ed44: 0x346386a0  ori         $v1, $v1, 0x86A0
    ctx->pc = 0x28ed44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34464);
    // 0x28ed48: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x28ed48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ed4c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28ED4Cu;
    {
        const bool branch_taken_0x28ed4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ed4c) {
            ctx->pc = 0x28ED50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28ED4Cu;
            // 0x28ed50: 0xac8305b4  sw          $v1, 0x5B4($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28ED54u;
            goto label_28ed54;
        }
    }
    ctx->pc = 0x28ED54u;
label_28ed54:
    // 0x28ed54: 0x18a00005  blez        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28ED54u;
    {
        const bool branch_taken_0x28ed54 = (GPR_S64(ctx, 5) <= 0);
        if (branch_taken_0x28ed54) {
            ctx->pc = 0x28ED6Cu;
            goto label_28ed6c;
        }
    }
    ctx->pc = 0x28ED5Cu;
    // 0x28ed5c: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x28ed5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x28ed60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28ed60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28ed64: 0x0  nop
    ctx->pc = 0x28ed64u;
    // NOP
    // 0x28ed68: 0xe48005b8  swc1        $f0, 0x5B8($a0)
    ctx->pc = 0x28ed68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 1464), bits); }
label_28ed6c:
    // 0x28ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x28ED6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ED74u;
    // 0x28ed74: 0x0  nop
    ctx->pc = 0x28ed74u;
    // NOP
    ctx->pc = 0x28ed78u;
}
