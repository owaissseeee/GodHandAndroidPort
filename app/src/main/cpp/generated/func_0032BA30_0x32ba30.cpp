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

// Function: func_0032BA30
// Address: 0x32ba30 - 0x32baf0
void func_0032BA30_0x32ba30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0032BA30_0x32ba30");
#endif

    switch (ctx->pc) {
        case 0x32ba60u: goto label_32ba60;
        case 0x32ba80u: goto label_32ba80;
        case 0x32ba88u: goto label_32ba88;
        case 0x32ba9cu: goto label_32ba9c;
        case 0x32bab4u: goto label_32bab4;
        case 0x32bac0u: goto label_32bac0;
        default: break;
    }

    ctx->pc = 0x32ba30u;

    // 0x32ba30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32ba34: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x32ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x32ba38: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x32ba38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x32ba3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x32ba3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32ba40: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32ba40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x32ba44: 0xac447410  sw          $a0, 0x7410($v0)
    ctx->pc = 0x32ba44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3C7410u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3C7410u, _value); } while (0);
    // 0x32ba48: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32ba48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x32ba4c: 0x24717420  addiu       $s1, $v1, 0x7420
    ctx->pc = 0x32ba4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 29728));
    // 0x32ba50: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x32ba50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x32ba54: 0x2412000f  addiu       $s2, $zero, 0xF
    ctx->pc = 0x32ba54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x32ba58: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32ba58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x32ba5c: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x32ba5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_32ba60:
    // 0x32ba60: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x32ba60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x32ba64: 0x54530017  bnel        $v0, $s3, . + 4 + (0x17 << 2)
    ctx->pc = 0x32BA64u;
    {
        const bool branch_taken_0x32ba64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x32ba64) {
            ctx->pc = 0x32BA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32BA64u;
            // 0x32ba68: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x32BAC4u;
            goto label_32bac4;
        }
    }
    ctx->pc = 0x32BA6Cu;
    // 0x32ba6c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32ba6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32ba70: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x32BA70u;
    {
        const bool branch_taken_0x32ba70 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32BA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BA70u;
        // 0x32ba74: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32ba70) {
            ctx->pc = 0x32BAACu;
            goto label_32baac;
        }
    }
    ctx->pc = 0x32BA78u;
    // 0x32ba78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32ba78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba7c: 0x0  nop
    ctx->pc = 0x32ba7cu;
    // NOP
label_32ba80:
    // 0x32ba80: 0xc0caa20  jal         func_32A880
    ctx->pc = 0x32BA80u;
    SET_GPR_U32(ctx, 31, 0x32BA88u);
    ctx->pc = 0x32BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA80u;
    // 0x32ba84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A880u, 0x32BA80u, 0x32BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA88u;
label_32ba88:
    // 0x32ba88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32ba88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x32ba8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32ba90: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32ba90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x32ba94: 0xc0ca9c8  jal         func_32A720
    ctx->pc = 0x32BA94u;
    SET_GPR_U32(ctx, 31, 0x32BA9Cu);
    ctx->pc = 0x32BA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BA94u;
    // 0x32ba98: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A720u, 0x32BA94u, 0x32BA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BA9Cu;
label_32ba9c:
    // 0x32ba9c: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x32ba9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x32baa0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x32baa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x32baa4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x32BAA4u;
    {
        const bool branch_taken_0x32baa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAA4u;
        // 0x32baa8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32baa4) {
            ctx->pc = 0x32BA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ba80;
        }
    }
    ctx->pc = 0x32BAACu;
label_32baac:
    // 0x32baac: 0xc0caa70  jal         func_32A9C0
    ctx->pc = 0x32BAACu;
    SET_GPR_U32(ctx, 31, 0x32BAB4u);
    ctx->pc = 0x32BAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAACu;
    // 0x32bab0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A9C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A9C0u, 0x32BAACu, 0x32BAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAB4u;
label_32bab4:
    // 0x32bab4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x32bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bab8: 0xc0caa40  jal         func_32A900
    ctx->pc = 0x32BAB8u;
    SET_GPR_U32(ctx, 31, 0x32BAC0u);
    ctx->pc = 0x32BABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32BAB8u;
    // 0x32babc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32A900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32A900u, 0x32BAB8u, 0x32BAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32BAC0u;
label_32bac0:
    // 0x32bac0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x32bac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_32bac4:
    // 0x32bac4: 0x641ffe6  bgez        $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x32BAC4u;
    {
        const bool branch_taken_0x32bac4 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x32BAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAC4u;
        // 0x32bac8: 0x263100c8  addiu       $s1, $s1, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bac4) {
            ctx->pc = 0x32BA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32ba60;
        }
    }
    ctx->pc = 0x32BACCu;
    // 0x32bacc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x32baccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32bad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32bad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32bad4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x32bad4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x32bad8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x32bad8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x32badc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x32badcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32bae0: 0x3e00008  jr          $ra
    ctx->pc = 0x32BAE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x32BAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BAE0u;
        // 0x32bae4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32BAE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32BAE8u;
    // 0x32bae8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x32bae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x32baec: 0x0  nop
    ctx->pc = 0x32baecu;
    // NOP
    ctx->pc = 0x32baf0u;
}
