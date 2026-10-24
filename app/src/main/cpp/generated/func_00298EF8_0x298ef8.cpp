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

// Function: func_00298EF8
// Address: 0x298ef8 - 0x298f88
void func_00298EF8_0x298ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00298EF8_0x298ef8");
#endif

    switch (ctx->pc) {
        case 0x298f20u: goto label_298f20;
        default: break;
    }

    ctx->pc = 0x298ef8u;

    // 0x298ef8: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x298EF8u;
    {
        const bool branch_taken_0x298ef8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x298EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298EF8u;
        // 0x298efc: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298ef8) {
            ctx->pc = 0x298F20u;
            goto label_298f20;
        }
    }
    ctx->pc = 0x298F00u;
    // 0x298f00: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x298f00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x298f04: 0x240202a3  addiu       $v0, $zero, 0x2A3
    ctx->pc = 0x298f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 675));
    // 0x298f08: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x298F08u;
    {
        const bool branch_taken_0x298f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F08u;
        // 0x298f0c: 0x286202a4  slti        $v0, $v1, 0x2A4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)676) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f08) {
            ctx->pc = 0x298F54u;
            goto label_298f54;
        }
    }
    ctx->pc = 0x298F10u;
    // 0x298f10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298F10u;
    {
        const bool branch_taken_0x298f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F10u;
        // 0x298f14: 0x240202a2  addiu       $v0, $zero, 0x2A2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 674));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f10) {
            ctx->pc = 0x298F28u;
            goto label_298f28;
        }
    }
    ctx->pc = 0x298F18u;
    // 0x298f18: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x298F18u;
    {
        const bool branch_taken_0x298f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F18u;
        // 0x298f1c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f18) {
            ctx->pc = 0x298F4Cu;
            goto label_298f4c;
        }
    }
    ctx->pc = 0x298F20u;
label_298f20:
    // 0x298f20: 0x3e00008  jr          $ra
    ctx->pc = 0x298F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298F28u;
label_298f28:
    // 0x298f28: 0x240202a6  addiu       $v0, $zero, 0x2A6
    ctx->pc = 0x298f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 678));
    // 0x298f2c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x298F2Cu;
    {
        const bool branch_taken_0x298f2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x298F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F2Cu;
        // 0x298f30: 0x240203da  addiu       $v0, $zero, 0x3DA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 986));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f2c) {
            ctx->pc = 0x298F60u;
            goto label_298f60;
        }
    }
    ctx->pc = 0x298F34u;
    // 0x298f34: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298F34u;
    {
        const bool branch_taken_0x298f34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x298F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F34u;
        // 0x298f38: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f34) {
            ctx->pc = 0x298F20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_298f20;
        }
    }
    ctx->pc = 0x298F3Cu;
    // 0x298f3c: 0x24420548  addiu       $v0, $v0, 0x548
    ctx->pc = 0x298f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1352));
    // 0x298f40: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x298f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x298f44: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x298F44u;
    {
        const bool branch_taken_0x298f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F44u;
        // 0x298f48: 0x90430000  lbu         $v1, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f44) {
            ctx->pc = 0x298F68u;
            goto label_298f68;
        }
    }
    ctx->pc = 0x298F4Cu;
label_298f4c:
    // 0x298f4c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x298F4Cu;
    {
        const bool branch_taken_0x298f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F4Cu;
        // 0x298f50: 0x90430548  lbu         $v1, 0x548($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f4c) {
            ctx->pc = 0x298F68u;
            goto label_298f68;
        }
    }
    ctx->pc = 0x298F54u;
label_298f54:
    // 0x298f54: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x298f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x298f58: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x298F58u;
    {
        const bool branch_taken_0x298f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x298F58u;
        // 0x298f5c: 0x90430549  lbu         $v1, 0x549($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1353)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298f58) {
            ctx->pc = 0x298F68u;
            goto label_298f68;
        }
    }
    ctx->pc = 0x298F60u;
label_298f60:
    // 0x298f60: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x298f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x298f64: 0x9043054a  lbu         $v1, 0x54A($v0)
    ctx->pc = 0x298f64u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3C054Au));
label_298f68:
    // 0x298f68: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x298F68u;
    {
        const bool branch_taken_0x298f68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x298f68) {
            ctx->pc = 0x298F7Cu;
            goto label_298f7c;
        }
    }
    ctx->pc = 0x298F70u;
    // 0x298f70: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x298f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x298f74: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x298f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x298f78: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x298f78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_298f7c:
    // 0x298f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x298F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298F84u;
    // 0x298f84: 0x0  nop
    ctx->pc = 0x298f84u;
    // NOP
    ctx->pc = 0x298f88u;
}
