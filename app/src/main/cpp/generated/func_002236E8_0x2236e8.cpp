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

// Function: func_002236E8
// Address: 0x2236e8 - 0x224090
void func_002236E8_0x2236e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002236E8_0x2236e8");
#endif

    switch (ctx->pc) {
        case 0x223728u: goto label_223728;
        case 0x22375cu: goto label_22375c;
        case 0x2237a0u: goto label_2237a0;
        case 0x2237d0u: goto label_2237d0;
        case 0x2237f8u: goto label_2237f8;
        case 0x223878u: goto label_223878;
        case 0x2238fcu: goto label_2238fc;
        case 0x223938u: goto label_223938;
        case 0x223960u: goto label_223960;
        case 0x2239f4u: goto label_2239f4;
        case 0x223a5cu: goto label_223a5c;
        case 0x223a80u: goto label_223a80;
        case 0x223aa0u: goto label_223aa0;
        case 0x223aa8u: goto label_223aa8;
        case 0x223ac8u: goto label_223ac8;
        case 0x223b4cu: goto label_223b4c;
        case 0x223b84u: goto label_223b84;
        case 0x223c3cu: goto label_223c3c;
        case 0x223c48u: goto label_223c48;
        case 0x223c98u: goto label_223c98;
        case 0x223ca8u: goto label_223ca8;
        case 0x223cc4u: goto label_223cc4;
        case 0x223cecu: goto label_223cec;
        case 0x223d3cu: goto label_223d3c;
        case 0x223d4cu: goto label_223d4c;
        case 0x223d78u: goto label_223d78;
        case 0x223d94u: goto label_223d94;
        case 0x223da4u: goto label_223da4;
        case 0x223e04u: goto label_223e04;
        case 0x223e78u: goto label_223e78;
        case 0x223e94u: goto label_223e94;
        case 0x223eb4u: goto label_223eb4;
        case 0x223ef0u: goto label_223ef0;
        case 0x223f00u: goto label_223f00;
        case 0x223f14u: goto label_223f14;
        case 0x223f20u: goto label_223f20;
        case 0x223f30u: goto label_223f30;
        case 0x223f44u: goto label_223f44;
        case 0x223f70u: goto label_223f70;
        case 0x223f9cu: goto label_223f9c;
        case 0x223fc8u: goto label_223fc8;
        case 0x223fe8u: goto label_223fe8;
        case 0x223ff0u: goto label_223ff0;
        case 0x224010u: goto label_224010;
        case 0x22401cu: goto label_22401c;
        case 0x224024u: goto label_224024;
        default: break;
    }

    ctx->pc = 0x2236e8u;

    // 0x2236e8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2236e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2236ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2236ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2236f0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2236f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2236f4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2236f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2236f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2236f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2236fc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2236fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x223700: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x223700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x223704: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x223704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x223708: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x223708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x22370c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22370cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x223710: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x223710u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x223714: 0xa222186a  sb          $v0, 0x186A($s1)
    ctx->pc = 0x223714u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6250), (uint8_t)GPR_U32(ctx, 2));
    // 0x223718: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x223718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22371c: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x22371cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x223720: 0xc098a84  jal         func_262A10
    ctx->pc = 0x223720u;
    SET_GPR_U32(ctx, 31, 0x223728u);
    ctx->pc = 0x223724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223720u;
    // 0x223724: 0xae2316d4  sw          $v1, 0x16D4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262A10u, 0x223720u, 0x223728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223728u;
label_223728:
    // 0x223728: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x223728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x22372c: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x22372cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x223730: 0x1040023a  beqz        $v0, . + 4 + (0x23A << 2)
    ctx->pc = 0x223730u;
    {
        const bool branch_taken_0x223730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223730u;
        // 0x223734: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223730) {
            ctx->pc = 0x22401Cu;
            goto label_22401c;
        }
    }
    ctx->pc = 0x223738u;
    // 0x223738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22373c: 0x24428370  addiu       $v0, $v0, -0x7C90
    ctx->pc = 0x22373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935408));
    // 0x223740: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223744: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223748: 0x800008  jr          $a0
    ctx->pc = 0x223748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223750u: goto label_223750;
            case 0x223A6Cu: goto label_223a6c;
            case 0x223AC0u: goto label_223ac0;
            case 0x223B7Cu: goto label_223b7c;
            case 0x223D44u: goto label_223d44;
            case 0x223D8Cu: goto label_223d8c;
            case 0x223DFCu: goto label_223dfc;
            case 0x223E8Cu: goto label_223e8c;
            case 0x223F28u: goto label_223f28;
            case 0x223FB0u: goto label_223fb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223748u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x223750u;
label_223750:
    // 0x223750: 0xa2201864  sb          $zero, 0x1864($s1)
    ctx->pc = 0x223750u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x223754: 0xc09d91a  jal         func_276468
    ctx->pc = 0x223754u;
    SET_GPR_U32(ctx, 31, 0x22375Cu);
    ctx->pc = 0x223758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223754u;
    // 0x223758: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x223754u, 0x22375Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22375Cu;
label_22375c:
    // 0x22375c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x22375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x223760: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x223760u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x223764: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x223764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x223768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223768u;
    {
        const bool branch_taken_0x223768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22376Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223768u;
        // 0x22376c: 0x28620250  slti        $v0, $v1, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223768) {
            ctx->pc = 0x223778u;
            goto label_223778;
        }
    }
    ctx->pc = 0x223770u;
    // 0x223770: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x223770u;
    {
        const bool branch_taken_0x223770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223770) {
            ctx->pc = 0x223774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223770u;
            // 0x223774: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2238C8u;
            goto label_2238c8;
        }
    }
    ctx->pc = 0x223778u;
label_223778:
    // 0x223778: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x223778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22377c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22377cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x223780: 0x24549b70  addiu       $s4, $v0, -0x6490
    ctx->pc = 0x223780u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941552));
    // 0x223784: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x223784u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223788: 0x8c65098c  lw          $a1, 0x98C($v1)
    ctx->pc = 0x223788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2444)));
    // 0x22378c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x22378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223790: 0x8c620990  lw          $v0, 0x990($v1)
    ctx->pc = 0x223790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2448)));
    // 0x223794: 0xa39021  addu        $s2, $a1, $v1
    ctx->pc = 0x223794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x223798: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x223798u;
    SET_GPR_U32(ctx, 31, 0x2237A0u);
    ctx->pc = 0x22379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223798u;
    // 0x22379c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x223798u, 0x2237A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237A0u;
label_2237a0:
    // 0x2237a0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2237a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2237a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2237A4u;
    {
        const bool branch_taken_0x2237a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2237A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2237A4u;
        // 0x2237a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2237a4) {
            ctx->pc = 0x2237B8u;
            goto label_2237b8;
        }
    }
    ctx->pc = 0x2237ACu;
    // 0x2237ac: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x2237acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x2237b0: 0x8c620994  lw          $v0, 0x994($v1)
    ctx->pc = 0x2237b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2452)));
    // 0x2237b4: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x2237b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2237b8:
    // 0x2237b8: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2237b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2237bc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x2237bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2237c0: 0x24070041  addiu       $a3, $zero, 0x41
    ctx->pc = 0x2237c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x2237c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2237c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237c8: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x2237C8u;
    SET_GPR_U32(ctx, 31, 0x2237D0u);
    ctx->pc = 0x2237CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237C8u;
    // 0x2237cc: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x2237C8u, 0x2237D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237D0u;
