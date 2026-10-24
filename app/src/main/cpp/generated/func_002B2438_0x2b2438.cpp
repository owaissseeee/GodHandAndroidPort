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

// Function: func_002B2438
// Address: 0x2b2438 - 0x2b2500
void func_002B2438_0x2b2438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002B2438_0x2b2438");
#endif

    switch (ctx->pc) {
        case 0x2b2478u: goto label_2b2478;
        case 0x2b2488u: goto label_2b2488;
        case 0x2b2498u: goto label_2b2498;
        case 0x2b24a8u: goto label_2b24a8;
        case 0x2b24b8u: goto label_2b24b8;
        case 0x2b24c8u: goto label_2b24c8;
        case 0x2b24d8u: goto label_2b24d8;
        case 0x2b24f0u: goto label_2b24f0;
        default: break;
    }

    ctx->pc = 0x2b2438u;

    // 0x2b2438: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b2438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b243c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2b243cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2b2440: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b2440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b2444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2448: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x2b2448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b244c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x2b244cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2b2450: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2B2450u;
    {
        const bool branch_taken_0x2b2450 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2450u;
        // 0x2b2454: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2450) {
            ctx->pc = 0x2B24D8u;
            goto label_2b24d8;
        }
    }
    ctx->pc = 0x2B2458u;
    // 0x2b2458: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b2458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2b245c: 0x2442b1c0  addiu       $v0, $v0, -0x4E40
    ctx->pc = 0x2b245cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x2b2460: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b2460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b2464: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2b2464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b2468: 0x800008  jr          $a0
    ctx->pc = 0x2B2468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2B2470u: goto label_2b2470;
            case 0x2B2480u: goto label_2b2480;
            case 0x2B2490u: goto label_2b2490;
            case 0x2B24A0u: goto label_2b24a0;
            case 0x2B24B0u: goto label_2b24b0;
            case 0x2B24C0u: goto label_2b24c0;
            case 0x2B24D0u: goto label_2b24d0;
            case 0x2B24D8u: goto label_2b24d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2468u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2B2470u;
label_2b2470:
    // 0x2b2470: 0xc0ac940  jal         func_2B2500
    ctx->pc = 0x2B2470u;
    SET_GPR_U32(ctx, 31, 0x2B2478u);
    ctx->pc = 0x2B2474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2470u;
    // 0x2b2474: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2500u, 0x2B2470u, 0x2B2478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2478u;
label_2b2478:
    // 0x2b2478: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x2B2478u;
    {
        const bool branch_taken_0x2b2478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b2478) {
            ctx->pc = 0x2B247Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2478u;
            // 0x2b247c: 0x9602002e  lhu         $v0, 0x2E($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B24DCu;
            goto label_2b24dc;
        }
    }
    ctx->pc = 0x2B2480u;
label_2b2480:
    // 0x2b2480: 0xc0acc1e  jal         func_2B3078
    ctx->pc = 0x2B2480u;
    SET_GPR_U32(ctx, 31, 0x2B2488u);
    ctx->pc = 0x2B2484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2480u;
    // 0x2b2484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3078u, 0x2B2480u, 0x2B2488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2488u;
label_2b2488:
    // 0x2b2488: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B2488u;
    {
        const bool branch_taken_0x2b2488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2488u;
        // 0x2b248c: 0x9602002e  lhu         $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2488) {
            ctx->pc = 0x2B24DCu;
            goto label_2b24dc;
        }
    }
    ctx->pc = 0x2B2490u;
label_2b2490:
    // 0x2b2490: 0xc0acc90  jal         func_2B3240
    ctx->pc = 0x2B2490u;
    SET_GPR_U32(ctx, 31, 0x2B2498u);
    ctx->pc = 0x2B2494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B2490u;
    // 0x2b2494: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3240u, 0x2B2490u, 0x2B2498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B2498u;
