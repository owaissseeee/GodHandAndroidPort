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

// Function: func_001BEB28
// Address: 0x1beb28 - 0x1beba0
void func_001BEB28_0x1beb28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BEB28_0x1beb28");
#endif

    switch (ctx->pc) {
        case 0x1beb40u: goto label_1beb40;
        case 0x1beb54u: goto label_1beb54;
        case 0x1beb5cu: goto label_1beb5c;
        default: break;
    }

    ctx->pc = 0x1beb28u;

    // 0x1beb28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1beb28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1beb2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1beb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1beb30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1beb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1beb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1beb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1beb38: 0xc0c6be8  jal         func_31AFA0
    ctx->pc = 0x1BEB38u;
    SET_GPR_U32(ctx, 31, 0x1BEB40u);
    ctx->pc = 0x1BEB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB38u;
    // 0x1beb3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AFA0u, 0x1BEB38u, 0x1BEB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB40u;
label_1beb40:
    // 0x1beb40: 0x3c100057  lui         $s0, 0x57
    ctx->pc = 0x1beb40u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)87 << 16));
    // 0x1beb44: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1beb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1beb48: 0x26109b70  addiu       $s0, $s0, -0x6490
    ctx->pc = 0x1beb48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941552));
    // 0x1beb4c: 0xc07f0fa  jal         func_1FC3E8
    ctx->pc = 0x1BEB4Cu;
    SET_GPR_U32(ctx, 31, 0x1BEB54u);
    ctx->pc = 0x1BEB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB4Cu;
    // 0x1beb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3E8u, 0x1BEB4Cu, 0x1BEB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB54u;
label_1beb54:
    // 0x1beb54: 0xc07f0f4  jal         func_1FC3D0
    ctx->pc = 0x1BEB54u;
    SET_GPR_U32(ctx, 31, 0x1BEB5Cu);
    ctx->pc = 0x1BEB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEB54u;
    // 0x1beb58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FC3D0u, 0x1BEB54u, 0x1BEB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEB5Cu;
label_1beb5c:
    // 0x1beb5c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x1beb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x1beb60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1beb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1beb64: 0x8c64d6e8  lw          $a0, -0x2918($v1)
    ctx->pc = 0x1beb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956776)));
    // 0x1beb68: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1beb68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1beb6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1beb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1beb70: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1beb70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1beb74: 0xac821a10  sw          $v0, 0x1A10($a0)
    ctx->pc = 0x1beb74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6672), GPR_U32(ctx, 2));
    // 0x1beb78: 0xa22302f4  sb          $v1, 0x2F4($s1)
    ctx->pc = 0x1beb78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 3));
    // 0x1beb7c: 0x8e220600  lw          $v0, 0x600($s1)
    ctx->pc = 0x1beb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1536)));
    // 0x1beb80: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1beb80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1beb84: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1beb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1beb88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1beb88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1beb8c: 0xae220600  sw          $v0, 0x600($s1)
    ctx->pc = 0x1beb8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1536), GPR_U32(ctx, 2));
    // 0x1beb90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1beb90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1beb94: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEB94u;
        // 0x1beb98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEB94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEB9Cu;
    // 0x1beb9c: 0x0  nop
    ctx->pc = 0x1beb9cu;
    // NOP
    ctx->pc = 0x1beba0u;
}
