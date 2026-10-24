#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: SetDirName__7cMcPorti
// Address: 0x7c31f0 - 0x7c3248
void SetDirName__7cMcPorti_0x7c31f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetDirName__7cMcPorti_0x7c31f0");
#endif

    ctx->pc = 0x7c31f0u;

    // 0x7c31f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x7c31f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c31f4: 0x28620015  slti        $v0, $v1, 0x15
    ctx->pc = 0x7c31f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)21) ? 1 : 0);
    // 0x7c31f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C31F8u;
    {
        const bool branch_taken_0x7c31f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C31FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C31F8u;
        // 0x7c31fc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c31f8) {
            ctx->pc = 0x7C3214u;
            goto label_7c3214;
        }
    }
    ctx->pc = 0x7C3200u;
    // 0x7c3200: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x7c3200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x7c3204: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x7c3204u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c3208: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C3208u;
    {
        const bool branch_taken_0x7c3208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3208) {
            ctx->pc = 0x7C320Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3208u;
            // 0x7c320c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3210u;
            goto label_7c3210;
        }
    }
    ctx->pc = 0x7C3210u;
label_7c3210:
    // 0x7c3210: 0x1810  mfhi        $v1
    ctx->pc = 0x7c3210u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_7c3214:
    // 0x7c3214: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x7c3214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c3218: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x7c3218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x7c321c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x7c321cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c3220: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C3220u;
    {
        const bool branch_taken_0x7c3220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c3220) {
            ctx->pc = 0x7C3224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C3220u;
            // 0x7c3224: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C3228u;
            goto label_7c3228;
        }
    }
    ctx->pc = 0x7C3228u;
label_7c3228:
    // 0x7c3228: 0x1812  mflo        $v1
    ctx->pc = 0x7c3228u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x7c322c: 0x2010  mfhi        $a0
    ctx->pc = 0x7c322cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c3230: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x7c3230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x7c3234: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x7c3234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x7c3238: 0xa0c30026  sb          $v1, 0x26($a2)
    ctx->pc = 0x7c3238u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x7c323c: 0x3e00008  jr          $ra
    ctx->pc = 0x7C323Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C3240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C323Cu;
        // 0x7c3240: 0xa0c40027  sb          $a0, 0x27($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 39), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C323Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C3244u;
    // 0x7c3244: 0x0  nop
    ctx->pc = 0x7c3244u;
    // NOP
    ctx->pc = 0x7c3248u;
}
} // namespace gh_mcport
