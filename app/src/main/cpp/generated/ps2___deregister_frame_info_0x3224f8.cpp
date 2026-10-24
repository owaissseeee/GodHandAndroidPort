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

// Function: __deregister_frame_info
// Address: 0x3224f8 - 0x322570
void ps2___deregister_frame_info_0x3224f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___deregister_frame_info_0x3224f8");
#endif

    switch (ctx->pc) {
        case 0x322518u: goto label_322518;
        case 0x32253cu: goto label_32253c;
        default: break;
    }

    ctx->pc = 0x3224f8u;

    // 0x3224f8: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x3224f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x3224fc: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3224fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x322500: 0x8c435c18  lw          $v1, 0x5C18($v0)
    ctx->pc = 0x322500u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x755C18u));
    // 0x322504: 0x24455c18  addiu       $a1, $v0, 0x5C18
    ctx->pc = 0x322504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 23576));
    // 0x322508: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x322508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32250c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x32250Cu;
    {
        const bool branch_taken_0x32250c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32250Cu;
        // 0x322510: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32250c) {
            ctx->pc = 0x32254Cu;
            goto label_32254c;
        }
    }
    ctx->pc = 0x322514u;
    // 0x322514: 0x0  nop
    ctx->pc = 0x322514u;
    // NOP
label_322518:
    // 0x322518: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x322518u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32251c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x32251cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x322520: 0x14440008  bne         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x322520u;
    {
        const bool branch_taken_0x322520 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x322524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322520u;
        // 0x322524: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322520) {
            ctx->pc = 0x322544u;
            goto label_322544;
        }
    }
    ctx->pc = 0x322528u;
    // 0x322528: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x322528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32252c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x32252Cu;
    {
        const bool branch_taken_0x32252c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32252Cu;
        // 0x322530: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32252c) {
            ctx->pc = 0x32255Cu;
            goto label_32255c;
        }
    }
    ctx->pc = 0x322534u;
    // 0x322534: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x322534u;
    SET_GPR_U32(ctx, 31, 0x32253Cu);
    ctx->pc = 0x322538u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322534u;
    // 0x322538: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x322534u, 0x32253Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32253Cu;
label_32253c:
    // 0x32253c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x32253Cu;
    {
        const bool branch_taken_0x32253c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32253Cu;
        // 0x322540: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32253c) {
            ctx->pc = 0x322560u;
            goto label_322560;
        }
    }
    ctx->pc = 0x322544u;
label_322544:
    // 0x322544: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x322544u;
    {
        const bool branch_taken_0x322544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322544u;
        // 0x322548: 0x26050014  addiu       $a1, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322544) {
            ctx->pc = 0x322518u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322518;
        }
    }
    ctx->pc = 0x32254Cu;
label_32254c:
    // 0x32254c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x32254cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322554: 0x80e9ed2  j           func_3A7B48
    ctx->pc = 0x322554u;
    ctx->pc = 0x322558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322554u;
    // 0x322558: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x322554u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x32255Cu;
label_32255c:
    // 0x32255c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x32255cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_322560:
    // 0x322560: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x322560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x322564: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x322564u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322568: 0x3e00008  jr          $ra
    ctx->pc = 0x322568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32256Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322568u;
        // 0x32256c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322570u;
}
