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

// Function: func_0023E6B0
// Address: 0x23e6b0 - 0x23f028
void func_0023E6B0_0x23e6b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023E6B0_0x23e6b0");
#endif

    switch (ctx->pc) {
        case 0x23e758u: goto label_23e758;
        case 0x23e798u: goto label_23e798;
        case 0x23e7b0u: goto label_23e7b0;
        case 0x23e81cu: goto label_23e81c;
        case 0x23e830u: goto label_23e830;
        case 0x23e8e0u: goto label_23e8e0;
        case 0x23e8f4u: goto label_23e8f4;
        case 0x23e954u: goto label_23e954;
        case 0x23e978u: goto label_23e978;
        case 0x23e994u: goto label_23e994;
        case 0x23e9ccu: goto label_23e9cc;
        case 0x23ea60u: goto label_23ea60;
        case 0x23ea74u: goto label_23ea74;
        case 0x23eb18u: goto label_23eb18;
        case 0x23eb2cu: goto label_23eb2c;
        case 0x23eb94u: goto label_23eb94;
        case 0x23ebd8u: goto label_23ebd8;
        case 0x23ec18u: goto label_23ec18;
        case 0x23ec3cu: goto label_23ec3c;
        case 0x23ec68u: goto label_23ec68;
        case 0x23ec98u: goto label_23ec98;
        case 0x23ecb4u: goto label_23ecb4;
        case 0x23ecd8u: goto label_23ecd8;
        case 0x23ecfcu: goto label_23ecfc;
        case 0x23ed10u: goto label_23ed10;
        case 0x23ed24u: goto label_23ed24;
        case 0x23eda4u: goto label_23eda4;
        case 0x23edacu: goto label_23edac;
        case 0x23edd8u: goto label_23edd8;
        case 0x23ee10u: goto label_23ee10;
        case 0x23ee4cu: goto label_23ee4c;
        case 0x23ee68u: goto label_23ee68;
        case 0x23ee94u: goto label_23ee94;
        case 0x23eeb8u: goto label_23eeb8;
        case 0x23eed4u: goto label_23eed4;
        case 0x23ef04u: goto label_23ef04;
        case 0x23ef28u: goto label_23ef28;
        case 0x23ef44u: goto label_23ef44;
        case 0x23ef88u: goto label_23ef88;
        case 0x23efe4u: goto label_23efe4;
        case 0x23eff0u: goto label_23eff0;
        case 0x23eff8u: goto label_23eff8;
        default: break;
    }

    ctx->pc = 0x23e6b0u;

    // 0x23e6b0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x23e6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x23e6b4: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x23e6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x23e6b8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x23e6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x23e6bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23e6bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6c0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23e6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x23e6c4: 0x3c040004  lui         $a0, 0x4
    ctx->pc = 0x23e6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4 << 16));
    // 0x23e6c8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x23e6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x23e6cc: 0x241404e2  addiu       $s4, $zero, 0x4E2
    ctx->pc = 0x23e6ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x23e6d0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x23e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x23e6d4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23e6d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6d8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x23e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x23e6dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x23e6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e6e0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x23e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x23e6e4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x23e6e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6e8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x23e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x23e6ec: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x23e6ecu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e6f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23e6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23e6f4: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x23e6f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x23e6f8: 0x8e0316d0  lw          $v1, 0x16D0($s0)
    ctx->pc = 0x23e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23e6fc: 0x8e0216d4  lw          $v0, 0x16D4($s0)
    ctx->pc = 0x23e6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x23e700: 0x34630400  ori         $v1, $v1, 0x400
    ctx->pc = 0x23e700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1024);
    // 0x23e704: 0x920502f6  lbu         $a1, 0x2F6($s0)
    ctx->pc = 0x23e704u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23e708: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x23e708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x23e70c: 0xae0316d0  sw          $v1, 0x16D0($s0)
    ctx->pc = 0x23e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 3));
    // 0x23e710: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23E710u;
    {
        const bool branch_taken_0x23e710 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E710u;
        // 0x23e714: 0xae0216d4  sw          $v0, 0x16D4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5844), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e710) {
            ctx->pc = 0x23E728u;
            goto label_23e728;
        }
    }
    ctx->pc = 0x23E718u;
    // 0x23e718: 0x50b30197  beql        $a1, $s3, . + 4 + (0x197 << 2)
    ctx->pc = 0x23E718u;
    {
        const bool branch_taken_0x23e718 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 19));
        if (branch_taken_0x23e718) {
            ctx->pc = 0x23E71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E718u;
            // 0x23e71c: 0x8e0205f0  lw          $v0, 0x5F0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED78u;
            goto label_23ed78;
        }
    }
    ctx->pc = 0x23E720u;
    // 0x23e720: 0x10000233  b           . + 4 + (0x233 << 2)
    ctx->pc = 0x23E720u;
    {
        const bool branch_taken_0x23e720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e720) {
            ctx->pc = 0x23EFF0u;
            goto label_23eff0;
        }
    }
    ctx->pc = 0x23E728u;
label_23e728:
    // 0x23e728: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x23e728u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x23e72c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e72cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e734: 0xa2001864  sb          $zero, 0x1864($s0)
    ctx->pc = 0x23e734u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6244), (uint8_t)GPR_U32(ctx, 0));
    // 0x23e738: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x23e738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23e73c: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x23e73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x23e740: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e744: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x23e744u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23e748: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23e748u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e74c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x23e74cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23e750: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23E750u;
    SET_GPR_U32(ctx, 31, 0x23E758u);
    ctx->pc = 0x23E754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E750u;
    // 0x23e754: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23E750u, 0x23E758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E758u;
label_23e758:
    // 0x23e758: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x23e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x23e75c: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x23e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x23e760: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x23e760u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x23e764: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E764u;
    {
        const bool branch_taken_0x23e764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E764u;
        // 0x23e768: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e764) {
            ctx->pc = 0x23E784u;
            goto label_23e784;
        }
    }
    ctx->pc = 0x23E76Cu;
    // 0x23e76c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23e76cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23e770: 0x2442b530  addiu       $v0, $v0, -0x4AD0
    ctx->pc = 0x23e770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948144));
    // 0x23e774: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e778: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23e778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23e77c: 0x800008  jr          $a0
    ctx->pc = 0x23E77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23E784u: goto label_23e784;
            case 0x23E7F0u: goto label_23e7f0;
            case 0x23E808u: goto label_23e808;
            case 0x23E8CCu: goto label_23e8cc;
            case 0x23EA00u: goto label_23ea00;
            case 0x23EA2Cu: goto label_23ea2c;
            case 0x23EA3Cu: goto label_23ea3c;
            case 0x23EA4Cu: goto label_23ea4c;
            case 0x23EB04u: goto label_23eb04;
            case 0x23EC44u: goto label_23ec44;
            case 0x23EC90u: goto label_23ec90;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23E77Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23E784u;
label_23e784:
    // 0x23e784: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
    // 0x23e788: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x23E788u;
    {
        const bool branch_taken_0x23e788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e788) {
            ctx->pc = 0x23E78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E788u;
            // 0x23e78c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E7BCu;
            goto label_23e7bc;
        }
    }
    ctx->pc = 0x23E790u;
    // 0x23e790: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E790u;
    SET_GPR_U32(ctx, 31, 0x23E798u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E790u, 0x23E798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E798u;
label_23e798:
    // 0x23e798: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e79c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x23E79Cu;
    {
        const bool branch_taken_0x23e79c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e79c) {
            ctx->pc = 0x23E7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E79Cu;
            // 0x23e7a0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E7BCu;
            goto label_23e7bc;
        }
    }
    ctx->pc = 0x23E7A4u;
    // 0x23e7a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23e7a8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23E7A8u;
    SET_GPR_U32(ctx, 31, 0x23E7B0u);
    ctx->pc = 0x23E7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E7A8u;
    // 0x23e7ac: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23E7A8u, 0x23E7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E7B0u;
