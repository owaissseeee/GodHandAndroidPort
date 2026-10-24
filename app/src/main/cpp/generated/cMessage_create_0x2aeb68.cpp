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

// Function: cMessage_create
// Address: 0x2aeb68 - 0x2aebf8
void cMessage_create_0x2aeb68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessage_create_0x2aeb68");
#endif

    switch (ctx->pc) {
        case 0x2aeba4u: goto label_2aeba4;
        case 0x2aebb0u: goto label_2aebb0;
        case 0x2aebccu: goto label_2aebcc;
        default: break;
    }

    ctx->pc = 0x2aeb68u;

    // 0x2aeb68: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2aeb68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2aeb6c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2aeb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2aeb70: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2aeb70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2aeb74: 0x88400  sll         $s0, $t0, 16
    ctx->pc = 0x2aeb74u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x2aeb78: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2aeb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2aeb7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aeb7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb80: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2aeb80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2aeb84: 0x30f200ff  andi        $s2, $a3, 0xFF
    ctx->pc = 0x2aeb84u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x2aeb88: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2aeb88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2aeb8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2aeb8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb90: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x2aeb90u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x2aeb94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2aeb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2aeb98: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2aeb98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeb9c: 0xc0abb7c  jal         func_2AEDF0
    ctx->pc = 0x2AEB9Cu;
    SET_GPR_U32(ctx, 31, 0x2AEBA4u);
    ctx->pc = 0x2AEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEB9Cu;
    // 0x2aeba0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEDF0u, 0x2AEB9Cu, 0x2AEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBA4u;
label_2aeba4:
    // 0x2aeba4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2aeba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aeba8: 0xc0abb90  jal         func_2AEE40
    ctx->pc = 0x2AEBA8u;
    SET_GPR_U32(ctx, 31, 0x2AEBB0u);
    ctx->pc = 0x2AEBACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBA8u;
    // 0x2aebac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEE40u, 0x2AEBA8u, 0x2AEBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBB0u;
label_2aebb0:
    // 0x2aebb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aebb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebb4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AEBB4u;
    {
        const bool branch_taken_0x2aebb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBB4u;
        // 0x2aebb8: 0x3265ffff  andi        $a1, $s3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aebb4) {
            ctx->pc = 0x2AEBD4u;
            goto label_2aebd4;
        }
    }
    ctx->pc = 0x2AEBBCu;
    // 0x2aebbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2aebbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebc0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2aebc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2aebc4: 0xc0ac856  jal         func_2B2158
    ctx->pc = 0x2AEBC4u;
    SET_GPR_U32(ctx, 31, 0x2AEBCCu);
    ctx->pc = 0x2AEBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AEBC4u;
    // 0x2aebc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2158u, 0x2AEBC4u, 0x2AEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AEBCCu;
label_2aebcc:
    // 0x2aebcc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2AEBCCu;
    {
        const bool branch_taken_0x2aebcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AEBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBCCu;
        // 0x2aebd0: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aebcc) {
            ctx->pc = 0x2AEBD8u;
            goto label_2aebd8;
        }
    }
    ctx->pc = 0x2AEBD4u;
label_2aebd4:
    // 0x2aebd4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2aebd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_2aebd8:
    // 0x2aebd8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2aebd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2aebdc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2aebdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2aebe0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2aebe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2aebe4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2aebe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2aebe8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2aebe8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2aebec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2aebecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2aebf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AEBF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AEBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AEBF0u;
        // 0x2aebf4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AEBF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AEBF8u;
}
