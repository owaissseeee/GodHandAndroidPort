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

// Function: func_0035A6F8
// Address: 0x35a6f8 - 0x35a768
void func_0035A6F8_0x35a6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035A6F8_0x35a6f8");
#endif

    switch (ctx->pc) {
        case 0x35a714u: goto label_35a714;
        case 0x35a738u: goto label_35a738;
        default: break;
    }

    ctx->pc = 0x35a6f8u;

    // 0x35a6f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x35a6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35a6fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35a6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35a700: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35a700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a704: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35a704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x35a708: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x35a708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x35a70c: 0xc0d69da  jal         func_35A768
    ctx->pc = 0x35A70Cu;
    SET_GPR_U32(ctx, 31, 0x35A714u);
    ctx->pc = 0x35A710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35A70Cu;
    // 0x35a710: 0x26110d30  addiu       $s1, $s0, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35A768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A768u, 0x35A70Cu, 0x35A714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A714u;
label_35a714:
    // 0x35a714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35a714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35a718: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x35A718u;
    {
        const bool branch_taken_0x35a718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A718u;
        // 0x35a71c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a718) {
            ctx->pc = 0x35A730u;
            goto label_35a730;
        }
    }
    ctx->pc = 0x35A720u;
    // 0x35a720: 0x8e2202a8  lw          $v0, 0x2A8($s1)
    ctx->pc = 0x35a720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
    // 0x35a724: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x35a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x35a728: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a72c: 0xae2202a8  sw          $v0, 0x2A8($s1)
    ctx->pc = 0x35a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 680), GPR_U32(ctx, 2));
label_35a730:
    // 0x35a730: 0xc0d69e8  jal         func_35A7A0
    ctx->pc = 0x35A730u;
    SET_GPR_U32(ctx, 31, 0x35A738u);
    ctx->pc = 0x35A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35A7A0u, 0x35A730u, 0x35A738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35A738u;
label_35a738:
    // 0x35a738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x35A738u;
    {
        const bool branch_taken_0x35a738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35A73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A738u;
        // 0x35a73c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35a738) {
            ctx->pc = 0x35A754u;
            goto label_35a754;
        }
    }
    ctx->pc = 0x35A740u;
    // 0x35a740: 0x8e2202cc  lw          $v0, 0x2CC($s1)
    ctx->pc = 0x35a740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
    // 0x35a744: 0x8e2302ac  lw          $v1, 0x2AC($s1)
    ctx->pc = 0x35a744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 684)));
    // 0x35a748: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x35a748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x35a74c: 0xae2202cc  sw          $v0, 0x2CC($s1)
    ctx->pc = 0x35a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 2));
    // 0x35a750: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35a750u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_35a754:
    // 0x35a754: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x35a754u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35a758: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35a758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35a75c: 0x3e00008  jr          $ra
    ctx->pc = 0x35A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35A75Cu;
        // 0x35a760: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35A75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35A764u;
    // 0x35a764: 0x0  nop
    ctx->pc = 0x35a764u;
    // NOP
    ctx->pc = 0x35a768u;
}
