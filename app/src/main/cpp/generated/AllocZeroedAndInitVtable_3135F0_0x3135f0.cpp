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

// Function: AllocZeroedAndInitVtable_3135F0
// Address: 0x3135f0 - 0x313660
void AllocZeroedAndInitVtable_3135F0_0x3135f0(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AllocZeroedAndInitVtable_3135F0_0x3135f0");
#endif

    if (__builtin_expect(ctx->pc != 0x3135f0u, 0)) {
        switch (ctx->pc) {
            case 0x313624u: goto label_313624;
            case 0x31363cu: goto label_31363c;
            case 0x313644u: goto label_313644;
            default: break;
        }
    }


    // 0x3135f0: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x3135f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3135f8: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x3135f8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x3135fc: 0x3c040010  lui         $a0, 0x10
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x313600: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x313600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x313604: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x313608: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x313608u;
    {
        const bool branch_taken_0x313608 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313608u;
        // 0x31360c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313608) {
            ctx->pc = 0x31364Cu;
            goto label_31364c;
        }
    }
    // 0x313610: 0x3c060075  lui         $a2, 0x75
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x313614: 0x240415e0  addiu       $a0, $zero, 0x15E0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5600));
    // 0x313618: 0x24c64220  addiu       $a2, $a2, 0x4220
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x31361c: 0xc0c3b82  jal         func_30EE08
    SET_GPR_U32(ctx, 31, 0x313624u);
    ctx->pc = 0x313620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31361Cu;
    // 0x313620: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &EnsureInitThenForward_2A9538_30EE08_0x30ee08, 0x30ee08u, 0x313624u)) {
        return;
    }
label_313624:
    // 0x313624: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313628: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x313628u;
    {
        const bool branch_taken_0x313628 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313628u;
        // 0x31362c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313628) {
            ctx->pc = 0x31364Cu;
            goto label_31364c;
        }
    }
    // 0x313630: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313634: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x31363Cu);
    ctx->pc = 0x313638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313634u;
    // 0x313638: 0x240615e0  addiu       $a2, $zero, 0x15E0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5600));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x31363cu)) {
        return;
    }
label_31363c:
    // 0x31363c: 0xc09edda  jal         func_27B768
    SET_GPR_U32(ctx, 31, 0x313644u);
    ctx->pc = 0x313640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31363Cu;
    // 0x313640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &InitObjVtable_27B768_0x27b768, 0x27b768u, 0x313644u)) {
        return;
    }
label_313644:
    // 0x313644: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313644u;
    {
        const bool branch_taken_0x313644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313644u;
        // 0x313648: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313644) {
            ctx->pc = 0x313654u;
            goto label_313654;
        }
    }
label_31364c:
    // 0x31364c: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313650: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313650u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313654:
    // 0x313654: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x313654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x313658: 0x3e00008  jr          $ra
    ctx->pc = 0x313658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313658u;
        // 0x31365c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313660u;
}