label_23e7b0:
    // 0x23e7b0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x23e7b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x23e7b4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23E7B4u;
    {
        const bool branch_taken_0x23e7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7B4u;
        // 0x23e7b8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7b4) {
            ctx->pc = 0x23E7C8u;
            goto label_23e7c8;
        }
    }
    ctx->pc = 0x23E7BCu;
label_23e7bc:
    // 0x23e7bc: 0x8c4303ac  lw          $v1, 0x3AC($v0)
    ctx->pc = 0x23e7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x23e7c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23E7C0u;
    {
        const bool branch_taken_0x23e7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7C0u;
        // 0x23e7c4: 0x8c4403b0  lw          $a0, 0x3B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7c0) {
            ctx->pc = 0x23E7DCu;
            goto label_23e7dc;
        }
    }
    ctx->pc = 0x23E7C8u;
label_23e7c8:
    // 0x23e7c8: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23e7c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23e7cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e7ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e7d0: 0x8c4303b4  lw          $v1, 0x3B4($v0)
    ctx->pc = 0x23e7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 948)));
    // 0x23e7d4: 0x8c4403b8  lw          $a0, 0x3B8($v0)
    ctx->pc = 0x23e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 952)));
    // 0x23e7d8: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x23e7d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_23e7dc:
    // 0x23e7dc: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23e7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e7e0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x23e7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x23e7e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23e7e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23e7e8: 0x10000130  b           . + 4 + (0x130 << 2)
    ctx->pc = 0x23E7E8u;
    {
        const bool branch_taken_0x23e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E7E8u;
        // 0x23e7ec: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e7e8) {
            ctx->pc = 0x23ECACu;
            goto label_23ecac;
        }
    }
    ctx->pc = 0x23E7F0u;
label_23e7f0:
    // 0x23e7f0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23e7f4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x23e7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x23e7f8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23e7f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23e7fc: 0x8c4303ac  lw          $v1, 0x3AC($v0)
    ctx->pc = 0x23e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x23e800: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x23E800u;
    {
        const bool branch_taken_0x23e800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E800u;
        // 0x23e804: 0x8c4403b0  lw          $a0, 0x3B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e800) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23E808u;
label_23e808:
    // 0x23e808: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x23e808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x23e80c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E80Cu;
    {
        const bool branch_taken_0x23e80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E80Cu;
        // 0x23e810: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e80c) {
            ctx->pc = 0x23E828u;
            goto label_23e828;
        }
    }
    ctx->pc = 0x23E814u;
    // 0x23e814: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23E814u;
    SET_GPR_U32(ctx, 31, 0x23E81Cu);
    ctx->pc = 0x23E818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E814u;
    // 0x23e818: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23E814u, 0x23E81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E81Cu;
label_23e81c:
    // 0x23e81c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23e81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23e820: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x23E820u;
    {
        const bool branch_taken_0x23e820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e820) {
            ctx->pc = 0x23E824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E820u;
            // 0x23e824: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E894u;
            goto label_23e894;
        }
    }
    ctx->pc = 0x23E828u;
label_23e828:
    // 0x23e828: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E828u;
    SET_GPR_U32(ctx, 31, 0x23E830u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E828u, 0x23E830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E830u;
label_23e830:
    // 0x23e830: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23e830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e834: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e838: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e838u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e83c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E83Cu;
    {
        const bool branch_taken_0x23e83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e83c) {
            ctx->pc = 0x23E840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E83Cu;
            // 0x23e840: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E844u;
            goto label_23e844;
        }
    }
    ctx->pc = 0x23E844u;
label_23e844:
    // 0x23e844: 0x2810  mfhi        $a1
    ctx->pc = 0x23e844u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23e848: 0x50a4000a  beql        $a1, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x23E848u;
    {
        const bool branch_taken_0x23e848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23e848) {
            ctx->pc = 0x23E84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E848u;
            // 0x23e84c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E874u;
            goto label_23e874;
        }
    }
    ctx->pc = 0x23E850u;
    // 0x23e850: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E850u;
    {
        const bool branch_taken_0x23e850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E850u;
        // 0x23e854: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e850) {
            ctx->pc = 0x23E860u;
            goto label_23e860;
        }
    }
    ctx->pc = 0x23E858u;
    // 0x23e858: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23E858u;
    {
        const bool branch_taken_0x23e858 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e858) {
            ctx->pc = 0x23E85Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E858u;
            // 0x23e85c: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E884u;
            goto label_23e884;
        }
    }
    ctx->pc = 0x23E860u;
label_23e860:
    // 0x23e860: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23e860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23e864: 0x8c43029c  lw          $v1, 0x29C($v0)
    ctx->pc = 0x23e864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x23e868: 0x8c4402a0  lw          $a0, 0x2A0($v0)
    ctx->pc = 0x23e868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x23e86c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23E86Cu;
    {
        const bool branch_taken_0x23e86c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E86Cu;
        // 0x23e870: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e86c) {
            ctx->pc = 0x23E8B4u;
            goto label_23e8b4;
        }
    }
    ctx->pc = 0x23E874u;
label_23e874:
    // 0x23e874: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x23e874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
    // 0x23e878: 0x8c4402a8  lw          $a0, 0x2A8($v0)
    ctx->pc = 0x23e878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x23e87c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23E87Cu;
    {
        const bool branch_taken_0x23e87c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E87Cu;
        // 0x23e880: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e87c) {
            ctx->pc = 0x23E8B4u;
            goto label_23e8b4;
        }
    }
    ctx->pc = 0x23E884u;
label_23e884:
    // 0x23e884: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x23e884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x23e888: 0x8c4402b0  lw          $a0, 0x2B0($v0)
    ctx->pc = 0x23e888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
    // 0x23e88c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23E88Cu;
    {
        const bool branch_taken_0x23e88c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E88Cu;
        // 0x23e890: 0x629021  addu        $s2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e88c) {
            ctx->pc = 0x23E8B4u;
            goto label_23e8b4;
        }
    }
    ctx->pc = 0x23E894u;
label_23e894:
    // 0x23e894: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23e894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23e898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e89c: 0x8c43015c  lw          $v1, 0x15C($v0)
    ctx->pc = 0x23e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 348)));
    // 0x23e8a0: 0x8c440160  lw          $a0, 0x160($v0)
    ctx->pc = 0x23e8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 352)));
    // 0x23e8a4: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x23e8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x23e8a8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23e8a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e8ac: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23e8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23e8b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23e8b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23e8b4:
    // 0x23e8b4: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23e8b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8bc: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x23e8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23e8c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e8c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e8c4: 0x100000c1  b           . + 4 + (0xC1 << 2)
    ctx->pc = 0x23E8C4u;
    {
        const bool branch_taken_0x23e8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8C4u;
        // 0x23e8c8: 0x2407003e  addiu       $a3, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8c4) {
            ctx->pc = 0x23EBCCu;
            goto label_23ebcc;
        }
    }
    ctx->pc = 0x23E8CCu;
label_23e8cc:
    // 0x23e8cc: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x23e8ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x23e8d0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23E8D0u;
    {
        const bool branch_taken_0x23e8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E8D0u;
        // 0x23e8d4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e8d0) {
            ctx->pc = 0x23E8ECu;
            goto label_23e8ec;
        }
    }
    ctx->pc = 0x23E8D8u;
    // 0x23e8d8: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23E8D8u;
    SET_GPR_U32(ctx, 31, 0x23E8E0u);
    ctx->pc = 0x23E8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E8D8u;
    // 0x23e8dc: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23E8D8u, 0x23E8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8E0u;
