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

// Function: GetSingleton785FE8_1A9638
// Address: 0x1a9638 - 0x1a9688
void GetSingleton785FE8_1A9638_0x1a9638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSingleton785FE8_1A9638_0x1a9638");
#endif

    switch (ctx->pc) {
        case 0x1a965cu: goto label_1a965c;
        case 0x1a9674u: goto label_1a9674;
        default: break;
    }

    ctx->pc = 0x1a9638u;

    // 0x1a9638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a9638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a963c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1a963cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1a9640: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a9640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a9644: 0x8c625fe8  lw          $v0, 0x5FE8($v1)
    ctx->pc = 0x1a9644u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x785FE8u));
    // 0x1a9648: 0x24705fe8  addiu       $s0, $v1, 0x5FE8
    ctx->pc = 0x1a9648u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 24552));
    // 0x1a964c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A964Cu;
    {
        const bool branch_taken_0x1a964c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A964Cu;
        // 0x1a9650: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a964c) {
            ctx->pc = 0x1A9674u;
            goto label_1a9674;
        }
    }
    ctx->pc = 0x1A9654u;
    // 0x1a9654: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1A9654u;
    SET_GPR_U32(ctx, 31, 0x1A965Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1A9654u, 0x1A965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A965Cu;
label_1a965c:
    // 0x1a965c: 0x3c050042  lui         $a1, 0x42
    ctx->pc = 0x1a965cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)66 << 16));
    // 0x1a9660: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1a9660u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1a9664: 0x24a57b08  addiu       $a1, $a1, 0x7B08
    ctx->pc = 0x1a9664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31496));
    // 0x1a9668: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1a9668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1a966c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1A966Cu;
    SET_GPR_U32(ctx, 31, 0x1A9674u);
    ctx->pc = 0x1A9670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A966Cu;
    // 0x1a9670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1A966Cu, 0x1A9674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9674u;
label_1a9674:
    // 0x1a9674: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a9674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a9678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a967c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a967cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a9680: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9680u;
        // 0x1a9684: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9688u;
}
