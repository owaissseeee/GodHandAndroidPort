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

// Function: FindNodeByType_2C2568
// Address: 0x2c2568 - 0x2c2638
void FindNodeByType_2C2568_0x2c2568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FindNodeByType_2C2568_0x2c2568");
#endif

    switch (ctx->pc) {
        case 0x2c25a0u: goto label_2c25a0;
        case 0x2c25a8u: goto label_2c25a8;
        case 0x2c25c0u: goto label_2c25c0;
        case 0x2c25ccu: goto label_2c25cc;
        case 0x2c2604u: goto label_2c2604;
        default: break;
    }

    ctx->pc = 0x2c2568u;

    // 0x2c2568: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2c2568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2c256c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2c256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2c2570: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2c2570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2c2574: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c2574u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2578: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2c2578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2c257c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2c257cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2580: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2c2580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2c2584: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2c2584u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2588: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2c2588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2c258c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2c258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2c2590: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2c2590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2594: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c2594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2c2598: 0xc0b0c30  jal         func_2C30C0
    ctx->pc = 0x2C2598u;
    SET_GPR_U32(ctx, 31, 0x2C25A0u);
    ctx->pc = 0x2C259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2598u;
    // 0x2c259c: 0x2415000d  addiu       $s5, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C0u, 0x2C2598u, 0x2C25A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25A0u;
label_2c25a0:
    // 0x2c25a0: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2C25A0u;
    {
        const bool branch_taken_0x2c25a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25A0u;
        // 0x2c25a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25a0) {
            ctx->pc = 0x2C25F8u;
            goto label_2c25f8;
        }
    }
    ctx->pc = 0x2C25A8u;
label_2c25a8:
    // 0x2c25a8: 0x54550014  bnel        $v0, $s5, . + 4 + (0x14 << 2)
    ctx->pc = 0x2C25A8u;
    {
        const bool branch_taken_0x2c25a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2c25a8) {
            ctx->pc = 0x2C25ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C25A8u;
            // 0x2c25ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C25FCu;
            goto label_2c25fc;
        }
    }
    ctx->pc = 0x2C25B0u;
    // 0x2c25b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c25b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c25b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25b8: 0xc0b075a  jal         func_2C1D68
    ctx->pc = 0x2C25B8u;
    SET_GPR_U32(ctx, 31, 0x2C25C0u);
    ctx->pc = 0x2C25BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25B8u;
    // 0x2c25bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1D68u, 0x2C25B8u, 0x2C25C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25C0u;
label_2c25c0:
    // 0x2c25c0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c25c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c25c4: 0xc07e0fa  jal         func_1F83E8
    ctx->pc = 0x2C25C4u;
    SET_GPR_U32(ctx, 31, 0x2C25CCu);
    ctx->pc = 0x2C25C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25C4u;
    // 0x2c25c8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F83E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F83E8u, 0x2C25C4u, 0x2C25CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C25CCu;
label_2c25cc:
    // 0x2c25cc: 0x5454000b  bnel        $v0, $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x2C25CCu;
    {
        const bool branch_taken_0x2c25cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2c25cc) {
            ctx->pc = 0x2C25D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C25CCu;
            // 0x2c25d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C25FCu;
            goto label_2c25fc;
        }
    }
    ctx->pc = 0x2C25D4u;
    // 0x2c25d4: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2C25D4u;
    {
        const bool branch_taken_0x2c25d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25D4u;
        // 0x2c25d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25d4) {
            ctx->pc = 0x2C2614u;
            goto label_2c2614;
        }
    }
    ctx->pc = 0x2C25DCu;
    // 0x2c25dc: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x2c25dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c25e0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2c25e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2c25e4: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x2c25e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c25e8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x2c25e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2c25ec: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x2c25ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c25f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2C25F0u;
    {
        const bool branch_taken_0x2c25f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C25F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C25F0u;
        // 0x2c25f4: 0xe6200008  swc1        $f0, 0x8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c25f0) {
            ctx->pc = 0x2C2614u;
            goto label_2c2614;
        }
    }
    ctx->pc = 0x2C25F8u;
label_2c25f8:
    // 0x2c25f8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c25f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c25fc:
    // 0x2c25fc: 0xc0b0c32  jal         func_2C30C8
    ctx->pc = 0x2C25FCu;
    SET_GPR_U32(ctx, 31, 0x2C2604u);
    ctx->pc = 0x2C2600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C25FCu;
    // 0x2c2600: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C30C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C30C8u, 0x2C25FCu, 0x2C2604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2604u;
label_2c2604:
    // 0x2c2604: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2608: 0x5600ffe7  bnel        $s0, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2C2608u;
    {
        const bool branch_taken_0x2c2608 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c2608) {
            ctx->pc = 0x2C260Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2608u;
            // 0x2c260c: 0x92020035  lbu         $v0, 0x35($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 53)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C25A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c25a8;
        }
    }
    ctx->pc = 0x2C2610u;
    // 0x2c2610: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2614:
    // 0x2c2614: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2c2614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2c2618: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2c2618u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c261c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2c261cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c2620: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2c2620u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2624: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2c2624u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2628: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2c2628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c262c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c262cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2630: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2630u;
        // 0x2c2634: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2638u;
}