label_23e8e0:
    // 0x23e8e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23e8e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23e8e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x23E8E4u;
    {
        const bool branch_taken_0x23e8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e8e4) {
            ctx->pc = 0x23E94Cu;
            goto label_23e94c;
        }
    }
    ctx->pc = 0x23E8ECu;
label_23e8ec:
    // 0x23e8ec: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E8ECu;
    SET_GPR_U32(ctx, 31, 0x23E8F4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E8ECu, 0x23E8F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E8F4u;
label_23e8f4:
    // 0x23e8f4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e8f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23e8fc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23e8fcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23e900: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23E900u;
    {
        const bool branch_taken_0x23e900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e900) {
            ctx->pc = 0x23E904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E900u;
            // 0x23e904: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E908u;
            goto label_23e908;
        }
    }
    ctx->pc = 0x23E908u;
label_23e908:
    // 0x23e908: 0x2810  mfhi        $a1
    ctx->pc = 0x23e908u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23e90c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23E90Cu;
    {
        const bool branch_taken_0x23e90c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23e90c) {
            ctx->pc = 0x23E910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E90Cu;
            // 0x23e910: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E934u;
            goto label_23e934;
        }
    }
    ctx->pc = 0x23E914u;
    // 0x23e914: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23E914u;
    {
        const bool branch_taken_0x23e914 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E914u;
        // 0x23e918: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e914) {
            ctx->pc = 0x23E924u;
            goto label_23e924;
        }
    }
    ctx->pc = 0x23E91Cu;
    // 0x23e91c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23E91Cu;
    {
        const bool branch_taken_0x23e91c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23e91c) {
            ctx->pc = 0x23E920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23E91Cu;
            // 0x23e920: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23E940u;
            goto label_23e940;
        }
    }
    ctx->pc = 0x23E924u;
label_23e924:
    // 0x23e924: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23e928: 0x8c43029c  lw          $v1, 0x29C($v0)
    ctx->pc = 0x23e928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x23e92c: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x23E92Cu;
    {
        const bool branch_taken_0x23e92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E92Cu;
        // 0x23e930: 0x8c4402a0  lw          $a0, 0x2A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e92c) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23E934u;
label_23e934:
    // 0x23e934: 0x8c4302a4  lw          $v1, 0x2A4($v0)
    ctx->pc = 0x23e934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
    // 0x23e938: 0x100000da  b           . + 4 + (0xDA << 2)
    ctx->pc = 0x23E938u;
    {
        const bool branch_taken_0x23e938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E938u;
        // 0x23e93c: 0x8c4402a8  lw          $a0, 0x2A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e938) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23E940u;
label_23e940:
    // 0x23e940: 0x8c4302ac  lw          $v1, 0x2AC($v0)
    ctx->pc = 0x23e940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x23e944: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x23E944u;
    {
        const bool branch_taken_0x23e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E944u;
        // 0x23e948: 0x8c4402b0  lw          $a0, 0x2B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e944) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23E94Cu;
label_23e94c:
    // 0x23e94c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23E94Cu;
    SET_GPR_U32(ctx, 31, 0x23E954u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23E94Cu, 0x23E954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E954u;
label_23e954:
    // 0x23e954: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23e954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23e958: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x23E958u;
    {
        const bool branch_taken_0x23e958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E958u;
        // 0x23e95c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e958) {
            ctx->pc = 0x23E9B4u;
            goto label_23e9b4;
        }
    }
    ctx->pc = 0x23E960u;
    // 0x23e960: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23e964: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23e964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e968: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x23e968u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23e96c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23e96cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e970: 0xc098278  jal         func_2609E0
    ctx->pc = 0x23E970u;
    SET_GPR_U32(ctx, 31, 0x23E978u);
    ctx->pc = 0x23E974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E970u;
    // 0x23e974: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x23E970u, 0x23E978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E978u;
label_23e978:
    // 0x23e978: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e978u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e97c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x23e97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x23e980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23e980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23e984: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x23e984u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23e988: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23e988u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e98c: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x23E98Cu;
    SET_GPR_U32(ctx, 31, 0x23E994u);
    ctx->pc = 0x23E990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E98Cu;
    // 0x23e990: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x23E98Cu, 0x23E994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E994u;
label_23e994:
    // 0x23e994: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23e994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23e998: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23e998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23e99c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e99cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e9a0: 0x8c432d0c  lw          $v1, 0x2D0C($v0)
    ctx->pc = 0x23e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11532)));
    // 0x23e9a4: 0x8c442d10  lw          $a0, 0x2D10($v0)
    ctx->pc = 0x23e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11536)));
    // 0x23e9a8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23e9a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23e9ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x23E9ACu;
    {
        const bool branch_taken_0x23e9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9ACu;
        // 0x23e9b0: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9ac) {
            ctx->pc = 0x23E9E8u;
            goto label_23e9e8;
        }
    }
    ctx->pc = 0x23E9B4u;
label_23e9b4:
    // 0x23e9b4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x23e9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23e9b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23e9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23e9bc: 0x2407003e  addiu       $a3, $zero, 0x3E
    ctx->pc = 0x23e9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x23e9c0: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23e9c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23e9c4: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23E9C4u;
    SET_GPR_U32(ctx, 31, 0x23E9CCu);
    ctx->pc = 0x23E9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23E9C4u;
    // 0x23e9c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23E9C4u, 0x23E9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23E9CCu;
label_23e9cc:
    // 0x23e9cc: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23e9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23e9d0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23e9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23e9d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23e9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23e9d8: 0x8c432d18  lw          $v1, 0x2D18($v0)
    ctx->pc = 0x23e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11544)));
    // 0x23e9dc: 0x8c442d1c  lw          $a0, 0x2D1C($v0)
    ctx->pc = 0x23e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11548)));
    // 0x23e9e0: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x23e9e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x23e9e4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23e9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23e9e8:
    // 0x23e9e8: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23e9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23e9ec: 0x920217c3  lbu         $v0, 0x17C3($s0)
    ctx->pc = 0x23e9ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6083)));
    // 0x23e9f0: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
    ctx->pc = 0x23E9F0u;
    {
        const bool branch_taken_0x23e9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9F0u;
        // 0x23e9f4: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9f0) {
            ctx->pc = 0x23ECACu;
            goto label_23ecac;
        }
    }
    ctx->pc = 0x23E9F8u;
    // 0x23e9f8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x23E9F8u;
    {
        const bool branch_taken_0x23e9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23E9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23E9F8u;
        // 0x23e9fc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e9f8) {
            ctx->pc = 0x23ECACu;
            goto label_23ecac;
        }
    }
    ctx->pc = 0x23EA00u;
label_23ea00:
    // 0x23ea00: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ea04: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23ea04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23ea08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ea08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ea0c: 0x8c433690  lw          $v1, 0x3690($v0)
    ctx->pc = 0x23ea0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13968)));
    // 0x23ea10: 0x8c443694  lw          $a0, 0x3694($v0)
    ctx->pc = 0x23ea10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13972)));
    // 0x23ea14: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23ea14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ea18: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x23ea18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x23ea1c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x23ea1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x23ea20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23ea20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23ea24: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x23EA24u;
    {
        const bool branch_taken_0x23ea24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA24u;
        // 0x23ea28: 0x828821  addu        $s1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea24) {
            ctx->pc = 0x23ECACu;
            goto label_23ecac;
        }
    }
    ctx->pc = 0x23EA2Cu;
