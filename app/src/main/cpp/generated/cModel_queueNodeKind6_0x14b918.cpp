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

// Function: cModel_queueNodeKind6
// Address: 0x14b918 - 0x14b9a0
void cModel_queueNodeKind6_0x14b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cModel_queueNodeKind6_0x14b918");
#endif

    switch (ctx->pc) {
        case 0x14b968u: goto label_14b968;
        case 0x14b990u: goto label_14b990;
        default: break;
    }

    ctx->pc = 0x14b918u;

    // 0x14b918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14b91c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x14b91cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x14b920: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b924: 0x8c4376b0  lw          $v1, 0x76B0($v0)
    ctx->pc = 0x14b924u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7476B0u));
    // 0x14b928: 0x8ca20380  lw          $v0, 0x380($a1)
    ctx->pc = 0x14b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 896)));
    // 0x14b92c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14b92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14b930: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x14B930u;
    {
        const bool branch_taken_0x14b930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B930u;
        // 0x14b934: 0x30630001  andi        $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b930) {
            ctx->pc = 0x14B990u;
            goto label_14b990;
        }
    }
    ctx->pc = 0x14B938u;
    // 0x14b938: 0x8c8802c0  lw          $t0, 0x2C0($a0)
    ctx->pc = 0x14b938u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 704)));
    // 0x14b93c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x14b93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x14b940: 0x1502000b  bne         $t0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14B940u;
    {
        const bool branch_taken_0x14b940 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x14B944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B940u;
        // 0x14b944: 0x240700b0  addiu       $a3, $zero, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b940) {
            ctx->pc = 0x14B970u;
            goto label_14b970;
        }
    }
    ctx->pc = 0x14B948u;
    // 0x14b948: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x14b948u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x14b94c: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x14b94cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14b950: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14b950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14b954: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x14b954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x14b958: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x14b958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14b95c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x14b95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x14b960: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B960u;
    SET_GPR_U32(ctx, 31, 0x14B968u);
    ctx->pc = 0x14B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B960u;
    // 0x14b964: 0x24e800a0  addiu       $t0, $a3, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B960u, 0x14B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B968u;
label_14b968:
    // 0x14b968: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14B968u;
    {
        const bool branch_taken_0x14b968 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14B96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B968u;
        // 0x14b96c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b968) {
            ctx->pc = 0x14B994u;
            goto label_14b994;
        }
    }
    ctx->pc = 0x14B970u;
label_14b970:
    // 0x14b970: 0x848602ac  lh          $a2, 0x2AC($a0)
    ctx->pc = 0x14b970u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 684)));
    // 0x14b974: 0x671018  mult        $v0, $v1, $a3
    ctx->pc = 0x14b974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14b978: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x14b978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x14b97c: 0x24844c80  addiu       $a0, $a0, 0x4C80
    ctx->pc = 0x14b97cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19584));
    // 0x14b980: 0x453821  addu        $a3, $v0, $a1
    ctx->pc = 0x14b980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14b984: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x14b984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b988: 0xc0c6994  jal         func_31A650
    ctx->pc = 0x14B988u;
    SET_GPR_U32(ctx, 31, 0x14B990u);
    ctx->pc = 0x14B98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B988u;
    // 0x14b98c: 0x24e800a0  addiu       $t0, $a3, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31A650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31A650u, 0x14B988u, 0x14B990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14B990u;
label_14b990:
    // 0x14b990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b994:
    // 0x14b994: 0x3e00008  jr          $ra
    ctx->pc = 0x14B994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B994u;
        // 0x14b998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B99Cu;
    // 0x14b99c: 0x0  nop
    ctx->pc = 0x14b99cu;
    // NOP
    ctx->pc = 0x14b9a0u;
}
