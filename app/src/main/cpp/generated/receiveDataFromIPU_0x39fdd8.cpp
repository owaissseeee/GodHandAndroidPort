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

// Function: receiveDataFromIPU
// Address: 0x39fdd8 - 0x39fe78
void receiveDataFromIPU_0x39fdd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("receiveDataFromIPU_0x39fdd8");
#endif

    switch (ctx->pc) {
        case 0x39fdf4u: goto label_39fdf4;
        default: break;
    }

    ctx->pc = 0x39fdd8u;

    // 0x39fdd8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39fdd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39fddc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x39fddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x39fde0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39fde0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x39fde4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x39fde4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fde8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39fde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x39fdec: 0xc0ed8e8  jal         func_3B63A0
    ctx->pc = 0x39FDECu;
    SET_GPR_U32(ctx, 31, 0x39FDF4u);
    ctx->pc = 0x39FDF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FDECu;
    // 0x39fdf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63A0u, 0x39FDECu, 0x39FDF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39FDF4u;
label_39fdf4:
    // 0x39fdf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x39fdf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39fdf8: 0x101f02  srl         $v1, $s0, 28
    ctx->pc = 0x39fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 28));
    // 0x39fdfc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x39fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x39fe00: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39FE00u;
    {
        const bool branch_taken_0x39fe00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x39FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE00u;
        // 0x39fe04: 0x3c020fff  lui         $v0, 0xFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe00) {
            ctx->pc = 0x39FE1Cu;
            goto label_39fe1c;
        }
    }
    ctx->pc = 0x39FE08u;
    // 0x39fe08: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x39fe08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x39fe0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39fe0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39fe10: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x39fe10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x39fe14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x39FE14u;
    {
        const bool branch_taken_0x39fe14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE14u;
        // 0x39fe18: 0x2038025  or          $s0, $s0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe14) {
            ctx->pc = 0x39FE24u;
            goto label_39fe24;
        }
    }
    ctx->pc = 0x39FE1Cu;
label_39fe1c:
    // 0x39fe1c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39fe1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39fe20: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x39fe20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_39fe24:
    // 0x39fe24: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39fe28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x39fe28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x39fe2c: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x39fe2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x39fe30: 0x3463b020  ori         $v1, $v1, 0xB020
    ctx->pc = 0x39fe30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)45088);
    // 0x39fe34: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x39fe34u;
    runtime->Store32(rdram, ctx, 0x1000B010u, GPR_U32(ctx, 16));
    // 0x39fe38: 0x112103  sra         $a0, $s1, 4
    ctx->pc = 0x39fe38u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 17), 4));
    // 0x39fe3c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x39fe3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x39fe40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x39fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x39fe44: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x39fe44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x39fe48: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x39fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x39fe4c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x39fe4cu;
    runtime->Store32(rdram, ctx, 0x1000B000u, GPR_U32(ctx, 3));
    // 0x39fe50: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x39FE50u;
    {
        const bool branch_taken_0x39fe50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE50u;
        // 0x39fe54: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39fe50) {
            ctx->pc = 0x39FE68u;
            goto label_39fe68;
        }
    }
    ctx->pc = 0x39FE58u;
    // 0x39fe58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39fe58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39fe5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39fe5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39fe60: 0x80ed8fc  j           func_3B63F0
    ctx->pc = 0x39FE60u;
    ctx->pc = 0x39FE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39FE60u;
    // 0x39fe64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B63F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B63F0u, 0x39FE60u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x39FE68u;
label_39fe68:
    // 0x39fe68: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x39fe68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39fe6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39fe6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39fe70: 0x3e00008  jr          $ra
    ctx->pc = 0x39FE70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39FE70u;
        // 0x39fe74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39FE70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39FE78u;
}
