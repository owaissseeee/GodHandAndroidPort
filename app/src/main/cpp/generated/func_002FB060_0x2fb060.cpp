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

// Function: func_002FB060
// Address: 0x2fb060 - 0x2fb0e8
void func_002FB060_0x2fb060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002FB060_0x2fb060");
#endif

    ctx->pc = 0x2fb060u;

    // 0x2fb060: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2fb060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2fb064: 0x2442b7c0  addiu       $v0, $v0, -0x4840
    ctx->pc = 0x2fb064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb068: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x2fb068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2fb06c: 0x32a82  srl         $a1, $v1, 10
    ctx->pc = 0x2fb06cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 10));
    // 0x2fb070: 0x2ca20400  sltiu       $v0, $a1, 0x400
    ctx->pc = 0x2fb070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1024) ? 1 : 0);
    // 0x2fb074: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2FB074u;
    {
        const bool branch_taken_0x2fb074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB074u;
        // 0x2fb078: 0x31bc2  srl         $v1, $v1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb074) {
            ctx->pc = 0x2FB0A8u;
            goto label_2fb0a8;
        }
    }
    ctx->pc = 0x2FB07Cu;
    // 0x2fb07c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2fb07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2fb080: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x2fb080u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2fb084: 0x2442b7c0  addiu       $v0, $v0, -0x4840
    ctx->pc = 0x2fb084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948800));
    // 0x2fb088: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2fb088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2fb08c: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x2fb08cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x2fb090: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fb090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fb094: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2fb094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2fb098: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x2fb098u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x2fb09c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fb09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb0a0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FB0A0u;
    {
        const bool branch_taken_0x2fb0a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0A0u;
        // 0x2fb0a4: 0x3c020072  lui         $v0, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0a0) {
            ctx->pc = 0x2FB0B0u;
            goto label_2fb0b0;
        }
    }
    ctx->pc = 0x2FB0A8u;
label_2fb0a8:
    // 0x2fb0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0A8u;
        // 0x2fb0ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0B0u;
label_2fb0b0:
    // 0x2fb0b0: 0x2442b840  addiu       $v0, $v0, -0x47C0
    ctx->pc = 0x2fb0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948928));
    // 0x2fb0b4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2fb0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2fb0b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fb0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2fb0bc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fb0bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb0c0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2FB0C0u;
    {
        const bool branch_taken_0x2fb0c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FB0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0C0u;
        // 0x2fb0c4: 0x3c030072  lui         $v1, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb0c0) {
            ctx->pc = 0x2FB0E0u;
            goto label_2fb0e0;
        }
    }
    ctx->pc = 0x2FB0C8u;
    // 0x2fb0c8: 0x2463b8c0  addiu       $v1, $v1, -0x4740
    ctx->pc = 0x2fb0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949056));
    // 0x2fb0cc: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2fb0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2fb0d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fb0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2fb0d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2fb0d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2fb0d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB0D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0D8u;
        // 0x2fb0dc: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB0D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0E0u;
label_2fb0e0:
    // 0x2fb0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB0E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB0E0u;
        // 0x2fb0e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB0E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB0E8u;
}