label_23ea2c:
    // 0x23ea2c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ea30: 0x8c431a10  lw          $v1, 0x1A10($v0)
    ctx->pc = 0x23ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6672)));
    // 0x23ea34: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x23EA34u;
    {
        const bool branch_taken_0x23ea34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA34u;
        // 0x23ea38: 0x8c441a14  lw          $a0, 0x1A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea34) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23EA3Cu;
label_23ea3c:
    // 0x23ea3c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ea40: 0x8c431a10  lw          $v1, 0x1A10($v0)
    ctx->pc = 0x23ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6672)));
    // 0x23ea44: 0x10000097  b           . + 4 + (0x97 << 2)
    ctx->pc = 0x23EA44u;
    {
        const bool branch_taken_0x23ea44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA44u;
        // 0x23ea48: 0x8c441a14  lw          $a0, 0x1A14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6676)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea44) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23EA4Cu;
label_23ea4c:
    // 0x23ea4c: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x23ea4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x23ea50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EA50u;
    {
        const bool branch_taken_0x23ea50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA50u;
        // 0x23ea54: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea50) {
            ctx->pc = 0x23EA6Cu;
            goto label_23ea6c;
        }
    }
    ctx->pc = 0x23EA58u;
    // 0x23ea58: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23EA58u;
    SET_GPR_U32(ctx, 31, 0x23EA60u);
    ctx->pc = 0x23EA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EA58u;
    // 0x23ea5c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23EA58u, 0x23EA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA60u;
label_23ea60:
    // 0x23ea60: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23ea60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23ea64: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x23EA64u;
    {
        const bool branch_taken_0x23ea64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea64) {
            ctx->pc = 0x23EA68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA64u;
            // 0x23ea68: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EAD4u;
            goto label_23ead4;
        }
    }
    ctx->pc = 0x23EA6Cu;
label_23ea6c:
    // 0x23ea6c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EA6Cu;
    SET_GPR_U32(ctx, 31, 0x23EA74u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EA6Cu, 0x23EA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EA74u;
label_23ea74:
    // 0x23ea74: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x23ea74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x23ea78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23ea78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23ea7c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ea80: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23ea80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ea84: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23ea84u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23ea88: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23EA88u;
    {
        const bool branch_taken_0x23ea88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea88) {
            ctx->pc = 0x23EA8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA88u;
            // 0x23ea8c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EA90u;
            goto label_23ea90;
        }
    }
    ctx->pc = 0x23EA90u;
label_23ea90:
    // 0x23ea90: 0x2810  mfhi        $a1
    ctx->pc = 0x23ea90u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23ea94: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EA94u;
    {
        const bool branch_taken_0x23ea94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23ea94) {
            ctx->pc = 0x23EA98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EA94u;
            // 0x23ea98: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EABCu;
            goto label_23eabc;
        }
    }
    ctx->pc = 0x23EA9Cu;
    // 0x23ea9c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EA9Cu;
    {
        const bool branch_taken_0x23ea9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EA9Cu;
        // 0x23eaa0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea9c) {
            ctx->pc = 0x23EAACu;
            goto label_23eaac;
        }
    }
    ctx->pc = 0x23EAA4u;
    // 0x23eaa4: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EAA4u;
    {
        const bool branch_taken_0x23eaa4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23eaa4) {
            ctx->pc = 0x23EAA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EAA4u;
            // 0x23eaa8: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EAC8u;
            goto label_23eac8;
        }
    }
    ctx->pc = 0x23EAACu;
label_23eaac:
    // 0x23eaac: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23eab0: 0x8c4327d8  lw          $v1, 0x27D8($v0)
    ctx->pc = 0x23eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10200)));
    // 0x23eab4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x23EAB4u;
    {
        const bool branch_taken_0x23eab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAB4u;
        // 0x23eab8: 0x8c4427dc  lw          $a0, 0x27DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eab4) {
            ctx->pc = 0x23EAE8u;
            goto label_23eae8;
        }
    }
    ctx->pc = 0x23EABCu;
label_23eabc:
    // 0x23eabc: 0x8c4327e0  lw          $v1, 0x27E0($v0)
    ctx->pc = 0x23eabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10208)));
    // 0x23eac0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23EAC0u;
    {
        const bool branch_taken_0x23eac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAC0u;
        // 0x23eac4: 0x8c4427e4  lw          $a0, 0x27E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eac0) {
            ctx->pc = 0x23EAE8u;
            goto label_23eae8;
        }
    }
    ctx->pc = 0x23EAC8u;
label_23eac8:
    // 0x23eac8: 0x8c4327e8  lw          $v1, 0x27E8($v0)
    ctx->pc = 0x23eac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10216)));
    // 0x23eacc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x23EACCu;
    {
        const bool branch_taken_0x23eacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EACCu;
        // 0x23ead0: 0x8c4427ec  lw          $a0, 0x27EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eacc) {
            ctx->pc = 0x23EAE8u;
            goto label_23eae8;
        }
    }
    ctx->pc = 0x23EAD4u;
label_23ead4:
    // 0x23ead4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23ead4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23ead8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ead8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23eadc: 0x8c432ac8  lw          $v1, 0x2AC8($v0)
    ctx->pc = 0x23eadcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10952)));
    // 0x23eae0: 0x8c442acc  lw          $a0, 0x2ACC($v0)
    ctx->pc = 0x23eae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    // 0x23eae4: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x23eae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
label_23eae8:
    // 0x23eae8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23eae8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23eaec: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23eaecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23eaf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23eaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eaf4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x23eaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23eaf8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23eaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23eafc: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x23EAFCu;
    {
        const bool branch_taken_0x23eafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EAFCu;
        // 0x23eb00: 0x24070044  addiu       $a3, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eafc) {
            ctx->pc = 0x23EBCCu;
            goto label_23ebcc;
        }
    }
    ctx->pc = 0x23EB04u;
label_23eb04:
    // 0x23eb04: 0x920202f7  lbu         $v0, 0x2F7($s0)
    ctx->pc = 0x23eb04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x23eb08: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EB08u;
    {
        const bool branch_taken_0x23eb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB08u;
        // 0x23eb0c: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb08) {
            ctx->pc = 0x23EB24u;
            goto label_23eb24;
        }
    }
    ctx->pc = 0x23EB10u;
    // 0x23eb10: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23EB10u;
    SET_GPR_U32(ctx, 31, 0x23EB18u);
    ctx->pc = 0x23EB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EB10u;
    // 0x23eb14: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23EB10u, 0x23EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB18u;
label_23eb18:
    // 0x23eb18: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x23eb18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23eb1c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x23EB1Cu;
    {
        const bool branch_taken_0x23eb1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eb1c) {
            ctx->pc = 0x23EB8Cu;
            goto label_23eb8c;
        }
    }
    ctx->pc = 0x23EB24u;
label_23eb24:
    // 0x23eb24: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EB24u;
    SET_GPR_U32(ctx, 31, 0x23EB2Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EB24u, 0x23EB2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB2Cu;
label_23eb2c:
    // 0x23eb2c: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x23eb2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x23eb30: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23eb30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23eb34: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23eb38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23eb38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23eb3c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23eb3cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23eb40: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23EB40u;
    {
        const bool branch_taken_0x23eb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eb40) {
            ctx->pc = 0x23EB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EB40u;
            // 0x23eb44: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EB48u;
            goto label_23eb48;
        }
    }
    ctx->pc = 0x23EB48u;
label_23eb48:
    // 0x23eb48: 0x2810  mfhi        $a1
    ctx->pc = 0x23eb48u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x23eb4c: 0x50a40009  beql        $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x23EB4Cu;
    {
        const bool branch_taken_0x23eb4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x23eb4c) {
            ctx->pc = 0x23EB50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EB4Cu;
            // 0x23eb50: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EB74u;
            goto label_23eb74;
        }
    }
    ctx->pc = 0x23EB54u;
    // 0x23eb54: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EB54u;
    {
        const bool branch_taken_0x23eb54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB54u;
        // 0x23eb58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb54) {
            ctx->pc = 0x23EB64u;
            goto label_23eb64;
        }
    }
    ctx->pc = 0x23EB5Cu;
    // 0x23eb5c: 0x50a20008  beql        $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EB5Cu;
    {
        const bool branch_taken_0x23eb5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x23eb5c) {
            ctx->pc = 0x23EB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EB5Cu;
            // 0x23eb60: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EB80u;
            goto label_23eb80;
        }
    }
    ctx->pc = 0x23EB64u;
