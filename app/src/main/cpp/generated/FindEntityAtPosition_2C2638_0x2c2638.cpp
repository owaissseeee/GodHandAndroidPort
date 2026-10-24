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

// Function: FindEntityAtPosition_2C2638
// Address: 0x2c2638 - 0x2c2728
void FindEntityAtPosition_2C2638_0x2c2638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindEntityAtPosition_2C2638_0x2c2638");
#endif

    switch (ctx->pc) {
        case 0x2c2678u: goto label_2c2678;
        case 0x2c2680u: goto label_2c2680;
        case 0x2c26a8u: goto label_2c26a8;
        case 0x2c26b4u: goto label_2c26b4;
        case 0x2c26ccu: goto label_2c26cc;
        case 0x2c26ecu: goto label_2c26ec;
        default: break;
    }

    ctx->pc = 0x2c2638u;

    // 0x2c2638: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c2638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c263c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2c263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2c2640: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2c2640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2c2644: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c2644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2648: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2c2648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2c264c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c264cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2650: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2c2650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2c2654: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c2654u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2658: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2c2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2c265c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c265cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2660: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2c2660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2c2664: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2c2664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2c2668: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2c2668u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c266c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c266cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c2670: 0xc0b0c30  jal         func_2C30C0
    ctx->pc = 0x2C2670u;
    SET_GPR_U32(ctx, 31, 0x2C2678u);
    ctx->pc = 0x2C2674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2670u;
    // 0x2c2674: 0x2416000c  addiu       $s6, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C2670u, 0x2C2678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2678u;
label_2c2678:
    // 0x2c2678: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2C2678u;
    {
        const bool branch_taken_0x2c2678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2678u;
        // 0x2c267c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2678) {
            ctx->pc = 0x2C26E0u;
            goto label_2c26e0;
        }
    }
    ctx->pc = 0x2C2680u;
label_2c2680:
    // 0x2c2680: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2c2680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2c2684: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2c2684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2c2688: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2C2688u;
    {
        const bool branch_taken_0x2c2688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C268Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2688u;
        // 0x2c268c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2688) {
            ctx->pc = 0x2C26E4u;
            goto label_2c26e4;
        }
    }
    ctx->pc = 0x2C2690u;
    // 0x2c2690: 0x92020035  lbu         $v0, 0x35($s0)
    ctx->pc = 0x2c2690u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
    // 0x2c2694: 0x14560013  bne         $v0, $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C2694u;
    {
        const bool branch_taken_0x2c2694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x2C2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2694u;
        // 0x2c2698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2694) {
            ctx->pc = 0x2C26E4u;
            goto label_2c26e4;
        }
    }
    ctx->pc = 0x2C269Cu;
    // 0x2c269c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c269cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26a0: 0xc0b075a  jal         func_2C1D68
    ctx->pc = 0x2C26A0u;
    SET_GPR_U32(ctx, 31, 0x2C26A8u);
    ctx->pc = 0x2C26A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26A0u;
    // 0x2c26a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1D68u, 0x2C26A0u, 0x2C26A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26A8u;
label_2c26a8:
    // 0x2c26a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c26a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26ac: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x2C26ACu;
    SET_GPR_U32(ctx, 31, 0x2C26B4u);
    ctx->pc = 0x2C26B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26ACu;
    // 0x2c26b0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x2C26ACu, 0x2C26B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26B4u;
label_2c26b4:
    // 0x2c26b4: 0x5455000b  bnel        $v0, $s5, . + 4 + (0xB << 2)
    ctx->pc = 0x2C26B4u;
    {
        const bool branch_taken_0x2c26b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c26b4) {
            ctx->pc = 0x2C26B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C26B4u;
            // 0x2c26b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C26E4u;
            goto label_2c26e4;
        }
    }
    ctx->pc = 0x2C26BCu;
    // 0x2c26bc: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C26BCu;
    {
        const bool branch_taken_0x2c26bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26BCu;
        // 0x2c26c0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26bc) {
            ctx->pc = 0x2C26CCu;
            goto label_2c26cc;
        }
    }
    ctx->pc = 0x2C26C4u;
    // 0x2c26c4: 0xc0b039e  jal         func_2C0E78
    ctx->pc = 0x2C26C4u;
    SET_GPR_U32(ctx, 31, 0x2C26CCu);
    ctx->pc = 0x2C26C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26C4u;
    // 0x2c26c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0E78u, 0x2C26C4u, 0x2C26CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26CCu;
label_2c26cc:
    // 0x2c26cc: 0x1260000b  beqz        $s3, . + 4 + (0xB << 2)
    ctx->pc = 0x2C26CCu;
    {
        const bool branch_taken_0x2c26cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26CCu;
        // 0x2c26d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26cc) {
            ctx->pc = 0x2C26FCu;
            goto label_2c26fc;
        }
    }
    ctx->pc = 0x2C26D4u;
    // 0x2c26d4: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2c26d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c26d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C26D8u;
    {
        const bool branch_taken_0x2c26d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C26DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C26D8u;
        // 0x2c26dc: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c26d8) {
            ctx->pc = 0x2C26FCu;
            goto label_2c26fc;
        }
    }
    ctx->pc = 0x2C26E0u;
label_2c26e0:
    // 0x2c26e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c26e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c26e4:
    // 0x2c26e4: 0xc0b0c32  jal         func_2C30C8
    ctx->pc = 0x2C26E4u;
    SET_GPR_U32(ctx, 31, 0x2C26ECu);
    ctx->pc = 0x2C26E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C26E4u;
    // 0x2c26e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C26E4u, 0x2C26ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C26ECu;
label_2c26ec:
    // 0x2c26ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c26ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c26f0: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2C26F0u;
    {
        const bool branch_taken_0x2c26f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c26f0) {
            ctx->pc = 0x2C26F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C26F0u;
            // 0x2c26f4: 0x92020034  lbu         $v0, 0x34($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c2680;
        }
    }
    ctx->pc = 0x2C26F8u;
    // 0x2c26f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c26f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c26fc:
    // 0x2c26fc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2c26fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c2700: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2c2700u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2704: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2c2704u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2708: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2c2708u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c270c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2c270cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2710: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2c2710u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2714: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2c2714u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2718: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c2718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c271c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C271Cu;
        // 0x2c2720: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C271Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2724u;
    // 0x2c2724: 0x0  nop
    ctx->pc = 0x2c2724u;
    // NOP
    ctx->pc = 0x2c2728u;
}
