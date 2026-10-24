#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: sceMcUnformat
// Address: 0x7cea00 - 0x7cead0
void sceMcUnformat_0x7cea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sceMcUnformat_0x7cea00");
#endif

    switch (ctx->pc) {
        case 0x7cea44u: goto label_7cea44;
        case 0x7cea8cu: goto label_7cea8c;
        case 0x7cea9cu: goto label_7cea9c;
        default: break;
    }

    ctx->pc = 0x7cea00u;

    // 0x7cea00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x7cea00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x7cea04: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7cea04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7cea08: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7cea08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7cea0c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7cea0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7cea10: 0x24521980  addiu       $s2, $v0, 0x1980
    ctx->pc = 0x7cea10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6528));
    // 0x7cea14: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7cea14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7cea18: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7cea18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cea1c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x7cea1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x7cea20: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x7cea20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x7cea24: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x7cea24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7D19A4u));
    // 0x7cea28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CEA28u;
    {
        const bool branch_taken_0x7cea28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CEA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEA28u;
        // 0x7cea2c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cea28) {
            ctx->pc = 0x7CEA38u;
            goto label_7cea38;
        }
    }
    ctx->pc = 0x7CEA30u;
    // 0x7cea30: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x7CEA30u;
    {
        const bool branch_taken_0x7cea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEA30u;
        // 0x7cea34: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cea30) {
            ctx->pc = 0x7CEAB0u;
            goto label_7ceab0;
        }
    }
    ctx->pc = 0x7CEA38u;
label_7cea38:
    // 0x7cea38: 0x3c13007d  lui         $s3, 0x7D
    ctx->pc = 0x7cea38u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)125 << 16));
    // 0x7cea3c: 0xc0ebf3c  jal         func_3AFCF0
    ctx->pc = 0x7CEA3Cu;
    SET_GPR_U32(ctx, 31, 0x7CEA44u);
    ctx->pc = 0x7CEA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEA3Cu;
    // 0x7cea40: 0x8e6407b4  lw          $a0, 0x7B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCF0u, 0x7CEA3Cu, 0x7CEA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEA44u;
label_7cea44:
    // 0x7cea44: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x7CEA44u;
    {
        const bool branch_taken_0x7cea44 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x7CEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEA44u;
        // 0x7cea48: 0x3c07007d  lui         $a3, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cea44) {
            ctx->pc = 0x7CEA54u;
            goto label_7cea54;
        }
    }
    ctx->pc = 0x7CEA4Cu;
    // 0x7cea4c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x7CEA4Cu;
    {
        const bool branch_taken_0x7cea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEA4Cu;
        // 0x7cea50: 0x2402ff38  addiu       $v0, $zero, -0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cea4c) {
            ctx->pc = 0x7CEAB0u;
            goto label_7ceab0;
        }
    }
    ctx->pc = 0x7CEA54u;
label_7cea54:
    // 0x7cea54: 0x3c09007d  lui         $t1, 0x7D
    ctx->pc = 0x7cea54u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)125 << 16));
    // 0x7cea58: 0x24e71a00  addiu       $a3, $a3, 0x1A00
    ctx->pc = 0x7cea58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6656));
    // 0x7cea5c: 0x3c0b007d  lui         $t3, 0x7D
    ctx->pc = 0x7cea5cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)125 << 16));
    // 0x7cea60: 0xacf00004  sw          $s0, 0x4($a3)
    ctx->pc = 0x7cea60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 16));
    // 0x7cea64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x7cea64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cea68: 0xacf10008  sw          $s1, 0x8($a3)
    ctx->pc = 0x7cea68u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 17));
    // 0x7cea6c: 0x25292f40  addiu       $t1, $t1, 0x2F40
    ctx->pc = 0x7cea6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 12096));
    // 0x7cea70: 0x256bd628  addiu       $t3, $t3, -0x29D8
    ctx->pc = 0x7cea70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956584));
    // 0x7cea74: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x7cea74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x7cea78: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x7cea78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x7cea7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7cea7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7cea80: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x7cea80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x7cea84: 0xc0ecc4a  jal         func_3B3128
    ctx->pc = 0x7CEA84u;
    SET_GPR_U32(ctx, 31, 0x7CEA8Cu);
    ctx->pc = 0x7CEA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEA84u;
    // 0x7cea88: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B3128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B3128u, 0x7CEA84u, 0x7CEA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEA8Cu;
label_7cea8c:
    // 0x7cea8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CEA8Cu;
    {
        const bool branch_taken_0x7cea8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEA8Cu;
        // 0x7cea90: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cea8c) {
            ctx->pc = 0x7CEAA4u;
            goto label_7ceaa4;
        }
    }
    ctx->pc = 0x7CEA94u;
    // 0x7cea94: 0xc0ebf30  jal         func_3AFCC0
    ctx->pc = 0x7CEA94u;
    SET_GPR_U32(ctx, 31, 0x7CEA9Cu);
    ctx->pc = 0x7CEA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CEA94u;
    // 0x7cea98: 0x8e6407b4  lw          $a0, 0x7B4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1972)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFCC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFCC0u, 0x7CEA94u, 0x7CEA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CEA9Cu;
label_7cea9c:
    // 0x7cea9c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x7CEA9Cu;
    {
        const bool branch_taken_0x7cea9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CEAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEA9Cu;
        // 0x7ceaa0: 0x2402ffa5  addiu       $v0, $zero, -0x5B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cea9c) {
            ctx->pc = 0x7CEAB0u;
            goto label_7ceab0;
        }
    }
    ctx->pc = 0x7CEAA4u;
label_7ceaa4:
    // 0x7ceaa4: 0x3c03007d  lui         $v1, 0x7D
    ctx->pc = 0x7ceaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)125 << 16));
    // 0x7ceaa8: 0xac6207b0  sw          $v0, 0x7B0($v1)
    ctx->pc = 0x7ceaa8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x7D07B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x7D07B0u, _value); } while (0);
    // 0x7ceaac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x7ceaacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_7ceab0:
    // 0x7ceab0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x7ceab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ceab4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x7ceab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ceab8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7ceab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ceabc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7ceabcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ceac0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7ceac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ceac4: 0x3e00008  jr          $ra
    ctx->pc = 0x7CEAC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CEAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CEAC4u;
        // 0x7ceac8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CEAC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CEACCu;
    // 0x7ceacc: 0x0  nop
    ctx->pc = 0x7ceaccu;
    // NOP
    ctx->pc = 0x7cead0u;
}
} // namespace gh_mcport
