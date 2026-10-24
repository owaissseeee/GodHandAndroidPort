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

// Function: Forward3443E0_3443C8
// Address: 0x3443c8 - 0x344520
void Forward3443E0_3443C8_0x3443c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Forward3443E0_3443C8_0x3443c8");
#endif

    switch (ctx->pc) {
        case 0x3443c8u: goto label_3443c8;
        case 0x3443ccu: goto label_3443cc;
        case 0x3443d0u: goto label_3443d0;
        case 0x3443d4u: goto label_3443d4;
        case 0x3443d8u: goto label_3443d8;
        case 0x3443dcu: goto label_3443dc;
        case 0x3443e0u: goto label_3443e0;
        case 0x3443e4u: goto label_3443e4;
        case 0x3443e8u: goto label_3443e8;
        case 0x3443ecu: goto label_3443ec;
        case 0x3443f0u: goto label_3443f0;
        case 0x3443f4u: goto label_3443f4;
        case 0x3443f8u: goto label_3443f8;
        case 0x3443fcu: goto label_3443fc;
        case 0x344400u: goto label_344400;
        case 0x344404u: goto label_344404;
        case 0x344408u: goto label_344408;
        case 0x34440cu: goto label_34440c;
        case 0x344410u: goto label_344410;
        case 0x344414u: goto label_344414;
        case 0x344418u: goto label_344418;
        case 0x34441cu: goto label_34441c;
        case 0x344420u: goto label_344420;
        case 0x344424u: goto label_344424;
        case 0x344428u: goto label_344428;
        case 0x34442cu: goto label_34442c;
        case 0x344430u: goto label_344430;
        case 0x344434u: goto label_344434;
        case 0x344438u: goto label_344438;
        case 0x34443cu: goto label_34443c;
        case 0x344440u: goto label_344440;
        case 0x344444u: goto label_344444;
        case 0x344448u: goto label_344448;
        case 0x34444cu: goto label_34444c;
        case 0x344450u: goto label_344450;
        case 0x344454u: goto label_344454;
        case 0x344458u: goto label_344458;
        case 0x34445cu: goto label_34445c;
        case 0x344460u: goto label_344460;
        case 0x344464u: goto label_344464;
        case 0x344468u: goto label_344468;
        case 0x34446cu: goto label_34446c;
        case 0x344470u: goto label_344470;
        case 0x344474u: goto label_344474;
        case 0x344478u: goto label_344478;
        case 0x34447cu: goto label_34447c;
        case 0x344480u: goto label_344480;
        case 0x344484u: goto label_344484;
        case 0x344488u: goto label_344488;
        case 0x34448cu: goto label_34448c;
        case 0x344490u: goto label_344490;
        case 0x344494u: goto label_344494;
        case 0x344498u: goto label_344498;
        case 0x34449cu: goto label_34449c;
        case 0x3444a0u: goto label_3444a0;
        case 0x3444a4u: goto label_3444a4;
        case 0x3444a8u: goto label_3444a8;
        case 0x3444acu: goto label_3444ac;
        case 0x3444b0u: goto label_3444b0;
        case 0x3444b4u: goto label_3444b4;
        case 0x3444b8u: goto label_3444b8;
        case 0x3444bcu: goto label_3444bc;
        case 0x3444c0u: goto label_3444c0;
        case 0x3444c4u: goto label_3444c4;
        case 0x3444c8u: goto label_3444c8;
        case 0x3444ccu: goto label_3444cc;
        case 0x3444d0u: goto label_3444d0;
        case 0x3444d4u: goto label_3444d4;
        case 0x3444d8u: goto label_3444d8;
        case 0x3444dcu: goto label_3444dc;
        case 0x3444e0u: goto label_3444e0;
        case 0x3444e4u: goto label_3444e4;
        case 0x3444e8u: goto label_3444e8;
        case 0x3444ecu: goto label_3444ec;
        case 0x3444f0u: goto label_3444f0;
        case 0x3444f4u: goto label_3444f4;
        case 0x3444f8u: goto label_3444f8;
        case 0x3444fcu: goto label_3444fc;
        case 0x344500u: goto label_344500;
        case 0x344504u: goto label_344504;
        case 0x344508u: goto label_344508;
        case 0x34450cu: goto label_34450c;
        case 0x344510u: goto label_344510;
        case 0x344514u: goto label_344514;
        case 0x344518u: goto label_344518;
        case 0x34451cu: goto label_34451c;
        default: break;
    }

    ctx->pc = 0x3443c8u;

