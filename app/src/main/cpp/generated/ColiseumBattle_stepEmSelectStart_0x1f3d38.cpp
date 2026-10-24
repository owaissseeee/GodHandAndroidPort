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

// Function: ColiseumBattle_stepEmSelectStart
// Address: 0x1f3d38 - 0x1f3df0
void ColiseumBattle_stepEmSelectStart_0x1f3d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ColiseumBattle_stepEmSelectStart_0x1f3d38");
#endif

    switch (ctx->pc) {
        case 0x1f3d88u: goto label_1f3d88;
        case 0x1f3d94u: goto label_1f3d94;
        case 0x1f3dd4u: goto label_1f3dd4;
        default: break;
    }

    ctx->pc = 0x1f3d38u;

    // 0x1f3d38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f3d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f3d3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f3d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3d40: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1f3d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1f3d44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f3d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f3d48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f3d48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d4c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1f3d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1f3d50: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F3D50u;
    {
        const bool branch_taken_0x1f3d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F3D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D50u;
        // 0x1f3d54: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d50) {
            ctx->pc = 0x1F3D9Cu;
            goto label_1f3d9c;
        }
    }
    ctx->pc = 0x1F3D58u;
    // 0x1f3d58: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F3D58u;
    {
        const bool branch_taken_0x1f3d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d58) {
            ctx->pc = 0x1F3D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3D58u;
            // 0x1f3d5c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3DE4u;
            goto label_1f3de4;
        }
    }
    ctx->pc = 0x1F3D60u;
    // 0x1f3d60: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x1F3D60u;
    {
        const bool branch_taken_0x1f3d60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d60) {
            ctx->pc = 0x1F3D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3D60u;
            // 0x1f3d64: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3DE4u;
            goto label_1f3de4;
        }
    }
    ctx->pc = 0x1F3D68u;
    // 0x1f3d68: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f3d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f3d6c: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1f3d6cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1f3d70: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1f3d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1f3d74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f3d78: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1F3D78u;
    {
        const bool branch_taken_0x1f3d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3d78) {
            ctx->pc = 0x1F3D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F3D78u;
            // 0x1f3d7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F3DE4u;
            goto label_1f3de4;
        }
    }
    ctx->pc = 0x1F3D80u;
    // 0x1f3d80: 0xc07ce28  jal         func_1F38A0
    ctx->pc = 0x1F3D80u;
    SET_GPR_U32(ctx, 31, 0x1F3D88u);
    ctx->pc = 0x1F38A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F38A0u, 0x1F3D80u, 0x1F3D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D88u;
label_1f3d88:
    // 0x1f3d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3d8c: 0xc07d10a  jal         func_1F4428
    ctx->pc = 0x1F3D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F3D94u);
    ctx->pc = 0x1F3D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3D8Cu;
    // 0x1f3d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4428u, 0x1F3D8Cu, 0x1F3D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3D94u;
label_1f3d94:
    // 0x1f3d94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1F3D94u;
    {
        const bool branch_taken_0x1f3d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3D94u;
        // 0x1f3d98: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3d94) {
            ctx->pc = 0x1F3DD8u;
            goto label_1f3dd8;
        }
    }
    ctx->pc = 0x1F3D9Cu;
label_1f3d9c:
    // 0x1f3d9c: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x1f3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x1f3da0: 0x9062748c  lbu         $v0, 0x748C($v1)
    ctx->pc = 0x1f3da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x74748Cu));
    // 0x1f3da4: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x1f3da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x1f3da8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1f3da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1f3dac: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F3DACu;
    {
        const bool branch_taken_0x1f3dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F3DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DACu;
        // 0x1f3db0: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3dac) {
            ctx->pc = 0x1F3DE0u;
            goto label_1f3de0;
        }
    }
    ctx->pc = 0x1F3DB4u;
    // 0x1f3db4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f3db4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3db8: 0x24428240  addiu       $v0, $v0, -0x7DC0
    ctx->pc = 0x1f3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935104));
    // 0x1f3dbc: 0xa4400012  sh          $zero, 0x12($v0)
    ctx->pc = 0x1f3dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3dc0: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x1f3dc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f3dc4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1f3dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x1f3dc8: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1f3dc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1f3dcc: 0xc07d138  jal         func_1F44E0
    ctx->pc = 0x1F3DCCu;
    SET_GPR_U32(ctx, 31, 0x1F3DD4u);
    ctx->pc = 0x1F3DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F3DCCu;
    // 0x1f3dd0: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F44E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F44E0u, 0x1F3DCCu, 0x1F3DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3DD4u;
label_1f3dd4:
    // 0x1f3dd4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1f3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1f3dd8:
    // 0x1f3dd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f3dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f3ddc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1f3ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_1f3de0:
    // 0x1f3de0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1f3de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f3de4:
    // 0x1f3de4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f3de4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f3de8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3DE8u;
        // 0x1f3dec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3DF0u;
}