label_2237d0:
    // 0x2237d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2237d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2237d4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2237d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2237d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2237d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2237dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2237dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2237e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2237e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2237e4: 0xae2005c0  sw          $zero, 0x5C0($s1)
    ctx->pc = 0x2237e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 0));
    // 0x2237e8: 0xae2005c4  sw          $zero, 0x5C4($s1)
    ctx->pc = 0x2237e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 0));
    // 0x2237ec: 0xe62105c8  swc1        $f1, 0x5C8($s1)
    ctx->pc = 0x2237ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
    // 0x2237f0: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2237F0u;
    SET_GPR_U32(ctx, 31, 0x2237F8u);
    ctx->pc = 0x2237F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2237F0u;
    // 0x2237f4: 0xe62005cc  swc1        $f0, 0x5CC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1484), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2237F0u, 0x2237F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2237F8u;
label_2237f8:
    // 0x2237f8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2237f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2237fc: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2237fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x223800: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223800u;
    {
        const bool branch_taken_0x223800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223800u;
        // 0x223804: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223800) {
            ctx->pc = 0x223820u;
            goto label_223820;
        }
    }
    ctx->pc = 0x223808u;
    // 0x223808: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223808u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22380c: 0x244283a0  addiu       $v0, $v0, -0x7C60
    ctx->pc = 0x22380cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935456));
    // 0x223810: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223814: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223818: 0x800008  jr          $a0
    ctx->pc = 0x223818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223820u: goto label_223820;
            case 0x223830u: goto label_223830;
            case 0x223840u: goto label_223840;
            case 0x223850u: goto label_223850;
            case 0x223860u: goto label_223860;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223818u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x223820u;
label_223820:
    // 0x223820: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x223820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x223824: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223824u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223828: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x223828u;
    {
        const bool branch_taken_0x223828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22382Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223828u;
        // 0x22382c: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223828) {
            ctx->pc = 0x223870u;
            goto label_223870;
        }
    }
    ctx->pc = 0x223830u;
label_223830:
    // 0x223830: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x223830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x223834: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223834u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223838: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x223838u;
    {
        const bool branch_taken_0x223838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22383Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223838u;
        // 0x22383c: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223838) {
            ctx->pc = 0x223870u;
            goto label_223870;
        }
    }
    ctx->pc = 0x223840u;
label_223840:
    // 0x223840: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x223840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x223844: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223844u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223848: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x223848u;
    {
        const bool branch_taken_0x223848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223848u;
        // 0x22384c: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223848) {
            ctx->pc = 0x223870u;
            goto label_223870;
        }
    }
    ctx->pc = 0x223850u;
label_223850:
    // 0x223850: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x223850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x223854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223858: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x223858u;
    {
        const bool branch_taken_0x223858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223858u;
        // 0x22385c: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223858) {
            ctx->pc = 0x223870u;
            goto label_223870;
        }
    }
    ctx->pc = 0x223860u;
label_223860:
    // 0x223860: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223864: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223868: 0x0  nop
    ctx->pc = 0x223868u;
    // NOP
    // 0x22386c: 0xe62005c8  swc1        $f0, 0x5C8($s1)
    ctx->pc = 0x22386cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
label_223870:
    // 0x223870: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x223870u;
    SET_GPR_U32(ctx, 31, 0x223878u);
    ctx->pc = 0x223874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223870u;
    // 0x223874: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x223870u, 0x223878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223878u;
label_223878:
    // 0x223878: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x223878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x22387c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x22387cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x223880: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223880u;
    {
        const bool branch_taken_0x223880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223880u;
        // 0x223884: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223880) {
            ctx->pc = 0x2238A0u;
            goto label_2238a0;
        }
    }
    ctx->pc = 0x223888u;
    // 0x223888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22388c: 0x244283c0  addiu       $v0, $v0, -0x7C40
    ctx->pc = 0x22388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935488));
    // 0x223890: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223894: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223898: 0x800008  jr          $a0
    ctx->pc = 0x223898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2238A0u: goto label_2238a0;
            case 0x2238A8u: goto label_2238a8;
            case 0x2238B0u: goto label_2238b0;
            case 0x2238B8u: goto label_2238b8;
            case 0x2238C0u: goto label_2238c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223898u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2238A0u;
label_2238a0:
    // 0x2238a0: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x2238A0u;
    {
        const bool branch_taken_0x2238a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238A0u;
        // 0x2238a4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238a0) {
            ctx->pc = 0x223A38u;
            goto label_223a38;
        }
    }
    ctx->pc = 0x2238A8u;
label_2238a8:
    // 0x2238a8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2238A8u;
    {
        const bool branch_taken_0x2238a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238A8u;
        // 0x2238ac: 0x24020023  addiu       $v0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238a8) {
            ctx->pc = 0x223A38u;
            goto label_223a38;
        }
    }
    ctx->pc = 0x2238B0u;
label_2238b0:
    // 0x2238b0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2238B0u;
    {
        const bool branch_taken_0x2238b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238B0u;
        // 0x2238b4: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238b0) {
            ctx->pc = 0x223A38u;
            goto label_223a38;
        }
    }
    ctx->pc = 0x2238B8u;
label_2238b8:
    // 0x2238b8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2238B8u;
    {
        const bool branch_taken_0x2238b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238B8u;
        // 0x2238bc: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238b8) {
            ctx->pc = 0x223A38u;
            goto label_223a38;
        }
    }
    ctx->pc = 0x2238C0u;
label_2238c0:
    // 0x2238c0: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x2238C0u;
    {
        const bool branch_taken_0x2238c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2238C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2238C0u;
        // 0x2238c4: 0x240203e7  addiu       $v0, $zero, 0x3E7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2238c0) {
            ctx->pc = 0x223A38u;
            goto label_223a38;
        }
    }
    ctx->pc = 0x2238C8u;
label_2238c8:
    // 0x2238c8: 0x3c030057  lui         $v1, 0x57
    ctx->pc = 0x2238c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)87 << 16));
    // 0x2238cc: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x2238ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
    // 0x2238d0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2238d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2238d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2238d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2238d8: 0x24749b70  addiu       $s4, $v1, -0x6490
    ctx->pc = 0x2238d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941552));
    // 0x2238dc: 0x8c4519f4  lw          $a1, 0x19F4($v0)
    ctx->pc = 0x2238dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6644)));
    // 0x2238e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2238e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238e4: 0x8c4619f8  lw          $a2, 0x19F8($v0)
    ctx->pc = 0x2238e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6648)));
    // 0x2238e8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x2238e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2238ec: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x2238ecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2238f0: 0xe62005c8  swc1        $f0, 0x5C8($s1)
    ctx->pc = 0x2238f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
    // 0x2238f4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2238F4u;
    SET_GPR_U32(ctx, 31, 0x2238FCu);
    ctx->pc = 0x2238F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2238F4u;
    // 0x2238f8: 0xc28021  addu        $s0, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2238F4u, 0x2238FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2238FCu;
