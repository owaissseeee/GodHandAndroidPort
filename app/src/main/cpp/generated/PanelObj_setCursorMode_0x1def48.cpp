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

// Function: PanelObj_setCursorMode
// Address: 0x1def48 - 0x1defc8
void PanelObj_setCursorMode_0x1def48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PanelObj_setCursorMode_0x1def48");
#endif

    switch (ctx->pc) {
        case 0x1def84u: goto label_1def84;
        case 0x1def94u: goto label_1def94;
        case 0x1defa8u: goto label_1defa8;
        case 0x1defb8u: goto label_1defb8;
        default: break;
    }

    ctx->pc = 0x1def48u;

    // 0x1def48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1def48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1def4c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1def4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1def50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1def50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1def54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1def54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1def58: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1DEF58u;
    {
        const bool branch_taken_0x1def58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF58u;
        // 0x1def5c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def58) {
            ctx->pc = 0x1DEF74u;
            goto label_1def74;
        }
    }
    ctx->pc = 0x1DEF60u;
    // 0x1def60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1def60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1def64: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DEF64u;
    {
        const bool branch_taken_0x1def64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF64u;
        // 0x1def68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def64) {
            ctx->pc = 0x1DEF9Cu;
            goto label_1def9c;
        }
    }
    ctx->pc = 0x1DEF6Cu;
    // 0x1def6c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1DEF6Cu;
    {
        const bool branch_taken_0x1def6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF6Cu;
        // 0x1def70: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def6c) {
            ctx->pc = 0x1DEFBCu;
            goto label_1defbc;
        }
    }
    ctx->pc = 0x1DEF74u;
label_1def74:
    // 0x1def74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1def74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1def7c: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DEF7Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF84u);
    ctx->pc = 0x1DEF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF7Cu;
    // 0x1def80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DEF7Cu, 0x1DEF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF84u;
label_1def84:
    // 0x1def84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1def84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1def88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1def88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1def8c: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF94u);
    ctx->pc = 0x1DEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEF8Cu;
    // 0x1def90: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DEF8Cu, 0x1DEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEF94u;
label_1def94:
    // 0x1def94: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1DEF94u;
    {
        const bool branch_taken_0x1def94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEF94u;
        // 0x1def98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def94) {
            ctx->pc = 0x1DEFBCu;
            goto label_1defbc;
        }
    }
    ctx->pc = 0x1DEF9Cu;
label_1def9c:
    // 0x1def9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1def9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1defa0: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DEFA0u;
    SET_GPR_U32(ctx, 31, 0x1DEFA8u);
    ctx->pc = 0x1DEFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEFA0u;
    // 0x1defa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DEFA0u, 0x1DEFA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEFA8u;
label_1defa8:
    // 0x1defa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1defa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1defac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1defacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1defb0: 0xc077b98  jal         func_1DEE60
    ctx->pc = 0x1DEFB0u;
    SET_GPR_U32(ctx, 31, 0x1DEFB8u);
    ctx->pc = 0x1DEFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DEFB0u;
    // 0x1defb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DEE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DEE60u, 0x1DEFB0u, 0x1DEFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DEFB8u;
label_1defb8:
    // 0x1defb8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1defb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1defbc:
    // 0x1defbc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1defbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1defc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEFC0u;
        // 0x1defc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEFC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEFC8u;
}
