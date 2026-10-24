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

// Function: cSeData_LoadNumbered
// Address: 0x2cf6f8 - 0x2cf760
void cSeData_LoadNumbered_0x2cf6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cSeData_LoadNumbered_0x2cf6f8");
#endif

    switch (ctx->pc) {
        case 0x2cf720u: goto label_2cf720;
        case 0x2cf730u: goto label_2cf730;
        default: break;
    }

    ctx->pc = 0x2cf6f8u;

    // 0x2cf6f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2cf6f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2cf6fc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2cf6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2cf700: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2cf700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf704: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2cf704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2cf708: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2cf708u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf70c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2cf70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2cf710: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cf710u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf714: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2cf714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2cf718: 0xc0b3f9a  jal         func_2CFE68
    ctx->pc = 0x2CF718u;
    SET_GPR_U32(ctx, 31, 0x2CF720u);
    ctx->pc = 0x2CF71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF718u;
    // 0x2cf71c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFE68u, 0x2CF718u, 0x2CF720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF720u;
label_2cf720:
    // 0x2cf720: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cf720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf724: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cf724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf728: 0xc0b3d80  jal         func_2CF600
    ctx->pc = 0x2CF728u;
    SET_GPR_U32(ctx, 31, 0x2CF730u);
    ctx->pc = 0x2CF72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CF728u;
    // 0x2cf72c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF600u, 0x2CF728u, 0x2CF730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CF730u;
label_2cf730:
    // 0x2cf730: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2cf730u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf734: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cf734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cf738: 0x50620001  beql        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x2CF738u;
    {
        const bool branch_taken_0x2cf738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2cf738) {
            ctx->pc = 0x2CF73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CF738u;
            // 0x2cf73c: 0xae32003c  sw          $s2, 0x3C($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CF740u;
            goto label_2cf740;
        }
    }
    ctx->pc = 0x2CF740u;
label_2cf740:
    // 0x2cf740: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2cf740u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cf744: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2cf744u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cf748: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2cf748u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cf74c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2cf74cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cf750: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2cf750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cf754: 0x3e00008  jr          $ra
    ctx->pc = 0x2CF754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CF754u;
        // 0x2cf758: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CF754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CF75Cu;
    // 0x2cf75c: 0x0  nop
    ctx->pc = 0x2cf75cu;
    // NOP
    ctx->pc = 0x2cf760u;
}
