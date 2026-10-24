#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r400_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r400
{
// Function: R400PreInit__Fv
// Address: 0x799220 - 0x799268
void R400PreInit__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R400PreInit__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x79925cu: goto label_79925c;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x799224: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x799228: 0x8c437a30  lw          $v1, 0x7A30($v0)
    ctx->pc = 0x799228u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A30u));
    // 0x79922c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x79922cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
    // 0x799230: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x799230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799234: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x799234u;
    {
        const bool branch_taken_0x799234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799234u;
        // 0x799238: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799234) {
            ctx->pc = 0x79925Cu;
            goto label_79925c;
        }
    }
    ctx->pc = 0x79923Cu;
    // 0x79923c: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x79923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799240: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799240u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799244: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x799244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799248: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799248u;
    {
        const bool branch_taken_0x799248 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x79924Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799248u;
        // 0x79924c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799248) {
            ctx->pc = 0x799260u;
            goto label_799260;
        }
    }
    ctx->pc = 0x799250u;
    // 0x799250: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799254: 0xc0a557c  jal         func_2955F0
    ctx->pc = 0x799254u;
    SET_GPR_U32(ctx, 31, 0x79925Cu);
    ctx->pc = 0x799258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799254u;
    // 0x799258: 0x24846ab0  addiu       $a0, $a0, 0x6AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2955F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2955F0u, 0x799254u, 0x79925Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79925Cu;
label_79925c:
    // 0x79925c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79925cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_799260:
    // 0x799260: 0x3e00008  jr          $ra
    ctx->pc = 0x799260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799260u;
        // 0x799264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799268u;
}
} // namespace gh_r400
