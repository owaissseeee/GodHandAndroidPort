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

// Function: classPAD_WORK_Pad_act_set
// Address: 0x31bb08 - 0x31bb80
void classPAD_WORK_Pad_act_set_0x31bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("classPAD_WORK_Pad_act_set_0x31bb08");
#endif

    switch (ctx->pc) {
        case 0x31bb28u: goto label_31bb28;
        default: break;
    }

    ctx->pc = 0x31bb08u;

    // 0x31bb08: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x31bb08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb0c: 0x90820160  lbu         $v0, 0x160($a0)
    ctx->pc = 0x31bb0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x31bb10: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x31bb10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31bb14: 0x24870160  addiu       $a3, $a0, 0x160
    ctx->pc = 0x31bb14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 352));
    // 0x31bb18: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x31BB18u;
    {
        const bool branch_taken_0x31bb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB18u;
        // 0x31bb1c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb18) {
            ctx->pc = 0x31BB40u;
            goto label_31bb40;
        }
    }
    ctx->pc = 0x31BB20u;
    // 0x31bb20: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x31bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x31bb24: 0x0  nop
    ctx->pc = 0x31bb24u;
    // NOP
label_31bb28:
    // 0x31bb28: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x31bb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x31bb2c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31BB2Cu;
    {
        const bool branch_taken_0x31bb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB2Cu;
        // 0x31bb30: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb2c) {
            ctx->pc = 0x31BB74u;
            goto label_31bb74;
        }
    }
    ctx->pc = 0x31BB34u;
    // 0x31bb34: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x31bb34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x31bb38: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31BB38u;
    {
        const bool branch_taken_0x31bb38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31BB38u;
        // 0x31bb3c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31bb38) {
            ctx->pc = 0x31BB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31bb28;
        }
    }
    ctx->pc = 0x31BB40u;
label_31bb40:
    // 0x31bb40: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x31bb40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x31bb44: 0x81602  srl         $v0, $t0, 24
    ctx->pc = 0x31bb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 24));
    // 0x31bb48: 0x81c02  srl         $v1, $t0, 16
    ctx->pc = 0x31bb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x31bb4c: 0x82202  srl         $a0, $t0, 8
    ctx->pc = 0x31bb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), 8));
    // 0x31bb50: 0x52c02  srl         $a1, $a1, 16
    ctx->pc = 0x31bb50u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x31bb54: 0xa0e20000  sb          $v0, 0x0($a3)
    ctx->pc = 0x31bb54u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x31bb58: 0xa0e30001  sb          $v1, 0x1($a3)
    ctx->pc = 0x31bb58u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x31bb5c: 0xa0e40002  sb          $a0, 0x2($a3)
    ctx->pc = 0x31bb5cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x31bb60: 0xa0e80003  sb          $t0, 0x3($a3)
    ctx->pc = 0x31bb60u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 8));
    // 0x31bb64: 0xa4e50006  sh          $a1, 0x6($a3)
    ctx->pc = 0x31bb64u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 6), (uint16_t)GPR_U32(ctx, 5));
    // 0x31bb68: 0xa4e60004  sh          $a2, 0x4($a3)
    ctx->pc = 0x31bb68u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x31bb6c: 0xa4e0000c  sh          $zero, 0xC($a3)
    ctx->pc = 0x31bb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 12), (uint16_t)GPR_U32(ctx, 0));
    // 0x31bb70: 0xa4e0000a  sh          $zero, 0xA($a3)
    ctx->pc = 0x31bb70u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 10), (uint16_t)GPR_U32(ctx, 0));
label_31bb74:
    // 0x31bb74: 0x3e00008  jr          $ra
    ctx->pc = 0x31BB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31BB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31BB7Cu;
    // 0x31bb7c: 0x0  nop
    ctx->pc = 0x31bb7cu;
    // NOP
    ctx->pc = 0x31bb80u;
}
