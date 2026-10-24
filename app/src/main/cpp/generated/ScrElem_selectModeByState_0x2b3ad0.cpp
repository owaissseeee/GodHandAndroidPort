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

// Function: ScrElem_selectModeByState
// Address: 0x2b3ad0 - 0x2b3b40
void ScrElem_selectModeByState_0x2b3ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ScrElem_selectModeByState_0x2b3ad0");
#endif

    ctx->pc = 0x2b3ad0u;

    // 0x2b3ad0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2b3ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3ad4: 0x90a300a4  lbu         $v1, 0xA4($a1)
    ctx->pc = 0x2b3ad4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 164)));
    // 0x2b3ad8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x2b3ad8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2b3adc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3ADCu;
    {
        const bool branch_taken_0x2b3adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3ADCu;
        // 0x2b3ae0: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3adc) {
            ctx->pc = 0x2B3AFCu;
            goto label_2b3afc;
        }
    }
    ctx->pc = 0x2B3AE4u;
    // 0x2b3ae4: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2b3ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2b3ae8: 0x2442b230  addiu       $v0, $v0, -0x4DD0
    ctx->pc = 0x2b3ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947376));
    // 0x2b3aec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b3aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b3af0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b3af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b3af4: 0x800008  jr          $a0
    ctx->pc = 0x2B3AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B3AFCu: goto label_2b3afc;
            case 0x2B3B04u: goto label_2b3b04;
            case 0x2B3B0Cu: goto label_2b3b0c;
            case 0x2B3B14u: goto label_2b3b14;
            case 0x2B3B1Cu: goto label_2b3b1c;
            case 0x2B3B24u: goto label_2b3b24;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3AF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B3AFCu;
label_2b3afc:
    // 0x2b3afc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2B3AFCu;
    {
        const bool branch_taken_0x2b3afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3AFCu;
        // 0x2b3b00: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3afc) {
            ctx->pc = 0x2B3B28u;
            goto label_2b3b28;
        }
    }
    ctx->pc = 0x2B3B04u;
label_2b3b04:
    // 0x2b3b04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3B04u;
    {
        const bool branch_taken_0x2b3b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B04u;
        // 0x2b3b08: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b04) {
            ctx->pc = 0x2B3B28u;
            goto label_2b3b28;
        }
    }
    ctx->pc = 0x2B3B0Cu;
label_2b3b0c:
    // 0x2b3b0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3B0Cu;
    {
        const bool branch_taken_0x2b3b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B0Cu;
        // 0x2b3b10: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b0c) {
            ctx->pc = 0x2B3B28u;
            goto label_2b3b28;
        }
    }
    ctx->pc = 0x2B3B14u;
label_2b3b14:
    // 0x2b3b14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3B14u;
    {
        const bool branch_taken_0x2b3b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B14u;
        // 0x2b3b18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b14) {
            ctx->pc = 0x2B3B28u;
            goto label_2b3b28;
        }
    }
    ctx->pc = 0x2B3B1Cu;
label_2b3b1c:
    // 0x2b3b1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2B3B1Cu;
    {
        const bool branch_taken_0x2b3b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B1Cu;
        // 0x2b3b20: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3b1c) {
            ctx->pc = 0x2B3B28u;
            goto label_2b3b28;
        }
    }
    ctx->pc = 0x2B3B24u;
label_2b3b24:
    // 0x2b3b24: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2b3b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2b3b28:
    // 0x2b3b28: 0xa0a0000f  sb          $zero, 0xF($a1)
    ctx->pc = 0x2b3b28u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3b2c: 0xa0a2000c  sb          $v0, 0xC($a1)
    ctx->pc = 0x2b3b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b3b30: 0xa0a0000d  sb          $zero, 0xD($a1)
    ctx->pc = 0x2b3b30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3b34: 0xa0a0000e  sb          $zero, 0xE($a1)
    ctx->pc = 0x2b3b34u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b3b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3B38u;
        // 0x2b3b3c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3B40u;
}
