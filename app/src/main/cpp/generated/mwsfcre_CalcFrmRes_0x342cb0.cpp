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

// Function: mwsfcre_CalcFrmRes
// Address: 0x342cb0 - 0x342d00
void mwsfcre_CalcFrmRes_0x342cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mwsfcre_CalcFrmRes_0x342cb0");
#endif

    ctx->pc = 0x342cb0u;

    // 0x342cb0: 0x8c8a0008  lw          $t2, 0x8($a0)
    ctx->pc = 0x342cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x342cb4: 0x8c8b000c  lw          $t3, 0xC($a0)
    ctx->pc = 0x342cb4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x342cb8: 0xa1fc2  srl         $v1, $t2, 31
    ctx->pc = 0x342cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x342cbc: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x342cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x342cc0: 0xb27c2  srl         $a0, $t3, 31
    ctx->pc = 0x342cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 31));
    // 0x342cc4: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x342cc4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x342cc8: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x342cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x342ccc: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x342cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x342cd0: 0x2463003e  addiu       $v1, $v1, 0x3E
    ctx->pc = 0x342cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 62));
    // 0x342cd4: 0x28490000  slti        $t1, $v0, 0x0
    ctx->pc = 0x342cd4u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x342cd8: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x342cd8u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x342cdc: 0x69100b  movn        $v0, $v1, $t1
    ctx->pc = 0x342cdcu;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x342ce0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x342ce0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x342ce4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x342ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x342ce8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x342ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x342cec: 0xad040000  sw          $a0, 0x0($t0)
    ctx->pc = 0x342cecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 4));
    // 0x342cf0: 0xacaa0000  sw          $t2, 0x0($a1)
    ctx->pc = 0x342cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 10));
    // 0x342cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x342CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x342CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x342CF4u;
        // 0x342cf8: 0xaccb0000  sw          $t3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x342CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x342CFCu;
    // 0x342cfc: 0x0  nop
    ctx->pc = 0x342cfcu;
    // NOP
    ctx->pc = 0x342d00u;
}
