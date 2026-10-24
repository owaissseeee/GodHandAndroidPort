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

// Function: cCoreSave_addKillEmNum
// Address: 0x1fbe40 - 0x1fbeb8
void cCoreSave_addKillEmNum_0x1fbe40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cCoreSave_addKillEmNum_0x1fbe40");
#endif

    switch (ctx->pc) {
        case 0x1fbe64u: goto label_1fbe64;
        default: break;
    }

    ctx->pc = 0x1fbe40u;

    // 0x1fbe40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fbe40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1fbe44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1fbe44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1fbe48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fbe48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fbe4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fbe4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fbe50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1fbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbe54: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FBE54u;
    {
        const bool branch_taken_0x1fbe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fbe54) {
            ctx->pc = 0x1FBE58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FBE54u;
            // 0x1fbe58: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FBEACu;
            goto label_1fbeac;
        }
    }
    ctx->pc = 0x1FBE5Cu;
    // 0x1fbe5c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x1FBE5Cu;
    SET_GPR_U32(ctx, 31, 0x1FBE64u);
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x1FBE5Cu, 0x1FBE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FBE64u;
label_1fbe64:
    // 0x1fbe64: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x1fbe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1fbe68: 0x4a0000f  bltz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x1FBE68u;
    {
        const bool branch_taken_0x1fbe68 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1FBE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE68u;
        // 0x1fbe6c: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe68) {
            ctx->pc = 0x1FBEA8u;
            goto label_1fbea8;
        }
    }
    ctx->pc = 0x1FBE70u;
    // 0x1fbe70: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1FBE70u;
    {
        const bool branch_taken_0x1fbe70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FBE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBE70u;
        // 0x1fbe74: 0x52840  sll         $a1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fbe70) {
            ctx->pc = 0x1FBEA8u;
            goto label_1fbea8;
        }
    }
    ctx->pc = 0x1FBE78u;
    // 0x1fbe78: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1fbe78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbe7c: 0x2484008c  addiu       $a0, $a0, 0x8C
    ctx->pc = 0x1fbe7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 140));
    // 0x1fbe80: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1fbe80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1fbe84: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x1fbe84u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fbe88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbe88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbe8c: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1fbe8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1fbe90: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fbe90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fbe94: 0x24630bac  addiu       $v1, $v1, 0xBAC
    ctx->pc = 0x1fbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2988));
    // 0x1fbe98: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1fbe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1fbe9c: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1fbe9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fbea0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1fbea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1fbea4: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x1fbea4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_1fbea8:
    // 0x1fbea8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1fbea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fbeac:
    // 0x1fbeac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fbeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fbeb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FBEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FBEB0u;
        // 0x1fbeb4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FBEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FBEB8u;
}
