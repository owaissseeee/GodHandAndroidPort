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

// Function: func_00330A68
// Address: 0x330a68 - 0x330ad0
void func_00330A68_0x330a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00330A68_0x330a68");
#endif

    switch (ctx->pc) {
        case 0x330a8cu: goto label_330a8c;
        default: break;
    }

    ctx->pc = 0x330a68u;

    // 0x330a68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x330a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x330a6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x330a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x330a70: 0x3c100075  lui         $s0, 0x75
    ctx->pc = 0x330a70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)117 << 16));
    // 0x330a74: 0x26106080  addiu       $s0, $s0, 0x6080
    ctx->pc = 0x330a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24704));
    // 0x330a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x330a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x330a7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x330a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x330a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x330a84: 0xc0e9637  jal         func_3A58DC
    ctx->pc = 0x330A84u;
    SET_GPR_U32(ctx, 31, 0x330A8Cu);
    ctx->pc = 0x330A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330A84u;
    // 0x330a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A58DCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A58DCu, 0x330A84u, 0x330A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330A8Cu;
label_330a8c:
    // 0x330a8c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x330a8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x330a90: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x330a90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x330a94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x330a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330a98: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x330A98u;
    {
        const bool branch_taken_0x330a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330A98u;
        // 0x330a9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330a98) {
            ctx->pc = 0x330AB8u;
            goto label_330ab8;
        }
    }
    ctx->pc = 0x330AA0u;
    // 0x330aa0: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x330aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x330aa4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330aa8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x330AB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x330AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330AB0u;
        // 0x330ab4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330AB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330AB8u;
label_330ab8:
    // 0x330ab8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330abc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x330ac0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x330ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330ac4: 0x80e9452  j           func_3A5148
    ctx->pc = 0x330AC4u;
    ctx->pc = 0x330AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330AC4u;
    // 0x330ac8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5148u, 0x330AC4u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x330ACCu;
    // 0x330acc: 0x0  nop
    ctx->pc = 0x330accu;
    // NOP
    ctx->pc = 0x330ad0u;
}
