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

// Function: ForwardInit1C9140_316150
// Address: 0x316150 - 0x3161c0
void ForwardInit1C9140_316150_0x316150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInit1C9140_316150_0x316150");
#endif

    if (__builtin_expect(ctx->pc != 0x316150u, 0)) {
        switch (ctx->pc) {
            case 0x316184u: goto label_316184;
            case 0x31619cu: goto label_31619c;
            case 0x3161a4u: goto label_3161a4;
            default: break;
        }
    }


    // 0x316150: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x316154: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x316158: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x316158u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31615c: 0x3c040001  lui         $a0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x316160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x316160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x316164: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x316168: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x316168u;
    {
        const bool branch_taken_0x316168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316168u;
        // 0x31616c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316168) {
            ctx->pc = 0x3161ACu;
            goto label_3161ac;
        }
    }
    // 0x316170: 0x3c060075  lui         $a2, 0x75
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x316174: 0x24040790  addiu       $a0, $zero, 0x790
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    // 0x316178: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31617c: 0xc0c3b82  jal         func_30EE08
    SET_GPR_U32(ctx, 31, 0x316184u);
    ctx->pc = 0x316180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31617Cu;
    // 0x316180: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &EnsureInitThenForward_2A9538_30EE08_0x30ee08, 0x30ee08u, 0x316184u)) {
        return;
    }
    ctx->pc = 0x316184u;
label_316184:
    // 0x316184: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316188: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x316188u;
    {
        const bool branch_taken_0x316188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31618Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316188u;
        // 0x31618c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x316188) {
            ctx->pc = 0x3161ACu;
            goto label_3161ac;
        }
    }
    // 0x316190: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x316194: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x31619Cu);
    ctx->pc = 0x316198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x316194u;
    // 0x316198: 0x24060790  addiu       $a2, $zero, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x31619cu)) {
        return;
    }
    ctx->pc = 0x31619Cu;
label_31619c:
    // 0x31619c: 0xc072450  jal         func_1C9140
    SET_GPR_U32(ctx, 31, 0x3161A4u);
    ctx->pc = 0x3161A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31619Cu;
    // 0x3161a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_001C9140_0x1c9140, 0x1c9140u, 0x3161a4u)) {
        return;
    }
    ctx->pc = 0x3161A4u;
label_3161a4:
    // 0x3161a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3161A4u;
    {
        const bool branch_taken_0x3161a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3161A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161A4u;
        // 0x3161a8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3161a4) {
            ctx->pc = 0x3161B4u;
            goto label_3161b4;
        }
    }
    ctx->pc = 0x3161ACu;
label_3161ac:
    // 0x3161ac: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3161b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3161b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3161b4:
    // 0x3161b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3161b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3161b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3161B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3161BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3161B8u;
        // 0x3161bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3161B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3161C0u;
}