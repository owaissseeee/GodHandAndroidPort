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

// Function: func_003779D0
// Address: 0x3779d0 - 0x377a28
void func_003779D0_0x3779d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003779D0_0x3779d0");
#endif

    switch (ctx->pc) {
        case 0x3779e8u: goto label_3779e8;
        default: break;
    }

    ctx->pc = 0x3779d0u;

    // 0x3779d0: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x3779d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x3779d4: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x3779d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x3779d8: 0x2443e590  addiu       $v1, $v0, -0x1A70
    ctx->pc = 0x3779d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960528));
    // 0x3779dc: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x3779dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x3779e0: 0x24650380  addiu       $a1, $v1, 0x380
    ctx->pc = 0x3779e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x3779e4: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x3779e4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3779e8:
    // 0x3779e8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3779E8u;
    {
        const bool branch_taken_0x3779e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3779e8) {
            ctx->pc = 0x3779ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3779E8u;
            // 0x3779ec: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377A14u;
            goto label_377a14;
        }
    }
    ctx->pc = 0x3779F0u;
    // 0x3779f0: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x3779f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3779f4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x3779f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x3779f8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3779F8u;
    {
        const bool branch_taken_0x3779f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3779f8) {
            ctx->pc = 0x3779FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3779F8u;
            // 0x3779fc: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377A14u;
            goto label_377a14;
        }
    }
    ctx->pc = 0x377A00u;
    // 0x377a00: 0x8462000c  lh          $v0, 0xC($v1)
    ctx->pc = 0x377a00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x377a04: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x377A04u;
    {
        const bool branch_taken_0x377a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x377a04) {
            ctx->pc = 0x377A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377A04u;
            // 0x377a08: 0x24630070  addiu       $v1, $v1, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
            ctx->in_delay_slot = false;
            ctx->pc = 0x377A14u;
            goto label_377a14;
        }
    }
    ctx->pc = 0x377A0Cu;
    // 0x377a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x377A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A0Cu;
        // 0x377a10: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377A14u;
label_377a14:
    // 0x377a14: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x377a14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x377a18: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x377A18u;
    {
        const bool branch_taken_0x377a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377a18) {
            ctx->pc = 0x377A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x377A18u;
            // 0x377a1c: 0x94620000  lhu         $v0, 0x0($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3779E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3779e8;
        }
    }
    ctx->pc = 0x377A20u;
    // 0x377a20: 0x3e00008  jr          $ra
    ctx->pc = 0x377A20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377A20u;
        // 0x377a24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377A20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377A28u;
}
