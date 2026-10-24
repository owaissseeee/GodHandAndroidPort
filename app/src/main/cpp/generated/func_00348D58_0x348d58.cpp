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

// Function: func_00348D58
// Address: 0x348d58 - 0x348dd8
void func_00348D58_0x348d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00348D58_0x348d58");
#endif

    switch (ctx->pc) {
        case 0x348d88u: goto label_348d88;
        case 0x348d98u: goto label_348d98;
        case 0x348da0u: goto label_348da0;
        default: break;
    }

    ctx->pc = 0x348d58u;

    // 0x348d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x348d5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x348d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x348d60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x348d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x348d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x348d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348d68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x348d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x348d6c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x348d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x348d70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x348d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x348d74: 0x8e1101ac  lw          $s1, 0x1AC($s0)
    ctx->pc = 0x348d74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x348d78: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348D78u;
    {
        const bool branch_taken_0x348d78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x348D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348D78u;
        // 0x348d7c: 0x8e12003c  lw          $s2, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348d78) {
            ctx->pc = 0x348D90u;
            goto label_348d90;
        }
    }
    ctx->pc = 0x348D80u;
    // 0x348d80: 0xc0d23fc  jal         func_348FF0
    ctx->pc = 0x348D80u;
    SET_GPR_U32(ctx, 31, 0x348D88u);
    ctx->pc = 0x348FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348FF0u, 0x348D80u, 0x348D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D88u;
label_348d88:
    // 0x348d88: 0x50510001  beql        $v0, $s1, . + 4 + (0x1 << 2)
    ctx->pc = 0x348D88u;
    {
        const bool branch_taken_0x348d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x348d88) {
            ctx->pc = 0x348D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348D88u;
            // 0x348d8c: 0xae0001ac  sw          $zero, 0x1AC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348D90u;
            goto label_348d90;
        }
    }
    ctx->pc = 0x348D90u;
label_348d90:
    // 0x348d90: 0xc0d2376  jal         func_348DD8
    ctx->pc = 0x348D90u;
    SET_GPR_U32(ctx, 31, 0x348D98u);
    ctx->pc = 0x348D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D90u;
    // 0x348d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348DD8u, 0x348D90u, 0x348D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348D98u;
label_348d98:
    // 0x348d98: 0xc0d67a0  jal         func_359E80
    ctx->pc = 0x348D98u;
    SET_GPR_U32(ctx, 31, 0x348DA0u);
    ctx->pc = 0x348D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x348D98u;
    // 0x348d9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x359E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x359E80u, 0x348D98u, 0x348DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x348DA0u;
label_348da0:
    // 0x348da0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x348da0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x348da4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x348da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x348da8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x348DA8u;
    {
        const bool branch_taken_0x348da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x348DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DA8u;
        // 0x348dac: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348da8) {
            ctx->pc = 0x348DB8u;
            goto label_348db8;
        }
    }
    ctx->pc = 0x348DB0u;
    // 0x348db0: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x348DB0u;
    {
        const bool branch_taken_0x348db0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x348db0) {
            ctx->pc = 0x348DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x348DB0u;
            // 0x348db4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x348DC4u;
            goto label_348dc4;
        }
    }
    ctx->pc = 0x348DB8u;
label_348db8:
    // 0x348db8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x348db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x348dbc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x348dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x348dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x348dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_348dc4:
    // 0x348dc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x348dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x348dc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x348dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x348dcc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x348dccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x348dd0: 0x3e00008  jr          $ra
    ctx->pc = 0x348DD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348DD0u;
        // 0x348dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348DD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348DD8u;
}
