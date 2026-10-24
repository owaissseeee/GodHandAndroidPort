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

// Function: __ls__7ostreami
// Address: 0x388a00 - 0x388aa0
void ps2___ls__7ostreami_0x388a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreami_0x388a00");
#endif

    switch (ctx->pc) {
        case 0x388a40u: goto label_388a40;
        case 0x388a84u: goto label_388a84;
        default: break;
    }

    ctx->pc = 0x388a00u;

    // 0x388a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388a04: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x388a08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x388a0c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388a0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388a14: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x388a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388a18: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x388a18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x388a1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388A1Cu;
    {
        const bool branch_taken_0x388a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A1Cu;
        // 0x388a20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a1c) {
            ctx->pc = 0x388A2Cu;
            goto label_388a2c;
        }
    }
    ctx->pc = 0x388A24u;
    // 0x388a24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x388A24u;
    {
        const bool branch_taken_0x388a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A24u;
        // 0x388a28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a24) {
            ctx->pc = 0x388A44u;
            goto label_388a44;
        }
    }
    ctx->pc = 0x388A2Cu;
label_388a2c:
    // 0x388a2c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x388a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x388a30: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388A30u;
    {
        const bool branch_taken_0x388a30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A30u;
        // 0x388a34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a30) {
            ctx->pc = 0x388A44u;
            goto label_388a44;
        }
    }
    ctx->pc = 0x388A38u;
    // 0x388a38: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388A38u;
    SET_GPR_U32(ctx, 31, 0x388A40u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388A38u, 0x388A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388A40u;
label_388a40:
    // 0x388a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388a44:
    // 0x388a44: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x388A44u;
    {
        const bool branch_taken_0x388a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A44u;
        // 0x388a48: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a44) {
            ctx->pc = 0x388A88u;
            goto label_388a88;
        }
    }
    ctx->pc = 0x388A4Cu;
    // 0x388a4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x388a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388a50: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x388A50u;
    {
        const bool branch_taken_0x388a50 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x388A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A50u;
        // 0x388a54: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388a50) {
            ctx->pc = 0x388A74u;
            goto label_388a74;
        }
    }
    ctx->pc = 0x388A58u;
    // 0x388a58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388a5c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x388a5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x388a60: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x388a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x388a64: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x388A64u;
    {
        const bool branch_taken_0x388a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388a64) {
            ctx->pc = 0x388A68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x388A64u;
            // 0x388a68: 0x5283c  dsll32      $a1, $a1, 0 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x388A78u;
            goto label_388a78;
        }
    }
    ctx->pc = 0x388A6Cu;
    // 0x388a6c: 0x52823  negu        $a1, $a1
    ctx->pc = 0x388a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x388a70: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x388a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_388a74:
    // 0x388a74: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x388a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_388a78:
    // 0x388a78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x388a78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388a7c: 0xc0e2198  jal         func_388660
    ctx->pc = 0x388A7Cu;
    SET_GPR_U32(ctx, 31, 0x388A84u);
    ctx->pc = 0x388A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388A7Cu;
    // 0x388a80: 0x5283e  dsrl32      $a1, $a1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388660u, 0x388A7Cu, 0x388A84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388A84u;
label_388a84:
    // 0x388a84: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388a84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_388a88:
    // 0x388a88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388a8c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x388a8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388a90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388a90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388a94: 0x3e00008  jr          $ra
    ctx->pc = 0x388A94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388A94u;
        // 0x388a98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388A94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388A9Cu;
    // 0x388a9c: 0x0  nop
    ctx->pc = 0x388a9cu;
    // NOP
    ctx->pc = 0x388aa0u;
}
