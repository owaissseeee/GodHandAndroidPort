#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r301_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r301
{
// Function: func_0079B070
// Address: 0x79b070 - 0x79b0c0
void func_0079B070_0x79b070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B070_0x79b070");
#endif

    ctx->pc = 0x79b070u;

    // 0x79b070: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b074: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79B074u;
    {
        const bool branch_taken_0x79b074 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b074) {
            ctx->pc = 0x79B0B4u;
            goto label_79b0b4;
        }
    }
    ctx->pc = 0x79B07Cu;
    // 0x79b07c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79B07Cu;
    {
        const bool branch_taken_0x79b07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B07Cu;
        // 0x79b080: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b07c) {
            ctx->pc = 0x79B0B4u;
            goto label_79b0b4;
        }
    }
    ctx->pc = 0x79B084u;
    // 0x79b084: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x79b084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x79b088: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79b088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79b08c: 0x3c014098  lui         $at, 0x4098
    ctx->pc = 0x79b08cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16536 << 16));
    // 0x79b090: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x79b090u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x79b094: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79b094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79b098: 0x2462e000  addiu       $v0, $v1, -0x2000
    ctx->pc = 0x79b098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959104));
    // 0x79b09c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79b09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79b0a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79b0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79b0a4: 0xe461e000  swc1        $f1, -0x2000($v1)
    ctx->pc = 0x79b0a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294959104), bits); }
    // 0x79b0a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x79b0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79b0ac: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79b0acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79b0b0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_79b0b4:
    // 0x79b0b4: 0x3e00008  jr          $ra
    ctx->pc = 0x79B0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B0B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B0BCu;
    // 0x79b0bc: 0x0  nop
    ctx->pc = 0x79b0bcu;
    // NOP
    ctx->pc = 0x79b0c0u;
}
} // namespace gh_r301
