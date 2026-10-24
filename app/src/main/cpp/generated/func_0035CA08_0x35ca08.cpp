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

// Function: func_0035CA08
// Address: 0x35ca08 - 0x35ca68
void func_0035CA08_0x35ca08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0035CA08_0x35ca08");
#endif

    switch (ctx->pc) {
        case 0x35ca4cu: goto label_35ca4c;
        default: break;
    }

    ctx->pc = 0x35ca08u;

    // 0x35ca08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35ca08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35ca0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35ca0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35ca10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35ca10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35ca14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35ca18: 0x26070014  addiu       $a3, $s0, 0x14
    ctx->pc = 0x35ca18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x35ca1c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x35ca1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x35ca20: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x35ca20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x35ca24: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x35CA24u;
    {
        const bool branch_taken_0x35ca24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ca24) {
            ctx->pc = 0x35CA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35CA24u;
            // 0x35ca28: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x35CA2Cu;
            goto label_35ca2c;
        }
    }
    ctx->pc = 0x35CA2Cu;
label_35ca2c:
    // 0x35ca2c: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x35ca2cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x35ca30: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x35ca30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x35ca34: 0x1010  mfhi        $v0
    ctx->pc = 0x35ca34u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x35ca38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x35ca38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x35ca3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x35ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x35ca40: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x35ca40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
    // 0x35ca44: 0xc0d72b2  jal         func_35CAC8
    ctx->pc = 0x35CA44u;
    SET_GPR_U32(ctx, 31, 0x35CA4Cu);
    ctx->pc = 0x35CA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35CA44u;
    // 0x35ca48: 0xace60000  sw          $a2, 0x0($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CAC8u, 0x35CA44u, 0x35CA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35CA4Cu;
label_35ca4c:
    // 0x35ca4c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x35ca4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ca50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35ca50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35ca54: 0xae0301a8  sw          $v1, 0x1A8($s0)
    ctx->pc = 0x35ca54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 3));
    // 0x35ca58: 0xae0301a4  sw          $v1, 0x1A4($s0)
    ctx->pc = 0x35ca58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 3));
    // 0x35ca5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35ca5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ca60: 0x3e00008  jr          $ra
    ctx->pc = 0x35CA60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35CA64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35CA60u;
        // 0x35ca64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35CA60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35CA68u;
}
