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

// Function: func_0031D168
// Address: 0x31d168 - 0x31d1b0
void func_0031D168_0x31d168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0031D168_0x31d168");
#endif

    switch (ctx->pc) {
        case 0x31d190u: goto label_31d190;
        default: break;
    }

    ctx->pc = 0x31d168u;

    // 0x31d168: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31d168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31d16c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31d16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31d170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31d170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d174: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x31d174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31d178: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31d178u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31d17c: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x31d17cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31d180: 0x46146d41  sub.s       $f21, $f13, $f20
    ctx->pc = 0x31d180u;
    ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    // 0x31d184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d188: 0xc0c7442  jal         func_31D108
    ctx->pc = 0x31D188u;
    SET_GPR_U32(ctx, 31, 0x31D190u);
    ctx->pc = 0x31D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D188u;
    // 0x31d18c: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D108u, 0x31D188u, 0x31D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D190u;
label_31d190:
    // 0x31d190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d194: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x31d194u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x31d198: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x31d198u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x31d19c: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x31d19cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x31d1a0: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x31d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31d1a4: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x31d1a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31d1a8: 0x3e00008  jr          $ra
    ctx->pc = 0x31D1A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D1A8u;
        // 0x31d1ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D1A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D1B0u;
}
