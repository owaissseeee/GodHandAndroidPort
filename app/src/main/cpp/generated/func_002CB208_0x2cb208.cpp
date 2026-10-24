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

// Function: func_002CB208
// Address: 0x2cb208 - 0x2cb278
void func_002CB208_0x2cb208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002CB208_0x2cb208");
#endif

    switch (ctx->pc) {
        case 0x2cb230u: goto label_2cb230;
        case 0x2cb23cu: goto label_2cb23c;
        case 0x2cb24cu: goto label_2cb24c;
        case 0x2cb254u: goto label_2cb254;
        default: break;
    }

    ctx->pc = 0x2cb208u;

    // 0x2cb208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2cb208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2cb20c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2cb20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2cb210: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2cb210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2cb214: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cb214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cb218: 0x2450ce48  addiu       $s0, $v0, -0x31B8
    ctx->pc = 0x2cb218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954568));
    // 0x2cb21c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2cb21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2cb220: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2cb220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb224: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2cb224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2cb228: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cb228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb22c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb22cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x44CE48u));
label_2cb230:
    // 0x2cb230: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb234: 0xc0b2dfa  jal         func_2CB7E8
    ctx->pc = 0x2CB234u;
    SET_GPR_U32(ctx, 31, 0x2CB23Cu);
    ctx->pc = 0x2CB238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB234u;
    // 0x2cb238: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7E8u, 0x2CB234u, 0x2CB23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB23Cu;
label_2cb23c:
    // 0x2cb23c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2cb23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2cb240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cb240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb244: 0xc0b312e  jal         func_2CC4B8
    ctx->pc = 0x2CB244u;
    SET_GPR_U32(ctx, 31, 0x2CB24Cu);
    ctx->pc = 0x2CB248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB244u;
    // 0x2cb248: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CC4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CC4B8u, 0x2CB244u, 0x2CB24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB24Cu;
label_2cb24c:
    // 0x2cb24c: 0xc0b3cc4  jal         func_2CF310
    ctx->pc = 0x2CB24Cu;
    SET_GPR_U32(ctx, 31, 0x2CB254u);
    ctx->pc = 0x2CB250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CB24Cu;
    // 0x2cb250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF310u, 0x2CB24Cu, 0x2CB254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CB254u;
label_2cb254:
    // 0x2cb254: 0x2e42000c  sltiu       $v0, $s2, 0xC
    ctx->pc = 0x2cb254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
    // 0x2cb258: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x2CB258u;
    {
        const bool branch_taken_0x2cb258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cb258) {
            ctx->pc = 0x2CB25Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CB258u;
            // 0x2cb25c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CB230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2cb230;
        }
    }
    ctx->pc = 0x2CB260u;
    // 0x2cb260: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2cb260u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cb264: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cb264u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cb268: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2cb268u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb26c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2cb26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb270: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CB270u;
        // 0x2cb274: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CB270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CB278u;
}
