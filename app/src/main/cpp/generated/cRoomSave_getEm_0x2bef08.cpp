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

// Function: cRoomSave_getEm
// Address: 0x2bef08 - 0x2bef60
void cRoomSave_getEm_0x2bef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cRoomSave_getEm_0x2bef08");
#endif

    switch (ctx->pc) {
        case 0x2bef24u: goto label_2bef24;
        default: break;
    }

    ctx->pc = 0x2bef08u;

    // 0x2bef08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bef08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bef0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2bef0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2bef10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2bef14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bef14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bef18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bef1c: 0xc0afb76  jal         func_2BEDD8
    ctx->pc = 0x2BEF1Cu;
    SET_GPR_U32(ctx, 31, 0x2BEF24u);
    ctx->pc = 0x2BEF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BEF1Cu;
    // 0x2bef20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEDD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEDD8u, 0x2BEF1Cu, 0x2BEF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BEF24u;
label_2bef24:
    // 0x2bef24: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x2bef24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2bef28: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BEF28u;
    {
        const bool branch_taken_0x2bef28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF28u;
        // 0x2bef2c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef28) {
            ctx->pc = 0x2BEF38u;
            goto label_2bef38;
        }
    }
    ctx->pc = 0x2BEF30u;
    // 0x2bef30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2BEF30u;
    {
        const bool branch_taken_0x2bef30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BEF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF30u;
        // 0x2bef34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bef30) {
            ctx->pc = 0x2BEF48u;
            goto label_2bef48;
        }
    }
    ctx->pc = 0x2BEF38u;
label_2bef38:
    // 0x2bef38: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2bef38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bef3c: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x2bef3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2bef40: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x2bef40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x2bef44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2bef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2bef48:
    // 0x2bef48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2bef48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bef4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bef4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bef50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bef50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bef54: 0x3e00008  jr          $ra
    ctx->pc = 0x2BEF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BEF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BEF54u;
        // 0x2bef58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BEF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BEF5Cu;
    // 0x2bef5c: 0x0  nop
    ctx->pc = 0x2bef5cu;
    // NOP
    ctx->pc = 0x2bef60u;
}
