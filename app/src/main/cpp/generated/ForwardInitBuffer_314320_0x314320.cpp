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

// Function: ForwardInitBuffer_314320
// Address: 0x314320 - 0x314390
void ForwardInitBuffer_314320_0x314320(uint8_t* __restrict rdram, R5900Context* __restrict ctx, PS2Runtime* __restrict runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ForwardInitBuffer_314320_0x314320");
#endif

    if (__builtin_expect(ctx->pc != 0x314320u, 0)) {
        switch (ctx->pc) {
            case 0x314354u: goto label_314354;
            case 0x31436cu: goto label_31436c;
            case 0x314374u: goto label_314374;
            default: break;
        }
    }


    // 0x314320: 0x3c020074  lui         $v0, 0x74
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x314324: 0x27bdffe0  addiu       $sp, $sp, -0x20
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x314328: 0x8c437a34  lw          $v1, 0x7A34($v0)
    ctx->pc = 0x314328u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A34u));
    // 0x31432c: 0x3c040001  lui         $a0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x314330: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x314330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x314334: 0x641824  and         $v1, $v1, $a0
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x314338: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x314338u;
    {
        const bool branch_taken_0x314338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314338u;
        // 0x31433c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314338) {
            ctx->pc = 0x31437Cu;
            goto label_31437c;
        }
    }
    // 0x314340: 0x3c060075  lui         $a2, 0x75
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x314344: 0x240406b0  addiu       $a0, $zero, 0x6B0
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    // 0x314348: 0x24c64c10  addiu       $a2, $a2, 0x4C10
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19472));
    // 0x31434c: 0xc0c3b82  jal         func_30EE08
    SET_GPR_U32(ctx, 31, 0x314354u);
    ctx->pc = 0x314350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31434Cu;
    // 0x314350: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &EnsureInitThenForward_2A9538_30EE08_0x30ee08, 0x30ee08u, 0x314354u)) {
        return;
    }
label_314354:
    // 0x314354: 0x40802d  daddu       $s0, $v0, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314358: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x314358u;
    {
        const bool branch_taken_0x314358 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x31435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314358u;
        // 0x31435c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314358) {
            ctx->pc = 0x31437Cu;
            goto label_31437c;
        }
    }
    // 0x314360: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314364: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x31436Cu);
    ctx->pc = 0x314368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314364u;
    // 0x314368: 0x240606b0  addiu       $a2, $zero, 0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1712));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x31436cu)) {
        return;
    }
label_31436c:
    // 0x31436c: 0xc0647e8  jal         func_191FA0
    SET_GPR_U32(ctx, 31, 0x314374u);
    ctx->pc = 0x314370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31436Cu;
    // 0x314370: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &InitObjSlots_191FA0_0x191fa0, 0x191fa0u, 0x314374u)) {
        return;
    }
label_314374:
    // 0x314374: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x314374u;
    {
        const bool branch_taken_0x314374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314374u;
        // 0x314378: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314374) {
            ctx->pc = 0x314384u;
            goto label_314384;
        }
    }
label_31437c:
    // 0x31437c: 0x102d  daddu       $v0, $zero, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x314380: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x314380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_314384:
    // 0x314384: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314384u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314388: 0x3e00008  jr          $ra
    ctx->pc = 0x314388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314388u;
        // 0x31438c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314390u;
}