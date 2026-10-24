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

// Function: cEmWrap_setMutekiTimer
// Address: 0x295b80 - 0x295bc0
void cEmWrap_setMutekiTimer_0x295b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmWrap_setMutekiTimer_0x295b80");
#endif

    switch (ctx->pc) {
        case 0x295b9cu: goto label_295b9c;
        default: break;
    }

    ctx->pc = 0x295b80u;

    // 0x295b80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295b84: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x295b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x295b88: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x295b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x295b8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x295b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295b90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x295b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x295b94: 0xc0a565e  jal         func_295978
    ctx->pc = 0x295B94u;
    SET_GPR_U32(ctx, 31, 0x295B9Cu);
    ctx->pc = 0x295B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295B94u;
    // 0x295b98: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295978u, 0x295B94u, 0x295B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x295B9Cu;
label_295b9c:
    // 0x295b9c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x295B9Cu;
    {
        const bool branch_taken_0x295b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x295b9c) {
            ctx->pc = 0x295BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295B9Cu;
            // 0x295ba0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x295BB0u;
            goto label_295bb0;
        }
    }
    ctx->pc = 0x295BA4u;
    // 0x295ba4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x295ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295ba8: 0xe454054c  swc1        $f20, 0x54C($v0)
    ctx->pc = 0x295ba8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1356), bits); }
    // 0x295bac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x295bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_295bb0:
    // 0x295bb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x295bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295bb4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x295bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x295bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x295BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295BB8u;
        // 0x295bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x295BC0u;
}
