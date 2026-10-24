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

// Function: func_00342FF8
// Address: 0x342ff8 - 0x3430c8
void func_00342FF8_0x342ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00342FF8_0x342ff8");
#endif

    switch (ctx->pc) {
        case 0x3430a0u: goto label_3430a0;
        case 0x3430b0u: goto label_3430b0;
        case 0x3430bcu: goto label_3430bc;
        default: break;
    }

    ctx->pc = 0x342ff8u;

    // 0x342ff8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x342ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x342ffc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x342ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x343000: 0x8c8601bc  lw          $a2, 0x1BC($a0)
    ctx->pc = 0x343000u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 444)));
    // 0x343004: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x343004u;
    {
        const bool branch_taken_0x343004 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x343008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343004u;
        // 0x343008: 0x8c87003c  lw          $a3, 0x3C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343004) {
            ctx->pc = 0x3430BCu;
            goto label_3430bc;
        }
    }
    ctx->pc = 0x34300Cu;
    // 0x34300c: 0x8c8201e0  lw          $v0, 0x1E0($a0)
    ctx->pc = 0x34300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 480)));
    // 0x343010: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x343010u;
    {
        const bool branch_taken_0x343010 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x343010) {
            ctx->pc = 0x343014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343010u;
            // 0x343014: 0x8c8201c0  lw          $v0, 0x1C0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343040u;
            goto label_343040;
        }
    }
    ctx->pc = 0x343018u;
    // 0x343018: 0x8c8201e8  lw          $v0, 0x1E8($a0)
    ctx->pc = 0x343018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 488)));
    // 0x34301c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34301cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343020: 0x8c8401e4  lw          $a0, 0x1E4($a0)
    ctx->pc = 0x343020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 484)));
    // 0x343024: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x343024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x343028: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x343028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x34302c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x34302cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x343030: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x343030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x343034: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x343034u;
    {
        const bool branch_taken_0x343034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343034u;
        // 0x343038: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343034) {
            ctx->pc = 0x343090u;
            goto label_343090;
        }
    }
    ctx->pc = 0x34303Cu;
    // 0x34303c: 0x0  nop
    ctx->pc = 0x34303cu;
    // NOP
label_343040:
    // 0x343040: 0x54c2000b  bnel        $a2, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x343040u;
    {
        const bool branch_taken_0x343040 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x343040) {
            ctx->pc = 0x343044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343040u;
            // 0x343044: 0x8c8201d0  lw          $v0, 0x1D0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 464)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343070u;
            goto label_343070;
        }
    }
    ctx->pc = 0x343048u;
    // 0x343048: 0x8c8201cc  lw          $v0, 0x1CC($a0)
    ctx->pc = 0x343048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 460)));
    // 0x34304c: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x34304cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x343050: 0x8c8401c8  lw          $a0, 0x1C8($a0)
    ctx->pc = 0x343050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x343054: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x343054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x343058: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x343058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x34305c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x34305cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x343060: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x343060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x343064: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x343064u;
    {
        const bool branch_taken_0x343064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343064u;
        // 0x343068: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343064) {
            ctx->pc = 0x343090u;
            goto label_343090;
        }
    }
    ctx->pc = 0x34306Cu;
    // 0x34306c: 0x0  nop
    ctx->pc = 0x34306cu;
    // NOP
label_343070:
    // 0x343070: 0x8c8501dc  lw          $a1, 0x1DC($a0)
    ctx->pc = 0x343070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 476)));
    // 0x343074: 0x8c8301d4  lw          $v1, 0x1D4($a0)
    ctx->pc = 0x343074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 468)));
    // 0x343078: 0x8c8401d8  lw          $a0, 0x1D8($a0)
    ctx->pc = 0x343078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 472)));
    // 0x34307c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x34307cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x343080: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x343080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x343084: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x343084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x343088: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x343088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x34308c: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x34308cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_343090:
    // 0x343090: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x343090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x343094: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x343094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343098: 0xc0d649c  jal         func_359270
    ctx->pc = 0x343098u;
    SET_GPR_U32(ctx, 31, 0x3430A0u);
    ctx->pc = 0x34309Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343098u;
    // 0x34309c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359270u, 0x343098u, 0x3430A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430A0u;
label_3430a0:
    // 0x3430a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3430A0u;
    {
        const bool branch_taken_0x3430a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3430A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430A0u;
        // 0x3430a4: 0x2404fec8  addiu       $a0, $zero, -0x138 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3430a0) {
            ctx->pc = 0x3430BCu;
            goto label_3430bc;
        }
    }
    ctx->pc = 0x3430A8u;
    // 0x3430a8: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x3430A8u;
    SET_GPR_U32(ctx, 31, 0x3430B0u);
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x3430A8u, 0x3430B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430B0u;
label_3430b0:
    // 0x3430b0: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3430b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3430b4: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3430B4u;
    SET_GPR_U32(ctx, 31, 0x3430BCu);
    ctx->pc = 0x3430B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3430B4u;
    // 0x3430b8: 0x24847208  addiu       $a0, $a0, 0x7208 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3430B4u, 0x3430BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3430BCu;
label_3430bc:
    // 0x3430bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3430bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3430c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3430C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3430C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3430C0u;
        // 0x3430c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3430C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3430C8u;
}
