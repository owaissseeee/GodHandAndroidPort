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

// Function: func_002A4B20
// Address: 0x2a4b20 - 0x2a4b88
void func_002A4B20_0x2a4b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002A4B20_0x2a4b20");
#endif

    ctx->pc = 0x2a4b20u;

    // 0x2a4b20: 0x30a3ffff  andi        $v1, $a1, 0xFFFF
    ctx->pc = 0x2a4b20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2a4b24: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2A4B24u;
    {
        const bool branch_taken_0x2a4b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a4b24) {
            ctx->pc = 0x2A4B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A4B24u;
            // 0x2a4b28: 0x31302  srl         $v0, $v1, 12 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A4B44u;
            goto label_2a4b44;
        }
    }
    ctx->pc = 0x2A4B2Cu;
    // 0x2a4b2c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2a4b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2a4b30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x2a4b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a4b34: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x2a4b34u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x2a4b38: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2a4b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a4b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B3Cu;
        // 0x2a4b40: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4B44u;
label_2a4b44:
    // 0x2a4b44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2a4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2a4b48: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x2a4b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x2a4b4c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2a4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2a4b50: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a4b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a4b54: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2a4b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a4b58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2a4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2a4b5c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2a4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2a4b60: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x2a4b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2a4b64: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x2a4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x2a4b68: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x2a4b68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x2a4b6c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2a4b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x2a4b70: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2a4b70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a4b74: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a4b78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2a4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2a4b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4B7Cu;
        // 0x2a4b80: 0x21403  sra         $v0, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4B84u;
    // 0x2a4b84: 0x0  nop
    ctx->pc = 0x2a4b84u;
    // NOP
    ctx->pc = 0x2a4b88u;
}
