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

// Function: cMessDrawFont_measurePage
// Address: 0x2b0610 - 0x2b0700
void cMessDrawFont_measurePage_0x2b0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cMessDrawFont_measurePage_0x2b0610");
#endif

    switch (ctx->pc) {
        case 0x2b0650u: goto label_2b0650;
        case 0x2b0660u: goto label_2b0660;
        case 0x2b0680u: goto label_2b0680;
        case 0x2b06a0u: goto label_2b06a0;
        case 0x2b06d4u: goto label_2b06d4;
        default: break;
    }

    ctx->pc = 0x2b0610u;

    // 0x2b0610: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2b0610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2b0614: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2b0614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2b0618: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2b0618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2b061c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b061cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0620: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2b0620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2b0624: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b0624u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0628: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2b0628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2b062c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2b062cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0630: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b0630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2b0634: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b0634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0638: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2b0638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2b063c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b0640: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2b0640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0644: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x2b0644u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x2b0648: 0xc0ac120  jal         func_2B0480
    ctx->pc = 0x2B0648u;
    SET_GPR_U32(ctx, 31, 0x2B0650u);
    ctx->pc = 0x2B064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0648u;
    // 0x2b064c: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0480u, 0x2B0648u, 0x2B0650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0650u;
label_2b0650:
    // 0x2b0650: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x2b0650u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2b0654: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2B0654u;
    {
        const bool branch_taken_0x2b0654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0654u;
        // 0x2b0658: 0x27b40014  addiu       $s4, $sp, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0654) {
            ctx->pc = 0x2B0688u;
            goto label_2b0688;
        }
    }
    ctx->pc = 0x2B065Cu;
    // 0x2b065c: 0x0  nop
    ctx->pc = 0x2b065cu;
    // NOP
label_2b0660:
    // 0x2b0660: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x2b0660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b0664: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x2b0664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b0668: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b0668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b066c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b066cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b0670: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0670u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b0674: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2b0674u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b0678: 0xc0abc7e  jal         func_2AF1F8
    ctx->pc = 0x2B0678u;
    SET_GPR_U32(ctx, 31, 0x2B0680u);
    ctx->pc = 0x2B067Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0678u;
    // 0x2b067c: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF1F8u, 0x2B0678u, 0x2B0680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B0680u;
label_2b0680:
    // 0x2b0680: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2b0680u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2b0684: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b0684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b0688:
    // 0x2b0688: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2b0688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b068c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b068cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0690: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2b0690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0694: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2b0694u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b0698: 0xc0ac1c0  jal         func_2B0700
    ctx->pc = 0x2B0698u;
    SET_GPR_U32(ctx, 31, 0x2B06A0u);
    ctx->pc = 0x2B069Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0698u;
    // 0x2b069c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B0700u, 0x2B0698u, 0x2B06A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B06A0u;
label_2b06a0:
    // 0x2b06a0: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x2b06a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b06a4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x2b06a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b06a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b06a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b06ac: 0x0  nop
    ctx->pc = 0x2b06acu;
    // NOP
    // 0x2b06b0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2B06B0u;
    {
        const bool branch_taken_0x2b06b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B06B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06B0u;
        // 0x2b06b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06b0) {
            ctx->pc = 0x2B06BCu;
            goto label_2b06bc;
        }
    }
    ctx->pc = 0x2B06B8u;
    // 0x2b06b8: 0xe6610000  swc1        $f1, 0x0($s3)
    ctx->pc = 0x2b06b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_2b06bc:
    // 0x2b06bc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2b06bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b06c0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2b06c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b06c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b06c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b06c8: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2b06c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2b06cc: 0xc0abc2e  jal         func_2AF0B8
    ctx->pc = 0x2B06CCu;
    SET_GPR_U32(ctx, 31, 0x2B06D4u);
    ctx->pc = 0x2B06D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B06CCu;
    // 0x2b06d0: 0x96040000  lhu         $a0, 0x0($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0B8u, 0x2B06CCu, 0x2B06D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B06D4u;
label_2b06d4:
    // 0x2b06d4: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2B06D4u;
    {
        const bool branch_taken_0x2b06d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B06D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06D4u;
        // 0x2b06d8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b06d4) {
            ctx->pc = 0x2B0660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0660;
        }
    }
    ctx->pc = 0x2B06DCu;
    // 0x2b06dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2b06dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b06e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2b06e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b06e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2b06e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b06e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2b06e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b06ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b06ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b06f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2b06f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b06f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B06F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B06F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B06F4u;
        // 0x2b06f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B06F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B06FCu;
    // 0x2b06fc: 0x0  nop
    ctx->pc = 0x2b06fcu;
    // NOP
    ctx->pc = 0x2b0700u;
}
