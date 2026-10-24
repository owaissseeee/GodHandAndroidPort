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

// Function: cEm00_stepTextureHide
// Address: 0x273f98 - 0x274018
void cEm00_stepTextureHide_0x273f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_stepTextureHide_0x273f98");
#endif

    switch (ctx->pc) {
        case 0x274008u: goto label_274008;
        default: break;
    }

    ctx->pc = 0x273f98u;

    // 0x273f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x273f9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x273f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x273fa4: 0x8ca20564  lw          $v0, 0x564($a1)
    ctx->pc = 0x273fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1380)));
    // 0x273fa8: 0x38420265  xori        $v0, $v0, 0x265
    ctx->pc = 0x273fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)613);
    // 0x273fac: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x273FACu;
    {
        const bool branch_taken_0x273fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FACu;
        // 0x273fb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fac) {
            ctx->pc = 0x27400Cu;
            goto label_27400c;
        }
    }
    ctx->pc = 0x273FB4u;
    // 0x273fb4: 0x80a2186a  lb          $v0, 0x186A($a1)
    ctx->pc = 0x273fb4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 6250)));
    // 0x273fb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x273FB8u;
    {
        const bool branch_taken_0x273fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FB8u;
        // 0x273fbc: 0x90a4186a  lbu         $a0, 0x186A($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6250)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fb8) {
            ctx->pc = 0x273FDCu;
            goto label_273fdc;
        }
    }
    ctx->pc = 0x273FC0u;
    // 0x273fc0: 0x8ca20254  lw          $v0, 0x254($a1)
    ctx->pc = 0x273fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 596)));
    // 0x273fc4: 0x3c03efff  lui         $v1, 0xEFFF
    ctx->pc = 0x273fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61439 << 16));
    // 0x273fc8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x273fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x273fcc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x273fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x273fd0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x273fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x273fd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x273FD4u;
    {
        const bool branch_taken_0x273fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x273FD4u;
        // 0x273fd8: 0xa0a4186a  sb          $a0, 0x186A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6250), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273fd4) {
            ctx->pc = 0x273FE8u;
            goto label_273fe8;
        }
    }
    ctx->pc = 0x273FDCu;
label_273fdc:
    // 0x273fdc: 0x8ca20254  lw          $v0, 0x254($a1)
    ctx->pc = 0x273fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 596)));
    // 0x273fe0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x273fe4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x273fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_273fe8:
    // 0x273fe8: 0xaca20254  sw          $v0, 0x254($a1)
    ctx->pc = 0x273fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 596), GPR_U32(ctx, 2));
    // 0x273fec: 0x8ca20304  lw          $v0, 0x304($a1)
    ctx->pc = 0x273fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 772)));
    // 0x273ff0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x273ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ff4: 0x8c850284  lw          $a1, 0x284($a0)
    ctx->pc = 0x273ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x273ff8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x273ff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x273ffc: 0x8c46008c  lw          $a2, 0x8C($v0)
    ctx->pc = 0x273ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x274000: 0xc0526b6  jal         func_149AD8
    ctx->pc = 0x274000u;
    SET_GPR_U32(ctx, 31, 0x274008u);
    ctx->pc = 0x274004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274000u;
    // 0x274004: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149AD8u, 0x274000u, 0x274008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274008u;
label_274008:
    // 0x274008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x274008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27400c:
    // 0x27400c: 0x3e00008  jr          $ra
    ctx->pc = 0x27400Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27400Cu;
        // 0x274010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27400Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274014u;
    // 0x274014: 0x0  nop
    ctx->pc = 0x274014u;
    // NOP
    ctx->pc = 0x274018u;
}
