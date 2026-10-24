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

// Function: func_001BD528
// Address: 0x1bd528 - 0x1bd580
void func_001BD528_0x1bd528(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BD528_0x1bd528");
#endif

    switch (ctx->pc) {
        case 0x1bd54cu: goto label_1bd54c;
        case 0x1bd564u: goto label_1bd564;
        default: break;
    }

    ctx->pc = 0x1bd528u;

    // 0x1bd528: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bd528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bd52c: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x1bd52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x1bd530: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1bd530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1bd534: 0x8c6259b8  lw          $v0, 0x59B8($v1)
    ctx->pc = 0x1bd534u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x7859B8u));
    // 0x1bd538: 0x247059b8  addiu       $s0, $v1, 0x59B8
    ctx->pc = 0x1bd538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 22968));
    // 0x1bd53c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BD53Cu;
    {
        const bool branch_taken_0x1bd53c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD53Cu;
        // 0x1bd540: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd53c) {
            ctx->pc = 0x1BD564u;
            goto label_1bd564;
        }
    }
    ctx->pc = 0x1BD544u;
    // 0x1bd544: 0xc06e016  jal         func_1B8058
    ctx->pc = 0x1BD544u;
    SET_GPR_U32(ctx, 31, 0x1BD54Cu);
    ctx->pc = 0x1B8058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B8058u, 0x1BD544u, 0x1BD54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD54Cu;
label_1bd54c:
    // 0x1bd54c: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x1bd54cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x1bd550: 0x3c060078  lui         $a2, 0x78
    ctx->pc = 0x1bd550u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)120 << 16));
    // 0x1bd554: 0x24a593a0  addiu       $a1, $a1, -0x6C60
    ctx->pc = 0x1bd554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939552));
    // 0x1bd558: 0x24c65878  addiu       $a2, $a2, 0x5878
    ctx->pc = 0x1bd558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22648));
    // 0x1bd55c: 0xc0c7baa  jal         func_31EEA8
    ctx->pc = 0x1BD55Cu;
    SET_GPR_U32(ctx, 31, 0x1BD564u);
    ctx->pc = 0x1BD560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BD55Cu;
    // 0x1bd560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31EEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31EEA8u, 0x1BD55Cu, 0x1BD564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD564u;
label_1bd564:
    // 0x1bd564: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bd564u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd568: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd56c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1bd56cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd570: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD570u;
        // 0x1bd574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD578u;
    // 0x1bd578: 0xac850628  sw          $a1, 0x628($a0)
    ctx->pc = 0x1bd578u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1576), GPR_U32(ctx, 5));
    // 0x1bd57c: 0x0  nop
    ctx->pc = 0x1bd57cu;
    // NOP
    ctx->pc = 0x1bd580u;
}
