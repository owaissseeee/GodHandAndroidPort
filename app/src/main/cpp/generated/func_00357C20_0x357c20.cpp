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

// Function: func_00357C20
// Address: 0x357c20 - 0x357d00
void func_00357C20_0x357c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00357C20_0x357c20");
#endif

    switch (ctx->pc) {
        case 0x357c38u: goto label_357c38;
        case 0x357c4cu: goto label_357c4c;
        case 0x357c60u: goto label_357c60;
        case 0x357c74u: goto label_357c74;
        case 0x357c88u: goto label_357c88;
        case 0x357ca8u: goto label_357ca8;
        case 0x357cc0u: goto label_357cc0;
        case 0x357cd4u: goto label_357cd4;
        case 0x357ce8u: goto label_357ce8;
        default: break;
    }

    ctx->pc = 0x357c20u;

    // 0x357c20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x357c24: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x357c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x357c28: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x357c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x357c2c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x357c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x357c30: 0xc0d5f40  jal         func_357D00
    ctx->pc = 0x357C30u;
    SET_GPR_U32(ctx, 31, 0x357C38u);
    ctx->pc = 0x357C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C30u;
    // 0x357c34: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x357D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357D00u, 0x357C30u, 0x357C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C38u;
label_357c38:
    // 0x357c38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c3c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x357C3Cu;
    {
        const bool branch_taken_0x357c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C3Cu;
        // 0x357c40: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c3c) {
            ctx->pc = 0x357C90u;
            goto label_357c90;
        }
    }
    ctx->pc = 0x357C44u;
    // 0x357c44: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357C44u;
    SET_GPR_U32(ctx, 31, 0x357C4Cu);
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357C44u, 0x357C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C4Cu;
label_357c4c:
    // 0x357c4c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357c50: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x357C50u;
    {
        const bool branch_taken_0x357c50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x357C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C50u;
        // 0x357c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c50) {
            ctx->pc = 0x357C68u;
            goto label_357c68;
        }
    }
    ctx->pc = 0x357C58u;
    // 0x357c58: 0xc0d5f68  jal         func_357DA0
    ctx->pc = 0x357C58u;
    SET_GPR_U32(ctx, 31, 0x357C60u);
    ctx->pc = 0x357DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357DA0u, 0x357C58u, 0x357C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C60u;
label_357c60:
    // 0x357c60: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x357C60u;
    {
        const bool branch_taken_0x357c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x357C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C60u;
        // 0x357c64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c60) {
            ctx->pc = 0x357CECu;
            goto label_357cec;
        }
    }
    ctx->pc = 0x357C68u;
label_357c68:
    // 0x357c68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357c68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357c6c: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357C6Cu;
    SET_GPR_U32(ctx, 31, 0x357C74u);
    ctx->pc = 0x357C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357C6Cu;
    // 0x357c70: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357C6Cu, 0x357C74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C74u;
label_357c74:
    // 0x357c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x357c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x357c78: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x357C78u;
    {
        const bool branch_taken_0x357c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x357C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C78u;
        // 0x357c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c78) {
            ctx->pc = 0x357C98u;
            goto label_357c98;
        }
    }
    ctx->pc = 0x357C80u;
    // 0x357c80: 0xc0d5f96  jal         func_357E58
    ctx->pc = 0x357C80u;
    SET_GPR_U32(ctx, 31, 0x357C88u);
    ctx->pc = 0x357E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x357E58u, 0x357C80u, 0x357C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357C88u;
label_357c88:
    // 0x357c88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x357C88u;
    {
        const bool branch_taken_0x357c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c88) {
            ctx->pc = 0x357C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x357C88u;
            // 0x357c8c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x357C9Cu;
            goto label_357c9c;
        }
    }
    ctx->pc = 0x357C90u;
label_357c90:
    // 0x357c90: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x357C90u;
    {
        const bool branch_taken_0x357c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357C90u;
        // 0x357c94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357c90) {
            ctx->pc = 0x357CECu;
            goto label_357cec;
        }
    }
    ctx->pc = 0x357C98u;
label_357c98:
    // 0x357c98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x357c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_357c9c:
    // 0x357c9c: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x357c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x357ca0: 0xc0d6ae6  jal         func_35AB98
    ctx->pc = 0x357CA0u;
    SET_GPR_U32(ctx, 31, 0x357CA8u);
    ctx->pc = 0x357CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CA0u;
    // 0x357ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AB98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AB98u, 0x357CA0u, 0x357CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CA8u;
label_357ca8:
    // 0x357ca8: 0x26230d30  addiu       $v1, $s1, 0xD30
    ctx->pc = 0x357ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3376));
    // 0x357cac: 0x8c700288  lw          $s0, 0x288($v1)
    ctx->pc = 0x357cacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x357cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cb4: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x357cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x357cb8: 0xc0d6872  jal         func_35A1C8
    ctx->pc = 0x357CB8u;
    SET_GPR_U32(ctx, 31, 0x357CC0u);
    ctx->pc = 0x357CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CB8u;
    // 0x357cbc: 0x8c710284  lw          $s1, 0x284($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A1C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A1C8u, 0x357CB8u, 0x357CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CC0u;
label_357cc0:
    // 0x357cc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x357cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cc4: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x357cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x357cc8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x357cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357ccc: 0xc0db248  jal         func_36C920
    ctx->pc = 0x357CCCu;
    SET_GPR_U32(ctx, 31, 0x357CD4u);
    ctx->pc = 0x357CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CCCu;
    // 0x357cd0: 0x34c64240  ori         $a2, $a2, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x357CCCu, 0x357CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CD4u;
label_357cd4:
    // 0x357cd4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x357cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x357cd8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x357cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x357cdc: 0x2223023  subu        $a2, $s1, $v0
    ctx->pc = 0x357cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x357ce0: 0xc0d6bb2  jal         func_35AEC8
    ctx->pc = 0x357CE0u;
    SET_GPR_U32(ctx, 31, 0x357CE8u);
    ctx->pc = 0x357CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x357CE0u;
    // 0x357ce4: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35AEC8u, 0x357CE0u, 0x357CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x357CE8u;
label_357ce8:
    // 0x357ce8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x357ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_357cec:
    // 0x357cec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x357cecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x357cf0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x357cf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x357cf4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x357cf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x357cf8: 0x3e00008  jr          $ra
    ctx->pc = 0x357CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x357CF8u;
        // 0x357cfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x357CF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x357D00u;
}
