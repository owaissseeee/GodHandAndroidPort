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

// Function: func_003582C0
// Address: 0x3582c0 - 0x358328
void func_003582C0_0x3582c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003582C0_0x3582c0");
#endif

    ctx->pc = 0x3582c0u;

    // 0x3582c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3582c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3582c4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3582c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3582c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3582c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3582cc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x3582ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3582d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3582D0u;
    {
        const bool branch_taken_0x3582d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3582D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582D0u;
        // 0x3582d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582d0) {
            ctx->pc = 0x3582F0u;
            goto label_3582f0;
        }
    }
    ctx->pc = 0x3582D8u;
    // 0x3582d8: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x3582d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x3582dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3582dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3582e0: 0x34a50204  ori         $a1, $a1, 0x204
    ctx->pc = 0x3582e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)516);
    // 0x3582e4: 0x80d375c  j           func_34DD70
    ctx->pc = 0x3582E4u;
    ctx->pc = 0x3582E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3582E4u;
    // 0x3582e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x3582E4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3582ECu;
    // 0x3582ec: 0x0  nop
    ctx->pc = 0x3582ecu;
    // NOP
label_3582f0:
    // 0x3582f0: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x3582f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x3582f4: 0x2c4237d0  sltiu       $v0, $v0, 0x37D0
    ctx->pc = 0x3582f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14288) ? 1 : 0);
    // 0x3582f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3582F8u;
    {
        const bool branch_taken_0x3582f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3582FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3582F8u;
        // 0x3582fc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582f8) {
            ctx->pc = 0x358318u;
            goto label_358318;
        }
    }
    ctx->pc = 0x358300u;
    // 0x358300: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x358300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x358304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x358308: 0x34a50205  ori         $a1, $a1, 0x205
    ctx->pc = 0x358308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)517);
    // 0x35830c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x35830Cu;
    ctx->pc = 0x358310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35830Cu;
    // 0x358310: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x35830Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x358314u;
    // 0x358314: 0x0  nop
    ctx->pc = 0x358314u;
    // NOP
label_358318:
    // 0x358318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35831c: 0x3e00008  jr          $ra
    ctx->pc = 0x35831Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35831Cu;
        // 0x358320: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35831Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358324u;
    // 0x358324: 0x0  nop
    ctx->pc = 0x358324u;
    // NOP
    ctx->pc = 0x358328u;
}
