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

// Function: func_0012A610
// Address: 0x12a610 - 0x12a8d8
void func_0012A610_0x12a610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012A610_0x12a610");
#endif

    switch (ctx->pc) {
        case 0x12a668u: goto label_12a668;
        case 0x12a678u: goto label_12a678;
        case 0x12a6e8u: goto label_12a6e8;
        case 0x12a6fcu: goto label_12a6fc;
        case 0x12a730u: goto label_12a730;
        case 0x12a78cu: goto label_12a78c;
        case 0x12a7b0u: goto label_12a7b0;
        case 0x12a89cu: goto label_12a89c;
        default: break;
    }

    ctx->pc = 0x12a610u;

    // 0x12a610: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x12a610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x12a614: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x12a614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x12a618: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x12a618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12a61c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12a61cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a620: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x12a620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x12a624: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x12a624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x12a628: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x12a628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x12a62c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x12a62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x12a630: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x12a630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x12a634: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x12a634u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x12a638: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x12a638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a63c: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x12a63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x12a640: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x12a640u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a644: 0x8c434c58  lw          $v1, 0x4C58($v0)
    ctx->pc = 0x12a644u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C58u));
    // 0x12a648: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x12a648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a64c: 0x26450080  addiu       $a1, $s2, 0x80
    ctx->pc = 0x12a64cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x12a650: 0x8c730008  lw          $s3, 0x8($v1)
    ctx->pc = 0x12a650u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a654: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x12a654u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x12a658: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x12a658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x12a65c: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x12a65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x12a660: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x12A660u;
    SET_GPR_U32(ctx, 31, 0x12A668u);
    ctx->pc = 0x12A664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A660u;
    // 0x12a664: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x12A660u, 0x12A668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A668u;
label_12a668:
    // 0x12a668: 0x12330091  beq         $s1, $s3, . + 4 + (0x91 << 2)
    ctx->pc = 0x12A668u;
    {
        const bool branch_taken_0x12a668 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        ctx->pc = 0x12A66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A668u;
        // 0x12a66c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a668) {
            ctx->pc = 0x12A8B0u;
            goto label_12a8b0;
        }
    }
    ctx->pc = 0x12A670u;
    // 0x12a670: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12a670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a674: 0x0  nop
    ctx->pc = 0x12a674u;
    // NOP
label_12a678:
    // 0x12a678: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x12a678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a67c: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x12a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x12a680: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x12a680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x12a684: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x12A684u;
    {
        const bool branch_taken_0x12a684 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A684u;
        // 0x12a688: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a684) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A68Cu;
    // 0x12a68c: 0x4600085  bltz        $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x12A68Cu;
    {
        const bool branch_taken_0x12a68c = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x12a68c) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A694u;
    // 0x12a694: 0x948302fe  lhu         $v1, 0x2FE($a0)
    ctx->pc = 0x12a694u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 766)));
    // 0x12a698: 0x28620300  slti        $v0, $v1, 0x300
    ctx->pc = 0x12a698u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)768) ? 1 : 0);
    // 0x12a69c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A69Cu;
    {
        const bool branch_taken_0x12a69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12A6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A69Cu;
        // 0x12a6a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a69c) {
            ctx->pc = 0x12A6ACu;
            goto label_12a6ac;
        }
    }
    ctx->pc = 0x12A6A4u;
    // 0x12a6a4: 0x28620500  slti        $v0, $v1, 0x500
    ctx->pc = 0x12a6a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1280) ? 1 : 0);
    // 0x12a6a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a6ac:
    // 0x12a6ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x12a6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12a6b0: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
    ctx->pc = 0x12A6B0u;
    {
        const bool branch_taken_0x12a6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6B0u;
        // 0x12a6b4: 0x2463fc9f  addiu       $v1, $v1, -0x361 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966431));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6b0) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A6B8u;
    // 0x12a6b8: 0x2c620057  sltiu       $v0, $v1, 0x57
    ctx->pc = 0x12a6b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)87) ? 1 : 0);
    // 0x12a6bc: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x12A6BCu;
    {
        const bool branch_taken_0x12a6bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A6BCu;
        // 0x12a6c0: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a6bc) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A6C4u;
    // 0x12a6c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12a6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12a6c8: 0x2442cec0  addiu       $v0, $v0, -0x3140
    ctx->pc = 0x12a6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954688));
    // 0x12a6cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12a6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12a6d0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12a6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a6d4: 0x800008  jr          $a0
    ctx->pc = 0x12A6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A6DCu: goto label_12a6dc;
            case 0x12A8A4u: goto label_12a8a4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A6D4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12A6DCu;
