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

// Function: func_003A9498
// Address: 0x3a9498 - 0x3a9538
void func_003A9498_0x3a9498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A9498_0x3a9498");
#endif

    switch (ctx->pc) {
        case 0x3a94b4u: goto label_3a94b4;
        case 0x3a94c8u: goto label_3a94c8;
        case 0x3a94f8u: goto label_3a94f8;
        case 0x3a9508u: goto label_3a9508;
        default: break;
    }

    ctx->pc = 0x3a9498u;

    // 0x3a9498: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A9498u;
    {
        const bool branch_taken_0x3a9498 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9498u;
        // 0x3a949c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9498) {
            ctx->pc = 0x3A94B4u;
            goto label_3a94b4;
        }
    }
    ctx->pc = 0x3A94A0u;
    // 0x3a94a0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3a94a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a94a4: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A94A4u;
    {
        const bool branch_taken_0x3a94a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a94a4) {
            ctx->pc = 0x3A94A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A94A4u;
            // 0x3a94a8: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A94B8u;
            goto label_3a94b8;
        }
    }
    ctx->pc = 0x3A94ACu;
    // 0x3a94ac: 0x3e00008  jr          $ra
    ctx->pc = 0x3A94ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A94B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94ACu;
        // 0x3a94b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A94ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A94B4u;
label_3a94b4:
    // 0x3a94b4: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x3a94b4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a94b8:
    // 0x3a94b8: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x3a94b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a94bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a94bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a94c0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3A94C0u;
    {
        const bool branch_taken_0x3a94c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A94C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94C0u;
        // 0x3a94c4: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94c0) {
            ctx->pc = 0x3A94E0u;
            goto label_3a94e0;
        }
    }
    ctx->pc = 0x3A94C8u;
label_3a94c8:
    // 0x3a94c8: 0x5103fffa  beql        $t0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A94C8u;
    {
        const bool branch_taken_0x3a94c8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a94c8) {
            ctx->pc = 0x3A94CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A94C8u;
            // 0x3a94cc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A94B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a94b4;
        }
    }
    ctx->pc = 0x3A94D0u;
    // 0x3a94d0: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x3a94d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a94d4: 0x0  nop
    ctx->pc = 0x3a94d4u;
    // NOP
    // 0x3a94d8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A94D8u;
    {
        const bool branch_taken_0x3a94d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94D8u;
        // 0x3a94dc: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94d8) {
            ctx->pc = 0x3A94C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a94c8;
        }
    }
    ctx->pc = 0x3A94E0u;
label_3a94e0:
    // 0x3a94e0: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A94E0u;
    {
        const bool branch_taken_0x3a94e0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A94E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94E0u;
        // 0x3a94e4: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a94e0) {
            ctx->pc = 0x3A94F4u;
            goto label_3a94f4;
        }
    }
    ctx->pc = 0x3A94E8u;
    // 0x3a94e8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x3a94e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x3a94ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3A94ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A94F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A94ECu;
        // 0x3a94f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A94ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A94F4u;
label_3a94f4:
    // 0x3a94f4: 0x80880000  lb          $t0, 0x0($a0)
    ctx->pc = 0x3a94f4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3a94f8:
    // 0x3a94f8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3a94f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a94fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3a94fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3a9500: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x3a9500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3a9504: 0x0  nop
    ctx->pc = 0x3a9504u;
    // NOP
label_3a9508:
    // 0x3a9508: 0x14680006  bne         $v1, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A9508u;
    {
        const bool branch_taken_0x3a9508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x3A950Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9508u;
        // 0x3a950c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9508) {
            ctx->pc = 0x3A9524u;
            goto label_3a9524;
        }
    }
    ctx->pc = 0x3A9510u;
    // 0x3a9510: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3A9510u;
    {
        const bool branch_taken_0x3a9510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9510) {
            ctx->pc = 0x3A9514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9510u;
            // 0x3a9514: 0xa080ffff  sb          $zero, -0x1($a0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 4), 4294967295), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A951Cu;
            goto label_3a951c;
        }
    }
    ctx->pc = 0x3A9518u;
    // 0x3a9518: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a9518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a951c:
    // 0x3a951c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A951Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A951Cu;
        // 0x3a9520: 0xacc40000  sw          $a0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A951Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9524u;
label_3a9524:
    // 0x3a9524: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A9524u;
    {
        const bool branch_taken_0x3a9524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a9524) {
            ctx->pc = 0x3A9528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9524u;
            // 0x3a9528: 0x80e30000  lb          $v1, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9508;
        }
    }
    ctx->pc = 0x3A952Cu;
    // 0x3a952c: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x3A952Cu;
    {
        const bool branch_taken_0x3a952c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A952Cu;
        // 0x3a9530: 0x80880000  lb          $t0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a952c) {
            ctx->pc = 0x3A94F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a94f8;
        }
    }
    ctx->pc = 0x3A9534u;
    // 0x3a9534: 0x0  nop
    ctx->pc = 0x3a9534u;
    // NOP
    ctx->pc = 0x3a9538u;
}
