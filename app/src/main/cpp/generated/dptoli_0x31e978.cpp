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

// Function: dptoli
// Address: 0x31e978 - 0x31ea10
void dptoli_0x31e978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dptoli_0x31e978");
#endif

    switch (ctx->pc) {
        case 0x31e990u: goto label_31e990;
        case 0x31e9a8u: goto label_31e9a8;
        default: break;
    }

    ctx->pc = 0x31e978u;

    // 0x31e978: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31e978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31e97c: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x31e97cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x31e980: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31e980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e984: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31e984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31e988: 0xc0c77ea  jal         func_31DFA8
    ctx->pc = 0x31E988u;
    SET_GPR_U32(ctx, 31, 0x31E990u);
    ctx->pc = 0x31E98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E988u;
    // 0x31e98c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31DFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31DFA8u, 0x31E988u, 0x31E990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E990u;
label_31e990:
    // 0x31e990: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x31e990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e994: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x31e994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x31e998: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E998u;
    {
        const bool branch_taken_0x31e998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E998u;
        // 0x31e99c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e998) {
            ctx->pc = 0x31E9A8u;
            goto label_31e9a8;
        }
    }
    ctx->pc = 0x31E9A0u;
    // 0x31e9a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x31E9A0u;
    {
        const bool branch_taken_0x31e9a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9A0u;
        // 0x31e9a4: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9a0) {
            ctx->pc = 0x31E9B0u;
            goto label_31e9b0;
        }
    }
    ctx->pc = 0x31E9A8u;
label_31e9a8:
    // 0x31e9a8: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x31E9A8u;
    {
        const bool branch_taken_0x31e9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9A8u;
        // 0x31e9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9a8) {
            ctx->pc = 0x31EA00u;
            goto label_31ea00;
        }
    }
    ctx->pc = 0x31E9B0u;
label_31e9b0:
    // 0x31e9b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E9B0u;
    {
        const bool branch_taken_0x31e9b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9B0u;
        // 0x31e9b4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9b0) {
            ctx->pc = 0x31E9C8u;
            goto label_31e9c8;
        }
    }
    ctx->pc = 0x31E9B8u;
    // 0x31e9b8: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x31E9B8u;
    {
        const bool branch_taken_0x31e9b8 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x31E9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9B8u;
        // 0x31e9bc: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9b8) {
            ctx->pc = 0x31E9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31e9a8;
        }
    }
    ctx->pc = 0x31E9C0u;
    // 0x31e9c0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x31E9C0u;
    {
        const bool branch_taken_0x31e9c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31E9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9C0u;
        // 0x31e9c4: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9c0) {
            ctx->pc = 0x31E9E0u;
            goto label_31e9e0;
        }
    }
    ctx->pc = 0x31E9C8u;
label_31e9c8:
    // 0x31e9c8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x31e9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31e9cc: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x31e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x31e9d0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31e9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31e9d4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x31e9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x31e9d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x31E9D8u;
    {
        const bool branch_taken_0x31e9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9D8u;
        // 0x31e9dc: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9d8) {
            ctx->pc = 0x31EA00u;
            goto label_31ea00;
        }
    }
    ctx->pc = 0x31E9E0u;
label_31e9e0:
    // 0x31e9e0: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x31e9e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31e9e4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31e9e8: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x31e9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x31e9ec: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x31e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31e9f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x31e9f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x31e9f4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x31e9f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x31e9f8: 0x21823  negu        $v1, $v0
    ctx->pc = 0x31e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x31e9fc: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x31e9fcu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_31ea00:
    // 0x31ea00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31ea00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31ea04: 0x3e00008  jr          $ra
    ctx->pc = 0x31EA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA04u;
        // 0x31ea08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EA0Cu;
    // 0x31ea0c: 0x0  nop
    ctx->pc = 0x31ea0cu;
    // NOP
    ctx->pc = 0x31ea10u;
}