label_12a6dc:
    // 0x12a6dc: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x12a6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x12a6e0: 0xc0741f8  jal         func_1D07E0
    ctx->pc = 0x12A6E0u;
    SET_GPR_U32(ctx, 31, 0x12A6E8u);
    ctx->pc = 0x12A6E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A6E0u;
    // 0x12a6e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D07E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07E0u, 0x12A6E0u, 0x12A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6E8u;
label_12a6e8:
    // 0x12a6e8: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x12A6E8u;
    {
        const bool branch_taken_0x12a6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a6e8) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A6F0u;
    // 0x12a6f0: 0x8e0500f0  lw          $a1, 0xF0($s0)
    ctx->pc = 0x12a6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x12a6f4: 0xc07dfac  jal         func_1F7EB0
    ctx->pc = 0x12A6F4u;
    SET_GPR_U32(ctx, 31, 0x12A6FCu);
    ctx->pc = 0x12A6F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A6F4u;
    // 0x12a6f8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EB0u, 0x12A6F4u, 0x12A6FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A6FCu;
label_12a6fc:
    // 0x12a6fc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x12a6fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x12a700: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12a704: 0x0  nop
    ctx->pc = 0x12a704u;
    // NOP
    // 0x12a708: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a708u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a70c: 0x0  nop
    ctx->pc = 0x12a70cu;
    // NOP
    // 0x12a710: 0x45010064  bc1t        . + 4 + (0x64 << 2)
    ctx->pc = 0x12A710u;
    {
        const bool branch_taken_0x12a710 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A710u;
        // 0x12a714: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a710) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A718u;
    // 0x12a718: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x12a718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x12a71c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x12a71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x12a720: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x12a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a724: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12a724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a728: 0xc0741fa  jal         func_1D07E8
    ctx->pc = 0x12A728u;
    SET_GPR_U32(ctx, 31, 0x12A730u);
    ctx->pc = 0x12A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A728u;
    // 0x12a72c: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
    ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D07E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07E8u, 0x12A728u, 0x12A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A730u;
label_12a730:
    // 0x12a730: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A730u;
    {
        const bool branch_taken_0x12a730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a730) {
            ctx->pc = 0x12A748u;
            goto label_12a748;
        }
    }
    ctx->pc = 0x12A738u;
    // 0x12a738: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12a73c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a73cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a740: 0x0  nop
    ctx->pc = 0x12a740u;
    // NOP
    // 0x12a744: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x12a744u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_12a748:
    // 0x12a748: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x12a748u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x12a74c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12a74cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12a750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a754: 0x0  nop
    ctx->pc = 0x12a754u;
    // NOP
    // 0x12a758: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12a758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a75c: 0x0  nop
    ctx->pc = 0x12a75cu;
    // NOP
    // 0x12a760: 0x45010050  bc1t        . + 4 + (0x50 << 2)
    ctx->pc = 0x12A760u;
    {
        const bool branch_taken_0x12a760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a760) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A768u;
    // 0x12a768: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x12a768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x12a76c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a76cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a770: 0x0  nop
    ctx->pc = 0x12a770u;
    // NOP
    // 0x12a774: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x12a774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a778: 0x0  nop
    ctx->pc = 0x12a778u;
    // NOP
    // 0x12a77c: 0x45010049  bc1t        . + 4 + (0x49 << 2)
    ctx->pc = 0x12A77Cu;
    {
        const bool branch_taken_0x12a77c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a77c) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A784u;
    // 0x12a784: 0xc0741fa  jal         func_1D07E8
    ctx->pc = 0x12A784u;
    SET_GPR_U32(ctx, 31, 0x12A78Cu);
    ctx->pc = 0x12A788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A784u;
    // 0x12a788: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D07E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D07E8u, 0x12A784u, 0x12A78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A78Cu;
label_12a78c:
    // 0x12a78c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12A78Cu;
    {
        const bool branch_taken_0x12a78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a78c) {
            ctx->pc = 0x12A7F0u;
            goto label_12a7f0;
        }
    }
    ctx->pc = 0x12A794u;
    // 0x12a794: 0x8e4400f0  lw          $a0, 0xF0($s2)
    ctx->pc = 0x12a794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x12a798: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x12a798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x12a79c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x12a79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x12a7a0: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x12a7a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x12a7a4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x12a7a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x12a7a8: 0xc0b680e  jal         func_2DA038
    ctx->pc = 0x12A7A8u;
    SET_GPR_U32(ctx, 31, 0x12A7B0u);
    ctx->pc = 0x12A7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A7A8u;
    // 0x12a7ac: 0x8e0500f0  lw          $a1, 0xF0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA038u, 0x12A7A8u, 0x12A7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A7B0u;
