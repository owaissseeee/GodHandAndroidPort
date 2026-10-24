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

// Function: variousProc
// Address: 0x3306d8 - 0x330780
void variousProc_0x3306d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("variousProc_0x3306d8");
#endif

    switch (ctx->pc) {
        case 0x33070cu: goto label_33070c;
        case 0x330724u: goto label_330724;
        case 0x33072cu: goto label_33072c;
        case 0x330740u: goto label_330740;
        case 0x330748u: goto label_330748;
        case 0x330760u: goto label_330760;
        default: break;
    }

    ctx->pc = 0x3306d8u;

    // 0x3306d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3306d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3306dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3306dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3306e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3306e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3306e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3306e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3306e8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3306e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3306ec: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3306ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3306f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3306f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3306f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3306f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3306f8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3306f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3306fc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3306FCu;
    {
        const bool branch_taken_0x3306fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x330700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3306FCu;
        // 0x330700: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3306fc) {
            ctx->pc = 0x330718u;
            goto label_330718;
        }
    }
    ctx->pc = 0x330704u;
    // 0x330704: 0xc0cc29a  jal         func_330A68
    ctx->pc = 0x330704u;
    SET_GPR_U32(ctx, 31, 0x33070Cu);
    ctx->pc = 0x330A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330A68u, 0x330704u, 0x33070Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33070Cu;
label_33070c:
    // 0x33070c: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x33070cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x330710: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x330710u;
    {
        const bool branch_taken_0x330710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x330714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330710u;
        // 0x330714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330710) {
            ctx->pc = 0x330764u;
            goto label_330764;
        }
    }
    ctx->pc = 0x330718u;
label_330718:
    // 0x330718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x330718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33071c: 0xc0cc3c4  jal         func_330F10
    ctx->pc = 0x33071Cu;
    SET_GPR_U32(ctx, 31, 0x330724u);
    ctx->pc = 0x330720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33071Cu;
    // 0x330720: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330F10u, 0x33071Cu, 0x330724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330724u;
label_330724:
    // 0x330724: 0xc0cc120  jal         func_330480
    ctx->pc = 0x330724u;
    SET_GPR_U32(ctx, 31, 0x33072Cu);
    ctx->pc = 0x330728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330724u;
    // 0x330728: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330480u, 0x330724u, 0x33072Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33072Cu;
label_33072c:
    // 0x33072c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33072cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330730: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x330730u;
    {
        const bool branch_taken_0x330730 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x330734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330730u;
        // 0x330734: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330730) {
            ctx->pc = 0x330760u;
            goto label_330760;
        }
    }
    ctx->pc = 0x330738u;
    // 0x330738: 0xc0cc29a  jal         func_330A68
    ctx->pc = 0x330738u;
    SET_GPR_U32(ctx, 31, 0x330740u);
    ctx->pc = 0x330A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330A68u, 0x330738u, 0x330740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330740u;
label_330740:
    // 0x330740: 0xc0cc120  jal         func_330480
    ctx->pc = 0x330740u;
    SET_GPR_U32(ctx, 31, 0x330748u);
    ctx->pc = 0x330744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x330740u;
    // 0x330744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x330480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x330480u, 0x330740u, 0x330748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330748u;
label_330748:
    // 0x330748: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x330748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33074c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33074cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x330750: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x330750u;
    {
        const bool branch_taken_0x330750 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x330754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330750u;
        // 0x330754: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x330750) {
            ctx->pc = 0x330764u;
            goto label_330764;
        }
    }
    ctx->pc = 0x330758u;
    // 0x330758: 0xc0e95f1  jal         func_3A57C4
    ctx->pc = 0x330758u;
    SET_GPR_U32(ctx, 31, 0x330760u);
    ctx->pc = 0x3A57C4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57C4u, 0x330758u, 0x330760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x330760u;
label_330760:
    // 0x330760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x330760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_330764:
    // 0x330764: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x330764u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x330768: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x330768u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33076c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x33076cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x330770: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x330770u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x330774: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x330774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x330778: 0x3e00008  jr          $ra
    ctx->pc = 0x330778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x330778u;
        // 0x33077c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x330778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x330780u;
}
