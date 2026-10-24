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

// Function: cIDManager_setIDData
// Address: 0x2accf8 - 0x2acd78
void cIDManager_setIDData_0x2accf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cIDManager_setIDData_0x2accf8");
#endif

    switch (ctx->pc) {
        case 0x2acd34u: goto label_2acd34;
        case 0x2acd50u: goto label_2acd50;
        default: break;
    }

    ctx->pc = 0x2accf8u;

    // 0x2accf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2accf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2accfc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2accfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2acd00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2acd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2acd04: 0x3c110045  lui         $s1, 0x45
    ctx->pc = 0x2acd04u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)69 << 16));
    // 0x2acd08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2acd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2acd0c: 0x2631af70  addiu       $s1, $s1, -0x5090
    ctx->pc = 0x2acd0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294946672));
    // 0x2acd10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2acd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2acd14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2acd14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd18: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2acd18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2acd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2acd20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2acd24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2acd24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2acd28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd2c: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2ACD2Cu;
    SET_GPR_U32(ctx, 31, 0x2ACD34u);
    ctx->pc = 0x2ACD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD2Cu;
    // 0x2acd30: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2ACD2Cu, 0x2ACD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD34u;
label_2acd34:
    // 0x2acd34: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x2acd34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2acd38: 0x2501821  addu        $v1, $s2, $s0
    ctx->pc = 0x2acd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2acd3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2acd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2acd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd44: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2acd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2acd48: 0xc0c733c  jal         func_31CCF0
    ctx->pc = 0x2ACD48u;
    SET_GPR_U32(ctx, 31, 0x2ACD50u);
    ctx->pc = 0x2ACD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD48u;
    // 0x2acd4c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CCF0u, 0x2ACD48u, 0x2ACD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD50u;
label_2acd50:
    // 0x2acd50: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x2acd50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2acd54: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2acd54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2acd58: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x2acd58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x2acd5c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2acd5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2acd60: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2acd60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2acd64: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2acd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2acd68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2acd68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acd6c: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACD6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACD6Cu;
        // 0x2acd70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACD6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACD74u;
    // 0x2acd74: 0x0  nop
    ctx->pc = 0x2acd74u;
    // NOP
    ctx->pc = 0x2acd78u;
}
