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

// Function: _request_rdata
// Address: 0x3b2d10 - 0x3b2de8
void _request_rdata_0x3b2d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_request_rdata_0x3b2d10");
#endif

    switch (ctx->pc) {
        case 0x3b2d40u: goto label_3b2d40;
        case 0x3b2d50u: goto label_3b2d50;
        case 0x3b2da8u: goto label_3b2da8;
        default: break;
    }

    ctx->pc = 0x3b2d10u;

    // 0x3b2d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b2d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b2d14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x3b2d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x3b2d18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3b2d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2d1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3b2d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3b2d20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3b2d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3b2d24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3b2d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2d28: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x3b2d28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3b2d2c: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x3b2d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3b2d30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B2D30u;
    {
        const bool branch_taken_0x3b2d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3b2d30) {
            ctx->pc = 0x3B2D48u;
            goto label_3b2d48;
        }
    }
    ctx->pc = 0x3B2D38u;
    // 0x3b2d38: 0xc0ecaf0  jal         func_3B2BC0
    ctx->pc = 0x3B2D38u;
    SET_GPR_U32(ctx, 31, 0x3B2D40u);
    ctx->pc = 0x3B2D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2D38u;
    // 0x3b2d3c: 0x52c02  srl         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B2BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2BC0u, 0x3B2D38u, 0x3B2D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2D40u;
label_3b2d40:
    // 0x3b2d40: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3B2D40u;
    {
        const bool branch_taken_0x3b2d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2D40u;
        // 0x3b2d44: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2d40) {
            ctx->pc = 0x3B2D54u;
            goto label_3b2d54;
        }
    }
    ctx->pc = 0x3B2D48u;
label_3b2d48:
    // 0x3b2d48: 0xc0ecae4  jal         func_3B2B90
    ctx->pc = 0x3B2D48u;
    SET_GPR_U32(ctx, 31, 0x3B2D50u);
    ctx->pc = 0x3B2B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B2B90u, 0x3B2D48u, 0x3B2D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2D50u;
label_3b2d50:
    // 0x3b2d50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b2d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b2d54:
    // 0x3b2d54: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x3b2d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x3b2d58: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x3b2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2d5c: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x3b2d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x3b2d60: 0x3442000c  ori         $v0, $v0, 0xC
    ctx->pc = 0x3b2d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12);
    // 0x3b2d64: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x3b2d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x3b2d68: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b2d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x3b2d6c: 0xae05001c  sw          $a1, 0x1C($s0)
    ctx->pc = 0x3b2d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 5));
    // 0x3b2d70: 0x34840008  ori         $a0, $a0, 0x8
    ctx->pc = 0x3b2d70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
    // 0x3b2d74: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x3b2d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x3b2d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b2d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2d7c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x3b2d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3b2d80: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x3b2d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b2d84: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x3b2d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x3b2d88: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x3b2d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x3b2d8c: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x3b2d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x3b2d90: 0x8e220028  lw          $v0, 0x28($s1)
    ctx->pc = 0x3b2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3b2d94: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x3b2d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x3b2d98: 0x8e290028  lw          $t1, 0x28($s1)
    ctx->pc = 0x3b2d98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x3b2d9c: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x3b2d9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3b2da0: 0xc0ec9b2  jal         func_3B26C8
    ctx->pc = 0x3B2DA0u;
    SET_GPR_U32(ctx, 31, 0x3B2DA8u);
    ctx->pc = 0x3B2DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2DA0u;
    // 0x3b2da4: 0x8e280024  lw          $t0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B26C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B26C8u, 0x3B2DA0u, 0x3B2DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B2DA8u;
label_3b2da8:
    // 0x3b2da8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B2DA8u;
    {
        const bool branch_taken_0x3b2da8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DA8u;
        // 0x3b2dac: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2da8) {
            ctx->pc = 0x3B2DD0u;
            goto label_3b2dd0;
        }
    }
    ctx->pc = 0x3B2DB0u;
    // 0x3b2db0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3b2db0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b2db4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b2db4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x3b2db8: 0x24a52cd0  addiu       $a1, $a1, 0x2CD0
    ctx->pc = 0x3b2db8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11472));
    // 0x3b2dbc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2dc0: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3b2dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3b2dc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2dc8: 0x80ede26  j           func_3B7898
    ctx->pc = 0x3B2DC8u;
    ctx->pc = 0x3B2DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B2DC8u;
    // 0x3b2dcc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7898u, 0x3B2DC8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3B2DD0u;
label_3b2dd0:
    // 0x3b2dd0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3b2dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b2dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3b2dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2dd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2DD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B2DD8u;
        // 0x3b2ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B2DD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B2DE0u;
    // 0x3b2de0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x3b2de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3b2de4: 0x0  nop
    ctx->pc = 0x3b2de4u;
    // NOP
    ctx->pc = 0x3b2de8u;
}
