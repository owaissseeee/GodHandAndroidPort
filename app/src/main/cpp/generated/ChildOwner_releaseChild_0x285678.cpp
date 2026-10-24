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

// Function: ChildOwner_releaseChild
// Address: 0x285678 - 0x2856c0
void ChildOwner_releaseChild_0x285678(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChildOwner_releaseChild_0x285678");
#endif

    switch (ctx->pc) {
        case 0x285698u: goto label_285698;
        case 0x2856acu: goto label_2856ac;
        default: break;
    }

    ctx->pc = 0x285678u;

    // 0x285678: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x285678u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28567c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x285680: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x285680u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285684: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x285684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x285688: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x285688u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x28568c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28568cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285690: 0xc04d1fa  jal         func_1347E8
    ctx->pc = 0x285690u;
    SET_GPR_U32(ctx, 31, 0x285698u);
    ctx->pc = 0x285694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285690u;
    // 0x285694: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1347E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1347E8u, 0x285690u, 0x285698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x285698u;
label_285698:
    // 0x285698: 0x8e0415ec  lw          $a0, 0x15EC($s0)
    ctx->pc = 0x285698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5612)));
    // 0x28569c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28569Cu;
    {
        const bool branch_taken_0x28569c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28569c) {
            ctx->pc = 0x2856A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28569Cu;
            // 0x2856a0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2856B4u;
            goto label_2856b4;
        }
    }
    ctx->pc = 0x2856A4u;
    // 0x2856a4: 0xc06de6c  jal         func_1B79B0
    ctx->pc = 0x2856A4u;
    SET_GPR_U32(ctx, 31, 0x2856ACu);
    ctx->pc = 0x1B79B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B79B0u, 0x2856A4u, 0x2856ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2856ACu;
label_2856ac:
    // 0x2856ac: 0xae0015ec  sw          $zero, 0x15EC($s0)
    ctx->pc = 0x2856acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5612), GPR_U32(ctx, 0));
    // 0x2856b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2856b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2856b4:
    // 0x2856b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2856b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2856b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2856B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2856BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2856B8u;
        // 0x2856bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2856B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2856C0u;
}
