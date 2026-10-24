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

// Function: cOl29_setOpenFix
// Address: 0x17fa00 - 0x17fa78
void cOl29_setOpenFix_0x17fa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cOl29_setOpenFix_0x17fa00");
#endif

    switch (ctx->pc) {
        case 0x17fa00u: goto label_17fa00;
        case 0x17fa04u: goto label_17fa04;
        case 0x17fa08u: goto label_17fa08;
        case 0x17fa0cu: goto label_17fa0c;
        case 0x17fa10u: goto label_17fa10;
        case 0x17fa14u: goto label_17fa14;
        case 0x17fa18u: goto label_17fa18;
        case 0x17fa1cu: goto label_17fa1c;
        case 0x17fa20u: goto label_17fa20;
        case 0x17fa24u: goto label_17fa24;
        case 0x17fa28u: goto label_17fa28;
        case 0x17fa2cu: goto label_17fa2c;
        case 0x17fa30u: goto label_17fa30;
        case 0x17fa34u: goto label_17fa34;
        case 0x17fa38u: goto label_17fa38;
        case 0x17fa3cu: goto label_17fa3c;
        case 0x17fa40u: goto label_17fa40;
        case 0x17fa44u: goto label_17fa44;
        case 0x17fa48u: goto label_17fa48;
        case 0x17fa4cu: goto label_17fa4c;
        case 0x17fa50u: goto label_17fa50;
        case 0x17fa54u: goto label_17fa54;
        case 0x17fa58u: goto label_17fa58;
        case 0x17fa5cu: goto label_17fa5c;
        case 0x17fa60u: goto label_17fa60;
        case 0x17fa64u: goto label_17fa64;
        case 0x17fa68u: goto label_17fa68;
        case 0x17fa6cu: goto label_17fa6c;
        case 0x17fa70u: goto label_17fa70;
        case 0x17fa74u: goto label_17fa74;
        default: break;
    }

    ctx->pc = 0x17fa00u;

label_17fa00:
    // 0x17fa00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17fa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_17fa04:
    // 0x17fa04: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17fa08:
    // 0x17fa08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17fa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_17fa0c:
    // 0x17fa0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17fa0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17fa10:
    // 0x17fa10: 0x92020764  lbu         $v0, 0x764($s0)
    ctx->pc = 0x17fa10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1892)));
label_17fa14:
    // 0x17fa14: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_17fa18:
    if (ctx->pc == 0x17FA18u) {
        ctx->pc = 0x17FA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA14u;
        // 0x17fa18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA1Cu;
        goto label_17fa1c;
    }
    ctx->pc = 0x17FA14u;
    {
        const bool branch_taken_0x17fa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17fa14) {
            ctx->pc = 0x17FA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17FA14u;
            // 0x17fa18: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17FA6Cu;
            goto label_17fa6c;
        }
    }
    ctx->pc = 0x17FA1Cu;
label_17fa1c:
    // 0x17fa1c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x17fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_17fa20:
    // 0x17fa20: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x17fa20u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_17fa24:
    // 0x17fa24: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x17fa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_17fa28:
    // 0x17fa28: 0x40f809  jalr        $v0
label_17fa2c:
    if (ctx->pc == 0x17FA2Cu) {
        ctx->pc = 0x17FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA28u;
        // 0x17fa2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA30u;
        goto label_17fa30;
    }
    ctx->pc = 0x17FA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17FA30u);
        ctx->pc = 0x17FA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA28u;
        // 0x17fa2c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA28u, 0x17FA30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FA30u;
label_17fa30:
    // 0x17fa30: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x17fa30u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17fa34:
    // 0x17fa34: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x17fa34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
label_17fa38:
    // 0x17fa38: 0x8e020214  lw          $v0, 0x214($s0)
    ctx->pc = 0x17fa38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_17fa3c:
    // 0x17fa3c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17fa3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17fa40:
    // 0x17fa40: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x17fa40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_17fa44:
    // 0x17fa44: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x17fa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_17fa48:
    // 0x17fa48: 0x60f809  jalr        $v1
label_17fa4c:
    if (ctx->pc == 0x17FA4Cu) {
        ctx->pc = 0x17FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA48u;
        // 0x17fa4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA50u;
        goto label_17fa50;
    }
    ctx->pc = 0x17FA48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17FA50u);
        ctx->pc = 0x17FA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA48u;
        // 0x17fa4c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA48u, 0x17FA50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17FA50u;
label_17fa50:
    // 0x17fa50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17fa54:
    // 0x17fa54: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x17fa54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_17fa58:
    // 0x17fa58: 0xa2020764  sb          $v0, 0x764($s0)
    ctx->pc = 0x17fa58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1892), (uint8_t)GPR_U32(ctx, 2));
label_17fa5c:
    // 0x17fa5c: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x17fa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
label_17fa60:
    // 0x17fa60: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x17fa60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_17fa64:
    // 0x17fa64: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x17fa64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_17fa68:
    // 0x17fa68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17fa68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17fa6c:
    // 0x17fa6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17fa6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17fa70:
    // 0x17fa70: 0x3e00008  jr          $ra
label_17fa74:
    if (ctx->pc == 0x17FA74u) {
        ctx->pc = 0x17FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA70u;
        // 0x17fa74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17FA78u;
        goto label_fallthrough_0x17fa70;
    }
    ctx->pc = 0x17FA70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17FA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FA70u;
        // 0x17fa74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17FA70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17fa70:
    ctx->pc = 0x17FA78u;
}
