#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: func_0079C200
// Address: 0x79c200 - 0x79c270
void func_0079C200_0x79c200(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079C200_0x79c200");
#endif

    if (__builtin_expect(ctx->pc != 0x79c200u, 0)) {
        switch (ctx->pc) {
            case 0x79c224u: goto label_79c224;
            case 0x79c24cu: goto label_79c24c;
            case 0x79c250u: goto label_79c250;
            case 0x79c258u: goto label_79c258;
            case 0x79c268u: goto label_79c268;
            default: break;
        }
    }



    // 0x79c200: 0x3c02007a  lui         $v0, 0x7A
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)122 << 16));
    // 0x79c204: 0x27bdffd0  addiu       $sp, $sp, -0x30
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x79c208: 0x8c44c800  lw          $a0, -0x3800($v0)
    ctx->pc = 0x79c208u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x79C800u));
    // 0x79c20c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x79c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x79c210: 0x24840f00  addiu       $a0, $a0, 0xF00
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3840));
    // 0x79c214: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x79c214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x79c218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79c218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79c21c: 0xc07ba8e  jal         func_1EEA38
    SET_GPR_U32(ctx, 31, 0x79C224u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C21Cu;
    // 0x79c220: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEA38u;
    if (!runtime->callDirectStatic(rdram, ctx, &ColiseumBattle_Initialize_0x1eea38, 0x1EEA38u, 0x79C224u)) {
        return;
    }
label_79c224:
    // 0x79c224: 0x3c10003c  lui         $s0, 0x3C
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79c228: 0x3c040074  lui         $a0, 0x74
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
    // 0x79c22c: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c230: 0x24847470  addiu       $a0, $a0, 0x7470
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29808));
    // 0x79c234: 0x2406000a  addiu       $a2, $zero, 0xA
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x79c238: 0x382d  daddu       $a3, $zero, $zero
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c23c: 0x3c08ff00  lui         $t0, 0xFF00
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65280 << 16));
    // 0x79c240: 0x482d  daddu       $t1, $zero, $zero
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79c244: 0xc0c1c82  jal         func_307208
    SET_GPR_U32(ctx, 31, 0x79C24Cu);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C244u;
    // 0x79c248: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!runtime->callDirectStatic(rdram, ctx, &classFADE_start_0x307208, 0x307208u, 0x79C24Cu)) {
        return;
    }
label_79c24c:
    // 0x79c24c: 0x8e24c800  lw          $a0, -0x3800($s1)
    ctx->pc = 0x79c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
label_79c250:
    // 0x79c250: 0xc07bb26  jal         func_1EEC98
    SET_GPR_U32(ctx, 31, 0x79C258u);
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C250u;
    // 0x79c254: 0x24840f00  addiu       $a0, $a0, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC98u;
    if (!runtime->callDirectStatic(rdram, ctx, &ColiseumBattle_Main_0x1eec98, 0x1EEC98u, 0x79C258u)) {
        return;
    }
label_79c258:
    // 0x79c258: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79c25c: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79c260: 0xc0b56a8  jal         func_2D5AA0
    SET_GPR_U32(ctx, 31, 0x79C268u);
    ctx->pc = 0x79C264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79C260u;
    // 0x79c264: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79C260u, 0x79C268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
label_79c268:
    // 0x79c268: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x79C268u;
    {
        const bool branch_taken_0x79c268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79C268u;
        // 0x79c26c: 0x8e24c800  lw          $a0, -0x3800($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952960)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79c268) {
            ctx->pc = 0x79C250u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79c250;
        }
    }
    ctx->pc = 0x79C270u;
}
} // namespace gh_r040
