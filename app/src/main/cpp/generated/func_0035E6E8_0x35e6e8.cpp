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

// Function: func_0035E6E8
// Address: 0x35e6e8 - 0x35e758
void func_0035E6E8_0x35e6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035E6E8_0x35e6e8");
#endif

    switch (ctx->pc) {
        case 0x35e710u: goto label_35e710;
        case 0x35e728u: goto label_35e728;
        default: break;
    }

    ctx->pc = 0x35e6e8u;

    // 0x35e6e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35e6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35e6ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x35e6ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x35e6f0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x35e6f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e6f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35e6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35e6f8: 0x30b000ff  andi        $s0, $a1, 0xFF
    ctx->pc = 0x35e6f8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x35e6fc: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x35e6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x35e700: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35e700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35e704: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x35e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x35e708: 0xc0d783c  jal         func_35E0F0
    ctx->pc = 0x35E708u;
    SET_GPR_U32(ctx, 31, 0x35E710u);
    ctx->pc = 0x35E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35E708u;
    // 0x35e70c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35E0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E0F0u, 0x35E708u, 0x35E710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E710u;
label_35e710:
    // 0x35e710: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35e710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35e714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e718: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x35E718u;
    {
        const bool branch_taken_0x35e718 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E718u;
        // 0x35e71c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e718) {
            ctx->pc = 0x35E73Cu;
            goto label_35e73c;
        }
    }
    ctx->pc = 0x35E720u;
    // 0x35e720: 0xc0d7a6a  jal         func_35E9A8
    ctx->pc = 0x35E720u;
    SET_GPR_U32(ctx, 31, 0x35E728u);
    ctx->pc = 0x35E9A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35E9A8u, 0x35E720u, 0x35E728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E728u;
label_35e728:
    // 0x35e728: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35E728u;
    {
        const bool branch_taken_0x35e728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E728u;
        // 0x35e72c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e728) {
            ctx->pc = 0x35E740u;
            goto label_35e740;
        }
    }
    ctx->pc = 0x35E730u;
    // 0x35e730: 0x92230024  lbu         $v1, 0x24($s1)
    ctx->pc = 0x35e730u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x35e734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x35e734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x35e738: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x35e738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_35e73c:
    // 0x35e73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35e73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35e740:
    // 0x35e740: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35e740u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35e744: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x35e744u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e748: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x35e748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35e74c: 0x3e00008  jr          $ra
    ctx->pc = 0x35E74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35E750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E74Cu;
        // 0x35e750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E754u;
    // 0x35e754: 0x0  nop
    ctx->pc = 0x35e754u;
    // NOP
    ctx->pc = 0x35e758u;
}