label_23eb64:
    // 0x23eb64: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23eb68: 0x8c4327d8  lw          $v1, 0x27D8($v0)
    ctx->pc = 0x23eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10200)));
    // 0x23eb6c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x23EB6Cu;
    {
        const bool branch_taken_0x23eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB6Cu;
        // 0x23eb70: 0x8c4427dc  lw          $a0, 0x27DC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb6c) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23EB74u;
label_23eb74:
    // 0x23eb74: 0x8c4327e0  lw          $v1, 0x27E0($v0)
    ctx->pc = 0x23eb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10208)));
    // 0x23eb78: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x23EB78u;
    {
        const bool branch_taken_0x23eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB78u;
        // 0x23eb7c: 0x8c4427e4  lw          $a0, 0x27E4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb78) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23EB80u;
label_23eb80:
    // 0x23eb80: 0x8c4327e8  lw          $v1, 0x27E8($v0)
    ctx->pc = 0x23eb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10216)));
    // 0x23eb84: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x23EB84u;
    {
        const bool branch_taken_0x23eb84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB84u;
        // 0x23eb88: 0x8c4427ec  lw          $a0, 0x27EC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10220)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb84) {
            ctx->pc = 0x23ECA4u;
            goto label_23eca4;
        }
    }
    ctx->pc = 0x23EB8Cu;
label_23eb8c:
    // 0x23eb8c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EB8Cu;
    SET_GPR_U32(ctx, 31, 0x23EB94u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EB8Cu, 0x23EB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EB94u;
label_23eb94:
    // 0x23eb94: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23eb94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23eb98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x23EB98u;
    {
        const bool branch_taken_0x23eb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EB98u;
        // 0x23eb9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eb98) {
            ctx->pc = 0x23EBE0u;
            goto label_23ebe0;
        }
    }
    ctx->pc = 0x23EBA0u;
    // 0x23eba0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23eba4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23eba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23eba8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23eba8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ebac: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x23ebacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23ebb0: 0x8c482acc  lw          $t0, 0x2ACC($v0)
    ctx->pc = 0x23ebb0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10956)));
    // 0x23ebb4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23ebb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ebb8: 0x8c432ac8  lw          $v1, 0x2AC8($v0)
    ctx->pc = 0x23ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10952)));
    // 0x23ebbc: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x23ebbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x23ebc0: 0x1028821  addu        $s1, $t0, $v0
    ctx->pc = 0x23ebc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x23ebc4: 0xe600054c  swc1        $f0, 0x54C($s0)
    ctx->pc = 0x23ebc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    // 0x23ebc8: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23ebc8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23ebcc:
    // 0x23ebcc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23ebccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ebd0: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23EBD0u;
    SET_GPR_U32(ctx, 31, 0x23EBD8u);
    ctx->pc = 0x23EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EBD0u;
    // 0x23ebd4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23EBD0u, 0x23EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EBD8u;
label_23ebd8:
    // 0x23ebd8: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x23EBD8u;
    {
        const bool branch_taken_0x23ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ebd8) {
            ctx->pc = 0x23ECACu;
            goto label_23ecac;
        }
    }
    ctx->pc = 0x23EBE0u;
label_23ebe0:
    // 0x23ebe0: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23ebe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ebe4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23ebe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23ebe8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ebe8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ebec: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x23ebecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23ebf0: 0x8c482b54  lw          $t0, 0x2B54($v0)
    ctx->pc = 0x23ebf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11092)));
    // 0x23ebf4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x23ebf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ebf8: 0x8c432b50  lw          $v1, 0x2B50($v0)
    ctx->pc = 0x23ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11088)));
    // 0x23ebfc: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x23ebfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23ec00: 0x1028821  addu        $s1, $t0, $v0
    ctx->pc = 0x23ec00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x23ec04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23ec04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec08: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23ec08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ec0c: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23ec0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ec10: 0xc098278  jal         func_2609E0
    ctx->pc = 0x23EC10u;
    SET_GPR_U32(ctx, 31, 0x23EC18u);
    ctx->pc = 0x23EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC10u;
    // 0x23ec14: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609E0u, 0x23EC10u, 0x23EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC18u;
label_23ec18:
    // 0x23ec18: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x23ec18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x23ec1c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23ec1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23ec20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec24: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x23ec24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x23ec28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23ec28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec2c: 0x24070044  addiu       $a3, $zero, 0x44
    ctx->pc = 0x23ec2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x23ec30: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23ec30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ec34: 0xc09827e  jal         func_2609F8
    ctx->pc = 0x23EC34u;
    SET_GPR_U32(ctx, 31, 0x23EC3Cu);
    ctx->pc = 0x23EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC34u;
    // 0x23ec38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609F8u, 0x23EC34u, 0x23EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC3Cu;
label_23ec3c:
    // 0x23ec3c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x23EC3Cu;
    {
        const bool branch_taken_0x23ec3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ec3c) {
            ctx->pc = 0x23ECACu;
            goto label_23ecac;
        }
    }
    ctx->pc = 0x23EC44u;
label_23ec44:
    // 0x23ec44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ec44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec48: 0x8e170704  lw          $s7, 0x704($s0)
    ctx->pc = 0x23ec48u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1796)));
    // 0x23ec4c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x23ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x23ec50: 0x24060016  addiu       $a2, $zero, 0x16
    ctx->pc = 0x23ec50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x23ec54: 0x24070037  addiu       $a3, $zero, 0x37
    ctx->pc = 0x23ec54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x23ec58: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x23ec58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x23ec5c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x23ec5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ec60: 0xc09826a  jal         func_2609A8
    ctx->pc = 0x23EC60u;
    SET_GPR_U32(ctx, 31, 0x23EC68u);
    ctx->pc = 0x23EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC60u;
    // 0x23ec64: 0x24140077  addiu       $s4, $zero, 0x77 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2609A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2609A8u, 0x23EC60u, 0x23EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC68u;
label_23ec68:
    // 0x23ec68: 0x2413001b  addiu       $s3, $zero, 0x1B
    ctx->pc = 0x23ec68u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x23ec6c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23ec6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ec70: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x23ec70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ec74: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x23ec74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x23ec78: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ec78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ec7c: 0x8c4335b8  lw          $v1, 0x35B8($v0)
    ctx->pc = 0x23ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13752)));
    // 0x23ec80: 0x8c4435bc  lw          $a0, 0x35BC($v0)
    ctx->pc = 0x23ec80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13756)));
    // 0x23ec84: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23ec84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23ec88: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23EC88u;
    {
        const bool branch_taken_0x23ec88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EC88u;
        // 0x23ec8c: 0xe600054c  swc1        $f0, 0x54C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ec88) {
            ctx->pc = 0x23ECA8u;
            goto label_23eca8;
        }
    }
    ctx->pc = 0x23EC90u;
label_23ec90:
    // 0x23ec90: 0xc09ac7a  jal         func_26B1E8
    ctx->pc = 0x23EC90u;
    SET_GPR_U32(ctx, 31, 0x23EC98u);
    ctx->pc = 0x23EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EC90u;
    // 0x23ec94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26B1E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1E8u, 0x23EC90u, 0x23EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EC98u;
