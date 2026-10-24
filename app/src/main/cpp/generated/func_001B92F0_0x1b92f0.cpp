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

// Function: func_001B92F0
// Address: 0x1b92f0 - 0x1b93e8
void func_001B92F0_0x1b92f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B92F0_0x1b92f0");
#endif

    switch (ctx->pc) {
        case 0x1b92f0u: goto label_1b92f0;
        case 0x1b92f4u: goto label_1b92f4;
        case 0x1b92f8u: goto label_1b92f8;
        case 0x1b92fcu: goto label_1b92fc;
        case 0x1b9300u: goto label_1b9300;
        case 0x1b9304u: goto label_1b9304;
        case 0x1b9308u: goto label_1b9308;
        case 0x1b930cu: goto label_1b930c;
        case 0x1b9310u: goto label_1b9310;
        case 0x1b9314u: goto label_1b9314;
        case 0x1b9318u: goto label_1b9318;
        case 0x1b931cu: goto label_1b931c;
        case 0x1b9320u: goto label_1b9320;
        case 0x1b9324u: goto label_1b9324;
        case 0x1b9328u: goto label_1b9328;
        case 0x1b932cu: goto label_1b932c;
        case 0x1b9330u: goto label_1b9330;
        case 0x1b9334u: goto label_1b9334;
        case 0x1b9338u: goto label_1b9338;
        case 0x1b933cu: goto label_1b933c;
        case 0x1b9340u: goto label_1b9340;
        case 0x1b9344u: goto label_1b9344;
        case 0x1b9348u: goto label_1b9348;
        case 0x1b934cu: goto label_1b934c;
        case 0x1b9350u: goto label_1b9350;
        case 0x1b9354u: goto label_1b9354;
        case 0x1b9358u: goto label_1b9358;
        case 0x1b935cu: goto label_1b935c;
        case 0x1b9360u: goto label_1b9360;
        case 0x1b9364u: goto label_1b9364;
        case 0x1b9368u: goto label_1b9368;
        case 0x1b936cu: goto label_1b936c;
        case 0x1b9370u: goto label_1b9370;
        case 0x1b9374u: goto label_1b9374;
        case 0x1b9378u: goto label_1b9378;
        case 0x1b937cu: goto label_1b937c;
        case 0x1b9380u: goto label_1b9380;
        case 0x1b9384u: goto label_1b9384;
        case 0x1b9388u: goto label_1b9388;
        case 0x1b938cu: goto label_1b938c;
        case 0x1b9390u: goto label_1b9390;
        case 0x1b9394u: goto label_1b9394;
        case 0x1b9398u: goto label_1b9398;
        case 0x1b939cu: goto label_1b939c;
        case 0x1b93a0u: goto label_1b93a0;
        case 0x1b93a4u: goto label_1b93a4;
        case 0x1b93a8u: goto label_1b93a8;
        case 0x1b93acu: goto label_1b93ac;
        case 0x1b93b0u: goto label_1b93b0;
        case 0x1b93b4u: goto label_1b93b4;
        case 0x1b93b8u: goto label_1b93b8;
        case 0x1b93bcu: goto label_1b93bc;
        case 0x1b93c0u: goto label_1b93c0;
        case 0x1b93c4u: goto label_1b93c4;
        case 0x1b93c8u: goto label_1b93c8;
        case 0x1b93ccu: goto label_1b93cc;
        case 0x1b93d0u: goto label_1b93d0;
        case 0x1b93d4u: goto label_1b93d4;
        case 0x1b93d8u: goto label_1b93d8;
        case 0x1b93dcu: goto label_1b93dc;
        case 0x1b93e0u: goto label_1b93e0;
        case 0x1b93e4u: goto label_1b93e4;
        default: break;
    }

    ctx->pc = 0x1b92f0u;

label_1b92f0:
    // 0x1b92f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b92f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1b92f4:
    // 0x1b92f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b92f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1b92f8:
    // 0x1b92f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b92f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1b92fc:
    // 0x1b92fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b92fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b9300:
    // 0x1b9300: 0xc06ddac  jal         func_1B76B0
label_1b9304:
    if (ctx->pc == 0x1B9304u) {
        ctx->pc = 0x1B9304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9300u;
        // 0x1b9304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9308u;
        goto label_1b9308;
    }
    ctx->pc = 0x1B9300u;
    SET_GPR_U32(ctx, 31, 0x1B9308u);
    ctx->pc = 0x1B9304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9300u;
    // 0x1b9304: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76B0u, 0x1B9300u, 0x1B9308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9308u;
label_1b9308:
    // 0x1b9308: 0x50400033  beql        $v0, $zero, . + 4 + (0x33 << 2)
label_1b930c:
    if (ctx->pc == 0x1B930Cu) {
        ctx->pc = 0x1B930Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9308u;
        // 0x1b930c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9310u;
        goto label_1b9310;
    }
    ctx->pc = 0x1B9308u;
    {
        const bool branch_taken_0x1b9308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9308) {
            ctx->pc = 0x1B930Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9308u;
            // 0x1b930c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B93D8u;
            goto label_1b93d8;
        }
    }
    ctx->pc = 0x1B9310u;