label_2238fc:
    // 0x2238fc: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x2238fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x223900: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223900u;
    {
        const bool branch_taken_0x223900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223900u;
        // 0x223904: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223900) {
            ctx->pc = 0x223920u;
            goto label_223920;
        }
    }
    ctx->pc = 0x223908u;
    // 0x223908: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x223908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x22390c: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x22390cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x223910: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223914: 0x8c4319fc  lw          $v1, 0x19FC($v0)
    ctx->pc = 0x223914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6652)));
    // 0x223918: 0xe62005c8  swc1        $f0, 0x5C8($s1)
    ctx->pc = 0x223918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
    // 0x22391c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x22391cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_223920:
    // 0x223920: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x223920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x223924: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x223924u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x223928: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x223928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22392c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x22392cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223930: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x223930u;
    SET_GPR_U32(ctx, 31, 0x223938u);
    ctx->pc = 0x223934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223930u;
    // 0x223934: 0x240900f5  addiu       $t1, $zero, 0xF5 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x223930u, 0x223938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223938u;
label_223938:
    // 0x223938: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x223938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x22393c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22393cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223940: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x223940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223944: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22394c: 0xae2005c0  sw          $zero, 0x5C0($s1)
    ctx->pc = 0x22394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1472), GPR_U32(ctx, 0));
    // 0x223950: 0xae2005c4  sw          $zero, 0x5C4($s1)
    ctx->pc = 0x223950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1476), GPR_U32(ctx, 0));
    // 0x223954: 0xe62105c8  swc1        $f1, 0x5C8($s1)
    ctx->pc = 0x223954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
    // 0x223958: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x223958u;
    SET_GPR_U32(ctx, 31, 0x223960u);
    ctx->pc = 0x22395Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223958u;
    // 0x22395c: 0xe62005cc  swc1        $f0, 0x5CC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1484), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x223958u, 0x223960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223960u;
label_223960:
    // 0x223960: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x223960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223964: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x223964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x223968: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223968u;
    {
        const bool branch_taken_0x223968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22396Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223968u;
        // 0x22396c: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223968) {
            ctx->pc = 0x223988u;
            goto label_223988;
        }
    }
    ctx->pc = 0x223970u;
    // 0x223970: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x223974: 0x244283e0  addiu       $v0, $v0, -0x7C20
    ctx->pc = 0x223974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935520));
    // 0x223978: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22397c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x22397cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223980: 0x800008  jr          $a0
    ctx->pc = 0x223980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223988u: goto label_223988;
            case 0x22399Cu: goto label_22399c;
            case 0x2239B0u: goto label_2239b0;
            case 0x2239C4u: goto label_2239c4;
            case 0x2239D8u: goto label_2239d8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223980u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x223988u;
label_223988:
    // 0x223988: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x223988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x22398c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x22398cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x223990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223994: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x223994u;
    {
        const bool branch_taken_0x223994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223994u;
        // 0x223998: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223994) {
            ctx->pc = 0x2239ECu;
            goto label_2239ec;
        }
    }
    ctx->pc = 0x22399Cu;
label_22399c:
    // 0x22399c: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x22399cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x2239a0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2239a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2239a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2239a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2239a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2239A8u;
    {
        const bool branch_taken_0x2239a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239A8u;
        // 0x2239ac: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239a8) {
            ctx->pc = 0x2239ECu;
            goto label_2239ec;
        }
    }
    ctx->pc = 0x2239B0u;
label_2239b0:
    // 0x2239b0: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x2239b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x2239b4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2239b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2239b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2239b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2239bc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2239BCu;
    {
        const bool branch_taken_0x2239bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239BCu;
        // 0x2239c0: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239bc) {
            ctx->pc = 0x2239ECu;
            goto label_2239ec;
        }
    }
    ctx->pc = 0x2239C4u;
label_2239c4:
    // 0x2239c4: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x2239c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x2239c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x2239c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x2239cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2239ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2239d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2239D0u;
    {
        const bool branch_taken_0x2239d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2239D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239D0u;
        // 0x2239d4: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239d0) {
            ctx->pc = 0x2239ECu;
            goto label_2239ec;
        }
    }
    ctx->pc = 0x2239D8u;
label_2239d8:
    // 0x2239d8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2239d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x2239dc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2239dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2239e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2239e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2239e4: 0x0  nop
    ctx->pc = 0x2239e4u;
    // NOP
    // 0x2239e8: 0xe62005c8  swc1        $f0, 0x5C8($s1)
    ctx->pc = 0x2239e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
label_2239ec:
    // 0x2239ec: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x2239ECu;
    SET_GPR_U32(ctx, 31, 0x2239F4u);
    ctx->pc = 0x2239F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2239ECu;
    // 0x2239f0: 0x26a49b70  addiu       $a0, $s5, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x2239ECu, 0x2239F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2239F4u;
label_2239f4:
    // 0x2239f4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2239f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2239f8: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x2239f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2239fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2239FCu;
    {
        const bool branch_taken_0x2239fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2239FCu;
        // 0x223a00: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2239fc) {
            ctx->pc = 0x223A1Cu;
            goto label_223a1c;
        }
    }
    ctx->pc = 0x223A04u;
    // 0x223a04: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x223a04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x223a08: 0x24428400  addiu       $v0, $v0, -0x7C00
    ctx->pc = 0x223a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935552));
    // 0x223a0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x223a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223a10: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x223a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223a14: 0x800008  jr          $a0
    ctx->pc = 0x223A14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x223A1Cu: goto label_223a1c;
            case 0x223A24u: goto label_223a24;
            case 0x223A2Cu: goto label_223a2c;
            case 0x223A34u: goto label_223a34;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223A14u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x223A1Cu;
label_223a1c:
    // 0x223a1c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x223A1Cu;
    {
        const bool branch_taken_0x223a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A1Cu;
        // 0x223a20: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a1c) {
            ctx->pc = 0x223A38u;
            goto label_223a38;
        }
    }
    ctx->pc = 0x223A24u;
label_223a24:
    // 0x223a24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x223A24u;
    {
        const bool branch_taken_0x223a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A24u;
        // 0x223a28: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a24) {
            ctx->pc = 0x223A38u;
            goto label_223a38;
        }
    }
    ctx->pc = 0x223A2Cu;
label_223a2c:
    // 0x223a2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223A2Cu;
    {
        const bool branch_taken_0x223a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A2Cu;
        // 0x223a30: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a2c) {
            ctx->pc = 0x223A38u;
            goto label_223a38;
        }
    }
    ctx->pc = 0x223A34u;
label_223a34:
    // 0x223a34: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x223a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_223a38:
    // 0x223a38: 0xae2205f0  sw          $v0, 0x5F0($s1)
    ctx->pc = 0x223a38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    // 0x223a3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x223a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223a40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a44: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223a44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a48: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x223a48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a50: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x223a50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x223a54: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x223A54u;
    SET_GPR_U32(ctx, 31, 0x223A5Cu);
    ctx->pc = 0x223A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A54u;
    // 0x223a58: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x223A54u, 0x223A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A5Cu;
label_223a5c:
    // 0x223a5c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x223a5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x223a60: 0xae2005fc  sw          $zero, 0x5FC($s1)
    ctx->pc = 0x223a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 0));
    // 0x223a64: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223a68: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223a68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223a6c:
    // 0x223a6c: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x223a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x223a70: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x223A70u;
    {
        const bool branch_taken_0x223a70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223A70u;
        // 0x223a74: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a70) {
            ctx->pc = 0x223AA0u;
            goto label_223aa0;
        }
    }
    ctx->pc = 0x223A78u;
    // 0x223a78: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x223A78u;
    SET_GPR_U32(ctx, 31, 0x223A80u);
    ctx->pc = 0x223A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A78u;
    // 0x223a7c: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x223A78u, 0x223A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223A80u;
