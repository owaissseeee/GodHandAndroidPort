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

// Function: InitSlotTable_1FF800
// Address: 0x1ff800 - 0x1ff858
void InitSlotTable_1FF800_0x1ff800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitSlotTable_1FF800_0x1ff800");
#endif

    switch (ctx->pc) {
        case 0x1ff83cu: goto label_1ff83c;
        default: break;
    }

    ctx->pc = 0x1ff800u;

    // 0x1ff800: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ff800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ff804: 0x24020c00  addiu       $v0, $zero, 0xC00
    ctx->pc = 0x1ff804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
    // 0x1ff808: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ff808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ff80c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ff80cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ff810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ff814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ff818: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1ff818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1ff81c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1ff81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x1ff820: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1ff820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1ff824: 0x24840d80  addiu       $a0, $a0, 0xD80
    ctx->pc = 0x1ff824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3456));
    // 0x1ff828: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1ff828u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1ff82c: 0x24063000  addiu       $a2, $zero, 0x3000
    ctx->pc = 0x1ff82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12288));
    // 0x1ff830: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1ff830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1ff834: 0xc0e94bc  jal         func_3A52F0
    ctx->pc = 0x1FF834u;
    SET_GPR_U32(ctx, 31, 0x1FF83Cu);
    ctx->pc = 0x1FF838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FF834u;
    // 0x1ff838: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x1FF834u, 0x1FF83Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FF83Cu;
label_1ff83c:
    // 0x1ff83c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ff83cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ff840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ff844: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ff844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ff848: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF848u;
        // 0x1ff84c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF848u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF850u;
    // 0x1ff850: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ff850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ff854: 0x0  nop
    ctx->pc = 0x1ff854u;
    // NOP
    ctx->pc = 0x1ff858u;
}
