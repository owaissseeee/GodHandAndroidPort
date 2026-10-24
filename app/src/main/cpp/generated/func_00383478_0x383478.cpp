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

// Function: func_00383478
// Address: 0x383478 - 0x383518
void func_00383478_0x383478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00383478_0x383478");
#endif

    ctx->pc = 0x383478u;

    // 0x383478: 0x24830370  addiu       $v1, $a0, 0x370
    ctx->pc = 0x383478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
    // 0x38347c: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x38347cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
    // 0x383480: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x383480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x383484: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x383484u;
    {
        const bool branch_taken_0x383484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383484u;
        // 0x383488: 0x24840414  addiu       $a0, $a0, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1044));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383484) {
            ctx->pc = 0x3834A0u;
            goto label_3834a0;
        }
    }
    ctx->pc = 0x38348Cu;
    // 0x38348c: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x38348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x383490: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x383490u;
    {
        const bool branch_taken_0x383490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x383490) {
            ctx->pc = 0x383494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383490u;
            // 0x383494: 0x90620003  lbu         $v0, 0x3($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3834B0u;
            goto label_3834b0;
        }
    }
    ctx->pc = 0x383498u;
    // 0x383498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x383498u;
    {
        const bool branch_taken_0x383498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38349Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383498u;
        // 0x38349c: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383498) {
            ctx->pc = 0x3834C0u;
            goto label_3834c0;
        }
    }
    ctx->pc = 0x3834A0u;
label_3834a0:
    // 0x3834a0: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x3834a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x3834a4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3834A4u;
    {
        const bool branch_taken_0x3834a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3834A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834A4u;
        // 0x3834a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834a4) {
            ctx->pc = 0x3834C0u;
            goto label_3834c0;
        }
    }
    ctx->pc = 0x3834ACu;
    // 0x3834ac: 0x90620003  lbu         $v0, 0x3($v1)
    ctx->pc = 0x3834acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3)));
label_3834b0:
    // 0x3834b0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3834b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3834b4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3834B4u;
    {
        const bool branch_taken_0x3834b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834B4u;
        // 0x3834b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834b4) {
            ctx->pc = 0x3834C0u;
            goto label_3834c0;
        }
    }
    ctx->pc = 0x3834BCu;
    // 0x3834bc: 0x8c6400d4  lw          $a0, 0xD4($v1)
    ctx->pc = 0x3834bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
label_3834c0:
    // 0x3834c0: 0x8ca50038  lw          $a1, 0x38($a1)
    ctx->pc = 0x3834c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x3834c4: 0x30a20004  andi        $v0, $a1, 0x4
    ctx->pc = 0x3834c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
    // 0x3834c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3834C8u;
    {
        const bool branch_taken_0x3834c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834C8u;
        // 0x3834cc: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834c8) {
            ctx->pc = 0x3834ECu;
            goto label_3834ec;
        }
    }
    ctx->pc = 0x3834D0u;
    // 0x3834d0: 0x90620004  lbu         $v0, 0x4($v1)
    ctx->pc = 0x3834d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3834d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3834D4u;
    {
        const bool branch_taken_0x3834d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3834D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834D4u;
        // 0x3834d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3834d4) {
            ctx->pc = 0x3834E4u;
            goto label_3834e4;
        }
    }
    ctx->pc = 0x3834DCu;
    // 0x3834dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3834DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3834E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834DCu;
        // 0x3834e0: 0xa0620004  sb          $v0, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3834DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3834E4u;
label_3834e4:
    // 0x3834e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3834E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3834E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3834E4u;
        // 0x3834e8: 0xa0640004  sb          $a0, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3834E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3834ECu;
label_3834ec:
    // 0x3834ec: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3834ECu;
    {
        const bool branch_taken_0x3834ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3834ec) {
            ctx->pc = 0x383510u;
            goto label_383510;
        }
    }
    ctx->pc = 0x3834F4u;
    // 0x3834f4: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x3834f4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3834f8: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x3834f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3834fc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3834FCu;
    {
        const bool branch_taken_0x3834fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3834fc) {
            ctx->pc = 0x383500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3834FCu;
            // 0x383500: 0xa0600004  sb          $zero, 0x4($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383510u;
            goto label_383510;
        }
    }
    ctx->pc = 0x383504u;
    // 0x383504: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x383504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x383508: 0x3e00008  jr          $ra
    ctx->pc = 0x383508u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383508u;
        // 0x38350c: 0xa0620004  sb          $v0, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383508u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383510u;
label_383510:
    // 0x383510: 0x3e00008  jr          $ra
    ctx->pc = 0x383510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383518u;
}
