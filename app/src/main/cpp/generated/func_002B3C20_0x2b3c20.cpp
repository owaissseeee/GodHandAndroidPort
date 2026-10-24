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

// Function: func_002B3C20
// Address: 0x2b3c20 - 0x2b3cf8
void func_002B3C20_0x2b3c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B3C20_0x2b3c20");
#endif

    switch (ctx->pc) {
        case 0x2b3c3cu: goto label_2b3c3c;
        case 0x2b3cc4u: goto label_2b3cc4;
        case 0x2b3ce4u: goto label_2b3ce4;
        default: break;
    }

    ctx->pc = 0x2b3c20u;

    // 0x2b3c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b3c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b3c24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b3c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b3c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b3c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b3c2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b3c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c30: 0x8e05008c  lw          $a1, 0x8C($s0)
    ctx->pc = 0x2b3c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b3c34: 0xc0ad1a4  jal         func_2B4690
    ctx->pc = 0x2B3C34u;
    SET_GPR_U32(ctx, 31, 0x2B3C3Cu);
    ctx->pc = 0x2B3C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3C34u;
    // 0x2b3c38: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4690u, 0x2B3C34u, 0x2B3C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3C3Cu;
label_2b3c3c:
    // 0x2b3c3c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b3c3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3c40: 0x3c074d4f  lui         $a3, 0x4D4F
    ctx->pc = 0x2b3c40u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)19791 << 16));
    // 0x2b3c44: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x2b3c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x2b3c48: 0x34e74f52  ori         $a3, $a3, 0x4F52
    ctx->pc = 0x2b3c48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)20306);
    // 0x2b3c4c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2b3c4cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b3c50: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x2b3c50u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2b3c54: 0x94450006  lhu         $a1, 0x6($v0)
    ctx->pc = 0x2b3c54u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2b3c58: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2b3c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2b3c5c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2b3c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2b3c60: 0x1067001a  beq         $v1, $a3, . + 4 + (0x1A << 2)
    ctx->pc = 0x2B3C60u;
    {
        const bool branch_taken_0x2b3c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x2B3C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C60u;
        // 0x2b3c64: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c60) {
            ctx->pc = 0x2B3CCCu;
            goto label_2b3ccc;
        }
    }
    ctx->pc = 0x2B3C68u;
    // 0x2b3c68: 0xe3102b  sltu        $v0, $a3, $v1
    ctx->pc = 0x2b3c68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b3c6c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2B3C6Cu;
    {
        const bool branch_taken_0x2b3c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C6Cu;
        // 0x2b3c70: 0x3c026572  lui         $v0, 0x6572 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25970 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c6c) {
            ctx->pc = 0x2B3C8Cu;
            goto label_2b3c8c;
        }
    }
    ctx->pc = 0x2B3C74u;
    // 0x2b3c74: 0x3c024552  lui         $v0, 0x4552
    ctx->pc = 0x2b3c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17746 << 16));
    // 0x2b3c78: 0x34424f43  ori         $v0, $v0, 0x4F43
    ctx->pc = 0x2b3c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20291);
    // 0x2b3c7c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3C7Cu;
    {
        const bool branch_taken_0x2b3c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C7Cu;
        // 0x2b3c80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c7c) {
            ctx->pc = 0x2B3CACu;
            goto label_2b3cac;
        }
    }
    ctx->pc = 0x2B3C84u;
    // 0x2b3c84: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2B3C84u;
    {
        const bool branch_taken_0x2b3c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C84u;
        // 0x2b3c88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c84) {
            ctx->pc = 0x2B3CECu;
            goto label_2b3cec;
        }
    }
    ctx->pc = 0x2B3C8Cu;
label_2b3c8c:
    // 0x2b3c8c: 0x34426f63  ori         $v0, $v0, 0x6F63
    ctx->pc = 0x2b3c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28515);
    // 0x2b3c90: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3C90u;
    {
        const bool branch_taken_0x2b3c90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C90u;
        // 0x2b3c94: 0x3c026d6f  lui         $v0, 0x6D6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28015 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c90) {
            ctx->pc = 0x2B3CACu;
            goto label_2b3cac;
        }
    }
    ctx->pc = 0x2B3C98u;
    // 0x2b3c98: 0x34426f72  ori         $v0, $v0, 0x6F72
    ctx->pc = 0x2b3c98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28530);
    // 0x2b3c9c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2B3C9Cu;
    {
        const bool branch_taken_0x2b3c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B3CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3C9Cu;
        // 0x2b3ca0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3c9c) {
            ctx->pc = 0x2B3CCCu;
            goto label_2b3ccc;
        }
    }
    ctx->pc = 0x2B3CA4u;
    // 0x2b3ca4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B3CA4u;
    {
        const bool branch_taken_0x2b3ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CA4u;
        // 0x2b3ca8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3ca4) {
            ctx->pc = 0x2B3CECu;
            goto label_2b3cec;
        }
    }
    ctx->pc = 0x2B3CACu;
label_2b3cac:
    // 0x2b3cac: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2b3cacu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2b3cb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b3cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3cb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3cb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3cb8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2b3cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3cbc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2B3CBCu;
    SET_GPR_U32(ctx, 31, 0x2B3CC4u);
    ctx->pc = 0x2B3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CBCu;
    // 0x2b3cc0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2B3CBCu, 0x2B3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CC4u;
label_2b3cc4:
    // 0x2b3cc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B3CC4u;
    {
        const bool branch_taken_0x2b3cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CC4u;
        // 0x2b3cc8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b3cc4) {
            ctx->pc = 0x2B3CE8u;
            goto label_2b3ce8;
        }
    }
    ctx->pc = 0x2B3CCCu;
label_2b3ccc:
    // 0x2b3ccc: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2b3cccu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2b3cd0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b3cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b3cd4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b3cd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3cd8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2b3cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b3cdc: 0xc0c194a  jal         func_306528
    ctx->pc = 0x2B3CDCu;
    SET_GPR_U32(ctx, 31, 0x2B3CE4u);
    ctx->pc = 0x2B3CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3CDCu;
    // 0x2b3ce0: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x2B3CDCu, 0x2B3CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3CE4u;
label_2b3ce4:
    // 0x2b3ce4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b3ce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b3ce8:
    // 0x2b3ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b3ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b3cec:
    // 0x2b3cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b3cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3cf0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3CF0u;
        // 0x2b3cf4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3CF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3CF8u;
}
