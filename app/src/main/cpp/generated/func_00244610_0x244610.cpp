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

// Function: func_00244610
// Address: 0x244610 - 0x244708
void func_00244610_0x244610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00244610_0x244610");
#endif

    switch (ctx->pc) {
        case 0x244638u: goto label_244638;
        case 0x24466cu: goto label_24466c;
        case 0x244698u: goto label_244698;
        case 0x2446a4u: goto label_2446a4;
        case 0x2446b0u: goto label_2446b0;
        case 0x2446c4u: goto label_2446c4;
        case 0x2446d4u: goto label_2446d4;
        case 0x2446e8u: goto label_2446e8;
        case 0x2446f4u: goto label_2446f4;
        default: break;
    }

    ctx->pc = 0x244610u;

    // 0x244610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x244610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x244614: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244614u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244618: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x244618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24461c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24461cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x244620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x244624: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x244624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x244628: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x244628u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24462c: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x24462cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x244630: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x244630u;
    SET_GPR_U32(ctx, 31, 0x244638u);
    ctx->pc = 0x244634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244630u;
    // 0x244634: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x244630u, 0x244638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244638u;
label_244638:
    // 0x244638: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x24463c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x24463cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x244640: 0x920402f6  lbu         $a0, 0x2F6($s0)
    ctx->pc = 0x244640u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x244644: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x244644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x244648: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x244648u;
    {
        const bool branch_taken_0x244648 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24464Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244648u;
        // 0x24464c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244648) {
            ctx->pc = 0x244664u;
            goto label_244664;
        }
    }
    ctx->pc = 0x244650u;
    // 0x244650: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x244654: 0x10820019  beq         $a0, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x244654u;
    {
        const bool branch_taken_0x244654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x244654) {
            ctx->pc = 0x2446BCu;
            goto label_2446bc;
        }
    }
    ctx->pc = 0x24465Cu;
    // 0x24465c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x24465Cu;
    {
        const bool branch_taken_0x24465c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24465Cu;
        // 0x244660: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24465c) {
            ctx->pc = 0x2446F8u;
            goto label_2446f8;
        }
    }
    ctx->pc = 0x244664u;
label_244664:
    // 0x244664: 0xc09d91a  jal         func_276468
    ctx->pc = 0x244664u;
    SET_GPR_U32(ctx, 31, 0x24466Cu);
    ctx->pc = 0x244668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244664u;
    // 0x244668: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x244664u, 0x24466Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24466Cu;
label_24466c:
    // 0x24466c: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x24466cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x244670: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x244670u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x244674: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x244674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x244678: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x244678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x24467c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x24467cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244680: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x244684: 0x8c452494  lw          $a1, 0x2494($v0)
    ctx->pc = 0x244684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9364)));
    // 0x244688: 0x8c462498  lw          $a2, 0x2498($v0)
    ctx->pc = 0x244688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9368)));
    // 0x24468c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x24468cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x244690: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x244690u;
    SET_GPR_U32(ctx, 31, 0x244698u);
    ctx->pc = 0x244694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244690u;
    // 0x244694: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x244690u, 0x244698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244698u;
label_244698:
    // 0x244698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24469c: 0xc0981ba  jal         func_2606E8
    ctx->pc = 0x24469Cu;
    SET_GPR_U32(ctx, 31, 0x2446A4u);
    ctx->pc = 0x2446A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24469Cu;
    // 0x2446a0: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2606E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2606E8u, 0x24469Cu, 0x2446A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446A4u;
label_2446a4:
    // 0x2446a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2446a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2446a8: 0xc0981ba  jal         func_2606E8
    ctx->pc = 0x2446A8u;
    SET_GPR_U32(ctx, 31, 0x2446B0u);
    ctx->pc = 0x2446ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2446A8u;
    // 0x2446ac: 0x24050203  addiu       $a1, $zero, 0x203 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2606E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2606E8u, 0x2446A8u, 0x2446B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446B0u;
label_2446b0:
    // 0x2446b0: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x2446b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x2446b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2446b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2446b8: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x2446b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_2446bc:
    // 0x2446bc: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2446BCu;
    SET_GPR_U32(ctx, 31, 0x2446C4u);
    ctx->pc = 0x2446C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2446BCu;
    // 0x2446c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2446BCu, 0x2446C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446C4u;
label_2446c4:
    // 0x2446c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2446C4u;
    {
        const bool branch_taken_0x2446c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446c4) {
            ctx->pc = 0x2446D4u;
            goto label_2446d4;
        }
    }
    ctx->pc = 0x2446CCu;
    // 0x2446cc: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x2446CCu;
    SET_GPR_U32(ctx, 31, 0x2446D4u);
    ctx->pc = 0x2446D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2446CCu;
    // 0x2446d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x2446CCu, 0x2446D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446D4u;
label_2446d4:
    // 0x2446d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2446d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2446d8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2446d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2446dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2446dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2446e0: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2446E0u;
    SET_GPR_U32(ctx, 31, 0x2446E8u);
    ctx->pc = 0x2446E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2446E0u;
    // 0x2446e4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2446E0u, 0x2446E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446E8u;
label_2446e8:
    // 0x2446e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2446e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2446ec: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2446ECu;
    SET_GPR_U32(ctx, 31, 0x2446F4u);
    ctx->pc = 0x2446F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2446ECu;
    // 0x2446f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2446ECu, 0x2446F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2446F4u;
label_2446f4:
    // 0x2446f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2446f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2446f8:
    // 0x2446f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2446f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2446fc: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2446fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x244700: 0x3e00008  jr          $ra
    ctx->pc = 0x244700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244700u;
        // 0x244704: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244708u;
}
