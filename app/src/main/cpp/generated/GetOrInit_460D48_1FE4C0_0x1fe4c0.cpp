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

// Function: GetOrInit_460D48_1FE4C0
// Address: 0x1fe4c0 - 0x1fe500
void GetOrInit_460D48_1FE4C0_0x1fe4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetOrInit_460D48_1FE4C0_0x1fe4c0");
#endif

    switch (ctx->pc) {
        case 0x1fe4ecu: goto label_1fe4ec;
        default: break;
    }

    ctx->pc = 0x1fe4c0u;

    // 0x1fe4c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fe4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fe4c4: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x1fe4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x1fe4c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fe4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fe4cc: 0x8c620d48  lw          $v0, 0xD48($v1)
    ctx->pc = 0x1fe4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x460D48u));
    // 0x1fe4d0: 0x24700d48  addiu       $s0, $v1, 0xD48
    ctx->pc = 0x1fe4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3400));
    // 0x1fe4d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FE4D4u;
    {
        const bool branch_taken_0x1fe4d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FE4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4D4u;
        // 0x1fe4d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fe4d4) {
            ctx->pc = 0x1FE4ECu;
            goto label_1fe4ec;
        }
    }
    ctx->pc = 0x1FE4DCu;
    // 0x1fe4dc: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1fe4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1fe4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fe4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe4e4: 0xc0c7bb2  jal         func_31EEC8
    ctx->pc = 0x1FE4E4u;
    SET_GPR_U32(ctx, 31, 0x1FE4ECu);
    ctx->pc = 0x1FE4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE4E4u;
    // 0x1fe4e8: 0x24a5c4f8  addiu       $a1, $a1, -0x3B08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEC8u, 0x1FE4E4u, 0x1FE4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FE4ECu;
label_1fe4ec:
    // 0x1fe4ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fe4ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fe4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe4f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fe4f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fe4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE4F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE4F8u;
        // 0x1fe4fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE4F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE500u;
}
