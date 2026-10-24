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

// Function: cGameObj_SetTgtTurn
// Address: 0x2a7498 - 0x2a74e0
void cGameObj_SetTgtTurn_0x2a7498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cGameObj_SetTgtTurn_0x2a7498");
#endif

    switch (ctx->pc) {
        case 0x2a74c0u: goto label_2a74c0;
        case 0x2a74ccu: goto label_2a74cc;
        default: break;
    }

    ctx->pc = 0x2a7498u;

    // 0x2a7498: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a7498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a749c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a749cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a74a0: 0xc44079fc  lwc1        $f0, 0x79FC($v0)
    ctx->pc = 0x2a74a0u;
    { uint32_t bits = FAST_READ32(0x7479FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a74a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a74a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a74a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a74a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a74ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a74acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a74b0: 0x46006342  mul.s       $f13, $f12, $f0
    ctx->pc = 0x2a74b0u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a74b4: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x2a74b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2a74b8: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x2A74B8u;
    SET_GPR_U32(ctx, 31, 0x2A74C0u);
    ctx->pc = 0x2A74BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A74B8u;
    // 0x2a74bc: 0xc60c0104  lwc1        $f12, 0x104($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x2A74B8u, 0x2A74C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A74C0u;
label_2a74c0:
    // 0x2a74c0: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x2a74c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a74c4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2A74C4u;
    SET_GPR_U32(ctx, 31, 0x2A74CCu);
    ctx->pc = 0x2A74C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A74C4u;
    // 0x2a74c8: 0x46006300  add.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2A74C4u, 0x2A74CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A74CCu;
label_2a74cc:
    // 0x2a74cc: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2a74ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2a74d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a74d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a74d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a74d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a74d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A74D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A74DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A74D8u;
        // 0x2a74dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A74D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A74E0u;
}
