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

// Function: func_002D9CA8
// Address: 0x2d9ca8 - 0x2d9d40
void func_002D9CA8_0x2d9ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D9CA8_0x2d9ca8");
#endif

    ctx->pc = 0x2d9ca8u;

    // 0x2d9ca8: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x2d9ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x2d9cac: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x2d9cacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x2d9cb0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2d9cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2d9cb4: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2D9CB4u;
    {
        const bool branch_taken_0x2d9cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CB4u;
        // 0x2d9cb8: 0x24657a78  addiu       $a1, $v1, 0x7A78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 31352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cb4) {
            ctx->pc = 0x2D9D38u;
            goto label_2d9d38;
        }
    }
    ctx->pc = 0x2D9CBCu;
    // 0x2d9cbc: 0x8ca2ffac  lw          $v0, -0x54($a1)
    ctx->pc = 0x2d9cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967212)));
    // 0x2d9cc0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x2d9cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x2d9cc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d9cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d9cc8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D9CC8u;
    {
        const bool branch_taken_0x2d9cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CC8u;
        // 0x2d9ccc: 0x3c020200  lui         $v0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cc8) {
            ctx->pc = 0x2D9D38u;
            goto label_2d9d38;
        }
    }
    ctx->pc = 0x2D9CD0u;
    // 0x2d9cd0: 0x8ca6000c  lw          $a2, 0xC($a1)
    ctx->pc = 0x2d9cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2d9cd4: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2d9cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d9cd8: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2D9CD8u;
    {
        const bool branch_taken_0x2d9cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CD8u;
        // 0x2d9cdc: 0x24a5fa28  addiu       $a1, $a1, -0x5D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cd8) {
            ctx->pc = 0x2D9D38u;
            goto label_2d9d38;
        }
    }
    ctx->pc = 0x2D9CE0u;
    // 0x2d9ce0: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x2d9ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x2d9ce4: 0x94a205b0  lhu         $v0, 0x5B0($a1)
    ctx->pc = 0x2d9ce4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 1456)));
    // 0x2d9ce8: 0x10430013  beq         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x2D9CE8u;
    {
        const bool branch_taken_0x2d9ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9ce8) {
            ctx->pc = 0x2D9D38u;
            goto label_2d9d38;
        }
    }
    ctx->pc = 0x2D9CF0u;
    // 0x2d9cf0: 0x8ca20594  lw          $v0, 0x594($a1)
    ctx->pc = 0x2d9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1428)));
    // 0x2d9cf4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2d9cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2d9cf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9CF8u;
    {
        const bool branch_taken_0x2d9cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9CF8u;
        // 0x2d9cfc: 0x3c020800  lui         $v0, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cf8) {
            ctx->pc = 0x2D9D0Cu;
            goto label_2d9d0c;
        }
    }
    ctx->pc = 0x2D9D00u;
    // 0x2d9d00: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x2d9d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2d9d04: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D9D04u;
    {
        const bool branch_taken_0x2d9d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d04) {
            ctx->pc = 0x2D9D38u;
            goto label_2d9d38;
        }
    }
    ctx->pc = 0x2D9D0Cu;
label_2d9d0c:
    // 0x2d9d0c: 0x90a30569  lbu         $v1, 0x569($a1)
    ctx->pc = 0x2d9d0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1385)));
    // 0x2d9d10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9d14: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D9D14u;
    {
        const bool branch_taken_0x2d9d14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2d9d14) {
            ctx->pc = 0x2D9D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9D14u;
            // 0x2d9d18: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9D30u;
            goto label_2d9d30;
        }
    }
    ctx->pc = 0x2D9D1Cu;
    // 0x2d9d1c: 0x8ca20210  lw          $v0, 0x210($a1)
    ctx->pc = 0x2d9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 528)));
    // 0x2d9d20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d9d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d9d24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9D24u;
    {
        const bool branch_taken_0x2d9d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9d24) {
            ctx->pc = 0x2D9D38u;
            goto label_2d9d38;
        }
    }
    ctx->pc = 0x2D9D2Cu;
    // 0x2d9d2c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2d9d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2d9d30:
    // 0x2d9d30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d9d34: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2d9d34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_2d9d38:
    // 0x2d9d38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9D38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9D38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9D40u;
}