label_223a80:
    // 0x223a80: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x223a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223a84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a88: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x223a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x223a8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x223a8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x223a90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223a90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223a94: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x223a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x223a98: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x223A98u;
    SET_GPR_U32(ctx, 31, 0x223AA0u);
    ctx->pc = 0x223A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223A98u;
    // 0x223a9c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x223A98u, 0x223AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AA0u;
label_223aa0:
    // 0x223aa0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x223AA0u;
    SET_GPR_U32(ctx, 31, 0x223AA8u);
    ctx->pc = 0x223AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AA0u;
    // 0x223aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x223AA0u, 0x223AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AA8u;
label_223aa8:
    // 0x223aa8: 0x10400115  beqz        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x223AA8u;
    {
        const bool branch_taken_0x223aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223aa8) {
            ctx->pc = 0x223F00u;
            goto label_223f00;
        }
    }
    ctx->pc = 0x223AB0u;
    // 0x223ab0: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x223ab0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x223ab4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223ab8: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x223AB8u;
    {
        const bool branch_taken_0x223ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AB8u;
        // 0x223abc: 0xa22202f6  sb          $v0, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ab8) {
            ctx->pc = 0x223F00u;
            goto label_223f00;
        }
    }
    ctx->pc = 0x223AC0u;
label_223ac0:
    // 0x223ac0: 0xc09d91a  jal         func_276468
    ctx->pc = 0x223AC0u;
    SET_GPR_U32(ctx, 31, 0x223AC8u);
    ctx->pc = 0x223AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223AC0u;
    // 0x223ac4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x223AC0u, 0x223AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223AC8u;
label_223ac8:
    // 0x223ac8: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x223ac8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x223acc: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x223accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x223ad0: 0x2402024f  addiu       $v0, $zero, 0x24F
    ctx->pc = 0x223ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 591));
    // 0x223ad4: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x223AD4u;
    {
        const bool branch_taken_0x223ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AD4u;
        // 0x223ad8: 0x28620250  slti        $v0, $v1, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ad4) {
            ctx->pc = 0x223B18u;
            goto label_223b18;
        }
    }
    ctx->pc = 0x223ADCu;
    // 0x223adc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223ADCu;
    {
        const bool branch_taken_0x223adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223ADCu;
        // 0x223ae0: 0x2402020c  addiu       $v0, $zero, 0x20C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223adc) {
            ctx->pc = 0x223AF4u;
            goto label_223af4;
        }
    }
    ctx->pc = 0x223AE4u;
    // 0x223ae4: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x223AE4u;
    {
        const bool branch_taken_0x223ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AE4u;
        // 0x223ae8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ae4) {
            ctx->pc = 0x223B1Cu;
            goto label_223b1c;
        }
    }
    ctx->pc = 0x223AECu;
    // 0x223aec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x223AECu;
    {
        const bool branch_taken_0x223aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AECu;
        // 0x223af0: 0x8c430998  lw          $v1, 0x998($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223aec) {
            ctx->pc = 0x223B04u;
            goto label_223b04;
        }
    }
    ctx->pc = 0x223AF4u;
label_223af4:
    // 0x223af4: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x223af4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x223af8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223AF8u;
    {
        const bool branch_taken_0x223af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223AF8u;
        // 0x223afc: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223af8) {
            ctx->pc = 0x223B0Cu;
            goto label_223b0c;
        }
    }
    ctx->pc = 0x223B00u;
    // 0x223b00: 0x8c430998  lw          $v1, 0x998($v0)
    ctx->pc = 0x223b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2456)));
label_223b04:
    // 0x223b04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x223B04u;
    {
        const bool branch_taken_0x223b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B04u;
        // 0x223b08: 0x8c44099c  lw          $a0, 0x99C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2460)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b04) {
            ctx->pc = 0x223B24u;
            goto label_223b24;
        }
    }
    ctx->pc = 0x223B0Cu;
label_223b0c:
    // 0x223b0c: 0x8c431a00  lw          $v1, 0x1A00($v0)
    ctx->pc = 0x223b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6656)));
    // 0x223b10: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x223B10u;
    {
        const bool branch_taken_0x223b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B10u;
        // 0x223b14: 0x8c441a04  lw          $a0, 0x1A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b10) {
            ctx->pc = 0x223B24u;
            goto label_223b24;
        }
    }
    ctx->pc = 0x223B18u;
label_223b18:
    // 0x223b18: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x223b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_223b1c:
    // 0x223b1c: 0x8c431f68  lw          $v1, 0x1F68($v0)
    ctx->pc = 0x223b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8040)));
    // 0x223b20: 0x8c441f6c  lw          $a0, 0x1F6C($v0)
    ctx->pc = 0x223b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8044)));
label_223b24:
    // 0x223b24: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x223b24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223b28: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x223b28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x223b2c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x223b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223b30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223b30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b34: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223b34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b38: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x223b38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b40: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x223b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223b44: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x223B44u;
    SET_GPR_U32(ctx, 31, 0x223B4Cu);
    ctx->pc = 0x223B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B44u;
    // 0x223b48: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x223B44u, 0x223B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B4Cu;
label_223b4c:
    // 0x223b4c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x223b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x223b50: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x223b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x223b54: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x223b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x223b58: 0x34214ff3  ori         $at, $at, 0x4FF3
    ctx->pc = 0x223b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20467);
    // 0x223b5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223b60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223b64: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x223b64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x223b68: 0xe62005d8  swc1        $f0, 0x5D8($s1)
    ctx->pc = 0x223b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1496), bits); }
    // 0x223b6c: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x223b70: 0xe62005d0  swc1        $f0, 0x5D0($s1)
    ctx->pc = 0x223b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1488), bits); }
    // 0x223b74: 0xe62005d4  swc1        $f0, 0x5D4($s1)
    ctx->pc = 0x223b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1492), bits); }
    // 0x223b78: 0xae2005f4  sw          $zero, 0x5F4($s1)
    ctx->pc = 0x223b78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1524), GPR_U32(ctx, 0));
label_223b7c:
    // 0x223b7c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x223B7Cu;
    SET_GPR_U32(ctx, 31, 0x223B84u);
    ctx->pc = 0x223B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223B7Cu;
    // 0x223b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x223B7Cu, 0x223B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223B84u;
