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

// Function: func_001CD7A8
// Address: 0x1cd7a8 - 0x1cd800
void func_001CD7A8_0x1cd7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001CD7A8_0x1cd7a8");
#endif

    ctx->pc = 0x1cd7a8u;

    // 0x1cd7a8: 0x8c820670  lw          $v0, 0x670($a0)
    ctx->pc = 0x1cd7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1648)));
    // 0x1cd7ac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1CD7ACu;
    {
        const bool branch_taken_0x1cd7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd7ac) {
            ctx->pc = 0x1CD7F8u;
            goto label_1cd7f8;
        }
    }
    ctx->pc = 0x1CD7B4u;
    // 0x1cd7b4: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1cd7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1cd7b8: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1cd7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x1cd7bc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1CD7BCu;
    {
        const bool branch_taken_0x1cd7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cd7bc) {
            ctx->pc = 0x1CD7E0u;
            goto label_1cd7e0;
        }
    }
    ctx->pc = 0x1CD7C4u;
    // 0x1cd7c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1cd7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd7c8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1cd7c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1cd7cc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x1cd7ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cd7d0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1cd7d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1cd7d4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x1cd7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd7d8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1cd7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1cd7dc: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x1cd7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_1cd7e0:
    // 0x1cd7e0: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x1cd7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x1cd7e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1cd7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1cd7e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1cd7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd7ec: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cd7f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cd7f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1cd7f4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1cd7f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cd7f8:
    // 0x1cd7f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD7F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD7F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD800u;
}
