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

// Function: __ls__7ostreamx
// Address: 0x388c18 - 0x388ca8
void ps2___ls__7ostreamx_0x388c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ls__7ostreamx_0x388c18");
#endif

    switch (ctx->pc) {
        case 0x388c58u: goto label_388c58;
        case 0x388c90u: goto label_388c90;
        default: break;
    }

    ctx->pc = 0x388c18u;

    // 0x388c18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x388c18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x388c1c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x388c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x388c20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x388c20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x388c24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x388c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x388c28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x388c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388c2c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x388c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388c30: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x388c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x388c34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388C34u;
    {
        const bool branch_taken_0x388c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C34u;
        // 0x388c38: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c34) {
            ctx->pc = 0x388C44u;
            goto label_388c44;
        }
    }
    ctx->pc = 0x388C3Cu;
    // 0x388c3c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x388C3Cu;
    {
        const bool branch_taken_0x388c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C3Cu;
        // 0x388c40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c3c) {
            ctx->pc = 0x388C5Cu;
            goto label_388c5c;
        }
    }
    ctx->pc = 0x388C44u;
label_388c44:
    // 0x388c44: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x388c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x388c48: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x388C48u;
    {
        const bool branch_taken_0x388c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C48u;
        // 0x388c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c48) {
            ctx->pc = 0x388C5Cu;
            goto label_388c5c;
        }
    }
    ctx->pc = 0x388C50u;
    // 0x388c50: 0xc0e249a  jal         func_389268
    ctx->pc = 0x388C50u;
    SET_GPR_U32(ctx, 31, 0x388C58u);
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x388C50u, 0x388C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C58u;
label_388c58:
    // 0x388c58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x388c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_388c5c:
    // 0x388c5c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x388C5Cu;
    {
        const bool branch_taken_0x388c5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x388C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C5Cu;
        // 0x388c60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c5c) {
            ctx->pc = 0x388C90u;
            goto label_388c90;
        }
    }
    ctx->pc = 0x388C64u;
    // 0x388c64: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x388C64u;
    {
        const bool branch_taken_0x388c64 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x388C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388C64u;
        // 0x388c68: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x388c64) {
            ctx->pc = 0x388C88u;
            goto label_388c88;
        }
    }
    ctx->pc = 0x388C6Cu;
    // 0x388c6c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x388c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x388c70: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x388c70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x388c74: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x388c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x388c78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x388C78u;
    {
        const bool branch_taken_0x388c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x388c78) {
            ctx->pc = 0x388C88u;
            goto label_388c88;
        }
    }
    ctx->pc = 0x388C80u;
    // 0x388c80: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x388c80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
    // 0x388c84: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x388c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_388c88:
    // 0x388c88: 0xc0e2198  jal         func_388660
    ctx->pc = 0x388C88u;
    SET_GPR_U32(ctx, 31, 0x388C90u);
    ctx->pc = 0x388C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x388C88u;
    // 0x388c8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388660u, 0x388C88u, 0x388C90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x388C90u;
label_388c90:
    // 0x388c90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x388c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x388c94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x388c94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x388c98: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x388c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x388c9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x388c9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x388ca0: 0x3e00008  jr          $ra
    ctx->pc = 0x388CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x388CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x388CA0u;
        // 0x388ca4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x388CA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x388CA8u;
}
