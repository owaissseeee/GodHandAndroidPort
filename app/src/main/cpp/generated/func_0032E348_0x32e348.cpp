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

// Function: func_0032E348
// Address: 0x32e348 - 0x32e3a0
void func_0032E348_0x32e348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032E348_0x32e348");
#endif

    switch (ctx->pc) {
        case 0x32e360u: goto label_32e360;
        default: break;
    }

    ctx->pc = 0x32e348u;

    // 0x32e348: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x32e348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x32e34c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E34Cu;
    {
        const bool branch_taken_0x32e34c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x32E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E34Cu;
        // 0x32e350: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e34c) {
            ctx->pc = 0x32E368u;
            goto label_32e368;
        }
    }
    ctx->pc = 0x32E354u;
    // 0x32e354: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x32e354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x32e358: 0xc0cff2c  jal         func_33FCB0
    ctx->pc = 0x32E358u;
    SET_GPR_U32(ctx, 31, 0x32E360u);
    ctx->pc = 0x32E35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E358u;
    // 0x32e35c: 0x24842e20  addiu       $a0, $a0, 0x2E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FCB0u, 0x32E358u, 0x32E360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32E360u;
label_32e360:
    // 0x32e360: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x32E360u;
    {
        const bool branch_taken_0x32e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32E364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E360u;
        // 0x32e364: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32e360) {
            ctx->pc = 0x32E390u;
            goto label_32e390;
        }
    }
    ctx->pc = 0x32E368u;
label_32e368:
    // 0x32e368: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x32e368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x32e36c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x32e36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x32e370: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x32e370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x32e374: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32E374u;
    {
        const bool branch_taken_0x32e374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32e374) {
            ctx->pc = 0x32E378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32E374u;
            // 0x32e378: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32E390u;
            goto label_32e390;
        }
    }
    ctx->pc = 0x32E37Cu;
    // 0x32e37c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x32e37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32e380: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e384: 0x80cbd4a  j           func_32F528
    ctx->pc = 0x32E384u;
    ctx->pc = 0x32E388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32E384u;
    // 0x32e388: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F528u, 0x32E384u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32E38Cu;
    // 0x32e38c: 0x0  nop
    ctx->pc = 0x32e38cu;
    // NOP
label_32e390:
    // 0x32e390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x32e390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32e394: 0x3e00008  jr          $ra
    ctx->pc = 0x32E394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32E398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32E394u;
        // 0x32e398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32E394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32E39Cu;
    // 0x32e39c: 0x0  nop
    ctx->pc = 0x32e39cu;
    // NOP
    ctx->pc = 0x32e3a0u;
}
