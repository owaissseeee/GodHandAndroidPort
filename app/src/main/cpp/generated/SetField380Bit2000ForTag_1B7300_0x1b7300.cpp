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

// Function: SetField380Bit2000ForTag_1B7300
// Address: 0x1b7300 - 0x1b7380
void SetField380Bit2000ForTag_1B7300_0x1b7300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetField380Bit2000ForTag_1B7300_0x1b7300");
#endif

    switch (ctx->pc) {
        case 0x1b7320u: goto label_1b7320;
        case 0x1b7340u: goto label_1b7340;
        default: break;
    }

    ctx->pc = 0x1b7300u;

    // 0x1b7300: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b7300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b7304: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b7304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b7308: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b7308u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b730c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b730cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7310: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b7310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b7314: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1b7314u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7318: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x1B7318u;
    SET_GPR_U32(ctx, 31, 0x1B7320u);
    ctx->pc = 0x1B731Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B7318u;
    // 0x1b731c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x1B7318u, 0x1B7320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7320u;
label_1b7320:
    // 0x1b7320: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b7320u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b7324: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B7324u;
    {
        const bool branch_taken_0x1b7324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7324) {
            ctx->pc = 0x1B7328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7324u;
            // 0x1b7328: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7370u;
            goto label_1b7370;
        }
    }
    ctx->pc = 0x1B732Cu;
    // 0x1b732c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x1b732cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x1b7330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b7330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7334: 0x3484dfff  ori         $a0, $a0, 0xDFFF
    ctx->pc = 0x1b7334u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)57343);
    // 0x1b7338: 0x9062040c  lbu         $v0, 0x40C($v1)
    ctx->pc = 0x1b7338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
    // 0x1b733c: 0x0  nop
    ctx->pc = 0x1b733cu;
    // NOP
label_1b7340:
    // 0x1b7340: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B7340u;
    {
        const bool branch_taken_0x1b7340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1b7340) {
            ctx->pc = 0x1B7344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7340u;
            // 0x1b7344: 0x8c630404  lw          $v1, 0x404($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7364u;
            goto label_1b7364;
        }
    }
    ctx->pc = 0x1B7348u;
    // 0x1b7348: 0x16050003  bne         $s0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7348u;
    {
        const bool branch_taken_0x1b7348 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x1B734Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7348u;
        // 0x1b734c: 0x8c620380  lw          $v0, 0x380($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7348) {
            ctx->pc = 0x1B7358u;
            goto label_1b7358;
        }
    }
    ctx->pc = 0x1B7350u;
    // 0x1b7350: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B7350u;
    {
        const bool branch_taken_0x1b7350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7350u;
        // 0x1b7354: 0x441024  and         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7350) {
            ctx->pc = 0x1B735Cu;
            goto label_1b735c;
        }
    }
    ctx->pc = 0x1B7358u;
label_1b7358:
    // 0x1b7358: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x1b7358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_1b735c:
    // 0x1b735c: 0xac620380  sw          $v0, 0x380($v1)
    ctx->pc = 0x1b735cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 896), GPR_U32(ctx, 2));
    // 0x1b7360: 0x8c630404  lw          $v1, 0x404($v1)
    ctx->pc = 0x1b7360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1028)));
label_1b7364:
    // 0x1b7364: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B7364u;
    {
        const bool branch_taken_0x1b7364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7364) {
            ctx->pc = 0x1B7368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7364u;
            // 0x1b7368: 0x9062040c  lbu         $v0, 0x40C($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1036)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b7340;
        }
    }
    ctx->pc = 0x1B736Cu;
    // 0x1b736c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b736cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b7370:
    // 0x1b7370: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b7370u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b7374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b7374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b7378: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7378u;
        // 0x1b737c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B7380u;
}
