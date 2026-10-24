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

// Function: func_0033B568
// Address: 0x33b568 - 0x33b5c8
void func_0033B568_0x33b568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033B568_0x33b568");
#endif

    switch (ctx->pc) {
        case 0x33b568u: goto label_33b568;
        case 0x33b56cu: goto label_33b56c;
        case 0x33b570u: goto label_33b570;
        case 0x33b574u: goto label_33b574;
        case 0x33b578u: goto label_33b578;
        case 0x33b57cu: goto label_33b57c;
        case 0x33b580u: goto label_33b580;
        case 0x33b584u: goto label_33b584;
        case 0x33b588u: goto label_33b588;
        case 0x33b58cu: goto label_33b58c;
        case 0x33b590u: goto label_33b590;
        case 0x33b594u: goto label_33b594;
        case 0x33b598u: goto label_33b598;
        case 0x33b59cu: goto label_33b59c;
        case 0x33b5a0u: goto label_33b5a0;
        case 0x33b5a4u: goto label_33b5a4;
        case 0x33b5a8u: goto label_33b5a8;
        case 0x33b5acu: goto label_33b5ac;
        case 0x33b5b0u: goto label_33b5b0;
        case 0x33b5b4u: goto label_33b5b4;
        case 0x33b5b8u: goto label_33b5b8;
        case 0x33b5bcu: goto label_33b5bc;
        case 0x33b5c0u: goto label_33b5c0;
        case 0x33b5c4u: goto label_33b5c4;
        default: break;
    }

    ctx->pc = 0x33b568u;

label_33b568:
    // 0x33b568: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33b568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33b56c:
    // 0x33b56c: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_33b570:
    // 0x33b570: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33b570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33b574:
    // 0x33b574: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33b574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_33b578:
    // 0x33b578: 0x244288a0  addiu       $v0, $v0, -0x7760
    ctx->pc = 0x33b578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936736));
label_33b57c:
    // 0x33b57c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33b57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33b580:
    // 0x33b580: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_33b584:
    if (ctx->pc == 0x33B584u) {
        ctx->pc = 0x33B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B580u;
        // 0x33b584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B588u;
        goto label_33b588;
    }
    ctx->pc = 0x33B580u;
    {
        const bool branch_taken_0x33b580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B580u;
        // 0x33b584: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b580) {
            ctx->pc = 0x33B5B8u;
            goto label_33b5b8;
        }
    }
    ctx->pc = 0x33B588u;
label_33b588:
    // 0x33b588: 0x60f809  jalr        $v1
label_33b58c:
    if (ctx->pc == 0x33B58Cu) {
        ctx->pc = 0x33B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B588u;
        // 0x33b58c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B590u;
        goto label_33b590;
    }
    ctx->pc = 0x33B588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33B590u);
        ctx->pc = 0x33B58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B588u;
        // 0x33b58c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B588u, 0x33B590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33B590u;
label_33b590:
    // 0x33b590: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x33b590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_33b594:
    // 0x33b594: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x33b594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_33b598:
    // 0x33b598: 0x2444994c  addiu       $a0, $v0, -0x66B4
    ctx->pc = 0x33b598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941004));
label_33b59c:
    // 0x33b59c: 0x24639948  addiu       $v1, $v1, -0x66B8
    ctx->pc = 0x33b59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941000));
label_33b5a0:
    // 0x33b5a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33b5a4:
    // 0x33b5a4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_33b5a8:
    if (ctx->pc == 0x33B5A8u) {
        ctx->pc = 0x33B5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5A4u;
        // 0x33b5a8: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B5ACu;
        goto label_33b5ac;
    }
    ctx->pc = 0x33B5A4u;
    {
        const bool branch_taken_0x33b5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b5a4) {
            ctx->pc = 0x33B5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33B5A4u;
            // 0x33b5a8: 0xac900000  sw          $s0, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33B5ACu;
            goto label_33b5ac;
        }
    }
    ctx->pc = 0x33B5ACu;
label_33b5ac:
    // 0x33b5ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33b5b0:
    // 0x33b5b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_33b5b4:
    // 0x33b5b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_33b5b8:
    // 0x33b5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33b5bc:
    // 0x33b5bc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33b5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33b5c0:
    // 0x33b5c0: 0x3e00008  jr          $ra
label_33b5c4:
    if (ctx->pc == 0x33B5C4u) {
        ctx->pc = 0x33B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5C0u;
        // 0x33b5c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33B5C8u;
        goto label_fallthrough_0x33b5c0;
    }
    ctx->pc = 0x33B5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33B5C0u;
        // 0x33b5c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33B5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33b5c0:
    ctx->pc = 0x33B5C8u;
}