label_23ec98:
    // 0x23ec98: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23ec98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23ec9c: 0x8c4320c4  lw          $v1, 0x20C4($v0)
    ctx->pc = 0x23ec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8388)));
    // 0x23eca0: 0x8c4420c8  lw          $a0, 0x20C8($v0)
    ctx->pc = 0x23eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8392)));
label_23eca4:
    // 0x23eca4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x23eca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_23eca8:
    // 0x23eca8: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x23eca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_23ecac:
    // 0x23ecac: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23ECACu;
    SET_GPR_U32(ctx, 31, 0x23ECB4u);
    ctx->pc = 0x23ECB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECACu;
    // 0x23ecb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23ECACu, 0x23ECB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECB4u;
label_23ecb4:
    // 0x23ecb4: 0x2a21025  or          $v0, $s5, $v0
    ctx->pc = 0x23ecb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | GPR_U64(ctx, 2));
    // 0x23ecb8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23ecb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecbc: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x23ecbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x23ecc0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x23ecc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecc4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23ecc4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23ecc8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ecc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23eccc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x23ecccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23ecd0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23ECD0u;
    SET_GPR_U32(ctx, 31, 0x23ECD8u);
    ctx->pc = 0x23ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECD0u;
    // 0x23ecd4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23ECD0u, 0x23ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECD8u;
label_23ecd8:
    // 0x23ecd8: 0x3a8204e2  xori        $v0, $s4, 0x4E2
    ctx->pc = 0x23ecd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1250);
    // 0x23ecdc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23ECDCu;
    {
        const bool branch_taken_0x23ecdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ECDCu;
        // 0x23ece0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ecdc) {
            ctx->pc = 0x23ECFCu;
            goto label_23ecfc;
        }
    }
    ctx->pc = 0x23ECE4u;
    // 0x23ece4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x23ece4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ece8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x23ece8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecec: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x23ececu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ecf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ecf4: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x23ECF4u;
    SET_GPR_U32(ctx, 31, 0x23ECFCu);
    ctx->pc = 0x23ECF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ECF4u;
    // 0x23ecf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x23ECF4u, 0x23ECFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ECFCu;
label_23ecfc:
    // 0x23ecfc: 0x8e0406f0  lw          $a0, 0x6F0($s0)
    ctx->pc = 0x23ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1776)));
    // 0x23ed00: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23ED00u;
    {
        const bool branch_taken_0x23ed00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ed00) {
            ctx->pc = 0x23ED04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED00u;
            // 0x23ed04: 0x8e040708  lw          $a0, 0x708($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED14u;
            goto label_23ed14;
        }
    }
    ctx->pc = 0x23ED08u;
    // 0x23ed08: 0xc074134  jal         func_1D04D0
    ctx->pc = 0x23ED08u;
    SET_GPR_U32(ctx, 31, 0x23ED10u);
    ctx->pc = 0x1D04D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D04D0u, 0x23ED08u, 0x23ED10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED10u;
label_23ed10:
    // 0x23ed10: 0x8e040708  lw          $a0, 0x708($s0)
    ctx->pc = 0x23ed10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1800)));
label_23ed14:
    // 0x23ed14: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x23ED14u;
    {
        const bool branch_taken_0x23ed14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ed14) {
            ctx->pc = 0x23ED18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED14u;
            // 0x23ed18: 0x8e020698  lw          $v0, 0x698($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED28u;
            goto label_23ed28;
        }
    }
    ctx->pc = 0x23ED1Cu;
    // 0x23ed1c: 0xc074170  jal         func_1D05C0
    ctx->pc = 0x23ED1Cu;
    SET_GPR_U32(ctx, 31, 0x23ED24u);
    ctx->pc = 0x1D05C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D05C0u, 0x23ED1Cu, 0x23ED24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23ED24u;
label_23ed24:
    // 0x23ed24: 0x8e020698  lw          $v0, 0x698($s0)
    ctx->pc = 0x23ed24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1688)));
label_23ed28:
    // 0x23ed28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x23ED28u;
    {
        const bool branch_taken_0x23ed28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED28u;
        // 0x23ed2c: 0xae0005f0  sw          $zero, 0x5F0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed28) {
            ctx->pc = 0x23ED68u;
            goto label_23ed68;
        }
    }
    ctx->pc = 0x23ED30u;
    // 0x23ed30: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x23ed30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x23ed34: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x23ED34u;
    {
        const bool branch_taken_0x23ed34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED34u;
        // 0x23ed38: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed34) {
            ctx->pc = 0x23ED68u;
            goto label_23ed68;
        }
    }
    ctx->pc = 0x23ED3Cu;
    // 0x23ed3c: 0x260305d0  addiu       $v1, $s0, 0x5D0
    ctx->pc = 0x23ed3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    // 0x23ed40: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x23ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x23ed44: 0x8c8200f0  lw          $v0, 0xF0($a0)
    ctx->pc = 0x23ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
    // 0x23ed48: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23ED48u;
    {
        const bool branch_taken_0x23ed48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23ed48) {
            ctx->pc = 0x23ED4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23ED48u;
            // 0x23ed4c: 0x920202f6  lbu         $v0, 0x2F6($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23ED6Cu;
            goto label_23ed6c;
        }
    }
    ctx->pc = 0x23ED50u;
    // 0x23ed50: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23ed50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ed54: 0xe60005d0  swc1        $f0, 0x5D0($s0)
    ctx->pc = 0x23ed54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1488), bits); }
    // 0x23ed58: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x23ed58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23ed5c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x23ed5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x23ed60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x23ed60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23ed64: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x23ed64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_23ed68:
    // 0x23ed68: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23ed68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
label_23ed6c:
    // 0x23ed6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23ed6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23ed70: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23ed70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x23ed74: 0x8e0205f0  lw          $v0, 0x5F0($s0)
    ctx->pc = 0x23ed74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1520)));
label_23ed78:
    // 0x23ed78: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x23ED78u;
    {
        const bool branch_taken_0x23ed78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23ED78u;
        // 0x23ed7c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ed78) {
            ctx->pc = 0x23EDA4u;
            goto label_23eda4;
        }
    }
    ctx->pc = 0x23ED80u;
    // 0x23ed80: 0xc60c05a8  lwc1        $f12, 0x5A8($s0)
    ctx->pc = 0x23ed80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x23ed84: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x23ed84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x23ed88: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x23ed88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x23ed8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ed8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23ed90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ed90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ed94: 0xae0205f0  sw          $v0, 0x5F0($s0)
    ctx->pc = 0x23ed94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1520), GPR_U32(ctx, 2));
    // 0x23ed98: 0x260505d0  addiu       $a1, $s0, 0x5D0
    ctx->pc = 0x23ed98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1488));
    // 0x23ed9c: 0xc0a9d26  jal         func_2A7498
    ctx->pc = 0x23ED9Cu;
    SET_GPR_U32(ctx, 31, 0x23EDA4u);
    ctx->pc = 0x23EDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23ED9Cu;
    // 0x23eda0: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7498u, 0x23ED9Cu, 0x23EDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDA4u;
label_23eda4:
    // 0x23eda4: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23EDA4u;
    SET_GPR_U32(ctx, 31, 0x23EDACu);
    ctx->pc = 0x23EDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDA4u;
    // 0x23eda8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23EDA4u, 0x23EDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDACu;
label_23edac:
    // 0x23edac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EDACu;
    {
        const bool branch_taken_0x23edac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDACu;
        // 0x23edb0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edac) {
            ctx->pc = 0x23EDC4u;
            goto label_23edc4;
        }
    }
    ctx->pc = 0x23EDB4u;
    // 0x23edb4: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x23edb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
    // 0x23edb8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23edb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x23edbc: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x23EDBCu;
    {
        const bool branch_taken_0x23edbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDBCu;
        // 0x23edc0: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23edbc) {
            ctx->pc = 0x23EFD0u;
            goto label_23efd0;
        }
    }
    ctx->pc = 0x23EDC4u;
