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

// Function: cCollisionSolidManage_ReleaseUnit_281940
// Address: 0x281940 - 0x281968
void cCollisionSolidManage_ReleaseUnit_281940_0x281940(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCollisionSolidManage_ReleaseUnit_281940_0x281940");
#endif

    if (__builtin_expect(ctx->pc != 0x281940u, 0)) {
        switch (ctx->pc) {
            case 0x281958u: goto label_281958;
            default: break;
        }
    }


    // 0x281940: 0x80282d  daddu       $a1, $a0, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281944: 0x27bdfff0  addiu       $sp, $sp, -0x10
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x281948: 0x3c040046  lui         $a0, 0x46
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x28194c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28194cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x281950: 0xc04d1fa  jal         func_1347E8
    SET_GPR_U32(ctx, 31, 0x281958u);
    ctx->pc = 0x281954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x281950u;
    // 0x281954: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &cCollisionSolidManage_ReleaseUnit_0x1347e8, 0x1347e8u, 0x281958u)) {
        return;
    }
label_281958:
    // 0x281958: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x281958u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28195c: 0x3e00008  jr          $ra
    ctx->pc = 0x28195Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28195Cu;
        // 0x281960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28195Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x281964: 0x0  nop
    // NOP
    ctx->pc = 0x281968u;
}