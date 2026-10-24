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

// Function: func_00378070
// Address: 0x378070 - 0x3780b0
void func_00378070_0x378070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378070_0x378070");
#endif

    ctx->pc = 0x378070u;

    // 0x378070: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x378070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x378074: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x378074u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x378078: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x378078u;
    {
        const bool branch_taken_0x378078 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x37807Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378078u;
        // 0x37807c: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378078) {
            ctx->pc = 0x37808Cu;
            goto label_37808c;
        }
    }
    ctx->pc = 0x378080u;
    // 0x378080: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x378080u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x378084: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x378084u;
    {
        const bool branch_taken_0x378084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378084u;
        // 0x378088: 0x65102a  slt         $v0, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x378084) {
            ctx->pc = 0x378094u;
            goto label_378094;
        }
    }
    ctx->pc = 0x37808Cu;
label_37808c:
    // 0x37808c: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x37808cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x378090: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x378090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_378094:
    // 0x378094: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x378094u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x378098: 0x94820006  lhu         $v0, 0x6($a0)
    ctx->pc = 0x378098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x37809c: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x37809cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x3780a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3780a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3780a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3780A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3780A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780A4u;
        // 0x3780a8: 0xa4820006  sh          $v0, 0x6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3780A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3780ACu;
    // 0x3780ac: 0x0  nop
    ctx->pc = 0x3780acu;
    // NOP
    ctx->pc = 0x3780b0u;
}
