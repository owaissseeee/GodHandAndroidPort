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

// Function: func_00270C78
// Address: 0x270c78 - 0x270d00
void func_00270C78_0x270c78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00270C78_0x270c78");
#endif

    switch (ctx->pc) {
        case 0x270cd8u: goto label_270cd8;
        default: break;
    }

    ctx->pc = 0x270c78u;

    // 0x270c78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x270c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x270c7c: 0x24030265  addiu       $v1, $zero, 0x265
    ctx->pc = 0x270c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
    // 0x270c80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x270c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x270c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x270c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x270c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c8c: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x270c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x270c90: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x270C90u;
    {
        const bool branch_taken_0x270c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270c90) {
            ctx->pc = 0x270C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270C90u;
            // 0x270c94: 0x8e030564  lw          $v1, 0x564($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270CC4u;
            goto label_270cc4;
        }
    }
    ctx->pc = 0x270C98u;
    // 0x270c98: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x270c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x270c9c: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x270c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x270ca0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x270ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x270ca4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270CA4u;
    {
        const bool branch_taken_0x270ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CA4u;
        // 0x270ca8: 0x2403009f  addiu       $v1, $zero, 0x9F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ca4) {
            ctx->pc = 0x270CC0u;
            goto label_270cc0;
        }
    }
    ctx->pc = 0x270CACu;
    // 0x270cac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270cb0: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x270cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x270cb4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x270cb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x270cb8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x270CB8u;
    {
        const bool branch_taken_0x270cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CB8u;
        // 0x270cbc: 0xa20002f4  sb          $zero, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270cb8) {
            ctx->pc = 0x270CECu;
            goto label_270cec;
        }
    }
    ctx->pc = 0x270CC0u;
label_270cc0:
    // 0x270cc0: 0x8e030564  lw          $v1, 0x564($s0)
    ctx->pc = 0x270cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
label_270cc4:
    // 0x270cc4: 0x24020279  addiu       $v0, $zero, 0x279
    ctx->pc = 0x270cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 633));
    // 0x270cc8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x270CC8u;
    {
        const bool branch_taken_0x270cc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x270CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CC8u;
        // 0x270ccc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270cc8) {
            ctx->pc = 0x270CDCu;
            goto label_270cdc;
        }
    }
    ctx->pc = 0x270CD0u;
    // 0x270cd0: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x270CD0u;
    SET_GPR_U32(ctx, 31, 0x270CD8u);
    ctx->pc = 0x270CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270CD0u;
    // 0x270cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x270CD0u, 0x270CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270CD8u;
label_270cd8:
    // 0x270cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270cdc:
    // 0x270cdc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x270cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x270ce0: 0xa20202f4  sb          $v0, 0x2F4($s0)
    ctx->pc = 0x270ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 2));
    // 0x270ce4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x270ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x270ce8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x270ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_270cec:
    // 0x270cec: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x270cecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x270cf0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x270cf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270cf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x270cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x270cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x270CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270CF8u;
        // 0x270cfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270D00u;
}