label_3443c8:
    // 0x3443c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3443c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3443cc:
    // 0x3443cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3443ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3443d0:
    // 0x3443d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3443d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3443d4:
    // 0x3443d4: 0x80d10f8  j           func_3443E0
label_3443d8:
    if (ctx->pc == 0x3443D8u) {
        ctx->pc = 0x3443D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443D4u;
        // 0x3443d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3443DCu;
        goto label_3443dc;
    }
    ctx->pc = 0x3443D4u;
    ctx->pc = 0x3443D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443D4u;
    // 0x3443d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3443E0u;
    goto label_3443e0;
    ctx->pc = 0x3443DCu;
label_3443dc:
    // 0x3443dc: 0x0  nop
    ctx->pc = 0x3443dcu;
    // NOP
label_3443e0:
    // 0x3443e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3443e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3443e4:
    // 0x3443e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3443e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3443e8:
    // 0x3443e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3443e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3443ec:
    // 0x3443ec: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_3443f0:
    if (ctx->pc == 0x3443F0u) {
        ctx->pc = 0x3443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443ECu;
        // 0x3443f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3443F4u;
        goto label_3443f4;
    }
    ctx->pc = 0x3443ECu;
    {
        const bool branch_taken_0x3443ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3443F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443ECu;
        // 0x3443f0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3443ec) {
            ctx->pc = 0x3444F8u;
            goto label_3444f8;
        }
    }
    ctx->pc = 0x3443F4u;
label_3443f4:
    // 0x3443f4: 0xc0d25fe  jal         func_3497F8
label_3443f8:
    if (ctx->pc == 0x3443F8u) {
        ctx->pc = 0x3443F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443F4u;
        // 0x3443f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3443FCu;
        goto label_3443fc;
    }
    ctx->pc = 0x3443F4u;
    SET_GPR_U32(ctx, 31, 0x3443FCu);
    ctx->pc = 0x3443F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443F4u;
    // 0x3443f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3497F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3497F8u, 0x3443F4u, 0x3443FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3443FCu;
label_3443fc:
    // 0x3443fc: 0xc0d177c  jal         func_345DF0
label_344400:
    if (ctx->pc == 0x344400u) {
        ctx->pc = 0x344400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3443FCu;
        // 0x344400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344404u;
        goto label_344404;
    }
    ctx->pc = 0x3443FCu;
    SET_GPR_U32(ctx, 31, 0x344404u);
    ctx->pc = 0x344400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3443FCu;
    // 0x344400: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345DF0u, 0x3443FCu, 0x344404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344404u;
label_344404:
    // 0x344404: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x344404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_344408:
    // 0x344408: 0xc0d25fe  jal         func_3497F8
label_34440c:
    if (ctx->pc == 0x34440Cu) {
        ctx->pc = 0x34440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344408u;
        // 0x34440c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344410u;
        goto label_344410;
    }
    ctx->pc = 0x344408u;
    SET_GPR_U32(ctx, 31, 0x344410u);
    ctx->pc = 0x34440Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344408u;
    // 0x34440c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3497F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3497F8u, 0x344408u, 0x344410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344410u;
label_344410:
    // 0x344410: 0xc0d1cdc  jal         func_347370
label_344414:
    if (ctx->pc == 0x344414u) {
        ctx->pc = 0x344414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344410u;
        // 0x344414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344418u;
        goto label_344418;
    }
    ctx->pc = 0x344410u;
    SET_GPR_U32(ctx, 31, 0x344418u);
    ctx->pc = 0x344414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344410u;
    // 0x344414: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347370u, 0x344410u, 0x344418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344418u;
label_344418:
    // 0x344418: 0x8e0400a8  lw          $a0, 0xA8($s0)
    ctx->pc = 0x344418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
