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

// Function: func_001D4720
// Address: 0x1d4720 - 0x1d47e8
void func_001D4720_0x1d4720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001D4720_0x1d4720");
#endif

    switch (ctx->pc) {
        case 0x1d4738u: goto label_1d4738;
        case 0x1d4788u: goto label_1d4788;
        case 0x1d47b8u: goto label_1d47b8;
        default: break;
    }

    ctx->pc = 0x1d4720u;

    // 0x1d4720: 0x948217fc  lhu         $v0, 0x17FC($a0)
    ctx->pc = 0x1d4720u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6140)));
    // 0x1d4724: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D4724u;
    {
        const bool branch_taken_0x1d4724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4724u;
        // 0x1d4728: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4724) {
            ctx->pc = 0x1D4774u;
            goto label_1d4774;
        }
    }
    ctx->pc = 0x1D472Cu;
    // 0x1d472c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d472cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4730: 0x248617d4  addiu       $a2, $a0, 0x17D4
    ctx->pc = 0x1d4730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 6100));
    // 0x1d4734: 0x0  nop
    ctx->pc = 0x1d4734u;
    // NOP
label_1d4738:
    // 0x1d4738: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d4738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1d473c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4740: 0x8c630604  lw          $v1, 0x604($v1)
    ctx->pc = 0x1d4740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1d4744: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D4744u;
    {
        const bool branch_taken_0x1d4744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4744u;
        // 0x1d4748: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4744) {
            ctx->pc = 0x1D4764u;
            goto label_1d4764;
        }
    }
    ctx->pc = 0x1D474Cu;
    // 0x1d474c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x1d474cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1d4750: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4750u;
    {
        const bool branch_taken_0x1d4750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4750u;
        // 0x1d4754: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4750) {
            ctx->pc = 0x1D4760u;
            goto label_1d4760;
        }
    }
    ctx->pc = 0x1D4758u;
    // 0x1d4758: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D4758u;
    {
        const bool branch_taken_0x1d4758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4758u;
        // 0x1d475c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4758) {
            ctx->pc = 0x1D4764u;
            goto label_1d4764;
        }
    }
    ctx->pc = 0x1D4760u;
label_1d4760:
    // 0x1d4760: 0x24a5000a  addiu       $a1, $a1, 0xA
    ctx->pc = 0x1d4760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_1d4764:
    // 0x1d4764: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x1d4764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1d4768: 0x14e0fff3  bnez        $a3, . + 4 + (-0xD << 2)
    ctx->pc = 0x1D4768u;
    {
        const bool branch_taken_0x1d4768 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D476Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4768u;
        // 0x1d476c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4768) {
            ctx->pc = 0x1D4738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4738;
        }
    }
    ctx->pc = 0x1D4770u;
    // 0x1d4770: 0x948217fc  lhu         $v0, 0x17FC($a0)
    ctx->pc = 0x1d4770u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6140)));
label_1d4774:
    // 0x1d4774: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D4774u;
    {
        const bool branch_taken_0x1d4774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4774u;
        // 0x1d4778: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4774) {
            ctx->pc = 0x1D47ACu;
            goto label_1d47ac;
        }
    }
    ctx->pc = 0x1D477Cu;
    // 0x1d477c: 0x248817d4  addiu       $t0, $a0, 0x17D4
    ctx->pc = 0x1d477cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 6100));
    // 0x1d4780: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d4780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d4784: 0x0  nop
    ctx->pc = 0x1d4784u;
    // NOP
label_1d4788:
    // 0x1d4788: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1d4788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d478c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d478cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d4790: 0x8c640604  lw          $a0, 0x604($v1)
    ctx->pc = 0x1d4790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1540)));
    // 0x1d4794: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D4794u;
    {
        const bool branch_taken_0x1d4794 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D4798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4794u;
        // 0x1d4798: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4794) {
            ctx->pc = 0x1D47A4u;
            goto label_1d47a4;
        }
    }
    ctx->pc = 0x1D479Cu;
    // 0x1d479c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x1d479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d47a0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1d47a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1d47a4:
    // 0x1d47a4: 0x14e0fff8  bnez        $a3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D47A4u;
    {
        const bool branch_taken_0x1d47a4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47A4u;
        // 0x1d47a8: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47a4) {
            ctx->pc = 0x1D4788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d4788;
        }
    }
    ctx->pc = 0x1D47ACu;
label_1d47ac:
    // 0x1d47ac: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x1D47ACu;
    {
        const bool branch_taken_0x1d47ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47ACu;
        // 0x1d47b0: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47ac) {
            ctx->pc = 0x1D47E0u;
            goto label_1d47e0;
        }
    }
    ctx->pc = 0x1D47B4u;
    // 0x1d47b4: 0x0  nop
    ctx->pc = 0x1d47b4u;
    // NOP
label_1d47b8:
    // 0x1d47b8: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x1d47b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1d47bc: 0x54c00006  bnel        $a2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D47BCu;
    {
        const bool branch_taken_0x1d47bc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d47bc) {
            ctx->pc = 0x1D47C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D47BCu;
            // 0x1d47c0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D47D8u;
            goto label_1d47d8;
        }
    }
    ctx->pc = 0x1D47C4u;
    // 0x1d47c4: 0x24a3000b  addiu       $v1, $a1, 0xB
    ctx->pc = 0x1d47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x1d47c8: 0x28620016  slti        $v0, $v1, 0x16
    ctx->pc = 0x1d47c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d47cc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D47CCu;
    {
        const bool branch_taken_0x1d47cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47CCu;
        // 0x1d47d0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47cc) {
            ctx->pc = 0x1D47D8u;
            goto label_1d47d8;
        }
    }
    ctx->pc = 0x1D47D4u;
    // 0x1d47d4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1d47d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1d47d8:
    // 0x1d47d8: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D47D8u;
    {
        const bool branch_taken_0x1d47d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D47DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47D8u;
        // 0x1d47dc: 0x24c2ffff  addiu       $v0, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d47d8) {
            ctx->pc = 0x1D47B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d47b8;
        }
    }
    ctx->pc = 0x1D47E0u;
label_1d47e0:
    // 0x1d47e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D47E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D47E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D47E0u;
        // 0x1d47e4: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D47E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D47E8u;
}