label_223b84:
    // 0x223b84: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x223B84u;
    {
        const bool branch_taken_0x223b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223b84) {
            ctx->pc = 0x223B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223B84u;
            // 0x223b88: 0xc62005a8  lwc1        $f0, 0x5A8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x223BDCu;
            goto label_223bdc;
        }
    }
    ctx->pc = 0x223B8Cu;
    // 0x223b8c: 0x8e2205f0  lw          $v0, 0x5F0($s1)
    ctx->pc = 0x223b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1520)));
    // 0x223b90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x223b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x223b94: 0x1c400010  bgtz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x223B94u;
    {
        const bool branch_taken_0x223b94 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x223B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223B94u;
        // 0x223b98: 0xae2205f0  sw          $v0, 0x5F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223b94) {
            ctx->pc = 0x223BD8u;
            goto label_223bd8;
        }
    }
    ctx->pc = 0x223B9Cu;
    // 0x223b9c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x223b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x223ba0: 0x2402020c  addiu       $v0, $zero, 0x20C
    ctx->pc = 0x223ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    // 0x223ba4: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223BA4u;
    {
        const bool branch_taken_0x223ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BA4u;
        // 0x223ba8: 0x2862020c  slti        $v0, $v1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)524) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ba4) {
            ctx->pc = 0x223BC8u;
            goto label_223bc8;
        }
    }
    ctx->pc = 0x223BACu;
    // 0x223bac: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223BACu;
    {
        const bool branch_taken_0x223bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BACu;
        // 0x223bb0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bac) {
            ctx->pc = 0x223BD4u;
            goto label_223bd4;
        }
    }
    ctx->pc = 0x223BB4u;
    // 0x223bb4: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x223bb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x223bb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223BB8u;
    {
        const bool branch_taken_0x223bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BB8u;
        // 0x223bbc: 0x2862024f  slti        $v0, $v1, 0x24F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bb8) {
            ctx->pc = 0x223BD0u;
            goto label_223bd0;
        }
    }
    ctx->pc = 0x223BC0u;
    // 0x223bc0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x223BC0u;
    {
        const bool branch_taken_0x223bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC0u;
        // 0x223bc4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bc0) {
            ctx->pc = 0x223BD4u;
            goto label_223bd4;
        }
    }
    ctx->pc = 0x223BC8u;
label_223bc8:
    // 0x223bc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x223BC8u;
    {
        const bool branch_taken_0x223bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223BC8u;
        // 0x223bcc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223bc8) {
            ctx->pc = 0x223BD4u;
            goto label_223bd4;
        }
    }
    ctx->pc = 0x223BD0u;
label_223bd0:
    // 0x223bd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x223bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_223bd4:
    // 0x223bd4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223bd8:
    // 0x223bd8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x223bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_223bdc:
    // 0x223bdc: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x223bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x223be0: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x223be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x223be4: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x223be4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223be8: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x223be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223bec: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x223becu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223bf0: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x223bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x223bf4: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x223bf4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x223bf8: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x223bf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x223bfc: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x223bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223c00: 0xd8640000  lqc2        $vf4, 0x0($v1)
    ctx->pc = 0x223c00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x223c04: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x223c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x223c08: 0x26220330  addiu       $v0, $s1, 0x330
    ctx->pc = 0x223c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x223c0c: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x223C0Cu;
    {
        const bool branch_taken_0x223c0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x223C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C0Cu;
        // 0x223c10: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c0c) {
            ctx->pc = 0x223C28u;
            goto label_223c28;
        }
    }
    ctx->pc = 0x223C14u;
    // 0x223c14: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x223c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223c18: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x223c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x223c1c: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x223c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x223c20: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x223c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x223c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_223c28:
    // 0x223c28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223c2c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x223c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223c34: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x223C34u;
    SET_GPR_U32(ctx, 31, 0x223C3Cu);
    ctx->pc = 0x223C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C34u;
    // 0x223c38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x223C34u, 0x223C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C3Cu;
label_223c3c:
    // 0x223c3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x223c3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x223c40: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x223C40u;
    SET_GPR_U32(ctx, 31, 0x223C48u);
    ctx->pc = 0x223C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C40u;
    // 0x223c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x223C40u, 0x223C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C48u;
label_223c48:
    // 0x223c48: 0x8e220670  lw          $v0, 0x670($s1)
    ctx->pc = 0x223c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x223c4c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x223c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x223c50: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x223C50u;
    {
        const bool branch_taken_0x223c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x223c50) {
            ctx->pc = 0x223C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223C50u;
            // 0x223c54: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223C7Cu;
            goto label_223c7c;
        }
    }
    ctx->pc = 0x223C58u;
    // 0x223c58: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x223c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x223c5c: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x223c5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x223c60: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x223C60u;
    {
        const bool branch_taken_0x223c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C60u;
        // 0x223c64: 0x28620250  slti        $v0, $v1, 0x250 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)592) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c60) {
            ctx->pc = 0x223C70u;
            goto label_223c70;
        }
    }
    ctx->pc = 0x223C68u;
    // 0x223c68: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x223C68u;
    {
        const bool branch_taken_0x223c68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223c68) {
            ctx->pc = 0x223C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223C68u;
            // 0x223c6c: 0x92221864  lbu         $v0, 0x1864($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223C7Cu;
            goto label_223c7c;
        }
    }
    ctx->pc = 0x223C70u;
label_223c70:
    // 0x223c70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x223c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x223c74: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x223c78: 0x92221864  lbu         $v0, 0x1864($s1)
    ctx->pc = 0x223c78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6244)));
label_223c7c:
    // 0x223c7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223C7Cu;
    {
        const bool branch_taken_0x223c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C7Cu;
        // 0x223c80: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c7c) {
            ctx->pc = 0x223C88u;
            goto label_223c88;
        }
    }
    ctx->pc = 0x223C84u;
    // 0x223c84: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223c84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223c88:
    // 0x223c88: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x223c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x223c8c: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x223c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x223c90: 0xc0a4c48  jal         func_293120
    ctx->pc = 0x223C90u;
    SET_GPR_U32(ctx, 31, 0x223C98u);
    ctx->pc = 0x223C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223C90u;
    // 0x223c94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293120u, 0x223C90u, 0x223C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223C98u;
label_223c98:
    // 0x223c98: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223C98u;
    {
        const bool branch_taken_0x223c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223C98u;
        // 0x223c9c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223c98) {
            ctx->pc = 0x223CB0u;
            goto label_223cb0;
        }
    }
    ctx->pc = 0x223CA0u;
    // 0x223ca0: 0xc0a4c40  jal         func_293100
    ctx->pc = 0x223CA0u;
    SET_GPR_U32(ctx, 31, 0x223CA8u);
    ctx->pc = 0x223CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CA0u;
    // 0x223ca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293100u, 0x223CA0u, 0x223CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CA8u;
label_223ca8:
    // 0x223ca8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223CA8u;
    {
        const bool branch_taken_0x223ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CA8u;
        // 0x223cac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ca8) {
            ctx->pc = 0x223CB4u;
            goto label_223cb4;
        }
    }
    ctx->pc = 0x223CB0u;
label_223cb0:
    // 0x223cb0: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223cb4:
    // 0x223cb4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x223cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x223cb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223cb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223cbc: 0xc09d622  jal         func_275888
    ctx->pc = 0x223CBCu;
    SET_GPR_U32(ctx, 31, 0x223CC4u);
    ctx->pc = 0x223CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CBCu;
    // 0x223cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x275888u, 0x223CBCu, 0x223CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CC4u;