label_34441c:
    // 0x34441c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_344420:
    if (ctx->pc == 0x344420u) {
        ctx->pc = 0x344420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34441Cu;
        // 0x344420: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344424u;
        goto label_344424;
    }
    ctx->pc = 0x34441Cu;
    {
        const bool branch_taken_0x34441c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34441c) {
            ctx->pc = 0x344420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34441Cu;
            // 0x344420: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344430u;
            goto label_344430;
        }
    }
    ctx->pc = 0x344424u;
label_344424:
    // 0x344424: 0xc0d1b0c  jal         func_346C30
label_344428:
    if (ctx->pc == 0x344428u) {
        ctx->pc = 0x34442Cu;
        goto label_34442c;
    }
    ctx->pc = 0x344424u;
    SET_GPR_U32(ctx, 31, 0x34442Cu);
    ctx->pc = 0x346C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x346C30u, 0x344424u, 0x34442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34442Cu;
label_34442c:
    // 0x34442c: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x34442cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
label_344430:
    // 0x344430: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_344434:
    if (ctx->pc == 0x344434u) {
        ctx->pc = 0x344434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344430u;
        // 0x344434: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344438u;
        goto label_344438;
    }
    ctx->pc = 0x344430u;
    {
        const bool branch_taken_0x344430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x344430) {
            ctx->pc = 0x344434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344430u;
            // 0x344434: 0x8e040040  lw          $a0, 0x40($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344444u;
            goto label_344444;
        }
    }
    ctx->pc = 0x344438u;
label_344438:
    // 0x344438: 0xc0cd540  jal         func_335500
label_34443c:
    if (ctx->pc == 0x34443Cu) {
        ctx->pc = 0x344440u;
        goto label_344440;
    }
    ctx->pc = 0x344438u;
    SET_GPR_U32(ctx, 31, 0x344440u);
    ctx->pc = 0x335500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335500u, 0x344438u, 0x344440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344440u;
label_344440:
    // 0x344440: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x344440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_344444:
    // 0x344444: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_344448:
    if (ctx->pc == 0x344448u) {
        ctx->pc = 0x344448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344444u;
        // 0x344448: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34444Cu;
        goto label_34444c;
    }
    ctx->pc = 0x344444u;
    {
        const bool branch_taken_0x344444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x344444) {
            ctx->pc = 0x344448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344444u;
            // 0x344448: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344458u;
            goto label_344458;
        }
    }
    ctx->pc = 0x34444Cu;
label_34444c:
    // 0x34444c: 0xc0d26ae  jal         func_349AB8
label_344450:
    if (ctx->pc == 0x344450u) {
        ctx->pc = 0x344454u;
        goto label_344454;
    }
    ctx->pc = 0x34444Cu;
    SET_GPR_U32(ctx, 31, 0x344454u);
    ctx->pc = 0x349AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349AB8u, 0x34444Cu, 0x344454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x344454u;
label_344454:
    // 0x344454: 0x8e0401c0  lw          $a0, 0x1C0($s0)
    ctx->pc = 0x344454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
label_344458:
    // 0x344458: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_34445c:
    if (ctx->pc == 0x34445Cu) {
        ctx->pc = 0x34445Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344458u;
        // 0x34445c: 0x8e0401e0  lw          $a0, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344460u;
        goto label_344460;
    }
    ctx->pc = 0x344458u;
    {
        const bool branch_taken_0x344458 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x344458) {
            ctx->pc = 0x34445Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344458u;
            // 0x34445c: 0x8e0401e0  lw          $a0, 0x1E0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344474u;
            goto label_344474;
        }
    }
    ctx->pc = 0x344460u;
label_344460:
    // 0x344460: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x344460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_344464:
    // 0x344464: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x344464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_344468:
    // 0x344468: 0x40f809  jalr        $v0
label_34446c:
    if (ctx->pc == 0x34446Cu) {
        ctx->pc = 0x344470u;
        goto label_344470;
    }
    ctx->pc = 0x344468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344470u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344468u, 0x344470u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344470u;
label_344470:
    // 0x344470: 0x8e0401e0  lw          $a0, 0x1E0($s0)
    ctx->pc = 0x344470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
