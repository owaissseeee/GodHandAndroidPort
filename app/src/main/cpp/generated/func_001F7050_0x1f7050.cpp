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

// Function: func_001F7050
// Address: 0x1f7050 - 0x1f70c8
void func_001F7050_0x1f7050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F7050_0x1f7050");
#endif

    switch (ctx->pc) {
        case 0x1f7088u: goto label_1f7088;
        case 0x1f7090u: goto label_1f7090;
        case 0x1f70a0u: goto label_1f70a0;
        case 0x1f70a8u: goto label_1f70a8;
        default: break;
    }

    ctx->pc = 0x1f7050u;

    // 0x1f7050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f7050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f7054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f7054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f7058: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x1f7058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1f705c: 0x2c620033  sltiu       $v0, $v1, 0x33
    ctx->pc = 0x1f705cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
    // 0x1f7060: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7060u;
    {
        const bool branch_taken_0x1f7060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7060u;
        // 0x1f7064: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7060) {
            ctx->pc = 0x1F70B8u;
            goto label_1f70b8;
        }
    }
    ctx->pc = 0x1F7068u;
    // 0x1f7068: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f7068u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f706c: 0x2442c100  addiu       $v0, $v0, -0x3F00
    ctx->pc = 0x1f706cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951168));
    // 0x1f7070: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f7070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f7074: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1f7074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f7078: 0x800008  jr          $a0
    ctx->pc = 0x1F7078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F7080u: goto label_1f7080;
            case 0x1F7098u: goto label_1f7098;
            case 0x1F70B0u: goto label_1f70b0;
            case 0x1F70B8u: goto label_1f70b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7078u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1F7080u;
label_1f7080:
    // 0x1f7080: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F7080u;
    SET_GPR_U32(ctx, 31, 0x1F7088u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F7080u, 0x1F7088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7088u;
label_1f7088:
    // 0x1f7088: 0xc04aeae  jal         func_12BAB8
    ctx->pc = 0x1F7088u;
    SET_GPR_U32(ctx, 31, 0x1F7090u);
    ctx->pc = 0x1F708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7088u;
    // 0x1f708c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BAB8u, 0x1F7088u, 0x1F7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7090u;
label_1f7090:
    // 0x1f7090: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1F7090u;
    {
        const bool branch_taken_0x1f7090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7090u;
        // 0x1f7094: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7090) {
            ctx->pc = 0x1F70C0u;
            goto label_1f70c0;
        }
    }
    ctx->pc = 0x1F7098u;
label_1f7098:
    // 0x1f7098: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x1F7098u;
    SET_GPR_U32(ctx, 31, 0x1F70A0u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x1F7098u, 0x1F70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70A0u;
label_1f70a0:
    // 0x1f70a0: 0xc04afd4  jal         func_12BF50
    ctx->pc = 0x1F70A0u;
    SET_GPR_U32(ctx, 31, 0x1F70A8u);
    ctx->pc = 0x1F70A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F70A0u;
    // 0x1f70a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BF50u, 0x1F70A0u, 0x1F70A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F70A8u;
label_1f70a8:
    // 0x1f70a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F70A8u;
    {
        const bool branch_taken_0x1f70a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70A8u;
        // 0x1f70ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70a8) {
            ctx->pc = 0x1F70C0u;
            goto label_1f70c0;
        }
    }
    ctx->pc = 0x1F70B0u;
label_1f70b0:
    // 0x1f70b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F70B0u;
    {
        const bool branch_taken_0x1f70b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70B0u;
        // 0x1f70b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f70b0) {
            ctx->pc = 0x1F70BCu;
            goto label_1f70bc;
        }
    }
    ctx->pc = 0x1F70B8u;
label_1f70b8:
    // 0x1f70b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f70b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f70bc:
    // 0x1f70bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f70bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f70c0:
    // 0x1f70c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F70C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F70C0u;
        // 0x1f70c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F70C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F70C8u;
}
