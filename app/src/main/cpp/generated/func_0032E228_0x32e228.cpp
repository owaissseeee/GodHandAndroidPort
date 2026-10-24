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

// Function: func_0032E228
// Address: 0x32e228 - 0x32e280
void func_0032E228_0x32e228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E228_0x32e228");
#endif

    switch (ctx->pc) {
        case 0x32e240u: goto label_32e240;
        default: break;
    }

    ctx->pc = 0x32e228u;

    // 0x32e228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e22c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E22Cu;
    {
        const bool branch_taken_0x32e22c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E22Cu;
        // 0x32e230: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e22c) {
            ctx->pc = 0x32E248u;
            goto label_32e248;
        }
    }
    ctx->pc = 0x32E234u;
    // 0x32e234: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32e234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32e238: 0xc0cff2c  jal         func_33FCB0
    ctx->pc = 0x32E238u;
    SET_GPR_U32(ctx, 31, 0x32E240u);
    ctx->pc = 0x32E23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E238u;
    // 0x32e23c: 0x24842db0  addiu       $a0, $a0, 0x2DB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32E238u, 0x32E240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E240u;
label_32e240:
    // 0x32e240: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32E240u;
    {
        const bool branch_taken_0x32e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E240u;
        // 0x32e244: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e240) {
            ctx->pc = 0x32E270u;
            goto label_32e270;
        }
    }
    ctx->pc = 0x32E248u;
label_32e248:
    // 0x32e248: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x32e248u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32e24c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32e250: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x32e250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x32e254: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E254u;
    {
        const bool branch_taken_0x32e254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e254) {
            ctx->pc = 0x32E258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E254u;
            // 0x32e258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E270u;
            goto label_32e270;
        }
    }
    ctx->pc = 0x32E25Cu;
    // 0x32e25c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32e25cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32e260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e264: 0x80cbd32  j           func_32F4C8
    ctx->pc = 0x32E264u;
    ctx->pc = 0x32E268u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E264u;
    // 0x32e268: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F4C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F4C8u, 0x32E264u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E26Cu;
    // 0x32e26c: 0x0  nop
    ctx->pc = 0x32e26cu;
    // NOP
label_32e270:
    // 0x32e270: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e274: 0x3e00008  jr          $ra
    ctx->pc = 0x32E274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E274u;
        // 0x32e278: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E27Cu;
    // 0x32e27c: 0x0  nop
    ctx->pc = 0x32e27cu;
    // NOP
    ctx->pc = 0x32e280u;
}