label_344474:
    // 0x344474: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_344478:
    if (ctx->pc == 0x344478u) {
        ctx->pc = 0x344478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344474u;
        // 0x344478: 0x8e0402d0  lw          $a0, 0x2D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x34447Cu;
        goto label_34447c;
    }
    ctx->pc = 0x344474u;
    {
        const bool branch_taken_0x344474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x344474) {
            ctx->pc = 0x344478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344474u;
            // 0x344478: 0x8e0402d0  lw          $a0, 0x2D0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344490u;
            goto label_344490;
        }
    }
    ctx->pc = 0x34447Cu;
label_34447c:
    // 0x34447c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x34447cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_344480:
    // 0x344480: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x344480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_344484:
    // 0x344484: 0x40f809  jalr        $v0
label_344488:
    if (ctx->pc == 0x344488u) {
        ctx->pc = 0x34448Cu;
        goto label_34448c;
    }
    ctx->pc = 0x344484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x34448Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344484u, 0x34448Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x34448Cu;
label_34448c:
    // 0x34448c: 0x8e0402d0  lw          $a0, 0x2D0($s0)
    ctx->pc = 0x34448cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_344490:
    // 0x344490: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_344494:
    if (ctx->pc == 0x344494u) {
        ctx->pc = 0x344494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344490u;
        // 0x344494: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344498u;
        goto label_344498;
    }
    ctx->pc = 0x344490u;
    {
        const bool branch_taken_0x344490 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x344490) {
            ctx->pc = 0x344494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344490u;
            // 0x344494: 0x8e04003c  lw          $a0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3444A4u;
            goto label_3444a4;
        }
    }
    ctx->pc = 0x344498u;
label_344498:
    // 0x344498: 0xc0d0ae6  jal         func_342B98
label_34449c:
    if (ctx->pc == 0x34449Cu) {
        ctx->pc = 0x3444A0u;
        goto label_3444a0;
    }
    ctx->pc = 0x344498u;
    SET_GPR_U32(ctx, 31, 0x3444A0u);
    ctx->pc = 0x342B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B98u, 0x344498u, 0x3444A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444A0u;
label_3444a0:
    // 0x3444a0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x3444a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_3444a4:
    // 0x3444a4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3444a8:
    if (ctx->pc == 0x3444A8u) {
        ctx->pc = 0x3444ACu;
        goto label_3444ac;
    }
    ctx->pc = 0x3444A4u;
    {
        const bool branch_taken_0x3444a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3444a4) {
            ctx->pc = 0x3444B4u;
            goto label_3444b4;
        }
    }
    ctx->pc = 0x3444ACu;
label_3444ac:
    // 0x3444ac: 0xc0d0ef4  jal         func_343BD0
label_3444b0:
    if (ctx->pc == 0x3444B0u) {
        ctx->pc = 0x3444B4u;
        goto label_3444b4;
    }
    ctx->pc = 0x3444ACu;
    SET_GPR_U32(ctx, 31, 0x3444B4u);
    ctx->pc = 0x343BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343BD0u, 0x3444ACu, 0x3444B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444B4u;
label_3444b4:
    // 0x3444b4: 0xc0d221c  jal         func_348870
label_3444b8:
    if (ctx->pc == 0x3444B8u) {
        ctx->pc = 0x3444B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444B4u;
        // 0x3444b8: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3444BCu;
        goto label_3444bc;
    }
    ctx->pc = 0x3444B4u;
    SET_GPR_U32(ctx, 31, 0x3444BCu);
    ctx->pc = 0x3444B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444B4u;
    // 0x3444b8: 0x26040284  addiu       $a0, $s0, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348870u, 0x3444B4u, 0x3444BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444BCu;
label_3444bc:
    // 0x3444bc: 0xc0d221c  jal         func_348870
label_3444c0:
    if (ctx->pc == 0x3444C0u) {
        ctx->pc = 0x3444C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444BCu;
        // 0x3444c0: 0x260402a4  addiu       $a0, $s0, 0x2A4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3444C4u;
        goto label_3444c4;
    }
    ctx->pc = 0x3444BCu;
    SET_GPR_U32(ctx, 31, 0x3444C4u);
    ctx->pc = 0x3444C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444BCu;
    // 0x3444c0: 0x260402a4  addiu       $a0, $s0, 0x2A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348870u, 0x3444BCu, 0x3444C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444C4u;
label_3444c4:
    // 0x3444c4: 0xc0d11c4  jal         func_344710
