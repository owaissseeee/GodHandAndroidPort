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

// Function: cCoreSave_getSkill
// Address: 0x1faf58 - 0x1fafa8
void cCoreSave_getSkill_0x1faf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_getSkill_0x1faf58");
#endif

    ctx->pc = 0x1faf58u;

    // 0x1faf58: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1faf58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1faf5c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FAF5Cu;
    {
        const bool branch_taken_0x1faf5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF5Cu;
        // 0x1faf60: 0x28a20080  slti        $v0, $a1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf5c) {
            ctx->pc = 0x1FAF74u;
            goto label_1faf74;
        }
    }
    ctx->pc = 0x1FAF64u;
    // 0x1faf64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF64u;
    {
        const bool branch_taken_0x1faf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF64u;
        // 0x1faf68: 0x28a20072  slti        $v0, $a1, 0x72 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)114) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf64) {
            ctx->pc = 0x1FAF74u;
            goto label_1faf74;
        }
    }
    ctx->pc = 0x1FAF6Cu;
    // 0x1faf6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF6Cu;
    {
        const bool branch_taken_0x1faf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF6Cu;
        // 0x1faf70: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf6c) {
            ctx->pc = 0x1FAF7Cu;
            goto label_1faf7c;
        }
    }
    ctx->pc = 0x1FAF74u;
label_1faf74:
    // 0x1faf74: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF74u;
        // 0x1faf78: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAF7Cu;
label_1faf7c:
    // 0x1faf7c: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x1faf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x1faf80: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x1faf80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31284)));
    // 0x1faf84: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1faf84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1faf88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FAF88u;
    {
        const bool branch_taken_0x1faf88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF88u;
        // 0x1faf8c: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1faf88) {
            ctx->pc = 0x1FAF98u;
            goto label_1faf98;
        }
    }
    ctx->pc = 0x1FAF90u;
    // 0x1faf90: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF90u;
        // 0x1faf94: 0x806200b0  lb          $v0, 0xB0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAF98u;
label_1faf98:
    // 0x1faf98: 0x3e00008  jr          $ra
    ctx->pc = 0x1FAF98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FAF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAF98u;
        // 0x1faf9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FAF98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FAFA0u;
    // 0x1fafa0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1fafa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafa4: 0x0  nop
    ctx->pc = 0x1fafa4u;
    // NOP
    ctx->pc = 0x1fafa8u;
}
