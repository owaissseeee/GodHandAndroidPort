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

// Function: func_00336378
// Address: 0x336378 - 0x3363f8
void func_00336378_0x336378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00336378_0x336378");
#endif

    switch (ctx->pc) {
        case 0x336388u: goto label_336388;
        default: break;
    }

    ctx->pc = 0x336378u;

    // 0x336378: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x336378u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33637c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33637Cu;
    {
        const bool branch_taken_0x33637c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33637Cu;
        // 0x336380: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33637c) {
            ctx->pc = 0x336394u;
            goto label_336394;
        }
    }
    ctx->pc = 0x336384u;
    // 0x336384: 0x0  nop
    ctx->pc = 0x336384u;
    // NOP
label_336388:
    // 0x336388: 0x1261818  mult        $v1, $t1, $a2
    ctx->pc = 0x336388u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33638c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x33638cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x336390: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x336390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_336394:
    // 0x336394: 0x91070000  lbu         $a3, 0x0($t0)
    ctx->pc = 0x336394u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x336398: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x336398u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x33639c: 0x24e3ffd0  addiu       $v1, $a3, -0x30
    ctx->pc = 0x33639cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x3363a0: 0x24e4ff9f  addiu       $a0, $a3, -0x61
    ctx->pc = 0x3363a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967199));
    // 0x3363a4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3363a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3363a8: 0x2c63000a  sltiu       $v1, $v1, 0xA
    ctx->pc = 0x3363a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x3363ac: 0x2c840006  sltiu       $a0, $a0, 0x6
    ctx->pc = 0x3363acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3363b0: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3363B0u;
    {
        const bool branch_taken_0x3363b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3363B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363B0u;
        // 0x3363b4: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3363b0) {
            ctx->pc = 0x336388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336388;
        }
    }
    ctx->pc = 0x3363B8u;
    // 0x3363b8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3363B8u;
    {
        const bool branch_taken_0x3363b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3363b8) {
            ctx->pc = 0x3363BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3363B8u;
            // 0x3363bc: 0x24e2ffbf  addiu       $v0, $a3, -0x41 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967231));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3363D0u;
            goto label_3363d0;
        }
    }
    ctx->pc = 0x3363C0u;
    // 0x3363c0: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x3363c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3363c4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3363c4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3363c8: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x3363C8u;
    {
        const bool branch_taken_0x3363c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3363CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363C8u;
        // 0x3363cc: 0x2442ffa9  addiu       $v0, $v0, -0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3363c8) {
            ctx->pc = 0x336388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336388;
        }
    }
    ctx->pc = 0x3363D0u;
label_3363d0:
    // 0x3363d0: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x3363d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x3363d4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3363D4u;
    {
        const bool branch_taken_0x3363d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3363d4) {
            ctx->pc = 0x3363D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3363D4u;
            // 0x3363d8: 0xaca80000  sw          $t0, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3363F0u;
            goto label_3363f0;
        }
    }
    ctx->pc = 0x3363DCu;
    // 0x3363dc: 0x71600  sll         $v0, $a3, 24
    ctx->pc = 0x3363dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x3363e0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x3363e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x3363e4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x3363E4u;
    {
        const bool branch_taken_0x3363e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3363E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363E4u;
        // 0x3363e8: 0x2442ffc9  addiu       $v0, $v0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3363e4) {
            ctx->pc = 0x336388u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336388;
        }
    }
    ctx->pc = 0x3363ECu;
    // 0x3363ec: 0x0  nop
    ctx->pc = 0x3363ecu;
    // NOP
label_3363f0:
    // 0x3363f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3363F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3363F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363F0u;
        // 0x3363f4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3363F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3363F8u;
}
