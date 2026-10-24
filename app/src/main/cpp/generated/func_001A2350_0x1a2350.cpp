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

// Function: func_001A2350
// Address: 0x1a2350 - 0x1a23c0
void func_001A2350_0x1a2350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001A2350_0x1a2350");
#endif

    switch (ctx->pc) {
        case 0x1a2384u: goto label_1a2384;
        default: break;
    }

    ctx->pc = 0x1a2350u;

    // 0x1a2350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a2350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1a2354: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a2354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1a2358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a2358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1a235c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a235cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a2360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a2364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a2368: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1a2368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x1a236c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1a236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1a2370: 0x8c440600  lw          $a0, 0x600($v0)
    ctx->pc = 0x1a2370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1536)));
    // 0x1a2374: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A2374u;
    {
        const bool branch_taken_0x1a2374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2374) {
            ctx->pc = 0x1A2378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A2374u;
            // 0x1a2378: 0x102142  srl         $a0, $s0, 5 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A2388u;
            goto label_1a2388;
        }
    }
    ctx->pc = 0x1A237Cu;
    // 0x1a237c: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x1A237Cu;
    SET_GPR_U32(ctx, 31, 0x1A2384u);
    ctx->pc = 0x1A2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A237Cu;
    // 0x1a2380: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1A237Cu, 0x1A2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A2384u;
label_1a2384:
    // 0x1a2384: 0x102142  srl         $a0, $s0, 5
    ctx->pc = 0x1a2384u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
label_1a2388:
    // 0x1a2388: 0x26230d90  addiu       $v1, $s1, 0xD90
    ctx->pc = 0x1a2388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 3472));
    // 0x1a238c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a238cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a2390: 0x3205001f  andi        $a1, $s0, 0x1F
    ctx->pc = 0x1a2390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1a2394: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1a2394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1a2398: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x1a2398u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x1a239c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a239cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a23a0: 0xa21006  srlv        $v0, $v0, $a1
    ctx->pc = 0x1a23a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a23a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1a23a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a23a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1a23a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1a23ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a23acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a23b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a23b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a23b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a23b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1a23b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A23B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A23BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A23B8u;
        // 0x1a23bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A23B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A23C0u;
}
