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

// Function: func_00333B40
// Address: 0x333b40 - 0x333c00
void func_00333B40_0x333b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00333B40_0x333b40");
#endif

    switch (ctx->pc) {
        case 0x333b70u: goto label_333b70;
        case 0x333ba8u: goto label_333ba8;
        case 0x333bc4u: goto label_333bc4;
        case 0x333bd4u: goto label_333bd4;
        case 0x333be4u: goto label_333be4;
        default: break;
    }

    ctx->pc = 0x333b40u;

    // 0x333b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x333b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x333b44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x333b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x333b48: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x333b48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b4c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x333b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x333b50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x333b50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b54: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x333b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x333b58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x333b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b5c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x333b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x333b60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x333b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b64: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x333b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x333b68: 0xc0ea48a  jal         func_3A9228
    ctx->pc = 0x333B68u;
    SET_GPR_U32(ctx, 31, 0x333B70u);
    ctx->pc = 0x333B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B68u;
    // 0x333b6c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9228u, 0x333B68u, 0x333B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B70u;
label_333b70:
    // 0x333b70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333b74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x333b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x333b78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x333b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b7c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x333b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x333b80: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x333b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x333b84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x333b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333b88: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x333b88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x333b8c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x333B8Cu;
    {
        const bool branch_taken_0x333b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B8Cu;
        // 0x333b90: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b8c) {
            ctx->pc = 0x333B98u;
            goto label_333b98;
        }
    }
    ctx->pc = 0x333B94u;
    // 0x333b94: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x333b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_333b98:
    // 0x333b98: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x333B98u;
    {
        const bool branch_taken_0x333b98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x333b98) {
            ctx->pc = 0x333B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x333B98u;
            // 0x333b9c: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x333BB8u;
            goto label_333bb8;
        }
    }
    ctx->pc = 0x333BA0u;
    // 0x333ba0: 0xc0ea48a  jal         func_3A9228
    ctx->pc = 0x333BA0u;
    SET_GPR_U32(ctx, 31, 0x333BA8u);
    ctx->pc = 0x333BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BA0u;
    // 0x333ba4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9228u, 0x333BA0u, 0x333BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BA8u;
label_333ba8:
    // 0x333ba8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x333ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x333bac: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x333bacu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x333bb0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x333bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x333bb4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x333bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_333bb8:
    // 0x333bb8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333bbc: 0xc0c9814  jal         func_326050
    ctx->pc = 0x333BBCu;
    SET_GPR_U32(ctx, 31, 0x333BC4u);
    ctx->pc = 0x333BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BBCu;
    // 0x333bc0: 0x24844570  addiu       $a0, $a0, 0x4570 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x333BBCu, 0x333BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BC4u;
label_333bc4:
    // 0x333bc4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x333bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x333bc8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x333bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x333bcc: 0xc0c9814  jal         func_326050
    ctx->pc = 0x333BCCu;
    SET_GPR_U32(ctx, 31, 0x333BD4u);
    ctx->pc = 0x333BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BCCu;
    // 0x333bd0: 0x24844588  addiu       $a0, $a0, 0x4588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x333BCCu, 0x333BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BD4u;
label_333bd4:
    // 0x333bd4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x333bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x333bd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333bdc: 0xc0c9814  jal         func_326050
    ctx->pc = 0x333BDCu;
    SET_GPR_U32(ctx, 31, 0x333BE4u);
    ctx->pc = 0x333BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BDCu;
    // 0x333be0: 0x24844598  addiu       $a0, $a0, 0x4598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326050u, 0x333BDCu, 0x333BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BE4u;
label_333be4:
    // 0x333be4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x333be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x333be8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x333be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333bec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x333becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x333bf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x333bf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333bf4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x333bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x333bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x333BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BF8u;
        // 0x333bfc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333C00u;
}
