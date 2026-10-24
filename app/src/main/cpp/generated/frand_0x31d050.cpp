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

// Function: frand
// Address: 0x31d050 - 0x31d098
void frand_0x31d050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("frand_0x31d050");
#endif

    switch (ctx->pc) {
        case 0x31d078u: goto label_31d078;
        default: break;
    }

    ctx->pc = 0x31d050u;

    // 0x31d050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x31d050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31d054: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x31d054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x31d058: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x31d058u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31d05c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x31d05cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x31d060: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31d060u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x31d064: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x31d064u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31d068: 0x46146d41  sub.s       $f21, $f13, $f20
    ctx->pc = 0x31d068u;
    ctx->f[21] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    // 0x31d06c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31d06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31d070: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x31D070u;
    SET_GPR_U32(ctx, 31, 0x31D078u);
    ctx->pc = 0x31D074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31D070u;
    // 0x31d074: 0x4600ad42  mul.s       $f21, $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x31D070u, 0x31D078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31D078u;
label_31d078:
    // 0x31d078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31d078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31d07c: 0x4615a500  add.s       $f20, $f20, $f21
    ctx->pc = 0x31d07cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x31d080: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x31d080u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
    // 0x31d084: 0x4614a800  add.s       $f0, $f21, $f20
    ctx->pc = 0x31d084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[21], ctx->f[20]);
    // 0x31d088: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x31d088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x31d08c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x31d08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31d090: 0x3e00008  jr          $ra
    ctx->pc = 0x31D090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31D090u;
        // 0x31d094: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31D090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31D098u;
}
