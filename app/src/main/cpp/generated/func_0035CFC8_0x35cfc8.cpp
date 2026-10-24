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

// Function: func_0035CFC8
// Address: 0x35cfc8 - 0x35d048
void func_0035CFC8_0x35cfc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035CFC8_0x35cfc8");
#endif

    switch (ctx->pc) {
        case 0x35cfe8u: goto label_35cfe8;
        case 0x35cff8u: goto label_35cff8;
        case 0x35d008u: goto label_35d008;
        default: break;
    }

    ctx->pc = 0x35cfc8u;

    // 0x35cfc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35cfc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35cfcc: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35cfccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35cfd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35cfd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35cfd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35cfd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35cfd8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35cfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35cfdc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35cfdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35cfe0: 0xc0d70da  jal         func_35C368
    ctx->pc = 0x35CFE0u;
    SET_GPR_U32(ctx, 31, 0x35CFE8u);
    ctx->pc = 0x35CFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CFE0u;
    // 0x35cfe4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C368u, 0x35CFE0u, 0x35CFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFE8u;
label_35cfe8:
    // 0x35cfe8: 0x10510011  beq         $v0, $s1, . + 4 + (0x11 << 2)
    ctx->pc = 0x35CFE8u;
    {
        const bool branch_taken_0x35cfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x35CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFE8u;
        // 0x35cfec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cfe8) {
            ctx->pc = 0x35D030u;
            goto label_35d030;
        }
    }
    ctx->pc = 0x35CFF0u;
    // 0x35cff0: 0xc0d32a6  jal         func_34CA98
    ctx->pc = 0x35CFF0u;
    SET_GPR_U32(ctx, 31, 0x35CFF8u);
    ctx->pc = 0x35CFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CFF0u;
    // 0x35cff4: 0x8e052160  lw          $a1, 0x2160($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34CA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34CA98u, 0x35CFF0u, 0x35CFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CFF8u;
label_35cff8:
    // 0x35cff8: 0x1451000d  bne         $v0, $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x35CFF8u;
    {
        const bool branch_taken_0x35cff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x35CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CFF8u;
        // 0x35cffc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35cff8) {
            ctx->pc = 0x35D030u;
            goto label_35d030;
        }
    }
    ctx->pc = 0x35D000u;
    // 0x35d000: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x35D000u;
    SET_GPR_U32(ctx, 31, 0x35D008u);
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x35D000u, 0x35D008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D008u;
label_35d008:
    // 0x35d008: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x35D008u;
    {
        const bool branch_taken_0x35d008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D008u;
        // 0x35d00c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d008) {
            ctx->pc = 0x35D030u;
            goto label_35d030;
        }
    }
    ctx->pc = 0x35D010u;
    // 0x35d010: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d010u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d014: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d014u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d018: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35d018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x35d01c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d020: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x35d020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35d024: 0x80d70d4  j           func_35C350
    ctx->pc = 0x35D024u;
    ctx->pc = 0x35D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D024u;
    // 0x35d028: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35C350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35C350u, 0x35D024u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x35D02Cu;
    // 0x35d02c: 0x0  nop
    ctx->pc = 0x35d02cu;
    // NOP
label_35d030:
    // 0x35d030: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d030u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d034: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35d034u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d038: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35d038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35d03c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D03Cu;
        // 0x35d040: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D044u;
    // 0x35d044: 0x0  nop
    ctx->pc = 0x35d044u;
    // NOP
    ctx->pc = 0x35d048u;
}
