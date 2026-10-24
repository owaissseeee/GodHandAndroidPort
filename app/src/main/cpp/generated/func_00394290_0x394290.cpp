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

// Function: func_00394290
// Address: 0x394290 - 0x394328
void func_00394290_0x394290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00394290_0x394290");
#endif

    switch (ctx->pc) {
        case 0x3942c8u: goto label_3942c8;
        case 0x3942ecu: goto label_3942ec;
        default: break;
    }

    ctx->pc = 0x394290u;

    // 0x394290: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x394290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x394294: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x394294u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x394298: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x394298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x39429c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39429cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3942a0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3942a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3942a4: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x3942a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3942a8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3942a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3942ac: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3942acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3942b0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3942b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3942b4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3942b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3942b8: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3942B8u;
    {
        const bool branch_taken_0x3942b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3942BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942B8u;
        // 0x3942bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942b8) {
            ctx->pc = 0x394304u;
            goto label_394304;
        }
    }
    ctx->pc = 0x3942C0u;
    // 0x3942c0: 0x3c12ffff  lui         $s2, 0xFFFF
    ctx->pc = 0x3942c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65535 << 16));
    // 0x3942c4: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x3942c4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_3942c8:
    // 0x3942c8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x3942c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3942cc: 0x51202  srl         $v0, $a1, 8
    ctx->pc = 0x3942ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 8));
    // 0x3942d0: 0x5454000a  bnel        $v0, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x3942D0u;
    {
        const bool branch_taken_0x3942d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3942d0) {
            ctx->pc = 0x3942D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3942D0u;
            // 0x3942d4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3942FCu;
            goto label_3942fc;
        }
    }
    ctx->pc = 0x3942D8u;
    // 0x3942d8: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x3942d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3942dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3942dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3942e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3942e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3942e4: 0xc0e5022  jal         func_394088
    ctx->pc = 0x3942E4u;
    SET_GPR_U32(ctx, 31, 0x3942ECu);
    ctx->pc = 0x3942E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3942E4u;
    // 0x3942e8: 0x2663021  addu        $a2, $s3, $a2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 6)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x394088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x394088u, 0x3942E4u, 0x3942ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3942ECu;
label_3942ec:
    // 0x3942ec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3942ECu;
    {
        const bool branch_taken_0x3942ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3942F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942ECu;
        // 0x3942f0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942ec) {
            ctx->pc = 0x3942FCu;
            goto label_3942fc;
        }
    }
    ctx->pc = 0x3942F4u;
    // 0x3942f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3942F4u;
    {
        const bool branch_taken_0x3942f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3942F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942F4u;
        // 0x3942f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942f4) {
            ctx->pc = 0x394308u;
            goto label_394308;
        }
    }
    ctx->pc = 0x3942FCu;
label_3942fc:
    // 0x3942fc: 0x1632fff2  bne         $s1, $s2, . + 4 + (-0xE << 2)
    ctx->pc = 0x3942FCu;
    {
        const bool branch_taken_0x3942fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x394300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3942FCu;
        // 0x394300: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3942fc) {
            ctx->pc = 0x3942C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3942c8;
        }
    }
    ctx->pc = 0x394304u;
label_394304:
    // 0x394304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x394304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_394308:
    // 0x394308: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x394308u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x39430c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x39430cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x394310: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x394310u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x394314: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x394314u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x394318: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x394318u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39431c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39431cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x394320: 0x3e00008  jr          $ra
    ctx->pc = 0x394320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x394324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x394320u;
        // 0x394324: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x394320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x394328u;
}
