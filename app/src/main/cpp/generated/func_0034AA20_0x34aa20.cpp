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

// Function: func_0034AA20
// Address: 0x34aa20 - 0x34aac8
void func_0034AA20_0x34aa20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0034AA20_0x34aa20");
#endif

    switch (ctx->pc) {
        case 0x34aa48u: goto label_34aa48;
        case 0x34aa64u: goto label_34aa64;
        case 0x34aa70u: goto label_34aa70;
        case 0x34aa80u: goto label_34aa80;
        case 0x34aa94u: goto label_34aa94;
        case 0x34aaa0u: goto label_34aaa0;
        case 0x34aab0u: goto label_34aab0;
        default: break;
    }

    ctx->pc = 0x34aa20u;

    // 0x34aa20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x34aa20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x34aa24: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x34aa24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x34aa28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34aa28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aa2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x34aa2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x34aa30: 0x26021ffc  addiu       $v0, $s0, 0x1FFC
    ctx->pc = 0x34aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8188));
    // 0x34aa34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x34aa34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x34aa38: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x34aa38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34aa3c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x34aa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x34aa40: 0xc0d3224  jal         func_34C890
    ctx->pc = 0x34AA40u;
    SET_GPR_U32(ctx, 31, 0x34AA48u);
    ctx->pc = 0x34AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA40u;
    // 0x34aa44: 0x8c510008  lw          $s1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34C890u, 0x34AA40u, 0x34AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA48u;
label_34aa48:
    // 0x34aa48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x34aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34aa4c: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x34aa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x34aa50: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x34aa50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x34aa54: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x34AA54u;
    {
        const bool branch_taken_0x34aa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AA54u;
        // 0x34aa58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aa54) {
            ctx->pc = 0x34AAB4u;
            goto label_34aab4;
        }
    }
    ctx->pc = 0x34AA5Cu;
    // 0x34aa5c: 0xc0d32be  jal         func_34CAF8
    ctx->pc = 0x34AA5Cu;
    SET_GPR_U32(ctx, 31, 0x34AA64u);
    ctx->pc = 0x34CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CAF8u, 0x34AA5Cu, 0x34AA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA64u;
label_34aa64:
    // 0x34aa64: 0xde0409b8  ld          $a0, 0x9B8($s0)
    ctx->pc = 0x34aa64u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2488)));
    // 0x34aa68: 0xc0d332c  jal         func_34CCB0
    ctx->pc = 0x34AA68u;
    SET_GPR_U32(ctx, 31, 0x34AA70u);
    ctx->pc = 0x34AA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA68u;
    // 0x34aa6c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCB0u, 0x34AA68u, 0x34AA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA70u;
label_34aa70:
    // 0x34aa70: 0xde0409c0  ld          $a0, 0x9C0($s0)
    ctx->pc = 0x34aa70u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2496)));
    // 0x34aa74: 0xfe0209b8  sd          $v0, 0x9B8($s0)
    ctx->pc = 0x34aa74u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2488), GPR_U64(ctx, 2));
    // 0x34aa78: 0xc0d332c  jal         func_34CCB0
    ctx->pc = 0x34AA78u;
    SET_GPR_U32(ctx, 31, 0x34AA80u);
    ctx->pc = 0x34AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA78u;
    // 0x34aa7c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCB0u, 0x34AA78u, 0x34AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA80u;
label_34aa80:
    // 0x34aa80: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x34aa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x34aa84: 0xfe0209c0  sd          $v0, 0x9C0($s0)
    ctx->pc = 0x34aa84u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2496), GPR_U64(ctx, 2));
    // 0x34aa88: 0x27a50004  addiu       $a1, $sp, 0x4
    ctx->pc = 0x34aa88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x34aa8c: 0xc0d32be  jal         func_34CAF8
    ctx->pc = 0x34AA8Cu;
    SET_GPR_U32(ctx, 31, 0x34AA94u);
    ctx->pc = 0x34AA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA8Cu;
    // 0x34aa90: 0x27a60008  addiu       $a2, $sp, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CAF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CAF8u, 0x34AA8Cu, 0x34AA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AA94u;
label_34aa94:
    // 0x34aa94: 0xde0409d0  ld          $a0, 0x9D0($s0)
    ctx->pc = 0x34aa94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2512)));
    // 0x34aa98: 0xc0d332c  jal         func_34CCB0
    ctx->pc = 0x34AA98u;
    SET_GPR_U32(ctx, 31, 0x34AAA0u);
    ctx->pc = 0x34AA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AA98u;
    // 0x34aa9c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCB0u, 0x34AA98u, 0x34AAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAA0u;
label_34aaa0:
    // 0x34aaa0: 0xde0409d8  ld          $a0, 0x9D8($s0)
    ctx->pc = 0x34aaa0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 2520)));
    // 0x34aaa4: 0xfe0209d0  sd          $v0, 0x9D0($s0)
    ctx->pc = 0x34aaa4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2512), GPR_U64(ctx, 2));
    // 0x34aaa8: 0xc0d332c  jal         func_34CCB0
    ctx->pc = 0x34AAA8u;
    SET_GPR_U32(ctx, 31, 0x34AAB0u);
    ctx->pc = 0x34AAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34AAA8u;
    // 0x34aaac: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CCB0u, 0x34AAA8u, 0x34AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34AAB0u;
label_34aab0:
    // 0x34aab0: 0xfe0209d8  sd          $v0, 0x9D8($s0)
    ctx->pc = 0x34aab0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2520), GPR_U64(ctx, 2));
label_34aab4:
    // 0x34aab4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x34aab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34aab8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x34aab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x34aabc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x34aabcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34aac0: 0x3e00008  jr          $ra
    ctx->pc = 0x34AAC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34AAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AAC0u;
        // 0x34aac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34AAC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34AAC8u;
}