label_223cc4:
    // 0x223cc4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x223CC4u;
    {
        const bool branch_taken_0x223cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CC4u;
        // 0x223cc8: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cc4) {
            ctx->pc = 0x223D30u;
            goto label_223d30;
        }
    }
    ctx->pc = 0x223CCCu;
    // 0x223ccc: 0x8e220564  lw          $v0, 0x564($s1)
    ctx->pc = 0x223cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x223cd0: 0x2442fdb0  addiu       $v0, $v0, -0x250
    ctx->pc = 0x223cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966704));
    // 0x223cd4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x223cd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x223cd8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x223CD8u;
    {
        const bool branch_taken_0x223cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CD8u;
        // 0x223cdc: 0xa22302f6  sb          $v1, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cd8) {
            ctx->pc = 0x223D30u;
            goto label_223d30;
        }
    }
    ctx->pc = 0x223CE0u;
    // 0x223ce0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x223ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x223ce4: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x223CE4u;
    SET_GPR_U32(ctx, 31, 0x223CECu);
    ctx->pc = 0x223CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223CE4u;
    // 0x223ce8: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x223CE4u, 0x223CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223CECu;
label_223cec:
    // 0x223cec: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x223cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223cf0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x223CF0u;
    {
        const bool branch_taken_0x223cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x223CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223CF0u;
        // 0x223cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223cf0) {
            ctx->pc = 0x223D34u;
            goto label_223d34;
        }
    }
    ctx->pc = 0x223CF8u;
    // 0x223cf8: 0xc6210618  lwc1        $f1, 0x618($s1)
    ctx->pc = 0x223cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223cfc: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x223cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x223d00: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x223d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x223d04: 0x0  nop
    ctx->pc = 0x223d04u;
    // NOP
    // 0x223d08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x223d08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x223d0c: 0x0  nop
    ctx->pc = 0x223d0cu;
    // NOP
    // 0x223d10: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x223D10u;
    {
        const bool branch_taken_0x223d10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x223d10) {
            ctx->pc = 0x223D34u;
            goto label_223d34;
        }
    }
    ctx->pc = 0x223D18u;
    // 0x223d18: 0x922202f7  lbu         $v0, 0x2F7($s1)
    ctx->pc = 0x223d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x223d1c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223D1Cu;
    {
        const bool branch_taken_0x223d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223D1Cu;
        // 0x223d20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223d1c) {
            ctx->pc = 0x223D34u;
            goto label_223d34;
        }
    }
    ctx->pc = 0x223D24u;
    // 0x223d24: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x223d24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x223d28: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x223d28u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x223d2c: 0xa22302f6  sb          $v1, 0x2F6($s1)
    ctx->pc = 0x223d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 3));
label_223d30:
    // 0x223d30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_223d34:
    // 0x223d34: 0xc0989d4  jal         func_262750
    ctx->pc = 0x223D34u;
    SET_GPR_U32(ctx, 31, 0x223D3Cu);
    ctx->pc = 0x223D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D34u;
    // 0x223d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x223D34u, 0x223D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D3Cu;
label_223d3c:
    // 0x223d3c: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x223D3Cu;
    {
        const bool branch_taken_0x223d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d3c) {
            ctx->pc = 0x22401Cu;
            goto label_22401c;
        }
    }
    ctx->pc = 0x223D44u;
label_223d44:
    // 0x223d44: 0xc09d91a  jal         func_276468
    ctx->pc = 0x223D44u;
    SET_GPR_U32(ctx, 31, 0x223D4Cu);
    ctx->pc = 0x223D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D44u;
    // 0x223d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x223D44u, 0x223D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D4Cu;
label_223d4c:
    // 0x223d4c: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x223d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x223d50: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x223d50u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x223d54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x223d54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223d58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d5c: 0x8c6509a0  lw          $a1, 0x9A0($v1)
    ctx->pc = 0x223d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2464)));
    // 0x223d60: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x223d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223d64: 0x8c6609a4  lw          $a2, 0x9A4($v1)
    ctx->pc = 0x223d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2468)));
    // 0x223d68: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x223d68u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223d6c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x223d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x223d70: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x223D70u;
    SET_GPR_U32(ctx, 31, 0x223D78u);
    ctx->pc = 0x223D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D70u;
    // 0x223d74: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x223D70u, 0x223D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D78u;
label_223d78:
    // 0x223d78: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x223d78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x223d7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x223d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223d80: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x223d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x223d84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223d88: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223d88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223d8c:
    // 0x223d8c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x223D8Cu;
    SET_GPR_U32(ctx, 31, 0x223D94u);
    ctx->pc = 0x223D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D8Cu;
    // 0x223d90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x223D8Cu, 0x223D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223D94u;
label_223d94:
    // 0x223d94: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x223D94u;
    {
        const bool branch_taken_0x223d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223d94) {
            ctx->pc = 0x223D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223D94u;
            // 0x223d98: 0x8e220670  lw          $v0, 0x670($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223DACu;
            goto label_223dac;
        }
    }
    ctx->pc = 0x223D9Cu;
    // 0x223d9c: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x223D9Cu;
    SET_GPR_U32(ctx, 31, 0x223DA4u);
    ctx->pc = 0x223DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223D9Cu;
    // 0x223da0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x223D9Cu, 0x223DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223DA4u;
label_223da4:
    // 0x223da4: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x223DA4u;
    {
        const bool branch_taken_0x223da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DA4u;
        // 0x223da8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223da4) {
            ctx->pc = 0x22406Cu;
            goto label_22406c;
        }
    }
    ctx->pc = 0x223DACu;
label_223dac:
    // 0x223dac: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x223dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x223db0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x223DB0u;
    {
        const bool branch_taken_0x223db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DB0u;
        // 0x223db4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223db0) {
            ctx->pc = 0x223DBCu;
            goto label_223dbc;
        }
    }
    ctx->pc = 0x223DB8u;
    // 0x223db8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223db8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223dbc:
    // 0x223dbc: 0xc62005c8  lwc1        $f0, 0x5C8($s1)
    ctx->pc = 0x223dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223dc0: 0x26230330  addiu       $v1, $s1, 0x330
    ctx->pc = 0x223dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
    // 0x223dc4: 0x3c013f73  lui         $at, 0x3F73
    ctx->pc = 0x223dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16243 << 16));
    // 0x223dc8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x223dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x223dcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x223dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223dd0: 0x262205c0  addiu       $v0, $s1, 0x5C0
    ctx->pc = 0x223dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1472));
    // 0x223dd4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x223dd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x223dd8: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x223DD8u;
    {
        const bool branch_taken_0x223dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DD8u;
        // 0x223ddc: 0xe62005c8  swc1        $f0, 0x5C8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1480), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223dd8) {
            ctx->pc = 0x223F00u;
            goto label_223f00;
        }
    }
    ctx->pc = 0x223DE0u;
    // 0x223de0: 0xc62005c0  lwc1        $f0, 0x5C0($s1)
    ctx->pc = 0x223de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223de4: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x223de4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
    // 0x223de8: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x223de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223dec: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x223decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x223df0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x223df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223df4: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x223DF4u;
    {
        const bool branch_taken_0x223df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223DF4u;
        // 0x223df8: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x223df4) {
            ctx->pc = 0x223F00u;
            goto label_223f00;
        }
    }
    ctx->pc = 0x223DFCu;
label_223dfc:
    // 0x223dfc: 0xc09d91a  jal         func_276468
    ctx->pc = 0x223DFCu;
    SET_GPR_U32(ctx, 31, 0x223E04u);
    ctx->pc = 0x223E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223DFCu;
    // 0x223e00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x223DFCu, 0x223E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E04u;
