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

// Function: FindSlotEntry_376A10
// Address: 0x376a10 - 0x376a90
void FindSlotEntry_376A10_0x376a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindSlotEntry_376A10_0x376a10");
#endif

    switch (ctx->pc) {
        case 0x376a78u: goto label_376a78;
        default: break;
    }

    ctx->pc = 0x376a10u;

    // 0x376a10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x376a14: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x376a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x376a18: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x376a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x376a1c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x376a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x376a20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x376a20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x376a24: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x376a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x376a28: 0x24420850  addiu       $v0, $v0, 0x850
    ctx->pc = 0x376a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2128));
    // 0x376a2c: 0x80a30009  lb          $v1, 0x9($a1)
    ctx->pc = 0x376a2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 9)));
    // 0x376a30: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x376a30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x376a34: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x376a34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x376a38: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x376a38u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x376a3c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x376A3Cu;
    {
        const bool branch_taken_0x376a3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x376A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A3Cu;
        // 0x376a40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a3c) {
            ctx->pc = 0x376A7Cu;
            goto label_376a7c;
        }
    }
    ctx->pc = 0x376A44u;
    // 0x376a44: 0x80a40008  lb          $a0, 0x8($a1)
    ctx->pc = 0x376a44u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x376a48: 0x82030010  lb          $v1, 0x10($s0)
    ctx->pc = 0x376a48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x376a4c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x376a4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x376a50: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x376A50u;
    {
        const bool branch_taken_0x376a50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x376A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A50u;
        // 0x376a54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a50) {
            ctx->pc = 0x376A7Cu;
            goto label_376a7c;
        }
    }
    ctx->pc = 0x376A58u;
    // 0x376a58: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x376A58u;
    {
        const bool branch_taken_0x376a58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x376A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A58u;
        // 0x376a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a58) {
            ctx->pc = 0x376A70u;
            goto label_376a70;
        }
    }
    ctx->pc = 0x376A60u;
    // 0x376a60: 0x94a2000e  lhu         $v0, 0xE($a1)
    ctx->pc = 0x376a60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 14)));
    // 0x376a64: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x376a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x376a68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x376A68u;
    {
        const bool branch_taken_0x376a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x376A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A68u;
        // 0x376a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376a68) {
            ctx->pc = 0x376A7Cu;
            goto label_376a7c;
        }
    }
    ctx->pc = 0x376A70u;
label_376a70:
    // 0x376a70: 0xc0ddab8  jal         func_376AE0
    ctx->pc = 0x376A70u;
    SET_GPR_U32(ctx, 31, 0x376A78u);
    ctx->pc = 0x376A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x376A70u;
    // 0x376a74: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x376AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x376AE0u, 0x376A70u, 0x376A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x376A78u;
label_376a78:
    // 0x376a78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x376a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_376a7c:
    // 0x376a7c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x376a7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x376a80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x376a80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x376a84: 0x3e00008  jr          $ra
    ctx->pc = 0x376A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x376A84u;
        // 0x376a88: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x376A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x376A8Cu;
    // 0x376a8c: 0x0  nop
    ctx->pc = 0x376a8cu;
    // NOP
    ctx->pc = 0x376a90u;
}
