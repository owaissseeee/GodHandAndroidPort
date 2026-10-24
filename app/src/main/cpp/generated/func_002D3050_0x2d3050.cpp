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

// Function: func_002D3050
// Address: 0x2d3050 - 0x2d30e0
void func_002D3050_0x2d3050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002D3050_0x2d3050");
#endif

    switch (ctx->pc) {
        case 0x2d3088u: goto label_2d3088;
        case 0x2d30a4u: goto label_2d30a4;
        case 0x2d30bcu: goto label_2d30bc;
        default: break;
    }

    ctx->pc = 0x2d3050u;

    // 0x2d3050: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2d3050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2d3054: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2d3054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2d3058: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2d3058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2d305c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d305cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3060: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2d3060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2d3064: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2d3064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2d3068: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d3068u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d306c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2d306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2d3070: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2d3070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d3074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d3078: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2d3078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d307c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x2d307cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x2d3080: 0xc0ed65a  jal         func_3B5968
    ctx->pc = 0x2D3080u;
    SET_GPR_U32(ctx, 31, 0x2D3088u);
    ctx->pc = 0x2D3084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D3080u;
    // 0x2d3084: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5968u, 0x2D3080u, 0x2D3088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D3088u;
label_2d3088:
    // 0x2d3088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d3088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d308c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2D308Cu;
    {
        const bool branch_taken_0x2d308c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D3090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D308Cu;
        // 0x2d3090: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d308c) {
            ctx->pc = 0x2D30BCu;
            goto label_2d30bc;
        }
    }
    ctx->pc = 0x2D3094u;
    // 0x2d3094: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d3094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3098: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2d3098u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d309c: 0xc0b4c08  jal         func_2D3020
    ctx->pc = 0x2D309Cu;
    SET_GPR_U32(ctx, 31, 0x2D30A4u);
    ctx->pc = 0x2D30A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D309Cu;
    // 0x2d30a0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D3020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D3020u, 0x2D309Cu, 0x2D30A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30A4u;
label_2d30a4:
    // 0x2d30a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D30A4u;
    {
        const bool branch_taken_0x2d30a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d30a4) {
            ctx->pc = 0x2D30B4u;
            goto label_2d30b4;
        }
    }
    ctx->pc = 0x2D30ACu;
    // 0x2d30ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2D30ACu;
    {
        const bool branch_taken_0x2d30ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D30B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30ACu;
        // 0x2d30b0: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d30ac) {
            ctx->pc = 0x2D30C0u;
            goto label_2d30c0;
        }
    }
    ctx->pc = 0x2D30B4u;
label_2d30b4:
    // 0x2d30b4: 0xc0ed694  jal         func_3B5A50
    ctx->pc = 0x2D30B4u;
    SET_GPR_U32(ctx, 31, 0x2D30BCu);
    ctx->pc = 0x2D30B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D30B4u;
    // 0x2d30b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B5A50u, 0x2D30B4u, 0x2D30BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D30BCu;
label_2d30bc:
    // 0x2d30bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d30bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d30c0:
    // 0x2d30c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2d30c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d30c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2d30c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d30c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2d30c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d30cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2d30ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d30d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2d30d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d30d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d30d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d30d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D30D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D30DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D30D8u;
        // 0x2d30dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D30D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D30E0u;
}
