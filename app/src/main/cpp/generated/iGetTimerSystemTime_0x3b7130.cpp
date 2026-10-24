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

// Function: iGetTimerSystemTime
// Address: 0x3b7130 - 0x3b7180
void iGetTimerSystemTime_0x3b7130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("iGetTimerSystemTime_0x3b7130");
#endif

    ctx->pc = 0x3b7130u;

    // 0x3b7130: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3b7130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3b7134: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x3b7134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x3b7138: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x3b7138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x3b713c: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x3b713cu;
    SET_GPR_ZE32(ctx, 2, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x3b7140: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x3b7140u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u));
    // 0x3b7144: 0xdc8abe90  ld          $t2, -0x4170($a0)
    ctx->pc = 0x3b7144u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x3FBE90u));
    // 0x3b7148: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x3b7148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x3b714c: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B714Cu;
    {
        const bool branch_taken_0x3b714c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B7150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B714Cu;
        // 0x3b7150: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b714c) {
            ctx->pc = 0x3B715Cu;
            goto label_3b715c;
        }
    }
    ctx->pc = 0x3B7154u;
    // 0x3b7154: 0x9c620000  lwu         $v0, 0x0($v1)
    ctx->pc = 0x3b7154u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3b7158: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x3b7158u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_3b715c:
    // 0x3b715c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x3b715cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x3b7160: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x3b7160u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x3b7164: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x3b7164u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
    // 0x3b7168: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x3b7168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x3b716c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x3b716cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x3b7170: 0x1221014  dsllv       $v0, $v0, $t1
    ctx->pc = 0x3b7170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x3b7174: 0x3e00008  jr          $ra
    ctx->pc = 0x3B7174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B7174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B717Cu;
    // 0x3b717c: 0x0  nop
    ctx->pc = 0x3b717cu;
    // NOP
    ctx->pc = 0x3b7180u;
}
