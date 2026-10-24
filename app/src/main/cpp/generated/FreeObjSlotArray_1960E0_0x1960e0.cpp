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

// Function: FreeObjSlotArray_1960E0
// Address: 0x1960e0 - 0x196188
void FreeObjSlotArray_1960E0_0x1960e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjSlotArray_1960E0_0x1960e0");
#endif

    switch (ctx->pc) {
        case 0x196120u: goto label_196120;
        case 0x196134u: goto label_196134;
        case 0x196158u: goto label_196158;
        case 0x196168u: goto label_196168;
        default: break;
    }

    ctx->pc = 0x1960e0u;

    // 0x1960e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1960e4: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x1960e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x1960e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1960e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1960ec: 0x24424e18  addiu       $v0, $v0, 0x4E18
    ctx->pc = 0x1960ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19992));
    // 0x1960f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1960f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1960f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1960f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1960f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1960f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1960fc: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x1960fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x196100: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x196100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x196104: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x196104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196108: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x196108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x19610c: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x19610cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x196110: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x196114: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x196114u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196118: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x196118u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x19611c: 0x0  nop
    ctx->pc = 0x19611cu;
    // NOP
label_196120:
    // 0x196120: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x196120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x196124: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x196124u;
    {
        const bool branch_taken_0x196124 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x196124) {
            ctx->pc = 0x196128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196124u;
            // 0x196128: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19613Cu;
            goto label_19613c;
        }
    }
    ctx->pc = 0x19612Cu;
    // 0x19612c: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x19612Cu;
    SET_GPR_U32(ctx, 31, 0x196134u);
    ctx->pc = 0x196130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19612Cu;
    // 0x196130: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x19612Cu, 0x196134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196134u;
label_196134:
    // 0x196134: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x196134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x196138: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x196138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_19613c:
    // 0x19613c: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x19613Cu;
    {
        const bool branch_taken_0x19613c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x196140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19613Cu;
        // 0x196140: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19613c) {
            ctx->pc = 0x196120u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196120;
        }
    }
    ctx->pc = 0x196144u;
    // 0x196144: 0x8e450604  lw          $a1, 0x604($s2)
    ctx->pc = 0x196144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x196148: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196148u;
    {
        const bool branch_taken_0x196148 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x19614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196148u;
        // 0x19614c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196148) {
            ctx->pc = 0x19615Cu;
            goto label_19615c;
        }
    }
    ctx->pc = 0x196150u;
    // 0x196150: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x196150u;
    SET_GPR_U32(ctx, 31, 0x196158u);
    ctx->pc = 0x196154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196150u;
    // 0x196154: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x196150u, 0x196158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196158u;
label_196158:
    // 0x196158: 0xae400604  sw          $zero, 0x604($s2)
    ctx->pc = 0x196158u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1540), GPR_U32(ctx, 0));
label_19615c:
    // 0x19615c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19615cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196160: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x196160u;
    SET_GPR_U32(ctx, 31, 0x196168u);
    ctx->pc = 0x196164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x196160u;
    // 0x196164: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x196160u, 0x196168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x196168u;
label_196168:
    // 0x196168: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x196168u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19616c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19616cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x196170: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x196170u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x196174: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x196174u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196178: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x196178u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19617c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19617cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196180: 0x3e00008  jr          $ra
    ctx->pc = 0x196180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196180u;
        // 0x196184: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196188u;
}
