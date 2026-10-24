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

// Function: ClearLinkedNodeList_12ECF0
// Address: 0x12ecf0 - 0x12ed60
void ClearLinkedNodeList_12ECF0_0x12ecf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearLinkedNodeList_12ECF0_0x12ecf0");
#endif

    switch (ctx->pc) {
        case 0x12ecf0u: goto label_12ecf0;
        case 0x12ecf4u: goto label_12ecf4;
        case 0x12ecf8u: goto label_12ecf8;
        case 0x12ecfcu: goto label_12ecfc;
        case 0x12ed00u: goto label_12ed00;
        case 0x12ed04u: goto label_12ed04;
        case 0x12ed08u: goto label_12ed08;
        case 0x12ed0cu: goto label_12ed0c;
        case 0x12ed10u: goto label_12ed10;
        case 0x12ed14u: goto label_12ed14;
        case 0x12ed18u: goto label_12ed18;
        case 0x12ed1cu: goto label_12ed1c;
        case 0x12ed20u: goto label_12ed20;
        case 0x12ed24u: goto label_12ed24;
        case 0x12ed28u: goto label_12ed28;
        case 0x12ed2cu: goto label_12ed2c;
        case 0x12ed30u: goto label_12ed30;
        case 0x12ed34u: goto label_12ed34;
        case 0x12ed38u: goto label_12ed38;
        case 0x12ed3cu: goto label_12ed3c;
        case 0x12ed40u: goto label_12ed40;
        case 0x12ed44u: goto label_12ed44;
        case 0x12ed48u: goto label_12ed48;
        case 0x12ed4cu: goto label_12ed4c;
        case 0x12ed50u: goto label_12ed50;
        case 0x12ed54u: goto label_12ed54;
        case 0x12ed58u: goto label_12ed58;
        case 0x12ed5cu: goto label_12ed5c;
        default: break;
    }

    ctx->pc = 0x12ecf0u;

label_12ecf0:
    // 0x12ecf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x12ecf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_12ecf4:
    // 0x12ecf4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12ecf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_12ecf8:
    // 0x12ecf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12ecf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_12ecfc:
    // 0x12ecfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12ecfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12ed00:
    // 0x12ed00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12ed00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_12ed04:
    // 0x12ed04: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x12ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_12ed08:
    // 0x12ed08: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_12ed0c:
    if (ctx->pc == 0x12ED0Cu) {
        ctx->pc = 0x12ED0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED08u;
        // 0x12ed0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED10u;
        goto label_12ed10;
    }
    ctx->pc = 0x12ED08u;
    {
        const bool branch_taken_0x12ed08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ed08) {
            ctx->pc = 0x12ED0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ED08u;
            // 0x12ed0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ED4Cu;
            goto label_12ed4c;
        }
    }
    ctx->pc = 0x12ED10u;
label_12ed10:
    // 0x12ed10: 0x8e060190  lw          $a2, 0x190($s0)
    ctx->pc = 0x12ed10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_12ed14:
    // 0x12ed14: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_12ed18:
    if (ctx->pc == 0x12ED18u) {
        ctx->pc = 0x12ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED14u;
        // 0x12ed18: 0x8cd10000  lw          $s1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED1Cu;
        goto label_12ed1c;
    }
    ctx->pc = 0x12ED14u;
    {
        const bool branch_taken_0x12ed14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ED18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED14u;
        // 0x12ed18: 0x8cd10000  lw          $s1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed14) {
            ctx->pc = 0x12ED34u;
            goto label_12ed34;
        }
    }
    ctx->pc = 0x12ED1Cu;
label_12ed1c:
    // 0x12ed1c: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x12ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_12ed20:
    // 0x12ed20: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_12ed24:
    // 0x12ed24: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x12ed24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_12ed28:
    // 0x12ed28: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x12ed28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_12ed2c:
    // 0x12ed2c: 0x60f809  jalr        $v1
label_12ed30:
    if (ctx->pc == 0x12ED30u) {
        ctx->pc = 0x12ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED2Cu;
        // 0x12ed30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED34u;
        goto label_12ed34;
    }
    ctx->pc = 0x12ED2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12ED34u);
        ctx->pc = 0x12ED30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED2Cu;
        // 0x12ed30: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED2Cu, 0x12ED34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12ED34u;
label_12ed34:
    // 0x12ed34: 0x8e020194  lw          $v0, 0x194($s0)
    ctx->pc = 0x12ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
label_12ed38:
    // 0x12ed38: 0xae110190  sw          $s1, 0x190($s0)
    ctx->pc = 0x12ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 17));
label_12ed3c:
    // 0x12ed3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12ed40:
    // 0x12ed40: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_12ed44:
    if (ctx->pc == 0x12ED44u) {
        ctx->pc = 0x12ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED40u;
        // 0x12ed44: 0xae020194  sw          $v0, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED48u;
        goto label_12ed48;
    }
    ctx->pc = 0x12ED40u;
    {
        const bool branch_taken_0x12ed40 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x12ED44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED40u;
        // 0x12ed44: 0xae020194  sw          $v0, 0x194($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ed40) {
            ctx->pc = 0x12ED10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12ed10;
        }
    }
    ctx->pc = 0x12ED48u;
label_12ed48:
    // 0x12ed48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12ed48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_12ed4c:
    // 0x12ed4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x12ed4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_12ed50:
    // 0x12ed50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12ed50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_12ed54:
    // 0x12ed54: 0x3e00008  jr          $ra
label_12ed58:
    if (ctx->pc == 0x12ED58u) {
        ctx->pc = 0x12ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED54u;
        // 0x12ed58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ED5Cu;
        goto label_12ed5c;
    }
    ctx->pc = 0x12ED54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ED54u;
        // 0x12ed58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12ED54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12ED5Cu;
label_12ed5c:
    // 0x12ed5c: 0x0  nop
    ctx->pc = 0x12ed5cu;
    // NOP
    ctx->pc = 0x12ed60u;
}
