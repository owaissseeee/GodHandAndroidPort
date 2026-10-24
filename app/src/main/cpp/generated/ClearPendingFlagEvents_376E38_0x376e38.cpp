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

// Function: ClearPendingFlagEvents_376E38
// Address: 0x376e38 - 0x376ea0
void ClearPendingFlagEvents_376E38_0x376e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ClearPendingFlagEvents_376E38_0x376e38");
#endif

    switch (ctx->pc) {
        case 0x376e6cu: goto label_376e6c;
        case 0x376e8cu: goto label_376e8c;
        default: break;
    }

    ctx->pc = 0x376e38u;

    // 0x376e38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376e3c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376e40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376e48: 0x2450a790  addiu       $s0, $v0, -0x5870
    ctx->pc = 0x376e48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x376e4c: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x376e4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x76A7B2u));
    // 0x376e50: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x376e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x376e54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x376E54u;
    {
        const bool branch_taken_0x376e54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E54u;
        // 0x376e58: 0x3062fffb  andi        $v0, $v1, 0xFFFB (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65531);
        ctx->in_delay_slot = false;
        if (branch_taken_0x376e54) {
            ctx->pc = 0x376E70u;
            goto label_376e70;
        }
    }
    ctx->pc = 0x376E5Cu;
    // 0x376e5c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x376e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376e60: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x376e60u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x376e64: 0xc0df66c  jal         func_37D9B0
    ctx->pc = 0x376E64u;
    SET_GPR_U32(ctx, 31, 0x376E6Cu);
    ctx->pc = 0x376E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E64u;
    // 0x376e68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D9B0u, 0x376E64u, 0x376E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E6Cu;
label_376e6c:
    // 0x376e6c: 0x96030022  lhu         $v1, 0x22($s0)
    ctx->pc = 0x376e6cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 34)));
label_376e70:
    // 0x376e70: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x376e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x376e74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x376E74u;
    {
        const bool branch_taken_0x376e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E74u;
        // 0x376e78: 0x3062fff7  andi        $v0, $v1, 0xFFF7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65527);
        ctx->in_delay_slot = false;
        if (branch_taken_0x376e74) {
            ctx->pc = 0x376E8Cu;
            goto label_376e8c;
        }
    }
    ctx->pc = 0x376E7Cu;
    // 0x376e7c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x376e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x376e80: 0xa6020022  sh          $v0, 0x22($s0)
    ctx->pc = 0x376e80u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 2));
    // 0x376e84: 0xc0df66c  jal         func_37D9B0
    ctx->pc = 0x376E84u;
    SET_GPR_U32(ctx, 31, 0x376E8Cu);
    ctx->pc = 0x376E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376E84u;
    // 0x376e88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D9B0u, 0x376E84u, 0x376E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376E8Cu;
label_376e8c:
    // 0x376e8c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x376e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376e94: 0x3e00008  jr          $ra
    ctx->pc = 0x376E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376E94u;
        // 0x376e98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376E9Cu;
    // 0x376e9c: 0x0  nop
    ctx->pc = 0x376e9cu;
    // NOP
    ctx->pc = 0x376ea0u;
}
