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

// Function: func_0034C930
// Address: 0x34c930 - 0x34c990
void func_0034C930_0x34c930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034C930_0x34c930");
#endif

    ctx->pc = 0x34c930u;

    // 0x34c930: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x34c930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x34c934: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34c934u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34c938: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x34c938u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c93c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34c93cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34c940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c944: 0x24891310  addiu       $t1, $a0, 0x1310
    ctx->pc = 0x34c944u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4880));
    // 0x34c948: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x34c948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x34c94c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x34c94cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x34c950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x34c954: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x34c954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c958: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x34c958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x34c95c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x34c95cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c960: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x34c960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x34c964: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x34C964u;
    {
        const bool branch_taken_0x34c964 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C964u;
        // 0x34c968: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34c964) {
            ctx->pc = 0x34C980u;
            goto label_34c980;
        }
    }
    ctx->pc = 0x34C96Cu;
    // 0x34c96c: 0x8d25004c  lw          $a1, 0x4C($t1)
    ctx->pc = 0x34c96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x34c970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c974: 0x80d70b4  j           func_35C2D0
    ctx->pc = 0x34C974u;
    ctx->pc = 0x34C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34C974u;
    // 0x34c978: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C2D0u, 0x34C974u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x34C97Cu;
    // 0x34c97c: 0x0  nop
    ctx->pc = 0x34c97cu;
    // NOP
label_34c980:
    // 0x34c980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34c980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34c984: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x34c984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34c988: 0x3e00008  jr          $ra
    ctx->pc = 0x34C988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34C988u;
        // 0x34c98c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34C988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34C990u;
}
