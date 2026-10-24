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

// Function: MarkObj_setMarkFlag
// Address: 0x1e4438 - 0x1e44a8
void MarkObj_setMarkFlag_0x1e4438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MarkObj_setMarkFlag_0x1e4438");
#endif

    switch (ctx->pc) {
        case 0x1e4488u: goto label_1e4488;
        case 0x1e449cu: goto label_1e449c;
        default: break;
    }

    ctx->pc = 0x1e4438u;

    // 0x1e4438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e4438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e443c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1e443cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1e4440: 0x2ca20003  sltiu       $v0, $a1, 0x3
    ctx->pc = 0x1e4440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1e4444: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E4444u;
    {
        const bool branch_taken_0x1e4444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4444u;
        // 0x1e4448: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4444) {
            ctx->pc = 0x1E449Cu;
            goto label_1e449c;
        }
    }
    ctx->pc = 0x1E444Cu;
    // 0x1e444c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E444Cu;
    {
        const bool branch_taken_0x1e444c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E444Cu;
        // 0x1e4450: 0x512c0  sll         $v0, $a1, 11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e444c) {
            ctx->pc = 0x1E4460u;
            goto label_1e4460;
        }
    }
    ctx->pc = 0x1E4454u;
    // 0x1e4454: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x1e4454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x1e4458: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1E4458u;
    {
        const bool branch_taken_0x1e4458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4458u;
        // 0x1e445c: 0xa48204c0  sh          $v0, 0x4C0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1216), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4458) {
            ctx->pc = 0x1E449Cu;
            goto label_1e449c;
        }
    }
    ctx->pc = 0x1E4460u;
label_1e4460:
    // 0x1e4460: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E4460u;
    {
        const bool branch_taken_0x1e4460 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4460u;
        // 0x1e4464: 0xa48004c0  sh          $zero, 0x4C0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1216), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4460) {
            ctx->pc = 0x1E447Cu;
            goto label_1e447c;
        }
    }
    ctx->pc = 0x1E4468u;
    // 0x1e4468: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e4468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e446c: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E446Cu;
    {
        const bool branch_taken_0x1e446c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1E4470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E446Cu;
        // 0x1e4470: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e446c) {
            ctx->pc = 0x1E4490u;
            goto label_1e4490;
        }
    }
    ctx->pc = 0x1E4474u;
    // 0x1e4474: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1E4474u;
    {
        const bool branch_taken_0x1e4474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4474) {
            ctx->pc = 0x1E44A0u;
            goto label_1e44a0;
        }
    }
    ctx->pc = 0x1E447Cu;
label_1e447c:
    // 0x1e447c: 0x8c840480  lw          $a0, 0x480($a0)
    ctx->pc = 0x1e447cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x1e4480: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4480u;
    SET_GPR_U32(ctx, 31, 0x1E4488u);
    ctx->pc = 0x1E4484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4480u;
    // 0x1e4484: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4480u, 0x1E4488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4488u;
label_1e4488:
    // 0x1e4488: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1E4488u;
    {
        const bool branch_taken_0x1e4488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4488u;
        // 0x1e448c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4488) {
            ctx->pc = 0x1E44A0u;
            goto label_1e44a0;
        }
    }
    ctx->pc = 0x1E4490u;
label_1e4490:
    // 0x1e4490: 0x8c840480  lw          $a0, 0x480($a0)
    ctx->pc = 0x1e4490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1152)));
    // 0x1e4494: 0xc0b6cac  jal         func_2DB2B0
    ctx->pc = 0x1E4494u;
    SET_GPR_U32(ctx, 31, 0x1E449Cu);
    ctx->pc = 0x1E4498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4494u;
    // 0x1e4498: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB2B0u, 0x1E4494u, 0x1E449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E449Cu;
label_1e449c:
    // 0x1e449c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e449cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e44a0:
    // 0x1e44a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E44A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E44A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E44A0u;
        // 0x1e44a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E44A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E44A8u;
}
