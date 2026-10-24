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

// Function: func_00393FD8
// Address: 0x393fd8 - 0x394088
void func_00393FD8_0x393fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00393FD8_0x393fd8");
#endif

    switch (ctx->pc) {
        case 0x394010u: goto label_394010;
        case 0x394018u: goto label_394018;
        case 0x39403cu: goto label_39403c;
        default: break;
    }

    ctx->pc = 0x393fd8u;

    // 0x393fd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x393fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x393fdc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x393fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x393fe0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x393fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x393fe4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x393fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x393fe8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x393fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x393fec: 0x30b3ffff  andi        $s3, $a1, 0xFFFF
    ctx->pc = 0x393fecu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x393ff0: 0x8c52852c  lw          $s2, -0x7AD4($v0)
    ctx->pc = 0x393ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x3F852Cu));
    // 0x393ff4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x393ff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393ff8: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x393ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x393ffc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x393ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x394000: 0x12400017  beqz        $s2, . + 4 + (0x17 << 2)
    ctx->pc = 0x394000u;
    {
        const bool branch_taken_0x394000 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x394004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394000u;
        // 0x394004: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394000) {
            ctx->pc = 0x394060u;
            goto label_394060;
        }
    }
    ctx->pc = 0x394008u;
    // 0x394008: 0x8e510010  lw          $s1, 0x10($s2)
    ctx->pc = 0x394008u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x39400c: 0x0  nop
    ctx->pc = 0x39400cu;
    // NOP
label_394010:
    // 0x394010: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x394010u;
    {
        const bool branch_taken_0x394010 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x394014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394010u;
        // 0x394014: 0x8e50000c  lw          $s0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394010) {
            ctx->pc = 0x394054u;
            goto label_394054;
        }
    }
    ctx->pc = 0x394018u;
label_394018:
    // 0x394018: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x394018u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
    // 0x39401c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x39401Cu;
    {
        const bool branch_taken_0x39401c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39401c) {
            ctx->pc = 0x394020u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39401Cu;
            // 0x394020: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39404Cu;
            goto label_39404c;
        }
    }
    ctx->pc = 0x394024u;
    // 0x394024: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x394024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x394028: 0x54530008  bnel        $v0, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x394028u;
    {
        const bool branch_taken_0x394028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x394028) {
            ctx->pc = 0x39402Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394028u;
            // 0x39402c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39404Cu;
            goto label_39404c;
        }
    }
    ctx->pc = 0x394030u;
    // 0x394030: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x394030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x394034: 0xc0e959e  jal         func_3A5678
    ctx->pc = 0x394034u;
    SET_GPR_U32(ctx, 31, 0x39403Cu);
    ctx->pc = 0x394038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x394034u;
    // 0x394038: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5678u, 0x394034u, 0x39403Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39403Cu;
label_39403c:
    // 0x39403c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x39403Cu;
    {
        const bool branch_taken_0x39403c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x394040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39403Cu;
        // 0x394040: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39403c) {
            ctx->pc = 0x39404Cu;
            goto label_39404c;
        }
    }
    ctx->pc = 0x394044u;
    // 0x394044: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x394044u;
    {
        const bool branch_taken_0x394044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x394048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394044u;
        // 0x394048: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x394044) {
            ctx->pc = 0x394064u;
            goto label_394064;
        }
    }
    ctx->pc = 0x39404Cu;
label_39404c:
    // 0x39404c: 0x1620fff2  bnez        $s1, . + 4 + (-0xE << 2)
    ctx->pc = 0x39404Cu;
    {
        const bool branch_taken_0x39404c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x394050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39404Cu;
        // 0x394050: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39404c) {
            ctx->pc = 0x394018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394018;
        }
    }
    ctx->pc = 0x394054u;
label_394054:
    // 0x394054: 0x8e520030  lw          $s2, 0x30($s2)
    ctx->pc = 0x394054u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x394058: 0x5640ffed  bnel        $s2, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x394058u;
    {
        const bool branch_taken_0x394058 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x394058) {
            ctx->pc = 0x39405Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x394058u;
            // 0x39405c: 0x8e510010  lw          $s1, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x394010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_394010;
        }
    }
    ctx->pc = 0x394060u;
label_394060:
    // 0x394060: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x394060u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_394064:
    // 0x394064: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x394064u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x394068: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x394068u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x39406c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x39406cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394070: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x394070u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394074: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x394074u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x394078: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x394078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39407c: 0x3e00008  jr          $ra
    ctx->pc = 0x39407Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39407Cu;
        // 0x394080: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39407Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394084u;
    // 0x394084: 0x0  nop
    ctx->pc = 0x394084u;
    // NOP
    ctx->pc = 0x394088u;
}