label_3444c8:
    if (ctx->pc == 0x3444C8u) {
        ctx->pc = 0x3444C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444C4u;
        // 0x3444c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3444CCu;
        goto label_3444cc;
    }
    ctx->pc = 0x3444C4u;
    SET_GPR_U32(ctx, 31, 0x3444CCu);
    ctx->pc = 0x3444C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444C4u;
    // 0x3444c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344710u, 0x3444C4u, 0x3444CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444CCu;
label_3444cc:
    // 0x3444cc: 0xc0d11e4  jal         func_344790
label_3444d0:
    if (ctx->pc == 0x3444D0u) {
        ctx->pc = 0x3444D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444CCu;
        // 0x3444d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3444D4u;
        goto label_3444d4;
    }
    ctx->pc = 0x3444CCu;
    SET_GPR_U32(ctx, 31, 0x3444D4u);
    ctx->pc = 0x3444D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444CCu;
    // 0x3444d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344790u, 0x3444CCu, 0x3444D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444D4u;
label_3444d4:
    // 0x3444d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3444d8:
    if (ctx->pc == 0x3444D8u) {
        ctx->pc = 0x3444D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444D4u;
        // 0x3444d8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3444DCu;
        goto label_3444dc;
    }
    ctx->pc = 0x3444D4u;
    {
        const bool branch_taken_0x3444d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3444D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444D4u;
        // 0x3444d8: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3444d4) {
            ctx->pc = 0x3444E4u;
            goto label_3444e4;
        }
    }
    ctx->pc = 0x3444DCu;
label_3444dc:
    // 0x3444dc: 0xc0d22f8  jal         func_348BE0
label_3444e0:
    if (ctx->pc == 0x3444E0u) {
        ctx->pc = 0x3444E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444DCu;
        // 0x3444e0: 0x248476a0  addiu       $a0, $a0, 0x76A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3444E4u;
        goto label_3444e4;
    }
    ctx->pc = 0x3444DCu;
    SET_GPR_U32(ctx, 31, 0x3444E4u);
    ctx->pc = 0x3444E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444DCu;
    // 0x3444e0: 0x248476a0  addiu       $a0, $a0, 0x76A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x3444DCu, 0x3444E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444E4u;
label_3444e4:
    // 0x3444e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3444e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3444e8:
    // 0x3444e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3444e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3444ec:
    // 0x3444ec: 0xc0e94bc  jal         func_3A52F0
label_3444f0:
    if (ctx->pc == 0x3444F0u) {
        ctx->pc = 0x3444F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3444ECu;
        // 0x3444f0: 0x24060304  addiu       $a2, $zero, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3444F4u;
        goto label_3444f4;
    }
    ctx->pc = 0x3444ECu;
    SET_GPR_U32(ctx, 31, 0x3444F4u);
    ctx->pc = 0x3444F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3444ECu;
    // 0x3444f0: 0x24060304  addiu       $a2, $zero, 0x304 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A52F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A52F0u, 0x3444ECu, 0x3444F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3444F4u;
label_3444f4:
    // 0x3444f4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3444f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3444f8:
    // 0x3444f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3444f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3444fc:
    // 0x3444fc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3444fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_344500:
    // 0x344500: 0x3e00008  jr          $ra
label_344504:
    if (ctx->pc == 0x344504u) {
        ctx->pc = 0x344504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344500u;
        // 0x344504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x344508u;
        goto label_344508;
    }
    ctx->pc = 0x344500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344500u;
        // 0x344504: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x344508u;
label_344508:
    // 0x344508: 0xac44012c  sw          $a0, 0x12C($v0)
    ctx->pc = 0x344508u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 4));
label_34450c:
    // 0x34450c: 0x0  nop
    ctx->pc = 0x34450cu;
    // NOP
label_344510:
    // 0x344510: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x344510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344514:
    // 0x344514: 0x0  nop
    ctx->pc = 0x344514u;
    // NOP
label_344518:
    // 0x344518: 0x0  nop
    ctx->pc = 0x344518u;
    // NOP
label_34451c:
    // 0x34451c: 0x0  nop
    ctx->pc = 0x34451cu;
    // NOP
    ctx->pc = 0x344520u;
}
