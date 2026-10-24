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

// Function: next_stack_level
// Address: 0x320a50 - 0x320ae0
void next_stack_level_0x320a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("next_stack_level_0x320a50");
#endif

    switch (ctx->pc) {
        case 0x320a6cu: goto label_320a6c;
        case 0x320a98u: goto label_320a98;
        default: break;
    }

    ctx->pc = 0x320a50u;

    // 0x320a50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x320a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x320a54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x320a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x320a58: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x320a58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x320a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x320a60: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x320a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x320a64: 0xc0c895c  jal         func_322570
    ctx->pc = 0x320A64u;
    SET_GPR_U32(ctx, 31, 0x320A6Cu);
    ctx->pc = 0x320A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A64u;
    // 0x320a68: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x322570u, 0x320A64u, 0x320A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A6Cu;
label_320a6c:
    // 0x320a6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x320a6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320a70: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x320A70u;
    {
        const bool branch_taken_0x320a70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x320a70) {
            ctx->pc = 0x320A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320A70u;
            // 0x320a74: 0x96040298  lhu         $a0, 0x298($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320A80u;
            goto label_320a80;
        }
    }
    ctx->pc = 0x320A78u;
    // 0x320a78: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x320A78u;
    {
        const bool branch_taken_0x320a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A78u;
        // 0x320a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a78) {
            ctx->pc = 0x320AC8u;
            goto label_320ac8;
        }
    }
    ctx->pc = 0x320A80u;
label_320a80:
    // 0x320a80: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x320a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x320a84: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x320a84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x320a88: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x320A88u;
    {
        const bool branch_taken_0x320a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x320A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320A88u;
        // 0x320a8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320a88) {
            ctx->pc = 0x320AACu;
            goto label_320aac;
        }
    }
    ctx->pc = 0x320A90u;
    // 0x320a90: 0xc0c8252  jal         func_320948
    ctx->pc = 0x320A90u;
    SET_GPR_U32(ctx, 31, 0x320A98u);
    ctx->pc = 0x320A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320A90u;
    // 0x320a94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x320948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320948u, 0x320A90u, 0x320A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320A98u;
label_320a98:
    // 0x320a98: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x320a98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x320a9c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x320a9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x320aa0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x320aa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x320aa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x320AA4u;
    {
        const bool branch_taken_0x320aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AA4u;
        // 0x320aa8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320aa4) {
            ctx->pc = 0x320AB4u;
            goto label_320ab4;
        }
    }
    ctx->pc = 0x320AACu;
label_320aac:
    // 0x320aac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x320aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x320ab0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x320ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_320ab4:
    // 0x320ab4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x320ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x320ab8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x320ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x320abc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x320abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x320ac0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x320ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x320ac4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x320ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_320ac8:
    // 0x320ac8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x320ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x320acc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x320accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x320ad0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x320ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x320ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x320AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320AD4u;
        // 0x320ad8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320ADCu;
    // 0x320adc: 0x0  nop
    ctx->pc = 0x320adcu;
    // NOP
    ctx->pc = 0x320ae0u;
}
