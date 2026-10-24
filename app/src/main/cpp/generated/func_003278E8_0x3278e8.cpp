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

// Function: func_003278E8
// Address: 0x3278e8 - 0x327950
void func_003278E8_0x3278e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003278E8_0x3278e8");
#endif

    switch (ctx->pc) {
        case 0x327908u: goto label_327908;
        case 0x327930u: goto label_327930;
        default: break;
    }

    ctx->pc = 0x3278e8u;

    // 0x3278e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3278e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3278ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3278ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3278f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3278f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3278f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3278f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3278f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3278f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3278fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3278fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327900: 0xc0cf3e6  jal         func_33CF98
    ctx->pc = 0x327900u;
    SET_GPR_U32(ctx, 31, 0x327908u);
    ctx->pc = 0x327904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327900u;
    // 0x327904: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CF98u, 0x327900u, 0x327908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327908u;
label_327908:
    // 0x327908: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x327908u;
    {
        const bool branch_taken_0x327908 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x32790Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327908u;
        // 0x32790c: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327908) {
            ctx->pc = 0x327938u;
            goto label_327938;
        }
    }
    ctx->pc = 0x327910u;
    // 0x327910: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x327910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x327914: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x327914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x327918: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x327918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x32791c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x32791Cu;
    {
        const bool branch_taken_0x32791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x32791c) {
            ctx->pc = 0x327920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x32791Cu;
            // 0x327920: 0x2402ff80  addiu       $v0, $zero, -0x80 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327938u;
            goto label_327938;
        }
    }
    ctx->pc = 0x327924u;
    // 0x327924: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x327924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x327928: 0xc0cf3ea  jal         func_33CFA8
    ctx->pc = 0x327928u;
    SET_GPR_U32(ctx, 31, 0x327930u);
    ctx->pc = 0x32792Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327928u;
    // 0x32792c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CFA8u, 0x327928u, 0x327930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327930u;
label_327930:
    // 0x327930: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x327930u;
    {
        const bool branch_taken_0x327930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x327934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327930u;
        // 0x327934: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327930) {
            ctx->pc = 0x32793Cu;
            goto label_32793c;
        }
    }
    ctx->pc = 0x327938u;
label_327938:
    // 0x327938: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327938u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_32793c:
    // 0x32793c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32793cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327940: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327940u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327944: 0x3e00008  jr          $ra
    ctx->pc = 0x327944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327944u;
        // 0x327948: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32794Cu;
    // 0x32794c: 0x0  nop
    ctx->pc = 0x32794cu;
    // NOP
    ctx->pc = 0x327950u;
}
