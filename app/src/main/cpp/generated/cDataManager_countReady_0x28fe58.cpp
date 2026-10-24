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

// Function: cDataManager_countReady
// Address: 0x28fe58 - 0x28fed8
void cDataManager_countReady_0x28fe58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cDataManager_countReady_0x28fe58");
#endif

    switch (ctx->pc) {
        case 0x28fe90u: goto label_28fe90;
        case 0x28fe9cu: goto label_28fe9c;
        default: break;
    }

    ctx->pc = 0x28fe58u;

    // 0x28fe58: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28fe58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28fe5c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28fe5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28fe60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28fe60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28fe64: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28fe64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28fe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28fe6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28fe6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe70: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28fe74: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28fe74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fe78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fe7c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28fe80: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28FE80u;
    {
        const bool branch_taken_0x28fe80 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x28FE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE80u;
        // 0x28fe84: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe80) {
            ctx->pc = 0x28FEB8u;
            goto label_28feb8;
        }
    }
    ctx->pc = 0x28FE88u;
    // 0x28fe88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28fe88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe8c: 0x0  nop
    ctx->pc = 0x28fe8cu;
    // NOP
label_28fe90:
    // 0x28fe90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28fe90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe94: 0xc07fc8e  jal         func_1FF238
    ctx->pc = 0x28FE94u;
    SET_GPR_U32(ctx, 31, 0x28FE9Cu);
    ctx->pc = 0x28FE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FE94u;
    // 0x28fe98: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FF238u, 0x28FE94u, 0x28FE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FE9Cu;
label_28fe9c:
    // 0x28fe9c: 0x2631005c  addiu       $s1, $s1, 0x5C
    ctx->pc = 0x28fe9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    // 0x28fea0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28fea4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x28fea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x28fea8: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x28fea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28feac: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x28feacu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28feb0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28FEB0u;
    {
        const bool branch_taken_0x28feb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FEB0u;
        // 0x28feb4: 0x82800a  movz        $s0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28feb0) {
            ctx->pc = 0x28FE90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fe90;
        }
    }
    ctx->pc = 0x28FEB8u;
label_28feb8:
    // 0x28feb8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28feb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28febc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28febcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fec0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28fec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28fec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fec8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28fec8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fecc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28feccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fed0: 0x3e00008  jr          $ra
    ctx->pc = 0x28FED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FED0u;
        // 0x28fed4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FED8u;
}
