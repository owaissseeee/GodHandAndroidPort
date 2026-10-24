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

// Function: PollUrpcOnce
// Address: 0x337c00 - 0x337c88
void PollUrpcOnce_0x337c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PollUrpcOnce_0x337c00");
#endif

    switch (ctx->pc) {
        case 0x337c58u: goto label_337c58;
        default: break;
    }

    ctx->pc = 0x337c00u;

    // 0x337c00: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337c04: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x337c08: 0x8c620710  lw          $v0, 0x710($v1)
    ctx->pc = 0x337c08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E0710u));
    // 0x337c0c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x337c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x337c10: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x337c10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337c14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x337c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x337c18: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337C18u;
    {
        const bool branch_taken_0x337c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x337C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C18u;
        // 0x337c1c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c18) {
            ctx->pc = 0x337C30u;
            goto label_337c30;
        }
    }
    ctx->pc = 0x337C20u;
    // 0x337c20: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337c24: 0x8c430708  lw          $v1, 0x708($v0)
    ctx->pc = 0x337c24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0708u));
    // 0x337c28: 0x58600013  blezl       $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x337C28u;
    {
        const bool branch_taken_0x337c28 = (GPR_S64(ctx, 3) <= 0);
        if (branch_taken_0x337c28) {
            ctx->pc = 0x337C2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337C28u;
            // 0x337c2c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337C78u;
            goto label_337c78;
        }
    }
    ctx->pc = 0x337C30u;
label_337c30:
    // 0x337c30: 0x3c02003e  lui         $v0, 0x3E
    ctx->pc = 0x337c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62 << 16));
    // 0x337c34: 0x24510738  addiu       $s1, $v0, 0x738
    ctx->pc = 0x337c34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
    // 0x337c38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x337c38u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3E0738u));
    // 0x337c3c: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x337C3Cu;
    {
        const bool branch_taken_0x337c3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x337C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C3Cu;
        // 0x337c40: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c3c) {
            ctx->pc = 0x337C74u;
            goto label_337c74;
        }
    }
    ctx->pc = 0x337C44u;
    // 0x337c44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x337c44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337c48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c4c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x337c4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337c50: 0xc0cc99c  jal         func_332670
    ctx->pc = 0x337C50u;
    SET_GPR_U32(ctx, 31, 0x337C58u);
    ctx->pc = 0x337C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337C50u;
    // 0x337c54: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332670u, 0x337C50u, 0x337C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337C58u;
label_337c58:
    // 0x337c58: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x337c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x337c5c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x337c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337c60: 0x24630748  addiu       $v1, $v1, 0x748
    ctx->pc = 0x337c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1864));
    // 0x337c64: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x337c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x337c68: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x337c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
    // 0x337c6c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x337c6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E074Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E074Cu, _value); } while (0);
    // 0x337c70: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x337c70u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3E0748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E0748u, _value); } while (0);
label_337c74:
    // 0x337c74: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x337c74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_337c78:
    // 0x337c78: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x337c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x337c7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337c80: 0x3e00008  jr          $ra
    ctx->pc = 0x337C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C80u;
        // 0x337c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337C80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337C88u;
}
