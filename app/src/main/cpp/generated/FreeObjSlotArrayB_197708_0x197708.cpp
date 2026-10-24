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

// Function: FreeObjSlotArrayB_197708
// Address: 0x197708 - 0x1977b0
void FreeObjSlotArrayB_197708_0x197708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FreeObjSlotArrayB_197708_0x197708");
#endif

    switch (ctx->pc) {
        case 0x197748u: goto label_197748;
        case 0x19775cu: goto label_19775c;
        case 0x197780u: goto label_197780;
        case 0x197790u: goto label_197790;
        default: break;
    }

    ctx->pc = 0x197708u;

    // 0x197708: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x197708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19770c: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x19770cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x197710: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x197710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x197714: 0x24424f28  addiu       $v0, $v0, 0x4F28
    ctx->pc = 0x197714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20264));
    // 0x197718: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x197718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x19771c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19771cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197720: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x197720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x197724: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x197724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    // 0x197728: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x197728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x19772c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19772cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197730: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x197730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x197734: 0x3c130057  lui         $s3, 0x57
    ctx->pc = 0x197734u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)87 << 16));
    // 0x197738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x197738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19773c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19773cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197740: 0xae420214  sw          $v0, 0x214($s2)
    ctx->pc = 0x197740u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 2));
    // 0x197744: 0x0  nop
    ctx->pc = 0x197744u;
    // NOP
label_197748:
    // 0x197748: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x197748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19774c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19774Cu;
    {
        const bool branch_taken_0x19774c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x19774c) {
            ctx->pc = 0x197750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19774Cu;
            // 0x197750: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x197764u;
            goto label_197764;
        }
    }
    ctx->pc = 0x197754u;
    // 0x197754: 0xc07f89e  jal         func_1FE278
    ctx->pc = 0x197754u;
    SET_GPR_U32(ctx, 31, 0x19775Cu);
    ctx->pc = 0x197758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197754u;
    // 0x197758: 0x26644380  addiu       $a0, $s3, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE278u, 0x197754u, 0x19775Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19775Cu;
label_19775c:
    // 0x19775c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x19775cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x197760: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x197760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_197764:
    // 0x197764: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x197764u;
    {
        const bool branch_taken_0x197764 = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x197768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197764u;
        // 0x197768: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197764) {
            ctx->pc = 0x197748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_197748;
        }
    }
    ctx->pc = 0x19776Cu;
    // 0x19776c: 0x8e450604  lw          $a1, 0x604($s2)
    ctx->pc = 0x19776cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1540)));
    // 0x197770: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x197770u;
    {
        const bool branch_taken_0x197770 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x197774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x197770u;
        // 0x197774: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197770) {
            ctx->pc = 0x197784u;
            goto label_197784;
        }
    }
    ctx->pc = 0x197778u;
    // 0x197778: 0xc07f852  jal         func_1FE148
    ctx->pc = 0x197778u;
    SET_GPR_U32(ctx, 31, 0x197780u);
    ctx->pc = 0x19777Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197778u;
    // 0x19777c: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE148u, 0x197778u, 0x197780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197780u;
label_197780:
    // 0x197780: 0xae400604  sw          $zero, 0x604($s2)
    ctx->pc = 0x197780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1540), GPR_U32(ctx, 0));
label_197784:
    // 0x197784: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x197784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197788: 0xc06dbce  jal         func_1B6F38
    ctx->pc = 0x197788u;
    SET_GPR_U32(ctx, 31, 0x197790u);
    ctx->pc = 0x19778Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197788u;
    // 0x19778c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B6F38u, 0x197788u, 0x197790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197790u;
label_197790:
    // 0x197790: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x197790u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x197794: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x197794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x197798: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x197798u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19779c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x19779cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1977a0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1977a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1977a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1977a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1977a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1977A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1977ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1977A8u;
        // 0x1977ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1977A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1977B0u;
}
