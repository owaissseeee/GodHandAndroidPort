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

// Function: func_00351C18
// Address: 0x351c18 - 0x351cb0
void func_00351C18_0x351c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00351C18_0x351c18");
#endif

    ctx->pc = 0x351c18u;

    // 0x351c18: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x351c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x351c1c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x351c1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351c20: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x351c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x351c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x351c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x351c28: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x351C28u;
    {
        const bool branch_taken_0x351c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x351C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C28u;
        // 0x351c2c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c28) {
            ctx->pc = 0x351C60u;
            goto label_351c60;
        }
    }
    ctx->pc = 0x351C30u;
    // 0x351c30: 0x2862ffff  slti        $v0, $v1, -0x1
    ctx->pc = 0x351c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x351c34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x351C34u;
    {
        const bool branch_taken_0x351c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x351C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C34u;
        // 0x351c38: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c34) {
            ctx->pc = 0x351C50u;
            goto label_351c50;
        }
    }
    ctx->pc = 0x351C3Cu;
    // 0x351c3c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x351C3Cu;
    {
        const bool branch_taken_0x351c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x351C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C3Cu;
        // 0x351c40: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c3c) {
            ctx->pc = 0x351C78u;
            goto label_351c78;
        }
    }
    ctx->pc = 0x351C44u;
    // 0x351c44: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x351C44u;
    {
        const bool branch_taken_0x351c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C44u;
        // 0x351c48: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c44) {
            ctx->pc = 0x351C94u;
            goto label_351c94;
        }
    }
    ctx->pc = 0x351C4Cu;
    // 0x351c4c: 0x0  nop
    ctx->pc = 0x351c4cu;
    // NOP
label_351c50:
    // 0x351c50: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x351C50u;
    {
        const bool branch_taken_0x351c50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x351C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C50u;
        // 0x351c54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c50) {
            ctx->pc = 0x351C90u;
            goto label_351c90;
        }
    }
    ctx->pc = 0x351C58u;
    // 0x351c58: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x351C58u;
    {
        const bool branch_taken_0x351c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C58u;
        // 0x351c5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c58) {
            ctx->pc = 0x351CA4u;
            goto label_351ca4;
        }
    }
    ctx->pc = 0x351C60u;
label_351c60:
    // 0x351c60: 0x1cc0000f  bgtz        $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x351C60u;
    {
        const bool branch_taken_0x351c60 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x351C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C60u;
        // 0x351c64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c60) {
            ctx->pc = 0x351CA0u;
            goto label_351ca0;
        }
    }
    ctx->pc = 0x351C68u;
    // 0x351c68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351c68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351c6c: 0x80d375c  j           func_34DD70
    ctx->pc = 0x351C6Cu;
    ctx->pc = 0x351C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C6Cu;
    // 0x351c70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x351C6Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x351C74u;
    // 0x351c74: 0x0  nop
    ctx->pc = 0x351c74u;
    // NOP
label_351c78:
    // 0x351c78: 0x1cc00009  bgtz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x351C78u;
    {
        const bool branch_taken_0x351c78 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x351C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351C78u;
        // 0x351c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351c78) {
            ctx->pc = 0x351CA0u;
            goto label_351ca0;
        }
    }
    ctx->pc = 0x351C80u;
    // 0x351c80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351c84: 0x80d375c  j           func_34DD70
    ctx->pc = 0x351C84u;
    ctx->pc = 0x351C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C84u;
    // 0x351c88: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x351C84u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x351C8Cu;
    // 0x351c8c: 0x0  nop
    ctx->pc = 0x351c8cu;
    // NOP
label_351c90:
    // 0x351c90: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x351c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_351c94:
    // 0x351c94: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x351c94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351c98: 0x80d375c  j           func_34DD70
    ctx->pc = 0x351C98u;
    ctx->pc = 0x351C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351C98u;
    // 0x351c9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DD70u, 0x351C98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x351CA0u;
label_351ca0:
    // 0x351ca0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x351ca0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_351ca4:
    // 0x351ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x351CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351CA4u;
        // 0x351ca8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351CACu;
    // 0x351cac: 0x0  nop
    ctx->pc = 0x351cacu;
    // NOP
    ctx->pc = 0x351cb0u;
}