label_2b2498:
    // 0x2b2498: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2B2498u;
    {
        const bool branch_taken_0x2b2498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2498u;
        // 0x2b249c: 0x9602002e  lhu         $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2498) {
            ctx->pc = 0x2B24DCu;
            goto label_2b24dc;
        }
    }
    ctx->pc = 0x2B24A0u;
label_2b24a0:
    // 0x2b24a0: 0xc0acf5c  jal         func_2B3D70
    ctx->pc = 0x2B24A0u;
    SET_GPR_U32(ctx, 31, 0x2B24A8u);
    ctx->pc = 0x2B24A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24A0u;
    // 0x2b24a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3D70u, 0x2B24A0u, 0x2B24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24A8u;
label_2b24a8:
    // 0x2b24a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B24A8u;
    {
        const bool branch_taken_0x2b24a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24A8u;
        // 0x2b24ac: 0x9602002e  lhu         $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24a8) {
            ctx->pc = 0x2B24DCu;
            goto label_2b24dc;
        }
    }
    ctx->pc = 0x2B24B0u;
label_2b24b0:
    // 0x2b24b0: 0xc0acfb2  jal         func_2B3EC8
    ctx->pc = 0x2B24B0u;
    SET_GPR_U32(ctx, 31, 0x2B24B8u);
    ctx->pc = 0x2B24B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24B0u;
    // 0x2b24b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3EC8u, 0x2B24B0u, 0x2B24B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24B8u;
label_2b24b8:
    // 0x2b24b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2B24B8u;
    {
        const bool branch_taken_0x2b24b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B24BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24B8u;
        // 0x2b24bc: 0x9602002e  lhu         $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24b8) {
            ctx->pc = 0x2B24DCu;
            goto label_2b24dc;
        }
    }
    ctx->pc = 0x2B24C0u;
label_2b24c0:
    // 0x2b24c0: 0xc0ad00a  jal         func_2B4028
    ctx->pc = 0x2B24C0u;
    SET_GPR_U32(ctx, 31, 0x2B24C8u);
    ctx->pc = 0x2B24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24C0u;
    // 0x2b24c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4028u, 0x2B24C0u, 0x2B24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24C8u;
label_2b24c8:
    // 0x2b24c8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B24C8u;
    {
        const bool branch_taken_0x2b24c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24C8u;
        // 0x2b24cc: 0x9602002e  lhu         $v0, 0x2E($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24c8) {
            ctx->pc = 0x2B24DCu;
            goto label_2b24dc;
        }
    }
    ctx->pc = 0x2B24D0u;
label_2b24d0:
    // 0x2b24d0: 0xc0ad062  jal         func_2B4188
    ctx->pc = 0x2B24D0u;
    SET_GPR_U32(ctx, 31, 0x2B24D8u);
    ctx->pc = 0x2B24D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24D0u;
    // 0x2b24d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4188u, 0x2B24D0u, 0x2B24D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24D8u;
label_2b24d8:
    // 0x2b24d8: 0x9602002e  lhu         $v0, 0x2E($s0)
    ctx->pc = 0x2b24d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 46)));
label_2b24dc:
    // 0x2b24dc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B24DCu;
    {
        const bool branch_taken_0x2b24dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B24E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24DCu;
        // 0x2b24e0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b24dc) {
            ctx->pc = 0x2B24E8u;
            goto label_2b24e8;
        }
    }
    ctx->pc = 0x2B24E4u;
    // 0x2b24e4: 0xa602002e  sh          $v0, 0x2E($s0)
    ctx->pc = 0x2b24e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 46), (uint16_t)GPR_U32(ctx, 2));
label_2b24e8:
    // 0x2b24e8: 0xc0ad0e4  jal         func_2B4390
    ctx->pc = 0x2B24E8u;
    SET_GPR_U32(ctx, 31, 0x2B24F0u);
    ctx->pc = 0x2B24ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B24E8u;
    // 0x2b24ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4390u, 0x2B24E8u, 0x2B24F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B24F0u;
label_2b24f0:
    // 0x2b24f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2b24f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b24f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b24f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b24f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B24F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B24FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B24F8u;
        // 0x2b24fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B24F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2500u;
}