label_1b9310:
    // 0x1b9310: 0x8e040600  lw          $a0, 0x600($s0)
    ctx->pc = 0x1b9310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1536)));
label_1b9314:
    // 0x1b9314: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b9318:
    if (ctx->pc == 0x1B9318u) {
        ctx->pc = 0x1B9318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9314u;
        // 0x1b9318: 0x8e040608  lw          $a0, 0x608($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B931Cu;
        goto label_1b931c;
    }
    ctx->pc = 0x1B9314u;
    {
        const bool branch_taken_0x1b9314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9314) {
            ctx->pc = 0x1B9318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9314u;
            // 0x1b9318: 0x8e040608  lw          $a0, 0x608($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9328u;
            goto label_1b9328;
        }
    }
    ctx->pc = 0x1B931Cu;
label_1b931c:
    // 0x1b931c: 0xc07f59a  jal         func_1FD668
label_1b9320:
    if (ctx->pc == 0x1B9320u) {
        ctx->pc = 0x1B9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B931Cu;
        // 0x1b9320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9324u;
        goto label_1b9324;
    }
    ctx->pc = 0x1B931Cu;
    SET_GPR_U32(ctx, 31, 0x1B9324u);
    ctx->pc = 0x1B9320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B931Cu;
    // 0x1b9320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B931Cu, 0x1B9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9324u;
label_1b9324:
    // 0x1b9324: 0x8e040608  lw          $a0, 0x608($s0)
    ctx->pc = 0x1b9324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1544)));
label_1b9328:
    // 0x1b9328: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_1b932c:
    if (ctx->pc == 0x1B932Cu) {
        ctx->pc = 0x1B932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9328u;
        // 0x1b932c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9330u;
        goto label_1b9330;
    }
    ctx->pc = 0x1B9328u;
    {
        const bool branch_taken_0x1b9328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9328) {
            ctx->pc = 0x1B932Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9328u;
            // 0x1b932c: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B933Cu;
            goto label_1b933c;
        }
    }
    ctx->pc = 0x1B9330u;
label_1b9330:
    // 0x1b9330: 0xc07f59a  jal         func_1FD668
label_1b9334:
    if (ctx->pc == 0x1B9334u) {
        ctx->pc = 0x1B9334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9330u;
        // 0x1b9334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9338u;
        goto label_1b9338;
    }
    ctx->pc = 0x1B9330u;
    SET_GPR_U32(ctx, 31, 0x1B9338u);
    ctx->pc = 0x1B9334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B9330u;
    // 0x1b9334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x1B9330u, 0x1B9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9338u;
label_1b9338:
    // 0x1b9338: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x1b9338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
label_1b933c:
    // 0x1b933c: 0xc0a4bd4  jal         func_292F50
label_1b9340:
    if (ctx->pc == 0x1B9340u) {
        ctx->pc = 0x1B9340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B933Cu;
        // 0x1b9340: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9344u;
        goto label_1b9344;
    }
    ctx->pc = 0x1B933Cu;
    SET_GPR_U32(ctx, 31, 0x1B9344u);
    ctx->pc = 0x1B9340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B933Cu;
    // 0x1b9340: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F50u, 0x1B933Cu, 0x1B9344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B9344u;
label_1b9344:
    // 0x1b9344: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x1b9344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_1b9348:
    // 0x1b9348: 0x920302f4  lbu         $v1, 0x2F4($s0)
    ctx->pc = 0x1b9348u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b934c:
    // 0x1b934c: 0x2446dda8  addiu       $a2, $v0, -0x2258
    ctx->pc = 0x1b934cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958504));
label_1b9350:
    // 0x1b9350: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b9350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9354:
    // 0x1b9354: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1b9354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1b9358:
    // 0x1b9358: 0xe60005a8  swc1        $f0, 0x5A8($s0)
    ctx->pc = 0x1b9358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1448), bits); }
label_1b935c:
    // 0x1b935c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x1b935cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1b9360:
    // 0x1b9360: 0x84850002  lh          $a1, 0x2($a0)
    ctx->pc = 0x1b9360u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_1b9364:
    // 0x1b9364: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
label_1b9368:
    if (ctx->pc == 0x1B9368u) {
        ctx->pc = 0x1B9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9364u;
        // 0x1b9368: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B936Cu;
        goto label_1b936c;
    }
    ctx->pc = 0x1B9364u;
    {
        const bool branch_taken_0x1b9364 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B9368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9364u;
        // 0x1b9368: 0xc21021  addu        $v0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9364) {
            ctx->pc = 0x1B9390u;
            goto label_1b9390;
        }
    }
    ctx->pc = 0x1B936Cu;
