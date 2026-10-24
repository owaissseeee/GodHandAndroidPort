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

// Function: func_0027CE70
// Address: 0x27ce70 - 0x27cf40
void func_0027CE70_0x27ce70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027CE70_0x27ce70");
#endif

    switch (ctx->pc) {
        case 0x27cee8u: goto label_27cee8;
        case 0x27cf18u: goto label_27cf18;
        case 0x27cf30u: goto label_27cf30;
        default: break;
    }

    ctx->pc = 0x27ce70u;

    // 0x27ce70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27ce70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x27ce74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x27ce74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x27ce78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27ce78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x27ce7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27ce7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ce80: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x27ce80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x27ce84: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CE84u;
    {
        const bool branch_taken_0x27ce84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE84u;
        // 0x27ce88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce84) {
            ctx->pc = 0x27CE9Cu;
            goto label_27ce9c;
        }
    }
    ctx->pc = 0x27CE8Cu;
    // 0x27ce8c: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x27CE8Cu;
    {
        const bool branch_taken_0x27ce8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ce8c) {
            ctx->pc = 0x27CF28u;
            goto label_27cf28;
        }
    }
    ctx->pc = 0x27CE94u;
    // 0x27ce94: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x27CE94u;
    {
        const bool branch_taken_0x27ce94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CE94u;
        // 0x27ce98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ce94) {
            ctx->pc = 0x27CF34u;
            goto label_27cf34;
        }
    }
    ctx->pc = 0x27CE9Cu;
label_27ce9c:
    // 0x27ce9c: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x27ce9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x27cea0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27CEA0u;
    {
        const bool branch_taken_0x27cea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27CEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEA0u;
        // 0x27cea4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cea0) {
            ctx->pc = 0x27CEBCu;
            goto label_27cebc;
        }
    }
    ctx->pc = 0x27CEA8u;
    // 0x27cea8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27CEA8u;
    {
        const bool branch_taken_0x27cea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27cea8) {
            ctx->pc = 0x27CEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CEA8u;
            // 0x27ceac: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CEC0u;
            goto label_27cec0;
        }
    }
    ctx->pc = 0x27CEB0u;
    // 0x27ceb0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27ceb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27ceb4: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x27CEB4u;
    {
        const bool branch_taken_0x27ceb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27ceb4) {
            ctx->pc = 0x27CEB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CEB4u;
            // 0x27ceb8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CEF0u;
            goto label_27cef0;
        }
    }
    ctx->pc = 0x27CEBCu;
label_27cebc:
    // 0x27cebc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x27cebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
label_27cec0:
    // 0x27cec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cec4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cec8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27cec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cecc: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x27ceccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x27ced0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ced0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ced4: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x27ced4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x27ced8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27ced8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cedc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27cee0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27CEE0u;
    SET_GPR_U32(ctx, 31, 0x27CEE8u);
    ctx->pc = 0x27CEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CEE0u;
    // 0x27cee4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CEE0u, 0x27CEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CEE8u;
label_27cee8:
    // 0x27cee8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27CEE8u;
    {
        const bool branch_taken_0x27cee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CEE8u;
        // 0x27ceec: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cee8) {
            ctx->pc = 0x27CF1Cu;
            goto label_27cf1c;
        }
    }
    ctx->pc = 0x27CEF0u;
label_27cef0:
    // 0x27cef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27cef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cef4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27cef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27cef8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27cef8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cefc: 0x8c450078  lw          $a1, 0x78($v0)
    ctx->pc = 0x27cefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x27cf00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27cf00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf04: 0x8c46007c  lw          $a2, 0x7C($v0)
    ctx->pc = 0x27cf04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x27cf08: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27cf08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27cf0c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27cf0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27cf10: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27CF10u;
    SET_GPR_U32(ctx, 31, 0x27CF18u);
    ctx->pc = 0x27CF14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF10u;
    // 0x27cf14: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27CF10u, 0x27CF18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF18u;
label_27cf18:
    // 0x27cf18: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x27cf18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_27cf1c:
    // 0x27cf1c: 0xae0015d4  sw          $zero, 0x15D4($s0)
    ctx->pc = 0x27cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5588), GPR_U32(ctx, 0));
    // 0x27cf20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27cf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27cf24: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x27cf24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_27cf28:
    // 0x27cf28: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27CF28u;
    SET_GPR_U32(ctx, 31, 0x27CF30u);
    ctx->pc = 0x27CF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CF28u;
    // 0x27cf2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27CF28u, 0x27CF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CF30u;
label_27cf30:
    // 0x27cf30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x27cf30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27cf34:
    // 0x27cf34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27cf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27cf38: 0x3e00008  jr          $ra
    ctx->pc = 0x27CF38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27CF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CF38u;
        // 0x27cf3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CF38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27CF40u;
}