label_23edc4:
    // 0x23edc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23edc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23edc8: 0xa60217ca  sh          $v0, 0x17CA($s0)
    ctx->pc = 0x23edc8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6090), (uint16_t)GPR_U32(ctx, 2));
    // 0x23edcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x23edccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23edd0: 0xc09bb90  jal         func_26EE40
    ctx->pc = 0x23EDD0u;
    SET_GPR_U32(ctx, 31, 0x23EDD8u);
    ctx->pc = 0x23EDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EDD0u;
    // 0x23edd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EE40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EE40u, 0x23EDD0u, 0x23EDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EDD8u;
label_23edd8:
    // 0x23edd8: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x23edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x23eddc: 0x2444fe00  addiu       $a0, $v0, -0x200
    ctx->pc = 0x23eddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966784));
    // 0x23ede0: 0x2c83007f  sltiu       $v1, $a0, 0x7F
    ctx->pc = 0x23ede0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)127) ? 1 : 0);
    // 0x23ede4: 0x1060006d  beqz        $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x23EDE4u;
    {
        const bool branch_taken_0x23ede4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EDE4u;
        // 0x23ede8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ede4) {
            ctx->pc = 0x23EF9Cu;
            goto label_23ef9c;
        }
    }
    ctx->pc = 0x23EDECu;
    // 0x23edec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x23edecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x23edf0: 0x2442b730  addiu       $v0, $v0, -0x48D0
    ctx->pc = 0x23edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948656));
    // 0x23edf4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23edf8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23edf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23edfc: 0x800008  jr          $a0
    ctx->pc = 0x23EDFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23EE04u: goto label_23ee04;
            case 0x23EE60u: goto label_23ee60;
            case 0x23EE88u: goto label_23ee88;
            case 0x23EEF8u: goto label_23eef8;
            case 0x23EF68u: goto label_23ef68;
            case 0x23EF9Cu: goto label_23ef9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23EDFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23EE04u;
label_23ee04:
    // 0x23ee04: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23ee08: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23EE08u;
    SET_GPR_U32(ctx, 31, 0x23EE10u);
    ctx->pc = 0x23EE0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE08u;
    // 0x23ee0c: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23EE08u, 0x23EE10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE10u;
label_23ee10:
    // 0x23ee10: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23ee10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee14: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x23ee14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x23ee18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EE18u;
    {
        const bool branch_taken_0x23ee18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE18u;
        // 0x23ee1c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee18) {
            ctx->pc = 0x23EE30u;
            goto label_23ee30;
        }
    }
    ctx->pc = 0x23EE20u;
    // 0x23ee20: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EE20u;
    {
        const bool branch_taken_0x23ee20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ee20) {
            ctx->pc = 0x23EE44u;
            goto label_23ee44;
        }
    }
    ctx->pc = 0x23EE28u;
    // 0x23ee28: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x23EE28u;
    {
        const bool branch_taken_0x23ee28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE28u;
        // 0x23ee2c: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee28) {
            ctx->pc = 0x23EFA0u;
            goto label_23efa0;
        }
    }
    ctx->pc = 0x23EE30u;
label_23ee30:
    // 0x23ee30: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x23ee30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x23ee34: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x23EE34u;
    {
        const bool branch_taken_0x23ee34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23EE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE34u;
        // 0x23ee38: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee34) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EE3Cu;
    // 0x23ee3c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x23EE3Cu;
    {
        const bool branch_taken_0x23ee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE3Cu;
        // 0x23ee40: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee3c) {
            ctx->pc = 0x23EFA0u;
            goto label_23efa0;
        }
    }
    ctx->pc = 0x23EE44u;
label_23ee44:
    // 0x23ee44: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EE44u;
    SET_GPR_U32(ctx, 31, 0x23EE4Cu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EE44u, 0x23EE4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE4Cu;
label_23ee4c:
    // 0x23ee4c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x23ee4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x23ee50: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x23EE50u;
    {
        const bool branch_taken_0x23ee50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ee50) {
            ctx->pc = 0x23EE54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EE50u;
            // 0x23ee54: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EFA0u;
            goto label_23efa0;
        }
    }
    ctx->pc = 0x23EE58u;
    // 0x23ee58: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x23EE58u;
    {
        const bool branch_taken_0x23ee58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE58u;
        // 0x23ee5c: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee58) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EE60u;
label_23ee60:
    // 0x23ee60: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EE60u;
    SET_GPR_U32(ctx, 31, 0x23EE68u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EE60u, 0x23EE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE68u;
label_23ee68:
    // 0x23ee68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ee6c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x23EE6Cu;
    {
        const bool branch_taken_0x23ee6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE6Cu;
        // 0x23ee70: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee6c) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EE74u;
    // 0x23ee74: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x23ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x23ee78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23ee78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23ee7c: 0xa20202f7  sb          $v0, 0x2F7($s0)
    ctx->pc = 0x23ee7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x23ee80: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x23EE80u;
    {
        const bool branch_taken_0x23ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE80u;
        // 0x23ee84: 0xa20302f5  sb          $v1, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee80) {
            ctx->pc = 0x23EFB0u;
            goto label_23efb0;
        }
    }
    ctx->pc = 0x23EE88u;
label_23ee88:
    // 0x23ee88: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23ee88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23ee8c: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23EE8Cu;
    SET_GPR_U32(ctx, 31, 0x23EE94u);
    ctx->pc = 0x23EE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EE8Cu;
    // 0x23ee90: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23EE8Cu, 0x23EE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EE94u;
label_23ee94:
    // 0x23ee94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23ee94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ee98: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EE98u;
    {
        const bool branch_taken_0x23ee98 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x23EE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EE98u;
        // 0x23ee9c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ee98) {
            ctx->pc = 0x23EEB0u;
            goto label_23eeb0;
        }
    }
    ctx->pc = 0x23EEA0u;
    // 0x23eea0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EEA0u;
    {
        const bool branch_taken_0x23eea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEA0u;
        // 0x23eea4: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eea0) {
            ctx->pc = 0x23EEB0u;
            goto label_23eeb0;
        }
    }
    ctx->pc = 0x23EEA8u;
    // 0x23eea8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EEA8u;
    {
        const bool branch_taken_0x23eea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eea8) {
            ctx->pc = 0x23EECCu;
            goto label_23eecc;
        }
    }
    ctx->pc = 0x23EEB0u;
