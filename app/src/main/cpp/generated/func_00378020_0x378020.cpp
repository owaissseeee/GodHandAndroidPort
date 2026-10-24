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

// Function: func_00378020
// Address: 0x378020 - 0x378070
void func_00378020_0x378020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00378020_0x378020");
#endif

    ctx->pc = 0x378020u;

    // 0x378020: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x378020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x378024: 0x94a40000  lhu         $a0, 0x0($a1)
    ctx->pc = 0x378024u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x378028: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x378028u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x37802c: 0x84a30006  lh          $v1, 0x6($a1)
    ctx->pc = 0x37802cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x378030: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x378030u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x378034: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x378034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x378038: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x378038u;
    {
        const bool branch_taken_0x378038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378038) {
            ctx->pc = 0x37803Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378038u;
            // 0x37803c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x378040u;
            goto label_378040;
        }
    }
    ctx->pc = 0x378040u;
label_378040:
    // 0x378040: 0x22403  sra         $a0, $v0, 16
    ctx->pc = 0x378040u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 16));
    // 0x378044: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x378044u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x378048: 0x1812  mflo        $v1
    ctx->pc = 0x378048u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x37804c: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x37804cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x378050: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x378050u;
    {
        const bool branch_taken_0x378050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x378054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378050u;
        // 0x378054: 0xa4a30004  sh          $v1, 0x4($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378050) {
            ctx->pc = 0x378068u;
            goto label_378068;
        }
    }
    ctx->pc = 0x378058u;
    // 0x378058: 0x18800002  blez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x378058u;
    {
        const bool branch_taken_0x378058 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x37805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378058u;
        // 0x37805c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378058) {
            ctx->pc = 0x378064u;
            goto label_378064;
        }
    }
    ctx->pc = 0x378060u;
    // 0x378060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x378060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378064:
    // 0x378064: 0xa4a20004  sh          $v0, 0x4($a1)
    ctx->pc = 0x378064u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 2));
label_378068:
    // 0x378068: 0x3e00008  jr          $ra
    ctx->pc = 0x378068u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37806Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378068u;
        // 0x37806c: 0xa4a00006  sh          $zero, 0x6($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378068u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x378070u;
}