label_223e04:
    // 0x223e04: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x223e04u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x223e08: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x223e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x223e0c: 0x2402020c  addiu       $v0, $zero, 0x20C
    ctx->pc = 0x223e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    // 0x223e10: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x223E10u;
    {
        const bool branch_taken_0x223e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E10u;
        // 0x223e14: 0x2862020c  slti        $v0, $v1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)524) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e10) {
            ctx->pc = 0x223E34u;
            goto label_223e34;
        }
    }
    ctx->pc = 0x223E18u;
    // 0x223e18: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x223E18u;
    {
        const bool branch_taken_0x223e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e18) {
            ctx->pc = 0x223E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223E18u;
            // 0x223e1c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223E48u;
            goto label_223e48;
        }
    }
    ctx->pc = 0x223E20u;
    // 0x223e20: 0x28620252  slti        $v0, $v1, 0x252
    ctx->pc = 0x223e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
    // 0x223e24: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223E24u;
    {
        const bool branch_taken_0x223e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E24u;
        // 0x223e28: 0x2862024f  slti        $v0, $v1, 0x24F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e24) {
            ctx->pc = 0x223E44u;
            goto label_223e44;
        }
    }
    ctx->pc = 0x223E2Cu;
    // 0x223e2c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x223E2Cu;
    {
        const bool branch_taken_0x223e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e2c) {
            ctx->pc = 0x223E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223E2Cu;
            // 0x223e30: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223E48u;
            goto label_223e48;
        }
    }
    ctx->pc = 0x223E34u;
label_223e34:
    // 0x223e34: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x223e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x223e38: 0x8c430cf0  lw          $v1, 0xCF0($v0)
    ctx->pc = 0x223e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3312)));
    // 0x223e3c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x223E3Cu;
    {
        const bool branch_taken_0x223e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x223E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223E3Cu;
        // 0x223e40: 0x8c440cf4  lw          $a0, 0xCF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223e3c) {
            ctx->pc = 0x223E50u;
            goto label_223e50;
        }
    }
    ctx->pc = 0x223E44u;
label_223e44:
    // 0x223e44: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x223e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
label_223e48:
    // 0x223e48: 0x8c4309a8  lw          $v1, 0x9A8($v0)
    ctx->pc = 0x223e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2472)));
    // 0x223e4c: 0x8c4409ac  lw          $a0, 0x9AC($v0)
    ctx->pc = 0x223e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2476)));
label_223e50:
    // 0x223e50: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x223e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x223e54: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x223e54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x223e58: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x223e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223e5c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x223e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e64: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x223e64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223e6c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x223e6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223e70: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x223E70u;
    SET_GPR_U32(ctx, 31, 0x223E78u);
    ctx->pc = 0x223E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E70u;
    // 0x223e74: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x223E70u, 0x223E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E78u;
label_223e78:
    // 0x223e78: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x223e78u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x223e7c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x223e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223e80: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x223e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x223e84: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223e88: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223e8c:
    // 0x223e8c: 0xc055f06  jal         func_157C18
    ctx->pc = 0x223E8Cu;
    SET_GPR_U32(ctx, 31, 0x223E94u);
    ctx->pc = 0x223E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223E8Cu;
    // 0x223e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x223E8Cu, 0x223E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223E94u;
label_223e94:
    // 0x223e94: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x223E94u;
    {
        const bool branch_taken_0x223e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223e94) {
            ctx->pc = 0x223E98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x223E94u;
            // 0x223e98: 0x8e230564  lw          $v1, 0x564($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x223EC4u;
            goto label_223ec4;
        }
    }
    ctx->pc = 0x223E9Cu;
    // 0x223e9c: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x223e9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x223ea0: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x223ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x223ea4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x223EA4u;
    {
        const bool branch_taken_0x223ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EA4u;
        // 0x223ea8: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ea4) {
            ctx->pc = 0x223F00u;
            goto label_223f00;
        }
    }
    ctx->pc = 0x223EACu;
    // 0x223eac: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x223EACu;
    SET_GPR_U32(ctx, 31, 0x223EB4u);
    ctx->pc = 0x223EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EACu;
    // 0x223eb0: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x223EACu, 0x223EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223EB4u;
label_223eb4:
    // 0x223eb4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x223eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x223eb8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x223EB8u;
    {
        const bool branch_taken_0x223eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223eb8) {
            ctx->pc = 0x223F00u;
            goto label_223f00;
        }
    }
    ctx->pc = 0x223EC0u;
    // 0x223ec0: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x223ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
label_223ec4:
    // 0x223ec4: 0x2402020c  addiu       $v0, $zero, 0x20C
    ctx->pc = 0x223ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 524));
    // 0x223ec8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223EC8u;
    {
        const bool branch_taken_0x223ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x223ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223EC8u;
        // 0x223ecc: 0x2862020c  slti        $v0, $v1, 0x20C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)524) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ec8) {
            ctx->pc = 0x223EE8u;
            goto label_223ee8;
        }
    }
    ctx->pc = 0x223ED0u;
    // 0x223ed0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x223ED0u;
    {
        const bool branch_taken_0x223ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x223ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223ED0u;
        // 0x223ed4: 0x28620252  slti        $v0, $v1, 0x252 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)594) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ed0) {
            ctx->pc = 0x223EF8u;
            goto label_223ef8;
        }
    }
    ctx->pc = 0x223ED8u;
    // 0x223ed8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x223ED8u;
    {
        const bool branch_taken_0x223ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223ED8u;
        // 0x223edc: 0x2862024f  slti        $v0, $v1, 0x24F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)591) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ed8) {
            ctx->pc = 0x223EF8u;
            goto label_223ef8;
        }
    }
    ctx->pc = 0x223EE0u;
    // 0x223ee0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x223EE0u;
    {
        const bool branch_taken_0x223ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x223ee0) {
            ctx->pc = 0x223EF8u;
            goto label_223ef8;
        }
    }
    ctx->pc = 0x223EE8u;
label_223ee8:
    // 0x223ee8: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x223EE8u;
    SET_GPR_U32(ctx, 31, 0x223EF0u);
    ctx->pc = 0x223EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EE8u;
    // 0x223eec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x223EE8u, 0x223EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223EF0u;
label_223ef0:
    // 0x223ef0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x223EF0u;
    {
        const bool branch_taken_0x223ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223ef0) {
            ctx->pc = 0x223F00u;
            goto label_223f00;
        }
    }
    ctx->pc = 0x223EF8u;
label_223ef8:
    // 0x223ef8: 0xc09d3fa  jal         func_274FE8
    ctx->pc = 0x223EF8u;
    SET_GPR_U32(ctx, 31, 0x223F00u);
    ctx->pc = 0x223EFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223EF8u;
    // 0x223efc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274FE8u, 0x223EF8u, 0x223F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F00u;
label_223f00:
    // 0x223f00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x223f04: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x223f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x223f08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f0c: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x223F0Cu;
    SET_GPR_U32(ctx, 31, 0x223F14u);
    ctx->pc = 0x223F10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F0Cu;
    // 0x223f10: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x223F0Cu, 0x223F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F14u;
label_223f14:
    // 0x223f14: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x223f14u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x223f18: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x223F18u;
    SET_GPR_U32(ctx, 31, 0x223F20u);
    ctx->pc = 0x223F1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F18u;
    // 0x223f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x223F18u, 0x223F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F20u;
label_223f20:
    // 0x223f20: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x223F20u;
    {
        const bool branch_taken_0x223f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x223f20) {
            ctx->pc = 0x22401Cu;
            goto label_22401c;
        }
    }
    ctx->pc = 0x223F28u;
