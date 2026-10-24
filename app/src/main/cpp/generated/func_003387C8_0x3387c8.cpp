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

// Function: func_003387C8
// Address: 0x3387c8 - 0x338818
void func_003387C8_0x3387c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003387C8_0x3387c8");
#endif

    ctx->pc = 0x3387c8u;

    // 0x3387c8: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3387c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3387cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3387ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3387d0: 0x8c430710  lw          $v1, 0x710($v0)
    ctx->pc = 0x3387d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0710u));
    // 0x3387d4: 0x28c9fff1  slti        $t1, $a2, -0xF
    ctx->pc = 0x3387d4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967281) ? 1 : 0);
    // 0x3387d8: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3387D8u;
    {
        const bool branch_taken_0x3387d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x3387DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387D8u;
        // 0x3387dc: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387d8) {
            ctx->pc = 0x3387F0u;
            goto label_3387f0;
        }
    }
    ctx->pc = 0x3387E0u;
    // 0x3387e0: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x3387e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x3387e4: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x3387e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x3387e8: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3387E8u;
    {
        const bool branch_taken_0x3387e8 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x3387e8) {
            ctx->pc = 0x338810u;
            goto label_338810;
        }
    }
    ctx->pc = 0x3387F0u;
label_3387f0:
    // 0x3387f0: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x3387f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x3387f4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x3387f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3387f8: 0xc9100a  movz        $v0, $a2, $t1
    ctx->pc = 0x3387f8u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x3387fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3387fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x338800: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x338800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x338804: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x338804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x338808: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x338808u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x33880c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x33880cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_338810:
    // 0x338810: 0x3e00008  jr          $ra
    ctx->pc = 0x338810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338818u;
}
