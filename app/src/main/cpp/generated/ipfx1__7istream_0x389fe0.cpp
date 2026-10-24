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

// Function: ipfx1__7istream
// Address: 0x389fe0 - 0x38a040
void ipfx1__7istream_0x389fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ipfx1__7istream_0x389fe0");
#endif

    switch (ctx->pc) {
        case 0x38a02cu: goto label_38a02c;
        default: break;
    }

    ctx->pc = 0x389fe0u;

    // 0x389fe0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x389fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x389fe4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x389fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x389fe8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x389fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x389fec: 0x9083001a  lbu         $v1, 0x1A($a0)
    ctx->pc = 0x389fecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x389ff0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x389FF0u;
    {
        const bool branch_taken_0x389ff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x389FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FF0u;
        // 0x389ff4: 0x34630002  ori         $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ff0) {
            ctx->pc = 0x38A004u;
            goto label_38a004;
        }
    }
    ctx->pc = 0x389FF8u;
    // 0x389ff8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x389ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x389ffc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x389FFCu;
    {
        const bool branch_taken_0x389ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x389FFCu;
        // 0x38a000: 0xa083001a  sb          $v1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x389ffc) {
            ctx->pc = 0x38A030u;
            goto label_38a030;
        }
    }
    ctx->pc = 0x38A004u;
label_38a004:
    // 0x38a004: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x38a004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x38a008: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x38A008u;
    {
        const bool branch_taken_0x38a008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x38A00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A008u;
        // 0x38a00c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a008) {
            ctx->pc = 0x38A030u;
            goto label_38a030;
        }
    }
    ctx->pc = 0x38A010u;
    // 0x38a010: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x38a010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x38a014: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x38a014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x38a018: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x38a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x38a01c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x38A01Cu;
    {
        const bool branch_taken_0x38a01c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x38A020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A01Cu;
        // 0x38a020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38a01c) {
            ctx->pc = 0x38A030u;
            goto label_38a030;
        }
    }
    ctx->pc = 0x38A024u;
    // 0x38a024: 0xc0e249a  jal         func_389268
    ctx->pc = 0x38A024u;
    SET_GPR_U32(ctx, 31, 0x38A02Cu);
    ctx->pc = 0x38A028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38A024u;
    // 0x38a028: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389268u, 0x38A024u, 0x38A02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38A02Cu;
label_38a02c:
    // 0x38a02c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38a030:
    // 0x38a030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x38a030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38a034: 0x3e00008  jr          $ra
    ctx->pc = 0x38A034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38A038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38A034u;
        // 0x38a038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38A034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38A03Cu;
    // 0x38a03c: 0x0  nop
    ctx->pc = 0x38a03cu;
    // NOP
    ctx->pc = 0x38a040u;
}
