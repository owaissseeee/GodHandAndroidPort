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

// Function: func_00342958
// Address: 0x342958 - 0x342988
void func_00342958_0x342958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342958_0x342958");
#endif

    ctx->pc = 0x342958u;

    // 0x342958: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x342958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x34295c: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x34295cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x342960: 0x344249e4  ori         $v0, $v0, 0x49E4
    ctx->pc = 0x342960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18916);
    // 0x342964: 0x34039c40  ori         $v1, $zero, 0x9C40
    ctx->pc = 0x342964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40000);
    // 0x342968: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x342968u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x34296c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x34296cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x342970: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x342970u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x342974: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x342974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x342978: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x342978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x34297c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x34297cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x342980: 0x3e00008  jr          $ra
    ctx->pc = 0x342980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342980u;
        // 0x342984: 0x471021  addu        $v0, $v0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342988u;
}