label_12a7b0:
    // 0x12a7b0: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x12a7b0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x12a7b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a7b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a7b8: 0x0  nop
    ctx->pc = 0x12a7b8u;
    // NOP
    // 0x12a7bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a7bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a7c0: 0x0  nop
    ctx->pc = 0x12a7c0u;
    // NOP
    // 0x12a7c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x12A7C4u;
    {
        const bool branch_taken_0x12a7c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7C4u;
        // 0x12a7c8: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7c4) {
            ctx->pc = 0x12A7D0u;
            goto label_12a7d0;
        }
    }
    ctx->pc = 0x12A7CCu;
    // 0x12a7cc: 0x46000887  neg.s       $f2, $f1
    ctx->pc = 0x12a7ccu;
    ctx->f[2] = FPU_NEG_S(ctx->f[1]);
label_12a7d0:
    // 0x12a7d0: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x12a7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x12a7d4: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x12a7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x12a7d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12a7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a7dc: 0x0  nop
    ctx->pc = 0x12a7dcu;
    // NOP
    // 0x12a7e0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x12a7e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a7e4: 0x0  nop
    ctx->pc = 0x12a7e4u;
    // NOP
    // 0x12a7e8: 0x4501002e  bc1t        . + 4 + (0x2E << 2)
    ctx->pc = 0x12A7E8u;
    {
        const bool branch_taken_0x12a7e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a7e8) {
            ctx->pc = 0x12A8A4u;
            goto label_12a8a4;
        }
    }
    ctx->pc = 0x12A7F0u;
label_12a7f0:
    // 0x12a7f0: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x12a7f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a7f4: 0xfba00050  sqc2        $vf0, 0x50($sp)
    ctx->pc = 0x12a7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x12a7f8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x12a7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x12a7fc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x12a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12a800: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A800u;
    {
        const bool branch_taken_0x12a800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a800) {
            ctx->pc = 0x12A804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A800u;
            // 0x12a804: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A824u;
            goto label_12a824;
        }
    }
    ctx->pc = 0x12A808u;
    // 0x12a808: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12a808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a80c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x12a80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x12a810: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12a810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a814: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12a814u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12a818: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a81c: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x12a81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x12a820: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x12a820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_12a824:
    // 0x12a824: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x12a824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x12a828: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12A828u;
    {
        const bool branch_taken_0x12a828 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A828u;
        // 0x12a82c: 0xc7a10044  lwc1        $f1, 0x44($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a828) {
            ctx->pc = 0x12A84Cu;
            goto label_12a84c;
        }
    }
    ctx->pc = 0x12A830u;
    // 0x12a830: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12a830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a834: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x12a834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x12a838: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x12a838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a83c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x12a83cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12a840: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12a840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a844: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x12a844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x12a848: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x12a848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a84c:
    // 0x12a84c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a850: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12a850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12a854: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12a854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12a858: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12a858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a85c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x12a85cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x12a860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a864: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x12a864u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x12a868: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x12a868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x12a86c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12a86cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12a870: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x12a870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x12a874: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x12a874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x12a878: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x12a878u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12a87c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x12a87cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x12a880: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x12a880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x12a884: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x12a884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x12a888: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x12a888u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a88c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x12a88cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x12a890: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x12a890u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a894: 0xc04c784  jal         func_131E10
    ctx->pc = 0x12A894u;
    SET_GPR_U32(ctx, 31, 0x12A89Cu);
    ctx->pc = 0x12A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A894u;
    // 0x12a898: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x12A894u, 0x12A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12A89Cu;
label_12a89c:
    // 0x12a89c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A89Cu;
    {
        const bool branch_taken_0x12a89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A89Cu;
        // 0x12a8a0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a89c) {
            ctx->pc = 0x12A8B0u;
            goto label_12a8b0;
        }
    }
    ctx->pc = 0x12A8A4u;
label_12a8a4:
    // 0x12a8a4: 0x1633ff74  bne         $s1, $s3, . + 4 + (-0x8C << 2)
    ctx->pc = 0x12A8A4u;
    {
        const bool branch_taken_0x12a8a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x12A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8A4u;
        // 0x12a8a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8a4) {
            ctx->pc = 0x12A678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a678;
        }
    }
    ctx->pc = 0x12A8ACu;
    // 0x12a8ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x12a8acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a8b0:
    // 0x12a8b0: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x12a8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12a8b4: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x12a8b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12a8b8: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x12a8b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12a8bc: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x12a8bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12a8c0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x12a8c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12a8c4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x12a8c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12a8c8: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x12a8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12a8cc: 0x3e00008  jr          $ra
    ctx->pc = 0x12A8CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8CCu;
        // 0x12a8d0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A8CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12A8D4u;
    // 0x12a8d4: 0x0  nop
    ctx->pc = 0x12a8d4u;
    // NOP
    ctx->pc = 0x12a8d8u;
}
