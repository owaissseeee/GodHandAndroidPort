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

// Function: func_001D47E8
// Address: 0x1d47e8 - 0x1d48b0
void func_001D47E8_0x1d47e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D47E8_0x1d47e8");
#endif

    switch (ctx->pc) {
        case 0x1d4800u: goto label_1d4800;
        case 0x1d4850u: goto label_1d4850;
        case 0x1d4880u: goto label_1d4880;
        default: break;
    }

    ctx->pc = 0x1d47e8u;

    // 0x1d47e8: 0x948217fe  lhu         $v0, 0x17FE($a0)
    ctx->pc = 0x1d47e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6142)));
    // 0x1d47ec: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D47ECu;
    {
        const bool branch_taken_0x1d47ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47ECu;
        // 0x1d47f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47ec) {
            ctx->pc = 0x1D483Cu;
            goto label_1d483c;
        }
    }
    ctx->pc = 0x1D47F4u;
    // 0x1d47f4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d47f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d47f8: 0x248617e8  addiu       $a2, $a0, 0x17E8
    ctx->pc = 0x1d47f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 6120));
    // 0x1d47fc: 0x0  nop
    ctx->pc = 0x1d47fcu;
    // NOP
label_1d4800:
    // 0x1d4800: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d4800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d4804: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d4804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4808: 0x8c630604  lw          $v1, 0x604($v1)
    ctx->pc = 0x1d4808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1d480c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D480Cu;
    {
        const bool branch_taken_0x1d480c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D480Cu;
        // 0x1d4810: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d480c) {
            ctx->pc = 0x1D482Cu;
            goto label_1d482c;
        }
    }
    ctx->pc = 0x1D4814u;
    // 0x1d4814: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x1d4814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d4818: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4818u;
    {
        const bool branch_taken_0x1d4818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4818u;
        // 0x1d481c: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4818) {
            ctx->pc = 0x1D4828u;
            goto label_1d4828;
        }
    }
    ctx->pc = 0x1D4820u;
    // 0x1d4820: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4820u;
    {
        const bool branch_taken_0x1d4820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4820u;
        // 0x1d4824: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4820) {
            ctx->pc = 0x1D482Cu;
            goto label_1d482c;
        }
    }
    ctx->pc = 0x1D4828u;
label_1d4828:
    // 0x1d4828: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x1d4828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_1d482c:
    // 0x1d482c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d482cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d4830: 0x14e0fff3  bnez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D4830u;
    {
        const bool branch_taken_0x1d4830 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4830u;
        // 0x1d4834: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4830) {
            ctx->pc = 0x1D4800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4800;
        }
    }
    ctx->pc = 0x1D4838u;
    // 0x1d4838: 0x948217fe  lhu         $v0, 0x17FE($a0)
    ctx->pc = 0x1d4838u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6142)));
label_1d483c:
    // 0x1d483c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D483Cu;
    {
        const bool branch_taken_0x1d483c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D483Cu;
        // 0x1d4840: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d483c) {
            ctx->pc = 0x1D4874u;
            goto label_1d4874;
        }
    }
    ctx->pc = 0x1D4844u;
    // 0x1d4844: 0x248817e8  addiu       $t0, $a0, 0x17E8
    ctx->pc = 0x1d4844u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 6120));
    // 0x1d4848: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d484c: 0x0  nop
    ctx->pc = 0x1d484cu;
    // NOP
label_1d4850:
    // 0x1d4850: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d4854: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4858: 0x8c640604  lw          $a0, 0x604($v1)
    ctx->pc = 0x1d4858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1d485c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D485Cu;
    {
        const bool branch_taken_0x1d485c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D485Cu;
        // 0x1d4860: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d485c) {
            ctx->pc = 0x1D486Cu;
            goto label_1d486c;
        }
    }
    ctx->pc = 0x1D4864u;
    // 0x1d4864: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1d4864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d4868: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1d4868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1d486c:
    // 0x1d486c: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D486Cu;
    {
        const bool branch_taken_0x1d486c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D486Cu;
        // 0x1d4870: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d486c) {
            ctx->pc = 0x1D4850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4850;
        }
    }
    ctx->pc = 0x1D4874u;
label_1d4874:
    // 0x1d4874: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1D4874u;
    {
        const bool branch_taken_0x1d4874 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4874u;
        // 0x1d4878: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4874) {
            ctx->pc = 0x1D48A8u;
            goto label_1d48a8;
        }
    }
    ctx->pc = 0x1D487Cu;
    // 0x1d487c: 0x0  nop
    ctx->pc = 0x1d487cu;
    // NOP
label_1d4880:
    // 0x1d4880: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1d4880u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d4884: 0x54c00006  bnel        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D4884u;
    {
        const bool branch_taken_0x1d4884 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d4884) {
            ctx->pc = 0x1D4888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D4884u;
            // 0x1d4888: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D48A0u;
            goto label_1d48a0;
        }
    }
    ctx->pc = 0x1D488Cu;
    // 0x1d488c: 0x24a3000b  addiu       $v1, $a1, 0xB
    ctx->pc = 0x1d488cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x1d4890: 0x28620016  slti        $v0, $v1, 0x16
    ctx->pc = 0x1d4890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d4894: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4894u;
    {
        const bool branch_taken_0x1d4894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4894u;
        // 0x1d4898: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4894) {
            ctx->pc = 0x1D48A0u;
            goto label_1d48a0;
        }
    }
    ctx->pc = 0x1D489Cu;
    // 0x1d489c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d489cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d48a0:
    // 0x1d48a0: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D48A0u;
    {
        const bool branch_taken_0x1d48a0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D48A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A0u;
        // 0x1d48a4: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d48a0) {
            ctx->pc = 0x1D4880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4880;
        }
    }
    ctx->pc = 0x1D48A8u;
label_1d48a8:
    // 0x1d48a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D48A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D48ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D48A8u;
        // 0x1d48ac: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D48A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D48B0u;
}
