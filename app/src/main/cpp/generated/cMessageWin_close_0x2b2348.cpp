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

// Function: cMessageWin_close
// Address: 0x2b2348 - 0x2b2400
void cMessageWin_close_0x2b2348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessageWin_close_0x2b2348");
#endif

    switch (ctx->pc) {
        case 0x2b2384u: goto label_2b2384;
        case 0x2b239cu: goto label_2b239c;
        case 0x2b23b0u: goto label_2b23b0;
        case 0x2b23c0u: goto label_2b23c0;
        case 0x2b23c8u: goto label_2b23c8;
        default: break;
    }

    ctx->pc = 0x2b2348u;

    // 0x2b2348: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b2348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b234c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2b234cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2b2350: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b2350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b2354: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b235c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b235cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b2360: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2b2360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2b2364: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B2364u;
    {
        const bool branch_taken_0x2b2364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2364) {
            ctx->pc = 0x2B2368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2364u;
            // 0x2b2368: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B23F0u;
            goto label_2b23f0;
        }
    }
    ctx->pc = 0x2B236Cu;
    // 0x2b236c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2b236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2b2370: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B2370u;
    {
        const bool branch_taken_0x2b2370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2370u;
        // 0x2b2374: 0x3c040060  lui         $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2370) {
            ctx->pc = 0x2B2384u;
            goto label_2b2384;
        }
    }
    ctx->pc = 0x2B2378u;
    // 0x2b2378: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2b2378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2b237c: 0xc0b2dfa  jal         func_2CB7E8
    ctx->pc = 0x2B237Cu;
    SET_GPR_U32(ctx, 31, 0x2B2384u);
    ctx->pc = 0x2B2380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B237Cu;
    // 0x2b2380: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB7E8u, 0x2B237Cu, 0x2B2384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2384u;
label_2b2384:
    // 0x2b2384: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b2384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b2388: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x2b2388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x2b238c: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2b238cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2b2390: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x2b2390u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x2b2394: 0xc0abbe4  jal         func_2AEF90
    ctx->pc = 0x2B2394u;
    SET_GPR_U32(ctx, 31, 0x2B239Cu);
    ctx->pc = 0x2B2398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2394u;
    // 0x2b2398: 0x8e2423a4  lw          $a0, 0x23A4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEF90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEF90u, 0x2B2394u, 0x2B239Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B239Cu;
label_2b239c:
    // 0x2b239c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B239Cu;
    {
        const bool branch_taken_0x2b239c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B239Cu;
        // 0x2b23a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b239c) {
            ctx->pc = 0x2B23B8u;
            goto label_2b23b8;
        }
    }
    ctx->pc = 0x2B23A4u;
    // 0x2b23a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b23a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b23a8: 0xc0ad10a  jal         func_2B4428
    ctx->pc = 0x2B23A8u;
    SET_GPR_U32(ctx, 31, 0x2B23B0u);
    ctx->pc = 0x2B23ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23A8u;
    // 0x2b23ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4428u, 0x2B23A8u, 0x2B23B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23B0u;
label_2b23b0:
    // 0x2b23b0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B23B0u;
    {
        const bool branch_taken_0x2b23b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b23b0) {
            ctx->pc = 0x2B23C0u;
            goto label_2b23c0;
        }
    }
    ctx->pc = 0x2B23B8u;
label_2b23b8:
    // 0x2b23b8: 0xc0abbe6  jal         func_2AEF98
    ctx->pc = 0x2B23B8u;
    SET_GPR_U32(ctx, 31, 0x2B23C0u);
    ctx->pc = 0x2B23BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23B8u;
    // 0x2b23bc: 0x8e2423a4  lw          $a0, 0x23A4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEF98u, 0x2B23B8u, 0x2B23C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23C0u;
label_2b23c0:
    // 0x2b23c0: 0xc0ad17a  jal         func_2B45E8
    ctx->pc = 0x2B23C0u;
    SET_GPR_U32(ctx, 31, 0x2B23C8u);
    ctx->pc = 0x2B23C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B23C0u;
    // 0x2b23c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B45E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B45E8u, 0x2B23C0u, 0x2B23C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B23C8u;
label_2b23c8:
    // 0x2b23c8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x2b23c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2b23cc: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x2b23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2b23d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2b23d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b23d4: 0xa200000f  sb          $zero, 0xF($s0)
    ctx->pc = 0x2b23d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 15), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b23d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2b23d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2b23dc: 0xa204000c  sb          $a0, 0xC($s0)
    ctx->pc = 0x2b23dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x2b23e0: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2b23e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2b23e4: 0xa200000d  sb          $zero, 0xD($s0)
    ctx->pc = 0x2b23e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b23e8: 0xa200000e  sb          $zero, 0xE($s0)
    ctx->pc = 0x2b23e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 14), (uint8_t)GPR_U32(ctx, 0));
    // 0x2b23ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2b23ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b23f0:
    // 0x2b23f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b23f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b23f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b23f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b23f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B23F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B23FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B23F8u;
        // 0x2b23fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B23F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2400u;
}
