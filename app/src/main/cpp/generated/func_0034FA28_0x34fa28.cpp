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

// Function: func_0034FA28
// Address: 0x34fa28 - 0x34fad8
void func_0034FA28_0x34fa28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034FA28_0x34fa28");
#endif

    switch (ctx->pc) {
        case 0x34fa68u: goto label_34fa68;
        case 0x34fa7cu: goto label_34fa7c;
        default: break;
    }

    ctx->pc = 0x34fa28u;

    // 0x34fa28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x34fa28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x34fa2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x34fa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x34fa30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x34fa30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x34fa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x34fa38: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34fa38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa3c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x34fa3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x34fa40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34fa40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa44: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x34fa44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x34fa48: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x34fa48u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa4c: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x34fa4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x34fa50: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x34fa50u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa54: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x34fa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x34fa58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x34fa58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x34fa5c: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x34fa5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x34fa60: 0x8c931f7c  lw          $s3, 0x1F7C($a0)
    ctx->pc = 0x34fa60u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8060)));
    // 0x34fa64: 0x8e740000  lw          $s4, 0x0($s3)
    ctx->pc = 0x34fa64u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_34fa68:
    // 0x34fa68: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34fa68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x34fa6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34fa70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34fa74: 0xc0da2c6  jal         func_368B18
    ctx->pc = 0x34FA74u;
    SET_GPR_U32(ctx, 31, 0x34FA7Cu);
    ctx->pc = 0x34FA78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34FA74u;
    // 0x34fa78: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x368B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x368B18u, 0x34FA74u, 0x34FA7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34FA7Cu;
label_34fa7c:
    // 0x34fa7c: 0x2a060003  slti        $a2, $s0, 0x3
    ctx->pc = 0x34fa7cu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34fa80: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x34fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34fa84: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x34fa84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x34fa88: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x34fa88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x34fa8c: 0xb1182a  slt         $v1, $a1, $s1
    ctx->pc = 0x34fa8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x34fa90: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x34fa90u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
    // 0x34fa94: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x34FA94u;
    {
        const bool branch_taken_0x34fa94 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x34FA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FA94u;
        // 0x34fa98: 0xa3880a  movz        $s1, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34fa94) {
            ctx->pc = 0x34FA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_34fa68;
        }
    }
    ctx->pc = 0x34FA9Cu;
    // 0x34fa9c: 0xae710004  sw          $s1, 0x4($s3)
    ctx->pc = 0x34fa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 17));
    // 0x34faa0: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x34faa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    // 0x34faa4: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x34faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x34faa8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x34faa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34faac: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x34faacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x34fab0: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x34fab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34fab4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x34fab4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x34fab8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x34fab8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34fabc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x34fabcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34fac0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x34fac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34fac4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x34fac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x34fac8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x34fac8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x34facc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x34faccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x34fad0: 0x3e00008  jr          $ra
    ctx->pc = 0x34FAD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34FAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34FAD0u;
        // 0x34fad4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34FAD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34FAD8u;
}
