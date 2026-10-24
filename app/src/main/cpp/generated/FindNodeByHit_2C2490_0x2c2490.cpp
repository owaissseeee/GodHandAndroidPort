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

// Function: FindNodeByHit_2C2490
// Address: 0x2c2490 - 0x2c2568
void FindNodeByHit_2C2490_0x2c2490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindNodeByHit_2C2490_0x2c2490");
#endif

    switch (ctx->pc) {
        case 0x2c24c8u: goto label_2c24c8;
        case 0x2c24d0u: goto label_2c24d0;
        case 0x2c24ecu: goto label_2c24ec;
        case 0x2c24f8u: goto label_2c24f8;
        case 0x2c2530u: goto label_2c2530;
        default: break;
    }

    ctx->pc = 0x2c2490u;

    // 0x2c2490: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c2490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c2494: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c2494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2c2498: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c2498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2c249c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c249cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24a0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c24a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2c24a4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c24a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c24a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2c24ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c24acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24b0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c24b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c24b4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c24b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2c24b8: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2c24b8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c24bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c24bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c24c0: 0xc0b0c30  jal         func_2C30C0
    ctx->pc = 0x2C24C0u;
    SET_GPR_U32(ctx, 31, 0x2C24C8u);
    ctx->pc = 0x2C24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C24C0u;
    // 0x2c24c4: 0x24150b01  addiu       $s5, $zero, 0xB01 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2817));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C24C0u, 0x2C24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C24C8u;
label_2c24c8:
    // 0x2c24c8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2C24C8u;
    {
        const bool branch_taken_0x2c24c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C24CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C24C8u;
        // 0x2c24cc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c24c8) {
            ctx->pc = 0x2C2524u;
            goto label_2c2524;
        }
    }
    ctx->pc = 0x2C24D0u;
label_2c24d0:
    // 0x2c24d0: 0x3042ff01  andi        $v0, $v0, 0xFF01
    ctx->pc = 0x2c24d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65281);
    // 0x2c24d4: 0x54550014  bnel        $v0, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C24D4u;
    {
        const bool branch_taken_0x2c24d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c24d4) {
            ctx->pc = 0x2C24D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C24D4u;
            // 0x2c24d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2528u;
            goto label_2c2528;
        }
    }
    ctx->pc = 0x2C24DCu;
    // 0x2c24dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c24dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c24e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24e4: 0xc0b075a  jal         func_2C1D68
    ctx->pc = 0x2C24E4u;
    SET_GPR_U32(ctx, 31, 0x2C24ECu);
    ctx->pc = 0x2C24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C24E4u;
    // 0x2c24e8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1D68u, 0x2C24E4u, 0x2C24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C24ECu;
label_2c24ec:
    // 0x2c24ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c24ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c24f0: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x2C24F0u;
    SET_GPR_U32(ctx, 31, 0x2C24F8u);
    ctx->pc = 0x2C24F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C24F0u;
    // 0x2c24f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x2C24F0u, 0x2C24F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C24F8u;
label_2c24f8:
    // 0x2c24f8: 0x5454000b  bnel        $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2C24F8u;
    {
        const bool branch_taken_0x2c24f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2c24f8) {
            ctx->pc = 0x2C24FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C24F8u;
            // 0x2c24fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2528u;
            goto label_2c2528;
        }
    }
    ctx->pc = 0x2C2500u;
    // 0x2c2500: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C2500u;
    {
        const bool branch_taken_0x2c2500 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2500u;
        // 0x2c2504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2500) {
            ctx->pc = 0x2C2540u;
            goto label_2c2540;
        }
    }
    ctx->pc = 0x2C2508u;
    // 0x2c2508: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x2c2508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c250c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c250cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c2510: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x2c2510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2514: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c2514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c2518: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x2c2518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c251c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C251Cu;
    {
        const bool branch_taken_0x2c251c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C251Cu;
        // 0x2c2520: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c251c) {
            ctx->pc = 0x2C2540u;
            goto label_2c2540;
        }
    }
    ctx->pc = 0x2C2524u;
label_2c2524:
    // 0x2c2524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c2524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c2528:
    // 0x2c2528: 0xc0b0c32  jal         func_2C30C8
    ctx->pc = 0x2C2528u;
    SET_GPR_U32(ctx, 31, 0x2C2530u);
    ctx->pc = 0x2C252Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2528u;
    // 0x2c252c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C2528u, 0x2C2530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2530u;
label_2c2530:
    // 0x2c2530: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2530u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2534: 0x5600ffe6  bnel        $s0, $zero, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2C2534u;
    {
        const bool branch_taken_0x2c2534 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2534) {
            ctx->pc = 0x2C2538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2534u;
            // 0x2c2538: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C24D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c24d0;
        }
    }
    ctx->pc = 0x2C253Cu;
    // 0x2c253c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c253cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2540:
    // 0x2c2540: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c2540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2544: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c2544u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c2548: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c2548u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c254c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c254cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2550: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c2550u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2554: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2c2554u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2558: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c2558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c255c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C255Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C255Cu;
        // 0x2c2560: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C255Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2564u;
    // 0x2c2564: 0x0  nop
    ctx->pc = 0x2c2564u;
    // NOP
    ctx->pc = 0x2c2568u;
}
