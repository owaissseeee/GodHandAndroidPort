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

// Function: sfsee_IsMpsStream
// Address: 0x359ab0 - 0x359af0
void sfsee_IsMpsStream_0x359ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sfsee_IsMpsStream_0x359ab0");
#endif

    if (__builtin_expect(ctx->pc != 0x359ab0u, 0)) {
        switch (ctx->pc) {
            case 0x359ac0u: goto label_359ac0;
            default: break;
        }
    }


    // 0x359ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x359ab4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x359ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x359ab8: 0xc0d70e0  jal         func_35C380
    SET_GPR_U32(ctx, 31, 0x359AC0u);
    ctx->pc = 0x359ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x359AB8u;
    // 0x359abc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj35C0_IsIndexedSet_1F3C_C380_0x35c380, 0x35c380u, 0x359ac0u)) {
        return;
    }
    ctx->pc = 0x359AC0u;
label_359ac0:
    // 0x359ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x359ac4: 0x2102b  sltu        $v0, $zero, $v0
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x359ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x359AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x359AC8u;
        // 0x359acc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x359AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x359ad0: 0x27bd0020  addiu       $sp, $sp, 0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x359ad4: 0x0  nop
    // NOP
    // 0x359ad8: 0x27bd0030  addiu       $sp, $sp, 0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x359adc: 0x0  nop
    // NOP
    // 0x359ae0: 0x27bd0010  addiu       $sp, $sp, 0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x359ae4: 0x0  nop
    // NOP
    // 0x359ae8: 0x27bd0020  addiu       $sp, $sp, 0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x359aec: 0x0  nop
    // NOP
    ctx->pc = 0x359af0u;
}