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

// Function: InitAllocBuffer_14FE08
// Address: 0x14fe08 - 0x14fe78
void InitAllocBuffer_14FE08_0x14fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitAllocBuffer_14FE08_0x14fe08");
#endif

    switch (ctx->pc) {
        case 0x14fe3cu: goto label_14fe3c;
        case 0x14fe50u: goto label_14fe50;
        case 0x14fe5cu: goto label_14fe5c;
        default: break;
    }

    ctx->pc = 0x14fe08u;

    // 0x14fe08: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14fe0c: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x14fe0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x14fe10: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14fe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14fe14: 0x24c64200  addiu       $a2, $a2, 0x4200
    ctx->pc = 0x14fe14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16896));
    // 0x14fe18: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14fe1c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14fe1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14fe20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14fe24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14fe24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe28: 0x128900  sll         $s1, $s2, 4
    ctx->pc = 0x14fe28u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
    // 0x14fe2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14fe2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14fe30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x14fe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe34: 0xc0c3b82  jal         func_30EE08
    ctx->pc = 0x14FE34u;
    SET_GPR_U32(ctx, 31, 0x14FE3Cu);
    ctx->pc = 0x14FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE34u;
    // 0x14fe38: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30EE08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30EE08u, 0x14FE34u, 0x14FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE3Cu;
label_14fe3c:
    // 0x14fe3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14fe3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14fe40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fe44: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x14fe44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x14fe48: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x14FE48u;
    SET_GPR_U32(ctx, 31, 0x14FE50u);
    ctx->pc = 0x14FE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE48u;
    // 0x14fe4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x14FE48u, 0x14FE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE50u;
label_14fe50:
    // 0x14fe50: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x14fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
    // 0x14fe54: 0xc053f9e  jal         func_14FE78
    ctx->pc = 0x14FE54u;
    SET_GPR_U32(ctx, 31, 0x14FE5Cu);
    ctx->pc = 0x14FE58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14FE54u;
    // 0x14fe58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FE78u, 0x14FE54u, 0x14FE5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14FE5Cu;
label_14fe5c:
    // 0x14fe5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14fe5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fe60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14fe60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fe64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14fe64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fe68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14fe68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fe6c: 0x3e00008  jr          $ra
    ctx->pc = 0x14FE6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14FE6Cu;
        // 0x14fe70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14FE6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14FE74u;
    // 0x14fe74: 0x0  nop
    ctx->pc = 0x14fe74u;
    // NOP
    ctx->pc = 0x14fe78u;
}
