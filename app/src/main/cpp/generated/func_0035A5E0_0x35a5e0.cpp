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

// Function: func_0035A5E0
// Address: 0x35a5e0 - 0x35a620
void func_0035A5E0_0x35a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A5E0_0x35a5e0");
#endif

    ctx->pc = 0x35a5e0u;

    // 0x35a5e0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x35a5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a5e4: 0x8c850294  lw          $a1, 0x294($a0)
    ctx->pc = 0x35a5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 660)));
    // 0x35a5e8: 0x8c820298  lw          $v0, 0x298($a0)
    ctx->pc = 0x35a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 664)));
    // 0x35a5ec: 0x8c83029c  lw          $v1, 0x29C($a0)
    ctx->pc = 0x35a5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 668)));
    // 0x35a5f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x35a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x35a5f4: 0xc2202a  slt         $a0, $a2, $v0
    ctx->pc = 0x35a5f4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x35a5f8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x35a5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x35a5fc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35A5FCu;
    {
        const bool branch_taken_0x35a5fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x35A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A5FCu;
        // 0x35a600: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a5fc) {
            ctx->pc = 0x35A614u;
            goto label_35a614;
        }
    }
    ctx->pc = 0x35A604u;
    // 0x35a604: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x35a604u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x35a608: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x35a608u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x35a60c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x35a60cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x35a610: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x35a610u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_35a614:
    // 0x35a614: 0x3e00008  jr          $ra
    ctx->pc = 0x35A614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A614u;
        // 0x35a618: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A61Cu;
    // 0x35a61c: 0x0  nop
    ctx->pc = 0x35a61cu;
    // NOP
    ctx->pc = 0x35a620u;
}
