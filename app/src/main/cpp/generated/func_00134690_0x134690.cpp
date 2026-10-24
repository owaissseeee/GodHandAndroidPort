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

// Function: func_00134690
// Address: 0x134690 - 0x1346c8
void func_00134690_0x134690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00134690_0x134690");
#endif

    switch (ctx->pc) {
        case 0x1346a8u: goto label_1346a8;
        default: break;
    }

    ctx->pc = 0x134690u;

    // 0x134690: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x134690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x134694: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x134694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x134698: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x134698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x13469c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1346a0: 0xac400d18  sw          $zero, 0xD18($v0)
    ctx->pc = 0x1346a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x460D18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x460D18u, _value); } while (0);
    // 0x1346a4: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x1346a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1346a8:
    // 0x1346a8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1346a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1346ac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1346acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1346b0: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x1346b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1346b4: 0x0  nop
    ctx->pc = 0x1346b4u;
    // NOP
    // 0x1346b8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1346B8u;
    {
        const bool branch_taken_0x1346b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1346BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346B8u;
        // 0x1346bc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1346b8) {
            ctx->pc = 0x1346A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1346a8;
        }
    }
    ctx->pc = 0x1346C0u;
    // 0x1346c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1346C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1346C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1346C0u;
        // 0x1346c4: 0xac800088  sw          $zero, 0x88($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1346C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1346C8u;
}
