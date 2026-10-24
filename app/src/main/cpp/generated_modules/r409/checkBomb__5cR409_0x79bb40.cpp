#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r409_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r409
{
// Function: checkBomb__5cR409
// Address: 0x79bb40 - 0x79bbe8
void checkBomb__5cR409_0x79bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkBomb__5cR409_0x79bb40");
#endif

    switch (ctx->pc) {
        case 0x79bb70u: goto label_79bb70;
        case 0x79bb7cu: goto label_79bb7c;
        case 0x79bb90u: goto label_79bb90;
        case 0x79bbc4u: goto label_79bbc4;
        default: break;
    }

    ctx->pc = 0x79bb40u;

    // 0x79bb40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x79bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79bb44: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x79bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x79bb48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79bb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79bb4c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79bb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79bb50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x79bb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79bb58: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x79bb58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x79bb5c: 0x9062b010  lbu         $v0, -0x4FF0($v1)
    ctx->pc = 0x79bb5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5CB010u));
    // 0x79bb60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79BB60u;
    {
        const bool branch_taken_0x79bb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB60u;
        // 0x79bb64: 0x3c020058  lui         $v0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb60) {
            ctx->pc = 0x79BB80u;
            goto label_79bb80;
        }
    }
    ctx->pc = 0x79BB68u;
    // 0x79bb68: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x79BB68u;
    SET_GPR_U32(ctx, 31, 0x79BB70u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x79BB68u, 0x79BB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB70u;
label_79bb70:
    // 0x79bb70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79bb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb74: 0xc1e6eae  jal         func_79BAB8
    ctx->pc = 0x79BB74u;
    SET_GPR_U32(ctx, 31, 0x79BB7Cu);
    ctx->pc = 0x79BB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB74u;
    // 0x79bb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAB8u, 0x79BB74u, 0x79BB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB7Cu;
label_79bb7c:
    // 0x79bb7c: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x79bb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
label_79bb80:
    // 0x79bb80: 0x8c5069f0  lw          $s0, 0x69F0($v0)
    ctx->pc = 0x79bb80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27120)));
    // 0x79bb84: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x79BB84u;
    {
        const bool branch_taken_0x79bb84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bb84) {
            ctx->pc = 0x79BB88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB84u;
            // 0x79bb88: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BBD4u;
            goto label_79bbd4;
        }
    }
    ctx->pc = 0x79BB8Cu;
    // 0x79bb8c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x79bb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_79bb90:
    // 0x79bb90: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x79BB90u;
    {
        const bool branch_taken_0x79bb90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bb90) {
            ctx->pc = 0x79BB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BB90u;
            // 0x79bb94: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BBC8u;
            goto label_79bbc8;
        }
    }
    ctx->pc = 0x79BB98u;
    // 0x79bb98: 0x94a302fe  lhu         $v1, 0x2FE($a1)
    ctx->pc = 0x79bb98u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 766)));
    // 0x79bb9c: 0x28620200  slti        $v0, $v1, 0x200
    ctx->pc = 0x79bb9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)512) ? 1 : 0);
    // 0x79bba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79BBA0u;
    {
        const bool branch_taken_0x79bba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBA0u;
        // 0x79bba4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bba0) {
            ctx->pc = 0x79BBB0u;
            goto label_79bbb0;
        }
    }
    ctx->pc = 0x79BBA8u;
    // 0x79bba8: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x79bba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x79bbac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x79bbacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_79bbb0:
    // 0x79bbb0: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x79bbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x79bbb4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79BBB4u;
    {
        const bool branch_taken_0x79bbb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79bbb4) {
            ctx->pc = 0x79BBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BBB4u;
            // 0x79bbb8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BBC8u;
            goto label_79bbc8;
        }
    }
    ctx->pc = 0x79BBBCu;
    // 0x79bbbc: 0xc1e6eae  jal         func_79BAB8
    ctx->pc = 0x79BBBCu;
    SET_GPR_U32(ctx, 31, 0x79BBC4u);
    ctx->pc = 0x79BBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BBBCu;
    // 0x79bbc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79BAB8u, 0x79BBBCu, 0x79BBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BBC4u;
label_79bbc4:
    // 0x79bbc4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x79bbc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_79bbc8:
    // 0x79bbc8: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x79BBC8u;
    {
        const bool branch_taken_0x79bbc8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bbc8) {
            ctx->pc = 0x79BBCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BBC8u;
            // 0x79bbcc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BB90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bb90;
        }
    }
    ctx->pc = 0x79BBD0u;
    // 0x79bbd0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x79bbd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_79bbd4:
    // 0x79bbd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x79bbd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bbd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bbd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x79BBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BBDCu;
        // 0x79bbe0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BBE4u;
    // 0x79bbe4: 0x0  nop
    ctx->pc = 0x79bbe4u;
    // NOP
    ctx->pc = 0x79bbe8u;
}
} // namespace gh_r409
