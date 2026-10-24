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

// Function: func_00351A08
// Address: 0x351a08 - 0x351ab0
void func_00351A08_0x351a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00351A08_0x351a08");
#endif

    switch (ctx->pc) {
        case 0x351a54u: goto label_351a54;
        case 0x351a88u: goto label_351a88;
        default: break;
    }

    ctx->pc = 0x351a08u;

    // 0x351a08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x351a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x351a0c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x351a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x351a10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x351a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x351a14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x351a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a18: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x351a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x351a1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x351a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x351a20: 0x244293d8  addiu       $v0, $v0, -0x6C28
    ctx->pc = 0x351a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939608));
    // 0x351a24: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x351a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x351a28: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x351a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x351a2c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x351A2Cu;
    {
        const bool branch_taken_0x351a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x351A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A2Cu;
        // 0x351a30: 0x26110d30  addiu       $s1, $s0, 0xD30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351a2c) {
            ctx->pc = 0x351A48u;
            goto label_351a48;
        }
    }
    ctx->pc = 0x351A34u;
    // 0x351a34: 0x3402ac44  ori         $v0, $zero, 0xAC44
    ctx->pc = 0x351a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)44100);
    // 0x351a38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x351a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x351a3c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x351A3Cu;
    {
        const bool branch_taken_0x351a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A3Cu;
        // 0x351a40: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351a3c) {
            ctx->pc = 0x351A68u;
            goto label_351a68;
        }
    }
    ctx->pc = 0x351A44u;
    // 0x351a44: 0x0  nop
    ctx->pc = 0x351a44u;
    // NOP
label_351a48:
    // 0x351a48: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x351a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x351a4c: 0xc0d33ce  jal         func_34CF38
    ctx->pc = 0x351A4Cu;
    SET_GPR_U32(ctx, 31, 0x351A54u);
    ctx->pc = 0x351A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351A4Cu;
    // 0x351a50: 0x27a60004  addiu       $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CF38u, 0x351A4Cu, 0x351A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A54u;
label_351a54:
    // 0x351a54: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x351A54u;
    {
        const bool branch_taken_0x351a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x351a54) {
            ctx->pc = 0x351A58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x351A54u;
            // 0x351a58: 0x8e2201f0  lw          $v0, 0x1F0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x351A6Cu;
            goto label_351a6c;
        }
    }
    ctx->pc = 0x351A5Cu;
    // 0x351a5c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x351A5Cu;
    {
        const bool branch_taken_0x351a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x351A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351A5Cu;
        // 0x351a60: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x351a5c) {
            ctx->pc = 0x351A98u;
            goto label_351a98;
        }
    }
    ctx->pc = 0x351A64u;
    // 0x351a64: 0x0  nop
    ctx->pc = 0x351a64u;
    // NOP
label_351a68:
    // 0x351a68: 0x8e2201f0  lw          $v0, 0x1F0($s1)
    ctx->pc = 0x351a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 496)));
label_351a6c:
    // 0x351a6c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x351a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x351a70: 0x8e050d94  lw          $a1, 0xD94($s0)
    ctx->pc = 0x351a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3476)));
    // 0x351a74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x351a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351a78: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x351a78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x351a7c: 0xae2201f0  sw          $v0, 0x1F0($s1)
    ctx->pc = 0x351a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 496), GPR_U32(ctx, 2));
    // 0x351a80: 0xc0db248  jal         func_36C920
    ctx->pc = 0x351A80u;
    SET_GPR_U32(ctx, 31, 0x351A88u);
    ctx->pc = 0x351A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x351A80u;
    // 0x351a84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36C920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C920u, 0x351A80u, 0x351A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x351A88u;
label_351a88:
    // 0x351a88: 0x8e230164  lw          $v1, 0x164($s1)
    ctx->pc = 0x351a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
    // 0x351a8c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x351a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x351a90: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x351a90u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x351a94: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x351a94u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_351a98:
    // 0x351a98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x351a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x351a9c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x351a9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x351aa0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x351aa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x351aa4: 0x3e00008  jr          $ra
    ctx->pc = 0x351AA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x351AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x351AA4u;
        // 0x351aa8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x351AA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x351AACu;
    // 0x351aac: 0x0  nop
    ctx->pc = 0x351aacu;
    // NOP
    ctx->pc = 0x351ab0u;
}