label_23eeb0:
    // 0x23eeb0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EEB0u;
    SET_GPR_U32(ctx, 31, 0x23EEB8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EEB0u, 0x23EEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EEB8u;
label_23eeb8:
    // 0x23eeb8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23eeb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23eebc: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x23EEBCu;
    {
        const bool branch_taken_0x23eebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eebc) {
            ctx->pc = 0x23EEC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EEBCu;
            // 0x23eec0: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EFA0u;
            goto label_23efa0;
        }
    }
    ctx->pc = 0x23EEC4u;
    // 0x23eec4: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x23EEC4u;
    {
        const bool branch_taken_0x23eec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEC4u;
        // 0x23eec8: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eec4) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EECCu;
label_23eecc:
    // 0x23eecc: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EECCu;
    SET_GPR_U32(ctx, 31, 0x23EED4u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EECCu, 0x23EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EED4u;
label_23eed4:
    // 0x23eed4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23eed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23eed8: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23eed8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23eedc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23EEDCu;
    {
        const bool branch_taken_0x23eedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23eedc) {
            ctx->pc = 0x23EEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EEDCu;
            // 0x23eee0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EEE4u;
            goto label_23eee4;
        }
    }
    ctx->pc = 0x23EEE4u;
label_23eee4:
    // 0x23eee4: 0x2010  mfhi        $a0
    ctx->pc = 0x23eee4u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23eee8: 0x5480002d  bnel        $a0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x23EEE8u;
    {
        const bool branch_taken_0x23eee8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23eee8) {
            ctx->pc = 0x23EEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EEE8u;
            // 0x23eeec: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EFA0u;
            goto label_23efa0;
        }
    }
    ctx->pc = 0x23EEF0u;
    // 0x23eef0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x23EEF0u;
    {
        const bool branch_taken_0x23eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EEF0u;
        // 0x23eef4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23eef0) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EEF8u;
label_23eef8:
    // 0x23eef8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x23eef8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x23eefc: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x23EEFCu;
    SET_GPR_U32(ctx, 31, 0x23EF04u);
    ctx->pc = 0x23EF00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EEFCu;
    // 0x23ef00: 0x24849b70  addiu       $a0, $a0, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x23EEFCu, 0x23EF04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF04u;
label_23ef04:
    // 0x23ef04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23ef04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23ef08: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x23EF08u;
    {
        const bool branch_taken_0x23ef08 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x23EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF08u;
        // 0x23ef0c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef08) {
            ctx->pc = 0x23EF20u;
            goto label_23ef20;
        }
    }
    ctx->pc = 0x23EF10u;
    // 0x23ef10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23EF10u;
    {
        const bool branch_taken_0x23ef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF10u;
        // 0x23ef14: 0x28620006  slti        $v0, $v1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef10) {
            ctx->pc = 0x23EF20u;
            goto label_23ef20;
        }
    }
    ctx->pc = 0x23EF18u;
    // 0x23ef18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23EF18u;
    {
        const bool branch_taken_0x23ef18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ef18) {
            ctx->pc = 0x23EF3Cu;
            goto label_23ef3c;
        }
    }
    ctx->pc = 0x23EF20u;
label_23ef20:
    // 0x23ef20: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EF20u;
    SET_GPR_U32(ctx, 31, 0x23EF28u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EF20u, 0x23EF28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF28u;
label_23ef28:
    // 0x23ef28: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x23ef28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x23ef2c: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x23EF2Cu;
    {
        const bool branch_taken_0x23ef2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ef2c) {
            ctx->pc = 0x23EF30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EF2Cu;
            // 0x23ef30: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EFA0u;
            goto label_23efa0;
        }
    }
    ctx->pc = 0x23EF34u;
    // 0x23ef34: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x23EF34u;
    {
        const bool branch_taken_0x23ef34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF34u;
        // 0x23ef38: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef34) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EF3Cu;
label_23ef3c:
    // 0x23ef3c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EF3Cu;
    SET_GPR_U32(ctx, 31, 0x23EF44u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EF3Cu, 0x23EF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF44u;
label_23ef44:
    // 0x23ef44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23ef44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23ef48: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23ef48u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23ef4c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23EF4Cu;
    {
        const bool branch_taken_0x23ef4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ef4c) {
            ctx->pc = 0x23EF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EF4Cu;
            // 0x23ef50: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EF54u;
            goto label_23ef54;
        }
    }
    ctx->pc = 0x23EF54u;
label_23ef54:
    // 0x23ef54: 0x2010  mfhi        $a0
    ctx->pc = 0x23ef54u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23ef58: 0x54800011  bnel        $a0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x23EF58u;
    {
        const bool branch_taken_0x23ef58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ef58) {
            ctx->pc = 0x23EF5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23EF58u;
            // 0x23ef5c: 0x8e0206ec  lw          $v0, 0x6EC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23EFA0u;
            goto label_23efa0;
        }
    }
    ctx->pc = 0x23EF60u;
    // 0x23ef60: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x23EF60u;
    {
        const bool branch_taken_0x23ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF60u;
        // 0x23ef64: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef60) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EF68u;
label_23ef68:
    // 0x23ef68: 0x8e0316d4  lw          $v1, 0x16D4($s0)
    ctx->pc = 0x23ef68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5844)));
    // 0x23ef6c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x23ef6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x23ef70: 0x34420380  ori         $v0, $v0, 0x380
    ctx->pc = 0x23ef70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)896);
    // 0x23ef74: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23ef74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x23ef78: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x23EF78u;
    {
        const bool branch_taken_0x23ef78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF78u;
        // 0x23ef7c: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef78) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EF80u;
    // 0x23ef80: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23EF80u;
    SET_GPR_U32(ctx, 31, 0x23EF88u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23EF80u, 0x23EF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EF88u;
label_23ef88:
    // 0x23ef88: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ef88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23ef8c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EF8Cu;
    {
        const bool branch_taken_0x23ef8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF8Cu;
        // 0x23ef90: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef8c) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EF94u;
    // 0x23ef94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23EF94u;
    {
        const bool branch_taken_0x23ef94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EF94u;
        // 0x23ef98: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ef94) {
            ctx->pc = 0x23EFA8u;
            goto label_23efa8;
        }
    }
    ctx->pc = 0x23EF9Cu;
label_23ef9c:
    // 0x23ef9c: 0x8e0206ec  lw          $v0, 0x6EC($s0)
    ctx->pc = 0x23ef9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1772)));
label_23efa0:
    // 0x23efa0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x23EFA0u;
    {
        const bool branch_taken_0x23efa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFA0u;
        // 0x23efa4: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efa0) {
            ctx->pc = 0x23EFBCu;
            goto label_23efbc;
        }
    }
    ctx->pc = 0x23EFA8u;
label_23efa8:
    // 0x23efa8: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23efa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x23efac: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23efacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
label_23efb0:
    // 0x23efb0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23efb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23efb4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x23EFB4u;
    {
        const bool branch_taken_0x23efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23EFB4u;
        // 0x23efb8: 0xa20002f6  sb          $zero, 0x2F6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23efb4) {
            ctx->pc = 0x23EFF8u;
            goto label_23eff8;
        }
    }
    ctx->pc = 0x23EFBCu;
label_23efbc:
    // 0x23efbc: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x23efbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x23efc0: 0xa20002f4  sb          $zero, 0x2F4($s0)
    ctx->pc = 0x23efc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x23efc4: 0xa20202f5  sb          $v0, 0x2F5($s0)
    ctx->pc = 0x23efc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x23efc8: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x23efc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x23efcc: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x23efccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_23efd0:
    // 0x23efd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23efd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23efd4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23efd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23efd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23efd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23efdc: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23EFDCu;
    SET_GPR_U32(ctx, 31, 0x23EFE4u);
    ctx->pc = 0x23EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFDCu;
    // 0x23efe0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23EFDCu, 0x23EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFE4u;
label_23efe4:
    // 0x23efe4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23efe4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23efe8: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23EFE8u;
    SET_GPR_U32(ctx, 31, 0x23EFF0u);
    ctx->pc = 0x23EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFE8u;
    // 0x23efec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23EFE8u, 0x23EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFF0u;
label_23eff0:
    // 0x23eff0: 0xc0982cc  jal         func_260B30
    ctx->pc = 0x23EFF0u;
    SET_GPR_U32(ctx, 31, 0x23EFF8u);
    ctx->pc = 0x23EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23EFF0u;
    // 0x23eff4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B30u, 0x23EFF0u, 0x23EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23EFF8u;
label_23eff8:
    // 0x23eff8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x23eff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23effc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x23effcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x23f000: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x23f000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x23f004: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x23f004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x23f008: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23f008u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x23f00c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x23f00cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23f010: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x23f010u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23f014: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x23f014u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23f018: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23f018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23f01c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x23f01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23f020: 0x3e00008  jr          $ra
    ctx->pc = 0x23F020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23F020u;
        // 0x23f024: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23F020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23F028u;
}
