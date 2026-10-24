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

// Function: func_002D9C10
// Address: 0x2d9c10 - 0x2d9ca8
void func_002D9C10_0x2d9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9C10_0x2d9c10");
#endif

    ctx->pc = 0x2d9c10u;

    // 0x2d9c10: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2d9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2d9c14: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x2d9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x2d9c18: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2d9c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2d9c1c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D9C1Cu;
    {
        const bool branch_taken_0x2d9c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C1Cu;
        // 0x2d9c20: 0x24657a78  addiu       $a1, $v1, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c1c) {
            ctx->pc = 0x2D9CA0u;
            goto label_2d9ca0;
        }
    }
    ctx->pc = 0x2D9C24u;
    // 0x2d9c24: 0x8ca2ffac  lw          $v0, -0x54($a1)
    ctx->pc = 0x2d9c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967212)));
    // 0x2d9c28: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2d9c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2d9c2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d9c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d9c30: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D9C30u;
    {
        const bool branch_taken_0x2d9c30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C30u;
        // 0x2d9c34: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c30) {
            ctx->pc = 0x2D9CA0u;
            goto label_2d9ca0;
        }
    }
    ctx->pc = 0x2D9C38u;
    // 0x2d9c38: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2d9c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d9c3c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2d9c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d9c40: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9C40u;
    {
        const bool branch_taken_0x2d9c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C40u;
        // 0x2d9c44: 0x24a5fa28  addiu       $a1, $a1, -0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c40) {
            ctx->pc = 0x2D9CA0u;
            goto label_2d9ca0;
        }
    }
    ctx->pc = 0x2D9C48u;
    // 0x2d9c48: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2d9c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d9c4c: 0x94a205b0  lhu         $v0, 0x5B0($a1)
    ctx->pc = 0x2d9c4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x2d9c50: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9C50u;
    {
        const bool branch_taken_0x2d9c50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9c50) {
            ctx->pc = 0x2D9CA0u;
            goto label_2d9ca0;
        }
    }
    ctx->pc = 0x2D9C58u;
    // 0x2d9c58: 0x8ca20594  lw          $v0, 0x594($a1)
    ctx->pc = 0x2d9c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1428)));
    // 0x2d9c5c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2d9c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2d9c60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9C60u;
    {
        const bool branch_taken_0x2d9c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9C60u;
        // 0x2d9c64: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c60) {
            ctx->pc = 0x2D9C74u;
            goto label_2d9c74;
        }
    }
    ctx->pc = 0x2D9C68u;
    // 0x2d9c68: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2d9c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d9c6c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9C6Cu;
    {
        const bool branch_taken_0x2d9c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9c6c) {
            ctx->pc = 0x2D9CA0u;
            goto label_2d9ca0;
        }
    }
    ctx->pc = 0x2D9C74u;
label_2d9c74:
    // 0x2d9c74: 0x90a30569  lbu         $v1, 0x569($a1)
    ctx->pc = 0x2d9c74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1385)));
    // 0x2d9c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9c7c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9C7Cu;
    {
        const bool branch_taken_0x2d9c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9c7c) {
            ctx->pc = 0x2D9C80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9C7Cu;
            // 0x2d9c80: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9C98u;
            goto label_2d9c98;
        }
    }
    ctx->pc = 0x2D9C84u;
    // 0x2d9c84: 0x8ca20210  lw          $v0, 0x210($a1)
    ctx->pc = 0x2d9c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 528)));
    // 0x2d9c88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d9c88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d9c8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9C8Cu;
    {
        const bool branch_taken_0x2d9c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9c8c) {
            ctx->pc = 0x2D9CA0u;
            goto label_2d9ca0;
        }
    }
    ctx->pc = 0x2D9C94u;
    // 0x2d9c94: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2d9c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9c98:
    // 0x2d9c98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9c9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2d9c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2d9ca0:
    // 0x2d9ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9CA8u;
}
