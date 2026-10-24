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

// Function: func_0033BF18
// Address: 0x33bf18 - 0x33bf88
void func_0033BF18_0x33bf18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0033BF18_0x33bf18");
#endif

    switch (ctx->pc) {
        case 0x33bf18u: goto label_33bf18;
        case 0x33bf1cu: goto label_33bf1c;
        case 0x33bf20u: goto label_33bf20;
        case 0x33bf24u: goto label_33bf24;
        case 0x33bf28u: goto label_33bf28;
        case 0x33bf2cu: goto label_33bf2c;
        case 0x33bf30u: goto label_33bf30;
        case 0x33bf34u: goto label_33bf34;
        case 0x33bf38u: goto label_33bf38;
        case 0x33bf3cu: goto label_33bf3c;
        case 0x33bf40u: goto label_33bf40;
        case 0x33bf44u: goto label_33bf44;
        case 0x33bf48u: goto label_33bf48;
        case 0x33bf4cu: goto label_33bf4c;
        case 0x33bf50u: goto label_33bf50;
        case 0x33bf54u: goto label_33bf54;
        case 0x33bf58u: goto label_33bf58;
        case 0x33bf5cu: goto label_33bf5c;
        case 0x33bf60u: goto label_33bf60;
        case 0x33bf64u: goto label_33bf64;
        case 0x33bf68u: goto label_33bf68;
        case 0x33bf6cu: goto label_33bf6c;
        case 0x33bf70u: goto label_33bf70;
        case 0x33bf74u: goto label_33bf74;
        case 0x33bf78u: goto label_33bf78;
        case 0x33bf7cu: goto label_33bf7c;
        case 0x33bf80u: goto label_33bf80;
        case 0x33bf84u: goto label_33bf84;
        default: break;
    }

    ctx->pc = 0x33bf18u;

label_33bf18:
    // 0x33bf18: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x33bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
label_33bf1c:
    // 0x33bf1c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33bf1cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_33bf20:
    // 0x33bf20: 0x8c4288b8  lw          $v0, -0x7748($v0)
    ctx->pc = 0x33bf20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936760)));
label_33bf24:
    // 0x33bf24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_33bf28:
    // 0x33bf28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33bf28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_33bf2c:
    // 0x33bf2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_33bf30:
    if (ctx->pc == 0x33BF30u) {
        ctx->pc = 0x33BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF2Cu;
        // 0x33bf30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF34u;
        goto label_33bf34;
    }
    ctx->pc = 0x33BF2Cu;
    {
        const bool branch_taken_0x33bf2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF2Cu;
        // 0x33bf30: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf2c) {
            ctx->pc = 0x33BF48u;
            goto label_33bf48;
        }
    }
    ctx->pc = 0x33BF34u;
label_33bf34:
    // 0x33bf34: 0x40f809  jalr        $v0
label_33bf38:
    if (ctx->pc == 0x33BF38u) {
        ctx->pc = 0x33BF3Cu;
        goto label_33bf3c;
    }
    ctx->pc = 0x33BF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33BF3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BF34u, 0x33BF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33BF3Cu;
label_33bf3c:
    // 0x33bf3c: 0x1000000a  b           . + 4 + (0xA << 2)
label_33bf40:
    if (ctx->pc == 0x33BF40u) {
        ctx->pc = 0x33BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF3Cu;
        // 0x33bf40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF44u;
        goto label_33bf44;
    }
    ctx->pc = 0x33BF3Cu;
    {
        const bool branch_taken_0x33bf3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF3Cu;
        // 0x33bf40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33bf3c) {
            ctx->pc = 0x33BF68u;
            goto label_33bf68;
        }
    }
    ctx->pc = 0x33BF44u;
label_33bf44:
    // 0x33bf44: 0x0  nop
    ctx->pc = 0x33bf44u;
    // NOP
label_33bf48:
    // 0x33bf48: 0xc0ced96  jal         func_33B658
label_33bf4c:
    if (ctx->pc == 0x33BF4Cu) {
        ctx->pc = 0x33BF50u;
        goto label_33bf50;
    }
    ctx->pc = 0x33BF48u;
    SET_GPR_U32(ctx, 31, 0x33BF50u);
    ctx->pc = 0x33B658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B658u, 0x33BF48u, 0x33BF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF50u;
label_33bf50:
    // 0x33bf50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33bf54:
    // 0x33bf54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33bf58:
    // 0x33bf58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33bf58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33bf5c:
    // 0x33bf5c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x33bf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_33bf60:
    // 0x33bf60: 0xc0ced9c  jal         func_33B670
label_33bf64:
    if (ctx->pc == 0x33BF64u) {
        ctx->pc = 0x33BF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF60u;
        // 0x33bf64: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF68u;
        goto label_33bf68;
    }
    ctx->pc = 0x33BF60u;
    SET_GPR_U32(ctx, 31, 0x33BF68u);
    ctx->pc = 0x33BF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33BF60u;
    // 0x33bf64: 0x2802b  sltu        $s0, $zero, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33B670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33B670u, 0x33BF60u, 0x33BF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33BF68u;
label_33bf68:
    // 0x33bf68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x33bf68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33bf6c:
    // 0x33bf6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33bf6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_33bf70:
    // 0x33bf70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33bf70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_33bf74:
    // 0x33bf74: 0x3e00008  jr          $ra
label_33bf78:
    if (ctx->pc == 0x33BF78u) {
        ctx->pc = 0x33BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF74u;
        // 0x33bf78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33BF7Cu;
        goto label_33bf7c;
    }
    ctx->pc = 0x33BF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33BF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33BF74u;
        // 0x33bf78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33BF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33BF7Cu;
label_33bf7c:
    // 0x33bf7c: 0x0  nop
    ctx->pc = 0x33bf7cu;
    // NOP
label_33bf80:
    // 0x33bf80: 0x0  nop
    ctx->pc = 0x33bf80u;
    // NOP
label_33bf84:
    // 0x33bf84: 0x0  nop
    ctx->pc = 0x33bf84u;
    // NOP
    ctx->pc = 0x33bf88u;
}
