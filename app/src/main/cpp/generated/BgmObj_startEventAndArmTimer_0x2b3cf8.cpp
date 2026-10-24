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

// Function: BgmObj_startEventAndArmTimer
// Address: 0x2b3cf8 - 0x2b3d70
void BgmObj_startEventAndArmTimer_0x2b3cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BgmObj_startEventAndArmTimer_0x2b3cf8");
#endif

    switch (ctx->pc) {
        case 0x2b3d2cu: goto label_2b3d2c;
        default: break;
    }

    ctx->pc = 0x2b3cf8u;

    // 0x2b3cf8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b3cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b3cfc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b3cfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b3d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b3d04: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d08: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b3d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b3d0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b3d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3d14: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2b3d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2b3d18: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x2b3d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x2b3d1c: 0x8e22008c  lw          $v0, 0x8C($s1)
    ctx->pc = 0x2b3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
    // 0x2b3d20: 0x94500002  lhu         $s0, 0x2($v0)
    ctx->pc = 0x2b3d20u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b3d24: 0xc0b4584  jal         func_2D1610
    ctx->pc = 0x2B3D24u;
    SET_GPR_U32(ctx, 31, 0x2B3D2Cu);
    ctx->pc = 0x2B3D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3D24u;
    // 0x2b3d28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D1610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D1610u, 0x2B3D24u, 0x2B3D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3D2Cu;
label_2b3d2c:
    // 0x2b3d2c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2b3d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2b3d30: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3D30u;
    {
        const bool branch_taken_0x2b3d30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D30u;
        // 0x2b3d34: 0x2a02000c  slti        $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d30) {
            ctx->pc = 0x2B3D4Cu;
            goto label_2b3d4c;
        }
    }
    ctx->pc = 0x2B3D38u;
    // 0x2b3d38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B3D38u;
    {
        const bool branch_taken_0x2b3d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D38u;
        // 0x2b3d3c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3d38) {
            ctx->pc = 0x2B3D4Cu;
            goto label_2b3d4c;
        }
    }
    ctx->pc = 0x2B3D40u;
    // 0x2b3d40: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x2b3d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2b3d44: 0x56020001  bnel        $s0, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2B3D44u;
    {
        const bool branch_taken_0x2b3d44 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3d44) {
            ctx->pc = 0x2B3D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3D44u;
            // 0x2b3d48: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3D4Cu;
            goto label_2b3d4c;
        }
    }
    ctx->pc = 0x2B3D4Cu;
label_2b3d4c:
    // 0x2b3d4c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x2b3d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x2b3d50: 0xa622002e  sh          $v0, 0x2E($s1)
    ctx->pc = 0x2b3d50u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 46), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b3d54: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b3d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b3d58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b3d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b3d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3d64: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3D64u;
        // 0x2b3d68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3D6Cu;
    // 0x2b3d6c: 0x0  nop
    ctx->pc = 0x2b3d6cu;
    // NOP
    ctx->pc = 0x2b3d70u;
}