label_1b936c:
    // 0x1b936c: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x1b936cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_1b9370:
    // 0x1b9370: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x1b9370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1b9374:
    // 0x1b9374: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1b9374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1b9378:
    // 0x1b9378: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1b9378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b937c:
    // 0x1b937c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1b937cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b9380:
    // 0x1b9380: 0xdc71fff8  ld          $s1, -0x8($v1)
    ctx->pc = 0x1b9380u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_1b9384:
    // 0x1b9384: 0x11303f  dsra32      $a2, $s1, 0
    ctx->pc = 0x1b9384u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 17) >> (32 + 0));
label_1b9388:
    // 0x1b9388: 0x10000003  b           . + 4 + (0x3 << 2)
label_1b938c:
    if (ctx->pc == 0x1B938Cu) {
        ctx->pc = 0x1B938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9388u;
        // 0x1b938c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B9390u;
        goto label_1b9390;
    }
    ctx->pc = 0x1B9388u;
    {
        const bool branch_taken_0x1b9388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B938Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9388u;
        // 0x1b938c: 0x920202f4  lbu         $v0, 0x2F4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9388) {
            ctx->pc = 0x1B9398u;
            goto label_1b9398;
        }
    }
    ctx->pc = 0x1B9390u;
label_1b9390:
    // 0x1b9390: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1b9390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1b9394:
    // 0x1b9394: 0x920202f4  lbu         $v0, 0x2F4($s0)
    ctx->pc = 0x1b9394u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 756)));
label_1b9398:
    // 0x1b9398: 0x24e3dda8  addiu       $v1, $a3, -0x2258
    ctx->pc = 0x1b9398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958504));
label_1b939c:
    // 0x1b939c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1b939cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1b93a0:
    // 0x1b93a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b93a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b93a4:
    // 0x1b93a4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1b93a8:
    if (ctx->pc == 0x1B93A8u) {
        ctx->pc = 0x1B93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93A4u;
        // 0x1b93a8: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93ACu;
        goto label_1b93ac;
    }
    ctx->pc = 0x1B93A4u;
    {
        const bool branch_taken_0x1b93a4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1B93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93A4u;
        // 0x1b93a8: 0x84430000  lh          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93a4) {
            ctx->pc = 0x1B93C0u;
            goto label_1b93c0;
        }
    }
    ctx->pc = 0x1B93ACu;
label_1b93ac:
    // 0x1b93ac: 0x3222ffff  andi        $v0, $s1, 0xFFFF
    ctx->pc = 0x1b93acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65535);
label_1b93b0:
    // 0x1b93b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b93b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1b93b4:
    // 0x1b93b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1b93b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_1b93b8:
    // 0x1b93b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b93bc:
    if (ctx->pc == 0x1B93BCu) {
        ctx->pc = 0x1B93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93B8u;
        // 0x1b93bc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93C0u;
        goto label_1b93c0;
    }
    ctx->pc = 0x1B93B8u;
    {
        const bool branch_taken_0x1b93b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B93BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93B8u;
        // 0x1b93bc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b93b8) {
            ctx->pc = 0x1B93C4u;
            goto label_1b93c4;
        }
    }
    ctx->pc = 0x1B93C0u;
label_1b93c0:
    // 0x1b93c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1b93c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1b93c4:
    // 0x1b93c4: 0xc0f809  jalr        $a2
label_1b93c8:
    if (ctx->pc == 0x1B93C8u) {
        ctx->pc = 0x1B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93C4u;
        // 0x1b93c8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93CCu;
        goto label_1b93cc;
    }
    ctx->pc = 0x1B93C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x1B93CCu);
        ctx->pc = 0x1B93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93C4u;
        // 0x1b93c8: 0x2022021  addu        $a0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B93C4u, 0x1B93CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B93CCu;
label_1b93cc:
    // 0x1b93cc: 0xc06ddb6  jal         func_1B76D8
label_1b93d0:
    if (ctx->pc == 0x1B93D0u) {
        ctx->pc = 0x1B93D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93CCu;
        // 0x1b93d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93D4u;
        goto label_1b93d4;
    }
    ctx->pc = 0x1B93CCu;
    SET_GPR_U32(ctx, 31, 0x1B93D4u);
    ctx->pc = 0x1B93D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B93CCu;
    // 0x1b93d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B76D8u, 0x1B93CCu, 0x1B93D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B93D4u;
label_1b93d4:
    // 0x1b93d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b93d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b93d8:
    // 0x1b93d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b93d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b93dc:
    // 0x1b93dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b93dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b93e0:
    // 0x1b93e0: 0x3e00008  jr          $ra
label_1b93e4:
    if (ctx->pc == 0x1B93E4u) {
        ctx->pc = 0x1B93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93E0u;
        // 0x1b93e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B93E8u;
        goto label_fallthrough_0x1b93e0;
    }
    ctx->pc = 0x1B93E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B93E0u;
        // 0x1b93e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B93E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1b93e0:
    ctx->pc = 0x1B93E8u;
}
