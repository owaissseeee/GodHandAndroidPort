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

// Function: func_0037D310
// Address: 0x37d310 - 0x37d388
void func_0037D310_0x37d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037D310_0x37d310");
#endif

    switch (ctx->pc) {
        case 0x37d360u: goto label_37d360;
        default: break;
    }

    ctx->pc = 0x37d310u;

    // 0x37d310: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x37d310u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x37d314: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x37d314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x37d318: 0x42603  sra         $a0, $a0, 24
    ctx->pc = 0x37d318u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 24));
    // 0x37d31c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x37d31cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x37d320: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x37d320u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x37d324: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x37d324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37d328: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x37D328u;
    {
        const bool branch_taken_0x37d328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d328) {
            ctx->pc = 0x37D32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37D328u;
            // 0x37d32c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x37D330u;
            goto label_37d330;
        }
    }
    ctx->pc = 0x37D330u;
label_37d330:
    // 0x37d330: 0x2012  mflo        $a0
    ctx->pc = 0x37d330u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x37d334: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x37d334u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37d338: 0x38820030  xori        $v0, $a0, 0x30
    ctx->pc = 0x37d338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)48);
    // 0x37d33c: 0xa2380a  movz        $a3, $a1, $v0
    ctx->pc = 0x37d33cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x37d340: 0x10e0000f  beqz        $a3, . + 4 + (0xF << 2)
    ctx->pc = 0x37D340u;
    {
        const bool branch_taken_0x37d340 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x37D344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D340u;
        // 0x37d344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d340) {
            ctx->pc = 0x37D380u;
            goto label_37d380;
        }
    }
    ctx->pc = 0x37D348u;
    // 0x37d348: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x37d348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x37d34c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37d350: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x37d350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37d354: 0x2442cf20  addiu       $v0, $v0, -0x30E0
    ctx->pc = 0x37d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954784));
    // 0x37d358: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37d358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37d35c: 0x0  nop
    ctx->pc = 0x37d35cu;
    // NOP
label_37d360:
    // 0x37d360: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x37d360u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x37d364: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D364u;
    {
        const bool branch_taken_0x37d364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D364u;
        // 0x37d368: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d364) {
            ctx->pc = 0x37D374u;
            goto label_37d374;
        }
    }
    ctx->pc = 0x37D36Cu;
    // 0x37d36c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D36Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D36Cu;
        // 0x37d370: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D36Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D374u;
label_37d374:
    // 0x37d374: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x37d374u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x37d378: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x37D378u;
    {
        const bool branch_taken_0x37d378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D378u;
        // 0x37d37c: 0x24630050  addiu       $v1, $v1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d378) {
            ctx->pc = 0x37D360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37d360;
        }
    }
    ctx->pc = 0x37D380u;
label_37d380:
    // 0x37d380: 0x3e00008  jr          $ra
    ctx->pc = 0x37D380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37D380u;
        // 0x37d384: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37D380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37D388u;
}