label_223f28:
    // 0x223f28: 0xc09d91a  jal         func_276468
    ctx->pc = 0x223F28u;
    SET_GPR_U32(ctx, 31, 0x223F30u);
    ctx->pc = 0x223F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F28u;
    // 0x223f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x223F28u, 0x223F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F30u;
label_223f30:
    // 0x223f30: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x223f30u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x223f34: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x223f34u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x223f38: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x223f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x223f3c: 0xc05657c  jal         func_1595F0
    ctx->pc = 0x223F3Cu;
    SET_GPR_U32(ctx, 31, 0x223F44u);
    ctx->pc = 0x223F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F3Cu;
    // 0x223f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1595F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1595F0u, 0x223F3Cu, 0x223F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F44u;
label_223f44:
    // 0x223f44: 0x24420006  addiu       $v0, $v0, 0x6
    ctx->pc = 0x223f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
    // 0x223f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x223f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x223f4c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x223f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x223f50: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x223f50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f54: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x223f54u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x223f58: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x223f58u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x223f5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f60: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x223f60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f64: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x223f64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f68: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x223F68u;
    SET_GPR_U32(ctx, 31, 0x223F70u);
    ctx->pc = 0x223F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F68u;
    // 0x223f6c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x223F68u, 0x223F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F70u;
label_223f70:
    // 0x223f70: 0x8e230304  lw          $v1, 0x304($s1)
    ctx->pc = 0x223f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x223f74: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x223f74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x223f78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223f7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f80: 0x8c651a08  lw          $a1, 0x1A08($v1)
    ctx->pc = 0x223f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6664)));
    // 0x223f84: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x223f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x223f88: 0x8c661a0c  lw          $a2, 0x1A0C($v1)
    ctx->pc = 0x223f88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6668)));
    // 0x223f8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x223f8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223f90: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x223f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x223f94: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x223F94u;
    SET_GPR_U32(ctx, 31, 0x223F9Cu);
    ctx->pc = 0x223F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223F94u;
    // 0x223f98: 0xc33021  addu        $a2, $a2, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x223F94u, 0x223F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223F9Cu;
label_223f9c:
    // 0x223f9c: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x223f9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x223fa0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x223fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x223fa4: 0xae2305f0  sw          $v1, 0x5F0($s1)
    ctx->pc = 0x223fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1520), GPR_U32(ctx, 3));
    // 0x223fa8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x223fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x223fac: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223facu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223fb0:
    // 0x223fb0: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x223fb0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x223fb4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x223fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x223fb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x223FB8u;
    {
        const bool branch_taken_0x223fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x223fb8) {
            ctx->pc = 0x223FE8u;
            goto label_223fe8;
        }
    }
    ctx->pc = 0x223FC0u;
    // 0x223fc0: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x223FC0u;
    SET_GPR_U32(ctx, 31, 0x223FC8u);
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x223FC0u, 0x223FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FC8u;
label_223fc8:
    // 0x223fc8: 0xc62005a8  lwc1        $f0, 0x5A8($s1)
    ctx->pc = 0x223fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223fcc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x223fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223fd0: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x223fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x223fd4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x223fd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x223fd8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x223fd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x223fdc: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x223fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x223fe0: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x223FE0u;
    SET_GPR_U32(ctx, 31, 0x223FE8u);
    ctx->pc = 0x223FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FE0u;
    // 0x223fe4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x223FE0u, 0x223FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FE8u;
label_223fe8:
    // 0x223fe8: 0xc055f06  jal         func_157C18
    ctx->pc = 0x223FE8u;
    SET_GPR_U32(ctx, 31, 0x223FF0u);
    ctx->pc = 0x223FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x223FE8u;
    // 0x223fec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x223FE8u, 0x223FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x223FF0u;
label_223ff0:
    // 0x223ff0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x223FF0u;
    {
        const bool branch_taken_0x223ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x223FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223FF0u;
        // 0x223ff4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x223ff0) {
            ctx->pc = 0x223FFCu;
            goto label_223ffc;
        }
    }
    ctx->pc = 0x223FF8u;
    // 0x223ff8: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x223ff8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
label_223ffc:
    // 0x223ffc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x223ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x224000: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x224000u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x224004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x224004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x224008: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x224008u;
    SET_GPR_U32(ctx, 31, 0x224010u);
    ctx->pc = 0x22400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224008u;
    // 0x22400c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x224008u, 0x224010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224010u;
label_224010:
    // 0x224010: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x224010u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x224014: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x224014u;
    SET_GPR_U32(ctx, 31, 0x22401Cu);
    ctx->pc = 0x224018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x224014u;
    // 0x224018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x224014u, 0x22401Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22401Cu;
label_22401c:
    // 0x22401c: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x22401Cu;
    SET_GPR_U32(ctx, 31, 0x224024u);
    ctx->pc = 0x224020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22401Cu;
    // 0x224020: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x22401Cu, 0x224024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x224024u;
label_224024:
    // 0x224024: 0x962203ac  lhu         $v0, 0x3AC($s1)
    ctx->pc = 0x224024u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 940)));
    // 0x224028: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x224028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x22402c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22402Cu;
    {
        const bool branch_taken_0x22402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22402Cu;
        // 0x224030: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22402c) {
            ctx->pc = 0x22404Cu;
            goto label_22404c;
        }
    }
    ctx->pc = 0x224034u;
    // 0x224034: 0x8e2216d0  lw          $v0, 0x16D0($s1)
    ctx->pc = 0x224034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5840)));
    // 0x224038: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x224038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22403c: 0xae2316f8  sw          $v1, 0x16F8($s1)
    ctx->pc = 0x22403cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5880), GPR_U32(ctx, 3));
    // 0x224040: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x224040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x224044: 0xae2405fc  sw          $a0, 0x5FC($s1)
    ctx->pc = 0x224044u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1532), GPR_U32(ctx, 4));
    // 0x224048: 0xae2216d0  sw          $v0, 0x16D0($s1)
    ctx->pc = 0x224048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5840), GPR_U32(ctx, 2));
label_22404c:
    // 0x22404c: 0x8e2205fc  lw          $v0, 0x5FC($s1)
    ctx->pc = 0x22404cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1532)));
    // 0x224050: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x224050u;
    {
        const bool branch_taken_0x224050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x224054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224050u;
        // 0x224054: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224050) {
            ctx->pc = 0x22406Cu;
            goto label_22406c;
        }
    }
    ctx->pc = 0x224058u;
    // 0x224058: 0x8e2316d4  lw          $v1, 0x16D4($s1)
    ctx->pc = 0x224058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5844)));
    // 0x22405c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x22405cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x224060: 0x3442fbff  ori         $v0, $v0, 0xFBFF
    ctx->pc = 0x224060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64511);
    // 0x224064: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x224064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x224068: 0xae2316d4  sw          $v1, 0x16D4($s1)
    ctx->pc = 0x224068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5844), GPR_U32(ctx, 3));
label_22406c:
    // 0x22406c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x22406cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x224070: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x224070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x224074: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x224074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x224078: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x224078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22407c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x22407cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x224080: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x224084: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x224084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x224088: 0x3e00008  jr          $ra
    ctx->pc = 0x224088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22408Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224088u;
        // 0x22408c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x224088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224090u;
}
