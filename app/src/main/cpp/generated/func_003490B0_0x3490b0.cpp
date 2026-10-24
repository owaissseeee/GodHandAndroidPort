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

// Function: func_003490B0
// Address: 0x3490b0 - 0x349158
void func_003490B0_0x3490b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003490B0_0x3490b0");
#endif

    switch (ctx->pc) {
        case 0x3490dcu: goto label_3490dc;
        case 0x3490ecu: goto label_3490ec;
        case 0x349100u: goto label_349100;
        case 0x349118u: goto label_349118;
        case 0x349128u: goto label_349128;
        case 0x349130u: goto label_349130;
        default: break;
    }

    ctx->pc = 0x3490b0u;

    // 0x3490b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3490b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3490b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3490b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3490b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3490b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3490bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3490bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3490c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3490c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3490c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3490c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3490c8: 0x82020071  lb          $v0, 0x71($s0)
    ctx->pc = 0x3490c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x3490cc: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3490CCu;
    {
        const bool branch_taken_0x3490cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3490D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3490CCu;
        // 0x3490d0: 0x8e11003c  lw          $s1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3490cc) {
            ctx->pc = 0x349104u;
            goto label_349104;
        }
    }
    ctx->pc = 0x3490D4u;
    // 0x3490d4: 0xc0cd6c2  jal         func_335B08
    ctx->pc = 0x3490D4u;
    SET_GPR_U32(ctx, 31, 0x3490DCu);
    ctx->pc = 0x3490D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490D4u;
    // 0x3490d8: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B08u, 0x3490D4u, 0x3490DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490DCu;
label_3490dc:
    // 0x3490dc: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3490DCu;
    {
        const bool branch_taken_0x3490dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3490dc) {
            ctx->pc = 0x3490E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3490DCu;
            // 0x3490e0: 0x96020070  lhu         $v0, 0x70($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349108u;
            goto label_349108;
        }
    }
    ctx->pc = 0x3490E4u;
    // 0x3490e4: 0xc0d63da  jal         func_358F68
    ctx->pc = 0x3490E4u;
    SET_GPR_U32(ctx, 31, 0x3490ECu);
    ctx->pc = 0x3490E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490E4u;
    // 0x3490e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358F68u, 0x3490E4u, 0x3490ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3490ECu;
label_3490ec:
    // 0x3490ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3490ECu;
    {
        const bool branch_taken_0x3490ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3490ec) {
            ctx->pc = 0x3490F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3490ECu;
            // 0x3490f0: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349104u;
            goto label_349104;
        }
    }
    ctx->pc = 0x3490F4u;
    // 0x3490f4: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x3490f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x3490f8: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x3490F8u;
    SET_GPR_U32(ctx, 31, 0x349100u);
    ctx->pc = 0x3490FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3490F8u;
    // 0x3490fc: 0x24849330  addiu       $a0, $a0, -0x6CD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3490F8u, 0x349100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349100u;
label_349100:
    // 0x349100: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x349100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_349104:
    // 0x349104: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x349104u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_349108:
    // 0x349108: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x349108u;
    {
        const bool branch_taken_0x349108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349108) {
            ctx->pc = 0x349128u;
            goto label_349128;
        }
    }
    ctx->pc = 0x349110u;
    // 0x349110: 0xc0cd6c2  jal         func_335B08
    ctx->pc = 0x349110u;
    SET_GPR_U32(ctx, 31, 0x349118u);
    ctx->pc = 0x349114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349110u;
    // 0x349114: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335B08u, 0x349110u, 0x349118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349118u;
label_349118:
    // 0x349118: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x349118u;
    {
        const bool branch_taken_0x349118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x349118) {
            ctx->pc = 0x349128u;
            goto label_349128;
        }
    }
    ctx->pc = 0x349120u;
    // 0x349120: 0xc0d1856  jal         func_346158
    ctx->pc = 0x349120u;
    SET_GPR_U32(ctx, 31, 0x349128u);
    ctx->pc = 0x349124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349120u;
    // 0x349124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x346158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346158u, 0x349120u, 0x349128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349128u;
label_349128:
    // 0x349128: 0xc0d67a0  jal         func_359E80
    ctx->pc = 0x349128u;
    SET_GPR_U32(ctx, 31, 0x349130u);
    ctx->pc = 0x34912Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x349128u;
    // 0x34912c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359E80u, 0x349128u, 0x349130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x349130u;
label_349130:
    // 0x349130: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x349130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x349134: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x349134u;
    {
        const bool branch_taken_0x349134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x349134) {
            ctx->pc = 0x349138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x349134u;
            // 0x349138: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x349148u;
            goto label_349148;
        }
    }
    ctx->pc = 0x34913Cu;
    // 0x34913c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x34913cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x349140: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x349140u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x349144: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x349144u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_349148:
    // 0x349148: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x349148u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x34914c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34914cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x349150: 0x3e00008  jr          $ra
    ctx->pc = 0x349150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x349154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x349150u;
        // 0x349154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x349150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x349158u;
}
