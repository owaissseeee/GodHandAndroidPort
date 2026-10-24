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

// Function: func_00360200
// Address: 0x360200 - 0x360280
void func_00360200_0x360200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00360200_0x360200");
#endif

    switch (ctx->pc) {
        case 0x36025cu: goto label_36025c;
        default: break;
    }

    ctx->pc = 0x360200u;

    // 0x360200: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x360200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x360204: 0x24840028  addiu       $a0, $a0, 0x28
    ctx->pc = 0x360204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x360208: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x360208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x36020c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x36020cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360210: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x360210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x360214: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x360214u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x360218: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x360218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x36021c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36021cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x360220: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x360220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x360224: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x360224u;
    {
        const bool branch_taken_0x360224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x360224) {
            ctx->pc = 0x360228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360224u;
            // 0x360228: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36023Cu;
            goto label_36023c;
        }
    }
    ctx->pc = 0x36022Cu;
    // 0x36022c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x36022cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x360230: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x360230u;
    {
        const bool branch_taken_0x360230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x360230) {
            ctx->pc = 0x360234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x360230u;
            // 0x360234: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x360248u;
            goto label_360248;
        }
    }
    ctx->pc = 0x360238u;
    // 0x360238: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x360238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_36023c:
    // 0x36023c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x36023Cu;
    {
        const bool branch_taken_0x36023c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x360240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36023Cu;
        // 0x360240: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36023c) {
            ctx->pc = 0x36026Cu;
            goto label_36026c;
        }
    }
    ctx->pc = 0x360244u;
    // 0x360244: 0x0  nop
    ctx->pc = 0x360244u;
    // NOP
label_360248:
    // 0x360248: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x360248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36024c: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x36024cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x360250: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x360250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x360254: 0xc0ceb7e  jal         func_33ADF8
    ctx->pc = 0x360254u;
    SET_GPR_U32(ctx, 31, 0x36025Cu);
    ctx->pc = 0x360258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x360254u;
    // 0x360258: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33ADF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33ADF8u, 0x360254u, 0x36025Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36025Cu;
label_36025c:
    // 0x36025c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x36025cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x360260: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x360260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x360264: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x360264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x360268: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x360268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_36026c:
    // 0x36026c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x36026cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x360270: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x360270u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x360274: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x360274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x360278: 0x3e00008  jr          $ra
    ctx->pc = 0x360278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x360278u;
        // 0x36027c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x360278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x360280u;
}
