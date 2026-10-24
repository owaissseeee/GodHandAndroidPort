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

// Function: cEmSetParam_updateSetDataFlag
// Address: 0x295498 - 0x2954d0
void cEmSetParam_updateSetDataFlag_0x295498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEmSetParam_updateSetDataFlag_0x295498");
#endif

    switch (ctx->pc) {
        case 0x2954b4u: goto label_2954b4;
        default: break;
    }

    ctx->pc = 0x295498u;

    // 0x295498: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x295498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29549c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x29549cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x2954a0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2954a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2954a4: 0x24848658  addiu       $a0, $a0, -0x79A8
    ctx->pc = 0x2954a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936152));
    // 0x2954a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2954a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2954ac: 0xc0afbd8  jal         func_2BEF60
    ctx->pc = 0x2954ACu;
    SET_GPR_U32(ctx, 31, 0x2954B4u);
    ctx->pc = 0x2954B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2954ACu;
    // 0x2954b0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEF60u, 0x2954ACu, 0x2954B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2954B4u;
label_2954b4:
    // 0x2954b4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2954B4u;
    {
        const bool branch_taken_0x2954b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2954b4) {
            ctx->pc = 0x2954B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2954B4u;
            // 0x2954b8: 0xac500008  sw          $s0, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2954BCu;
            goto label_2954bc;
        }
    }
    ctx->pc = 0x2954BCu;
label_2954bc:
    // 0x2954bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2954bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2954c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2954c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2954c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2954C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2954C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2954C4u;
        // 0x2954c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2954C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2954CCu;
    // 0x2954cc: 0x0  nop
    ctx->pc = 0x2954ccu;
    // NOP
    ctx->pc = 0x2954d0u;
}
