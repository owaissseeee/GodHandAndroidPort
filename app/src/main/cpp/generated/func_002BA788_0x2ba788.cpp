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

// Function: func_002BA788
// Address: 0x2ba788 - 0x2ba7b8
void func_002BA788_0x2ba788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BA788_0x2ba788");
#endif

    switch (ctx->pc) {
        case 0x2ba788u: goto label_2ba788;
        case 0x2ba78cu: goto label_2ba78c;
        case 0x2ba790u: goto label_2ba790;
        case 0x2ba794u: goto label_2ba794;
        case 0x2ba798u: goto label_2ba798;
        case 0x2ba79cu: goto label_2ba79c;
        case 0x2ba7a0u: goto label_2ba7a0;
        case 0x2ba7a4u: goto label_2ba7a4;
        case 0x2ba7a8u: goto label_2ba7a8;
        case 0x2ba7acu: goto label_2ba7ac;
        case 0x2ba7b0u: goto label_2ba7b0;
        case 0x2ba7b4u: goto label_2ba7b4;
        default: break;
    }

    ctx->pc = 0x2ba788u;

label_2ba788:
    // 0x2ba788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ba788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2ba78c:
    // 0x2ba78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ba78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ba790:
    // 0x2ba790: 0xe48c0110  swc1        $f12, 0x110($a0)
    ctx->pc = 0x2ba790u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 272), bits); }
label_2ba794:
    // 0x2ba794: 0x8c820100  lw          $v0, 0x100($a0)
    ctx->pc = 0x2ba794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 256)));
label_2ba798:
    // 0x2ba798: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x2ba798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2ba79c:
    // 0x2ba79c: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2ba79cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2ba7a0:
    // 0x2ba7a0: 0xa0f809  jalr        $a1
label_2ba7a4:
    if (ctx->pc == 0x2BA7A4u) {
        ctx->pc = 0x2BA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7A0u;
        // 0x2ba7a4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7A8u;
        goto label_2ba7a8;
    }
    ctx->pc = 0x2BA7A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x2BA7A8u);
        ctx->pc = 0x2BA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7A0u;
        // 0x2ba7a4: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA7A0u, 0x2BA7A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2BA7A8u;
label_2ba7a8:
    // 0x2ba7a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ba7a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba7ac:
    // 0x2ba7ac: 0x3e00008  jr          $ra
label_2ba7b0:
    if (ctx->pc == 0x2BA7B0u) {
        ctx->pc = 0x2BA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7ACu;
        // 0x2ba7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7B4u;
        goto label_2ba7b4;
    }
    ctx->pc = 0x2BA7ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7ACu;
        // 0x2ba7b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA7ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA7B4u;
label_2ba7b4:
    // 0x2ba7b4: 0x0  nop
    ctx->pc = 0x2ba7b4u;
    // NOP
    ctx->pc = 0x2ba7b8u;
}
