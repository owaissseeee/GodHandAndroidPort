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

// Function: func_00338788
// Address: 0x338788 - 0x3387c8
void func_00338788_0x338788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00338788_0x338788");
#endif

    ctx->pc = 0x338788u;

    // 0x338788: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x338788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x33878c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x33878cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338790: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x338790u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x338794: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x338794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x338798: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x338798u;
    {
        const bool branch_taken_0x338798 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x33879Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338798u;
        // 0x33879c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338798) {
            ctx->pc = 0x3387B0u;
            goto label_3387b0;
        }
    }
    ctx->pc = 0x3387A0u;
    // 0x3387a0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3387a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3387a4: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x3387a4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x3387a8: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3387A8u;
    {
        const bool branch_taken_0x3387a8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3387a8) {
            ctx->pc = 0x3387C0u;
            goto label_3387c0;
        }
    }
    ctx->pc = 0x3387B0u;
label_3387b0:
    // 0x3387b0: 0x28a3fc19  slti        $v1, $a1, -0x3E7
    ctx->pc = 0x3387b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966297) ? 1 : 0);
    // 0x3387b4: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x3387b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
    // 0x3387b8: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x3387b8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x3387bc: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x3387bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
label_3387c0:
    // 0x3387c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3387C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3387C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3387C8u;
}
