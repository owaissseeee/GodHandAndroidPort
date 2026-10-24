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

// Function: Obj0000_Get_D_003C23A4_By_Short_A1p2_2B1270
// Address: 0x2b1270 - 0x2b1290
void Obj0000_Get_D_003C23A4_By_Short_A1p2_2B1270_0x2b1270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Obj0000_Get_D_003C23A4_By_Short_A1p2_2B1270_0x2b1270");
#endif

    ctx->pc = 0x2b1270u;

    // 0x2b1270: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x2b1270u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x2b1274: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2b1274u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2b1278: 0x8c8323a4  lw          $v1, 0x23A4($a0)
    ctx->pc = 0x2b1278u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C23A4u));
    // 0x2b127c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2b127cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2b1280: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b1284: 0x3e00008  jr          $ra
    ctx->pc = 0x2B1284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B1288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1284u;
        // 0x2b1288: 0x8c620bdc  lw          $v0, 0xBDC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3036)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B128Cu;
    // 0x2b128c: 0x0  nop
    ctx->pc = 0x2b128cu;
    // NOP
    ctx->pc = 0x2b1290u;
}
