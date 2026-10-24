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
// Function: func_0079D158
// Address: 0x79d158 - 0x79d1a8
void func_0079D158_0x79d158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079D158_0x79d158");
#endif

    ctx->pc = 0x79d158u;

    // 0x79d158: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79d158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79d15c: 0x14a2000f  bne         $a1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x79D15Cu;
    {
        const bool branch_taken_0x79d15c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x79d15c) {
            ctx->pc = 0x79D19Cu;
            goto label_79d19c;
        }
    }
    ctx->pc = 0x79D164u;
    // 0x79d164: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x79D164u;
    {
        const bool branch_taken_0x79d164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x79D168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79D164u;
        // 0x79d168: 0x3c03007a  lui         $v1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79d164) {
            ctx->pc = 0x79D19Cu;
            goto label_79d19c;
        }
    }
    ctx->pc = 0x79D16Cu;
    // 0x79d16c: 0x3c01c0c0  lui         $at, 0xC0C0
    ctx->pc = 0x79d16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49344 << 16));
    // 0x79d170: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x79d170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x79d174: 0x3c014098  lui         $at, 0x4098
    ctx->pc = 0x79d174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16536 << 16));
    // 0x79d178: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x79d178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x79d17c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x79d17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79d180: 0x2462e020  addiu       $v0, $v1, -0x1FE0
    ctx->pc = 0x79d180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959136));
    // 0x79d184: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x79d184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x79d188: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x79d188u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x79d18c: 0xe461e020  swc1        $f1, -0x1FE0($v1)
    ctx->pc = 0x79d18cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294959136), bits); }
    // 0x79d190: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x79d190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x79d194: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x79d194u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x79d198: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x79d198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_79d19c:
    // 0x79d19c: 0x3e00008  jr          $ra
    ctx->pc = 0x79D19Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79D19Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79D1A4u;
    // 0x79d1a4: 0x0  nop
    ctx->pc = 0x79d1a4u;
    // NOP
    ctx->pc = 0x79d1a8u;
}
} // namespace gh_r301
