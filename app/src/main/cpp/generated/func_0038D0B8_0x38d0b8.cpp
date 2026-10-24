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

// Function: func_0038D0B8
// Address: 0x38d0b8 - 0x38d140
void func_0038D0B8_0x38d0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0038D0B8_0x38d0b8");
#endif

    switch (ctx->pc) {
        case 0x38d0f8u: goto label_38d0f8;
        case 0x38d118u: goto label_38d118;
        default: break;
    }

    ctx->pc = 0x38d0b8u;

    // 0x38d0b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x38d0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x38d0bc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x38d0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x38d0c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x38d0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x38d0c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x38d0c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38d0c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x38d0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x38d0cc: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x38d0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x38d0d0: 0x16040016  bne         $s0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x38D0D0u;
    {
        const bool branch_taken_0x38d0d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        ctx->pc = 0x38D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0D0u;
        // 0x38d0d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d0d0) {
            ctx->pc = 0x38D12Cu;
            goto label_38d12c;
        }
    }
    ctx->pc = 0x38D0D8u;
    // 0x38d0d8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38d0dc: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38D0DCu;
    {
        const bool branch_taken_0x38d0dc = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x38D0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0DCu;
        // 0x38d0e0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d0dc) {
            ctx->pc = 0x38D104u;
            goto label_38d104;
        }
    }
    ctx->pc = 0x38D0E4u;
    // 0x38d0e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38d0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38d0e8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x38D0E8u;
    {
        const bool branch_taken_0x38d0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38d0e8) {
            ctx->pc = 0x38D0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D0E8u;
            // 0x38d0ec: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D120u;
            goto label_38d120;
        }
    }
    ctx->pc = 0x38D0F0u;
    // 0x38d0f0: 0xc0e30a0  jal         func_38C280
    ctx->pc = 0x38D0F0u;
    SET_GPR_U32(ctx, 31, 0x38D0F8u);
    ctx->pc = 0x38D0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D0F0u;
    // 0x38d0f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C280u, 0x38D0F0u, 0x38D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D0F8u;
label_38d0f8:
    // 0x38d0f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38d0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38d0fc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x38D0FCu;
    {
        const bool branch_taken_0x38d0fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38D100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D0FCu;
        // 0x38d100: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38d0fc) {
            ctx->pc = 0x38D120u;
            goto label_38d120;
        }
    }
    ctx->pc = 0x38D104u;
label_38d104:
    // 0x38d104: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x38d104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x38d108: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x38D108u;
    {
        const bool branch_taken_0x38d108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x38d108) {
            ctx->pc = 0x38D10Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38D108u;
            // 0x38d10c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38D120u;
            goto label_38d120;
        }
    }
    ctx->pc = 0x38D110u;
    // 0x38d110: 0xc0e30ae  jal         func_38C2B8
    ctx->pc = 0x38D110u;
    SET_GPR_U32(ctx, 31, 0x38D118u);
    ctx->pc = 0x38D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38D110u;
    // 0x38d114: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38C2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38C2B8u, 0x38D110u, 0x38D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38D118u;
label_38d118:
    // 0x38d118: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x38d118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x38d11c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x38d11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_38d120:
    // 0x38d120: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x38d120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x38d124: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x38d124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x38d128: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x38d128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38d12c:
    // 0x38d12c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x38d12cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x38d130: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x38d130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x38d134: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x38d134u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38d138: 0x3e00008  jr          $ra
    ctx->pc = 0x38D138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38D13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38D138u;
        // 0x38d13c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38D138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38D140u;
}
