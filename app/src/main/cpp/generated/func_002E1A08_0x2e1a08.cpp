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

// Function: func_002E1A08
// Address: 0x2e1a08 - 0x2e2558
void func_002E1A08_0x2e1a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002E1A08_0x2e1a08");
#endif

    switch (ctx->pc) {
        case 0x2e1ab4u: goto label_2e1ab4;
        case 0x2e1afcu: goto label_2e1afc;
        case 0x2e1b48u: goto label_2e1b48;
        case 0x2e1b6cu: goto label_2e1b6c;
        case 0x2e1b84u: goto label_2e1b84;
        case 0x2e1b9cu: goto label_2e1b9c;
        case 0x2e1ca4u: goto label_2e1ca4;
        case 0x2e1d08u: goto label_2e1d08;
        case 0x2e1d3cu: goto label_2e1d3c;
        case 0x2e2028u: goto label_2e2028;
        case 0x2e20b0u: goto label_2e20b0;
        case 0x2e21f4u: goto label_2e21f4;
        case 0x2e2208u: goto label_2e2208;
        case 0x2e2510u: goto label_2e2510;
        default: break;
    }

    ctx->pc = 0x2e1a08u;

    // 0x2e1a08: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2e1a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2e1a0c: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2e1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x2e1a10: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x2e1a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x2e1a14: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x2e1a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x2e1a18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e1a18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1a1c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x2e1a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x2e1a20: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x2e1a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x2e1a24: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x2e1a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x2e1a28: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x2e1a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x2e1a2c: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2e1a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2e1a30: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e1a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e1a34: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x2e1a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x2e1a38: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e1a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e1a3c: 0xe7b80120  swc1        $f24, 0x120($sp)
    ctx->pc = 0x2e1a3cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2e1a40: 0xe7b70118  swc1        $f23, 0x118($sp)
    ctx->pc = 0x2e1a40u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x2e1a44: 0xe7b60110  swc1        $f22, 0x110($sp)
    ctx->pc = 0x2e1a44u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x2e1a48: 0xe7b50108  swc1        $f21, 0x108($sp)
    ctx->pc = 0x2e1a48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x2e1a4c: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x2e1a4cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x2e1a50: 0x8e23011c  lw          $v1, 0x11C($s1)
    ctx->pc = 0x2e1a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2e1a54: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2e1a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2e1a58: 0x144002ae  bnez        $v0, . + 4 + (0x2AE << 2)
    ctx->pc = 0x2E1A58u;
    {
        const bool branch_taken_0x2e1a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A58u;
        // 0x2e1a5c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a58) {
            ctx->pc = 0x2E2514u;
            goto label_2e2514;
        }
    }
    ctx->pc = 0x2E1A60u;
    // 0x2e1a60: 0x8e220114  lw          $v0, 0x114($s1)
    ctx->pc = 0x2e1a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e1a64: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1A64u;
    {
        const bool branch_taken_0x2e1a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A64u;
        // 0x2e1a68: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a64) {
            ctx->pc = 0x2E1A8Cu;
            goto label_2e1a8c;
        }
    }
    ctx->pc = 0x2E1A6Cu;
    // 0x2e1a6c: 0x8c420250  lw          $v0, 0x250($v0)
    ctx->pc = 0x2e1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2e1a70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2e1a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2e1a74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1A74u;
    {
        const bool branch_taken_0x2e1a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A74u;
        // 0x2e1a78: 0x311fa  dsrl        $v0, $v1, 7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a74) {
            ctx->pc = 0x2E1A8Cu;
            goto label_2e1a8c;
        }
    }
    ctx->pc = 0x2E1A7Cu;
    // 0x2e1a7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e1a80: 0x504002a5  beql        $v0, $zero, . + 4 + (0x2A5 << 2)
    ctx->pc = 0x2E1A80u;
    {
        const bool branch_taken_0x2e1a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1a80) {
            ctx->pc = 0x2E1A84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1A80u;
            // 0x2e1a84: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2518u;
            goto label_2e2518;
        }
    }
    ctx->pc = 0x2E1A88u;
    // 0x2e1a88: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e1a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a8c:
    // 0x2e1a8c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2e1a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2e1a90: 0x8e240120  lw          $a0, 0x120($s1)
    ctx->pc = 0x2e1a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2e1a94: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E1A94u;
    {
        const bool branch_taken_0x2e1a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A94u;
        // 0x2e1a98: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a94) {
            ctx->pc = 0x2E1ACCu;
            goto label_2e1acc;
        }
    }
    ctx->pc = 0x2E1A9Cu;
    // 0x2e1a9c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e1a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e1aa0: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2e1aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2e1aa4: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1AA4u;
    {
        const bool branch_taken_0x2e1aa4 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2e1aa4) {
            ctx->pc = 0x2E1AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1AA4u;
            // 0x2e1aa8: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1AC8u;
            goto label_2e1ac8;
        }
    }
    ctx->pc = 0x2E1AACu;
    // 0x2e1aac: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2E1AACu;
    SET_GPR_U32(ctx, 31, 0x2E1AB4u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2E1AACu, 0x2E1AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AB4u;
label_2e1ab4:
    // 0x2e1ab4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1ab8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1AB8u;
    {
        const bool branch_taken_0x2e1ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1ab8) {
            ctx->pc = 0x2E1ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1AB8u;
            // 0x2e1abc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1ACCu;
            goto label_2e1acc;
        }
    }
    ctx->pc = 0x2E1AC0u;
    // 0x2e1ac0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1AC0u;
    {
        const bool branch_taken_0x2e1ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AC0u;
        // 0x2e1ac4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ac0) {
            ctx->pc = 0x2E1AD0u;
            goto label_2e1ad0;
        }
    }
    ctx->pc = 0x2E1AC8u;
label_2e1ac8:
    // 0x2e1ac8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e1ac8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1acc:
    // 0x2e1acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e1ad0:
    // 0x2e1ad0: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E1AD0u;
    {
        const bool branch_taken_0x2e1ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e1ad0) {
            ctx->pc = 0x2E1AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1AD0u;
            // 0x2e1ad4: 0x8e22011c  lw          $v0, 0x11C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1B4Cu;
            goto label_2e1b4c;
        }
    }
    ctx->pc = 0x2E1AD8u;
    // 0x2e1ad8: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x2e1ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2e1adc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2e1adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e1ae0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e1ae4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2E1AE4u;
    {
        const bool branch_taken_0x2e1ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1AE4u;
        // 0x2e1ae8: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ae4) {
            ctx->pc = 0x2E1B48u;
            goto label_2e1b48;
        }
    }
    ctx->pc = 0x2E1AECu;
    // 0x2e1aec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e1aecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e1af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1af4: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2E1AF4u;
    SET_GPR_U32(ctx, 31, 0x2E1AFCu);
    ctx->pc = 0x2E1AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1AF4u;
    // 0x2e1af8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2E1AF4u, 0x2E1AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1AFCu;
label_2e1afc:
    // 0x2e1afc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2e1afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b00: 0x13a50006  beq         $sp, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1B00u;
    {
        const bool branch_taken_0x2e1b00 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 5));
        ctx->pc = 0x2E1B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B00u;
        // 0x2e1b04: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b00) {
            ctx->pc = 0x2E1B1Cu;
            goto label_2e1b1c;
        }
    }
    ctx->pc = 0x2E1B08u;
    // 0x2e1b08: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2e1b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1b0c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x2e1b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1b10: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2e1b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e1b14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2e1b14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e1b18: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2e1b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2e1b1c:
    // 0x2e1b1c: 0xdba40000  lqc2        $vf4, 0x0($sp)
    ctx->pc = 0x2e1b1cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1b20: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2e1b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e1b24: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x2e1b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2e1b28: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2e1b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1b2c: 0xdba40010  lqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2e1b2cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1b30: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2e1b30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2e1b34: 0x48a82800  qmtc2.ni    $t0, $vf5
    ctx->pc = 0x2e1b34u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2e1b38: 0x4bc52118  vmulx.xyz   $vf4, $vf4, $vf5x
    ctx->pc = 0x2e1b38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2e1b3c: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x2e1b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2e1b40: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2E1B40u;
    SET_GPR_U32(ctx, 31, 0x2E1B48u);
    ctx->pc = 0x2E1B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B40u;
    // 0x2e1b44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2E1B40u, 0x2E1B48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B48u;
label_2e1b48:
    // 0x2e1b48: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2e1b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
label_2e1b4c:
    // 0x2e1b4c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x2e1b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x2e1b50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e1b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e1b54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1B54u;
    {
        const bool branch_taken_0x2e1b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B54u;
        // 0x2e1b58: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b54) {
            ctx->pc = 0x2E1B74u;
            goto label_2e1b74;
        }
    }
    ctx->pc = 0x2E1B5Cu;
    // 0x2e1b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b60: 0x2445b500  addiu       $a1, $v0, -0x4B00
    ctx->pc = 0x2e1b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948096));
    // 0x2e1b64: 0xc0bfa28  jal         func_2FE8A0
    ctx->pc = 0x2E1B64u;
    SET_GPR_U32(ctx, 31, 0x2E1B6Cu);
    ctx->pc = 0x2E1B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B64u;
    // 0x2e1b68: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE8A0u, 0x2E1B64u, 0x2E1B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B6Cu;
label_2e1b6c:
    // 0x2e1b6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E1B6Cu;
    {
        const bool branch_taken_0x2e1b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B6Cu;
        // 0x2e1b70: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b6c) {
            ctx->pc = 0x2E1B88u;
            goto label_2e1b88;
        }
    }
    ctx->pc = 0x2E1B74u;
label_2e1b74:
    // 0x2e1b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e1b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1b78: 0x2445b500  addiu       $a1, $v0, -0x4B00
    ctx->pc = 0x2e1b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948096));
    // 0x2e1b7c: 0xc0bf836  jal         func_2FE0D8
    ctx->pc = 0x2E1B7Cu;
    SET_GPR_U32(ctx, 31, 0x2E1B84u);
    ctx->pc = 0x2E1B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B7Cu;
    // 0x2e1b80: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE0D8u, 0x2E1B7Cu, 0x2E1B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B84u;
label_2e1b84:
    // 0x2e1b84: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2e1b84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e1b88:
    // 0x2e1b88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1b8c: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1B8Cu;
    {
        const bool branch_taken_0x2e1b8c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E1B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B8Cu;
        // 0x2e1b90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b8c) {
            ctx->pc = 0x2E1B9Cu;
            goto label_2e1b9c;
        }
    }
    ctx->pc = 0x2E1B94u;
    // 0x2e1b94: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2E1B94u;
    SET_GPR_U32(ctx, 31, 0x2E1B9Cu);
    ctx->pc = 0x2E1B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1B94u;
    // 0x2e1b98: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2E1B94u, 0x2E1B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1B9Cu;
label_2e1b9c:
    // 0x2e1b9c: 0x660025d  bltz        $s3, . + 4 + (0x25D << 2)
    ctx->pc = 0x2E1B9Cu;
    {
        const bool branch_taken_0x2e1b9c = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x2E1BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1B9Cu;
        // 0x2e1ba0: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b9c) {
            ctx->pc = 0x2E2514u;
            goto label_2e2514;
        }
    }
    ctx->pc = 0x2E1BA4u;
    // 0x2e1ba4: 0x9222024b  lbu         $v0, 0x24B($s1)
    ctx->pc = 0x2e1ba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 587)));
    // 0x2e1ba8: 0x9223024a  lbu         $v1, 0x24A($s1)
    ctx->pc = 0x2e1ba8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 586)));
    // 0x2e1bac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2e1bacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1bb0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e1bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1bb4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e1bb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e1bb8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2e1bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1bbc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2E1BBCu;
    {
        const bool branch_taken_0x2e1bbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BBCu;
        // 0x2e1bc0: 0x22040  sll         $a0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1bbc) {
            ctx->pc = 0x2E1C00u;
            goto label_2e1c00;
        }
    }
    ctx->pc = 0x2E1BC4u;
    // 0x2e1bc4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x2e1bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e1bc8: 0x265102a  slt         $v0, $s3, $a1
    ctx->pc = 0x2e1bc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2e1bcc: 0x54400252  bnel        $v0, $zero, . + 4 + (0x252 << 2)
    ctx->pc = 0x2E1BCCu;
    {
        const bool branch_taken_0x2e1bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1bcc) {
            ctx->pc = 0x2E1BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1BCCu;
            // 0x2e1bd0: 0x7bb100e0  lq          $s1, 0xE0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2518u;
            goto label_2e2518;
        }
    }
    ctx->pc = 0x2E1BD4u;
    // 0x2e1bd4: 0x264102a  slt         $v0, $s3, $a0
    ctx->pc = 0x2e1bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2e1bd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1BD8u;
    {
        const bool branch_taken_0x2e1bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1BD8u;
        // 0x2e1bdc: 0x2651023  subu        $v0, $s3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1bd8) {
            ctx->pc = 0x2E1C00u;
            goto label_2e1c00;
        }
    }
    ctx->pc = 0x2E1BE0u;
    // 0x2e1be0: 0x61840  sll         $v1, $a2, 1
    ctx->pc = 0x2e1be0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2e1be4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1be8: 0x0  nop
    ctx->pc = 0x2e1be8u;
    // NOP
    // 0x2e1bec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1becu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1bf0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1bf0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1bf4: 0x0  nop
    ctx->pc = 0x2e1bf4u;
    // NOP
    // 0x2e1bf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1bfc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2e1bfcu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[0]);
label_2e1c00:
    // 0x2e1c00: 0x96230276  lhu         $v1, 0x276($s1)
    ctx->pc = 0x2e1c00u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 630)));
    // 0x2e1c04: 0x661023  subu        $v0, $v1, $a2
    ctx->pc = 0x2e1c04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2e1c08: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2E1C08u;
    {
        const bool branch_taken_0x2e1c08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C08u;
        // 0x2e1c0c: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c08) {
            ctx->pc = 0x2E1C50u;
            goto label_2e1c50;
        }
    }
    ctx->pc = 0x2E1C10u;
    // 0x2e1c10: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x2e1c10u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2e1c14: 0x93102a  slt         $v0, $a0, $s3
    ctx->pc = 0x2e1c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e1c18: 0x5440023e  bnel        $v0, $zero, . + 4 + (0x23E << 2)
    ctx->pc = 0x2E1C18u;
    {
        const bool branch_taken_0x2e1c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1c18) {
            ctx->pc = 0x2E1C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1C18u;
            // 0x2e1c1c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2514u;
            goto label_2e2514;
        }
    }
    ctx->pc = 0x2E1C20u;
    // 0x2e1c20: 0xb3102a  slt         $v0, $a1, $s3
    ctx->pc = 0x2e1c20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x2e1c24: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E1C24u;
    {
        const bool branch_taken_0x2e1c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C24u;
        // 0x2e1c28: 0x2641023  subu        $v0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c24) {
            ctx->pc = 0x2E1C50u;
            goto label_2e1c50;
        }
    }
    ctx->pc = 0x2E1C2Cu;
    // 0x2e1c2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1c2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1c30: 0x0  nop
    ctx->pc = 0x2e1c30u;
    // NOP
    // 0x2e1c34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1c38: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2e1c38u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2e1c3c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x2e1c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x2e1c40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1c44: 0x0  nop
    ctx->pc = 0x2e1c44u;
    // NOP
    // 0x2e1c48: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1c4c: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2e1c4cu;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2e1c50:
    // 0x2e1c50: 0x9222024c  lbu         $v0, 0x24C($s1)
    ctx->pc = 0x2e1c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 588)));
    // 0x2e1c54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E1C54u;
    {
        const bool branch_taken_0x2e1c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C54u;
        // 0x2e1c58: 0x8e240120  lw          $a0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c54) {
            ctx->pc = 0x2E1C84u;
            goto label_2e1c84;
        }
    }
    ctx->pc = 0x2E1C5Cu;
    // 0x2e1c5c: 0x9223024d  lbu         $v1, 0x24D($s1)
    ctx->pc = 0x2e1c5cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 589)));
    // 0x2e1c60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1c64: 0x0  nop
    ctx->pc = 0x2e1c64u;
    // NOP
    // 0x2e1c68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1c6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2e1c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2e1c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e1c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1c74: 0x0  nop
    ctx->pc = 0x2e1c74u;
    // NOP
    // 0x2e1c78: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1c78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1c7c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x2e1c7cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x2e1c80: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e1c80u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2e1c84:
    // 0x2e1c84: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2E1C84u;
    {
        const bool branch_taken_0x2e1c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1C84u;
        // 0x2e1c88: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1c84) {
            ctx->pc = 0x2E1CBCu;
            goto label_2e1cbc;
        }
    }
    ctx->pc = 0x2E1C8Cu;
    // 0x2e1c8c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e1c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e1c90: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2e1c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2e1c94: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E1C94u;
    {
        const bool branch_taken_0x2e1c94 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2e1c94) {
            ctx->pc = 0x2E1C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1C94u;
            // 0x2e1c98: 0xae200120  sw          $zero, 0x120($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1CB8u;
            goto label_2e1cb8;
        }
    }
    ctx->pc = 0x2E1C9Cu;
    // 0x2e1c9c: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2E1C9Cu;
    SET_GPR_U32(ctx, 31, 0x2E1CA4u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2E1C9Cu, 0x2E1CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1CA4u;
label_2e1ca4:
    // 0x2e1ca4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1ca8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1CA8u;
    {
        const bool branch_taken_0x2e1ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2e1ca8) {
            ctx->pc = 0x2E1CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1CA8u;
            // 0x2e1cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1CBCu;
            goto label_2e1cbc;
        }
    }
    ctx->pc = 0x2E1CB0u;
    // 0x2e1cb0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1CB0u;
    {
        const bool branch_taken_0x2e1cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CB0u;
        // 0x2e1cb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cb0) {
            ctx->pc = 0x2E1CC0u;
            goto label_2e1cc0;
        }
    }
    ctx->pc = 0x2E1CB8u;
label_2e1cb8:
    // 0x2e1cb8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e1cb8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1cbc:
    // 0x2e1cbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e1cc0:
    // 0x2e1cc0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E1CC0u;
    {
        const bool branch_taken_0x2e1cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e1cc0) {
            ctx->pc = 0x2E1CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1CC0u;
            // 0x2e1cc4: 0x82220101  lb          $v0, 0x101($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 257)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1CE8u;
            goto label_2e1ce8;
        }
    }
    ctx->pc = 0x2E1CC8u;
    // 0x2e1cc8: 0x8e230120  lw          $v1, 0x120($s1)
    ctx->pc = 0x2e1cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
    // 0x2e1ccc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2e1cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2e1cd0: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2e1cd0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2e1cd4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e1cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2e1cd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1CD8u;
    {
        const bool branch_taken_0x2e1cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1CD8u;
        // 0x2e1cdc: 0x82220101  lb          $v0, 0x101($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 257)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1cd8) {
            ctx->pc = 0x2E1CE8u;
            goto label_2e1ce8;
        }
    }
    ctx->pc = 0x2E1CE0u;
    // 0x2e1ce0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2e1ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1ce4: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2e1ce4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2e1ce8:
    // 0x2e1ce8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e1ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1cec: 0x8e250118  lw          $a1, 0x118($s1)
    ctx->pc = 0x2e1cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 280)));
    // 0x2e1cf0: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x2e1cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x2e1cf4: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x2e1cf4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e1cf8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2e1cf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1cfc: 0x248464a0  addiu       $a0, $a0, 0x64A0
    ctx->pc = 0x2e1cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25760));
    // 0x2e1d00: 0xc0544e6  jal         func_151398
    ctx->pc = 0x2E1D00u;
    SET_GPR_U32(ctx, 31, 0x2E1D08u);
    ctx->pc = 0x2E1D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D00u;
    // 0x2e1d04: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151398u, 0x2E1D00u, 0x2E1D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D08u;
label_2e1d08:
    // 0x2e1d08: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2e1d08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1d0c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2e1d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2e1d10: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x2e1d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x2e1d14: 0x24634128  addiu       $v1, $v1, 0x4128
    ctx->pc = 0x2e1d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16680));
    // 0x2e1d18: 0x8c4476b0  lw          $a0, 0x76B0($v0)
    ctx->pc = 0x2e1d18u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x7476B0u));
    // 0x2e1d1c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e1d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2e1d20: 0x141100  sll         $v0, $s4, 4
    ctx->pc = 0x2e1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2e1d24: 0x27a60054  addiu       $a2, $sp, 0x54
    ctx->pc = 0x2e1d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2e1d28: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x2e1d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2e1d2c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x2e1d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x2e1d30: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e1d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2e1d34: 0xc0b5420  jal         func_2D5080
    ctx->pc = 0x2E1D34u;
    SET_GPR_U32(ctx, 31, 0x2E1D3Cu);
    ctx->pc = 0x2E1D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D34u;
    // 0x2e1d38: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5080u, 0x2E1D34u, 0x2E1D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E1D3Cu;
label_2e1d3c:
    // 0x2e1d3c: 0x92240245  lbu         $a0, 0x245($s1)
    ctx->pc = 0x2e1d3cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 581)));
    // 0x2e1d40: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x2e1d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x2e1d44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1d48: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1D48u;
    {
        const bool branch_taken_0x2e1d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d48) {
            ctx->pc = 0x2E1D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1D48u;
            // 0x2e1d4c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1D50u;
            goto label_2e1d50;
        }
    }
    ctx->pc = 0x2E1D50u;
label_2e1d50:
    // 0x2e1d50: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2e1d50u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e1d54: 0x92250246  lbu         $a1, 0x246($s1)
    ctx->pc = 0x2e1d54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 582)));
    // 0x2e1d58: 0x8fa30054  lw          $v1, 0x54($sp)
    ctx->pc = 0x2e1d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x2e1d5c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2e1d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2e1d60: 0x0  nop
    ctx->pc = 0x2e1d60u;
    // NOP
    // 0x2e1d64: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2e1d64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2e1d68: 0x82220244  lb          $v0, 0x244($s1)
    ctx->pc = 0x2e1d68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 580)));
    // 0x2e1d6c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e1d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e1d70: 0x0  nop
    ctx->pc = 0x2e1d70u;
    // NOP
    // 0x2e1d74: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e1d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e1d78: 0x8e28011c  lw          $t0, 0x11C($s1)
    ctx->pc = 0x2e1d78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2e1d7c: 0x1063024  and         $a2, $t0, $a2
    ctx->pc = 0x2e1d7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) & GPR_U64(ctx, 6));
    // 0x2e1d80: 0x3812  mflo        $a3
    ctx->pc = 0x2e1d80u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x2e1d84: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x2e1d84u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e1d88: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2e1d88u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1d8c: 0x0  nop
    ctx->pc = 0x2e1d8cu;
    // NOP
    // 0x2e1d90: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1d90u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1d94: 0x46030543  div.s       $f21, $f0, $f3
    ctx->pc = 0x2e1d94u;
    ctx->f[21] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[3]);
    // 0x2e1d98: 0x2812  mflo        $a1
    ctx->pc = 0x2e1d98u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x2e1d9c: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x2e1d9cu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2e1da0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2e1da0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1da4: 0x0  nop
    ctx->pc = 0x2e1da4u;
    // NOP
    // 0x2e1da8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1da8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1dac: 0x46020d83  div.s       $f22, $f1, $f2
    ctx->pc = 0x2e1dacu;
    ctx->f[22] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[2]);
    // 0x2e1db0: 0x1012  mflo        $v0
    ctx->pc = 0x2e1db0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2e1db4: 0x1810  mfhi        $v1
    ctx->pc = 0x2e1db4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2e1db8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1db8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1dbc: 0x0  nop
    ctx->pc = 0x2e1dbcu;
    // NOP
    // 0x2e1dc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e1dc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e1dc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1dc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1dc8: 0x0  nop
    ctx->pc = 0x2e1dc8u;
    // NOP
    // 0x2e1dcc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1dd0: 0x46150602  mul.s       $f24, $f0, $f21
    ctx->pc = 0x2e1dd0u;
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2e1dd4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1DD4u;
    {
        const bool branch_taken_0x2e1dd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DD4u;
        // 0x2e1dd8: 0x46160dc2  mul.s       $f23, $f1, $f22 (Delay Slot)
        ctx->f[23] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1dd4) {
            ctx->pc = 0x2E1DE4u;
            goto label_2e1de4;
        }
    }
    ctx->pc = 0x2E1DDCu;
    // 0x2e1ddc: 0x4615c600  add.s       $f24, $f24, $f21
    ctx->pc = 0x2e1ddcu;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x2e1de0: 0x4600ad47  neg.s       $f21, $f21
    ctx->pc = 0x2e1de0u;
    ctx->f[21] = FPU_NEG_S(ctx->f[21]);
label_2e1de4:
    // 0x2e1de4: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x2e1de4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x2e1de8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x2e1de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x2e1dec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1DECu;
    {
        const bool branch_taken_0x2e1dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1dec) {
            ctx->pc = 0x2E1DFCu;
            goto label_2e1dfc;
        }
    }
    ctx->pc = 0x2E1DF4u;
    // 0x2e1df4: 0x4616bdc0  add.s       $f23, $f23, $f22
    ctx->pc = 0x2e1df4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x2e1df8: 0x4600b587  neg.s       $f22, $f22
    ctx->pc = 0x2e1df8u;
    ctx->f[22] = FPU_NEG_S(ctx->f[22]);
label_2e1dfc:
    // 0x2e1dfc: 0x6a22018f  ldl         $v0, 0x18F($s1)
    ctx->pc = 0x2e1dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e1e00: 0x6e220188  ldr         $v0, 0x188($s1)
    ctx->pc = 0x2e1e00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e1e04: 0x6a230197  ldl         $v1, 0x197($s1)
    ctx->pc = 0x2e1e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 407); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2e1e08: 0x6e230190  ldr         $v1, 0x190($s1)
    ctx->pc = 0x2e1e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 400); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2e1e0c: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x2e1e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1e10: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x2e1e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1e14: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x2e1e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1e18: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x2e1e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1e1c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2e1e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2e1e20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e1e20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1e24: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2e1e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1e28: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x2e1e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e1e2c: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x2e1e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2e1e30: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2e1e30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e1e34: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e1e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1e38: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2e1e38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e1e3c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2e1e3cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2e1e40: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x2e1e40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x2e1e44: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2e1e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e1e48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2e1e48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2e1e4c: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2e1e4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e1e50: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x2e1e50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2e1e54: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x2e1e54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2e1e58: 0xe7a1001c  swc1        $f1, 0x1C($sp)
    ctx->pc = 0x2e1e58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x2e1e5c: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x2e1e5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2e1e60: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x2e1e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2e1e64: 0x6baa001f  ldl         $t2, 0x1F($sp)
    ctx->pc = 0x2e1e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2e1e68: 0x6faa0018  ldr         $t2, 0x18($sp)
    ctx->pc = 0x2e1e68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2e1e6c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x2e1e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1e70: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x2e1e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1e74: 0xb3aa000f  sdl         $t2, 0xF($sp)
    ctx->pc = 0x2e1e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1e78: 0xb7aa0008  sdr         $t2, 0x8($sp)
    ctx->pc = 0x2e1e78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e1e7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e1e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1e80: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e1e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1e84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1e84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1e88: 0x0  nop
    ctx->pc = 0x2e1e88u;
    // NOP
    // 0x2e1e8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1E8Cu;
    {
        const bool branch_taken_0x2e1e8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1e8c) {
            ctx->pc = 0x2E1E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1E8Cu;
            // 0x2e1e90: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1E94u;
            goto label_2e1e94;
        }
    }
    ctx->pc = 0x2E1E94u;
label_2e1e94:
    // 0x2e1e94: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2e1e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1e98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1e98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1e9c: 0x0  nop
    ctx->pc = 0x2e1e9cu;
    // NOP
    // 0x2e1ea0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1EA0u;
    {
        const bool branch_taken_0x2e1ea0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1ea0) {
            ctx->pc = 0x2E1EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EA0u;
            // 0x2e1ea4: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1EA8u;
            goto label_2e1ea8;
        }
    }
    ctx->pc = 0x2E1EA8u;
label_2e1ea8:
    // 0x2e1ea8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e1ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1eac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1eacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1eb0: 0x0  nop
    ctx->pc = 0x2e1eb0u;
    // NOP
    // 0x2e1eb4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1EB4u;
    {
        const bool branch_taken_0x2e1eb4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1eb4) {
            ctx->pc = 0x2E1EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EB4u;
            // 0x2e1eb8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1EBCu;
            goto label_2e1ebc;
        }
    }
    ctx->pc = 0x2E1EBCu;
label_2e1ebc:
    // 0x2e1ebc: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2e1ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1ec0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e1ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1ec4: 0x0  nop
    ctx->pc = 0x2e1ec4u;
    // NOP
    // 0x2e1ec8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1EC8u;
    {
        const bool branch_taken_0x2e1ec8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1ec8) {
            ctx->pc = 0x2E1ECCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EC8u;
            // 0x2e1ecc: 0xe7a1000c  swc1        $f1, 0xC($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1ED0u;
            goto label_2e1ed0;
        }
    }
    ctx->pc = 0x2E1ED0u;
label_2e1ed0:
    // 0x2e1ed0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2e1ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1ed4: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2e1ed4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1ed8: 0x0  nop
    ctx->pc = 0x2e1ed8u;
    // NOP
    // 0x2e1edc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1EDCu;
    {
        const bool branch_taken_0x2e1edc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1edc) {
            ctx->pc = 0x2E1EE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EDCu;
            // 0x2e1ee0: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1EE4u;
            goto label_2e1ee4;
        }
    }
    ctx->pc = 0x2E1EE4u;
label_2e1ee4:
    // 0x2e1ee4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2e1ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1ee8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2e1ee8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1eec: 0x0  nop
    ctx->pc = 0x2e1eecu;
    // NOP
    // 0x2e1ef0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1EF0u;
    {
        const bool branch_taken_0x2e1ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1ef0) {
            ctx->pc = 0x2E1EF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1EF0u;
            // 0x2e1ef4: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1EF8u;
            goto label_2e1ef8;
        }
    }
    ctx->pc = 0x2E1EF8u;
label_2e1ef8:
    // 0x2e1ef8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2e1ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1efc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2e1efcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1f00: 0x0  nop
    ctx->pc = 0x2e1f00u;
    // NOP
    // 0x2e1f04: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1F04u;
    {
        const bool branch_taken_0x2e1f04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1f04) {
            ctx->pc = 0x2E1F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F04u;
            // 0x2e1f08: 0xe7a50008  swc1        $f5, 0x8($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F0Cu;
            goto label_2e1f0c;
        }
    }
    ctx->pc = 0x2E1F0Cu;
label_2e1f0c:
    // 0x2e1f0c: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2e1f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1f10: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2e1f10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1f14: 0x0  nop
    ctx->pc = 0x2e1f14u;
    // NOP
    // 0x2e1f18: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2E1F18u;
    {
        const bool branch_taken_0x2e1f18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1f18) {
            ctx->pc = 0x2E1F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F18u;
            // 0x2e1f1c: 0xe7a5000c  swc1        $f5, 0xC($sp) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1F20u;
            goto label_2e1f20;
        }
    }
    ctx->pc = 0x2E1F20u;
label_2e1f20:
    // 0x2e1f20: 0x8e250114  lw          $a1, 0x114($s1)
    ctx->pc = 0x2e1f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x2e1f24: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E1F24u;
    {
        const bool branch_taken_0x2e1f24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F24u;
        // 0x2e1f28: 0xc7a0000c  lwc1        $f0, 0xC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f24) {
            ctx->pc = 0x2E1FA0u;
            goto label_2e1fa0;
        }
    }
    ctx->pc = 0x2E1F2Cu;
    // 0x2e1f2c: 0x9222011c  lbu         $v0, 0x11C($s1)
    ctx->pc = 0x2e1f2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2e1f30: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x2e1f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
    // 0x2e1f34: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E1F34u;
    {
        const bool branch_taken_0x2e1f34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1f34) {
            ctx->pc = 0x2E1F38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1F34u;
            // 0x2e1f38: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1FA4u;
            goto label_2e1fa4;
        }
    }
    ctx->pc = 0x2E1F3Cu;
    // 0x2e1f3c: 0x90a202b6  lbu         $v0, 0x2B6($a1)
    ctx->pc = 0x2e1f3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 694)));
    // 0x2e1f40: 0x90a302b7  lbu         $v1, 0x2B7($a1)
    ctx->pc = 0x2e1f40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 695)));
    // 0x2e1f44: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2e1f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e1f48: 0x0  nop
    ctx->pc = 0x2e1f48u;
    // NOP
    // 0x2e1f4c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e1f4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e1f50: 0x90a402bc  lbu         $a0, 0x2BC($a1)
    ctx->pc = 0x2e1f50u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 700)));
    // 0x2e1f54: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2e1f54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2e1f58: 0x0  nop
    ctx->pc = 0x2e1f58u;
    // NOP
    // 0x2e1f5c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2e1f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2e1f60: 0xc4a0024c  lwc1        $f0, 0x24C($a1)
    ctx->pc = 0x2e1f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1f64: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2e1f64u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1f68: 0x0  nop
    ctx->pc = 0x2e1f68u;
    // NOP
    // 0x2e1f6c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2e1f6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2e1f70: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x2e1f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e1f74: 0x0  nop
    ctx->pc = 0x2e1f74u;
    // NOP
    // 0x2e1f78: 0x0  nop
    ctx->pc = 0x2e1f78u;
    // NOP
    // 0x2e1f7c: 0x46052103  div.s       $f4, $f4, $f5
    ctx->pc = 0x2e1f7cu;
    ctx->f[4] = ps2FpuDivide(ctx->fcr31, ctx->f[4], ctx->f[5]);
    // 0x2e1f80: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x2e1f80u;
    ctx->f[2] = ps2FpuDivide(ctx->fcr31, ctx->f[2], ctx->f[5]);
    // 0x2e1f84: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x2e1f84u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[5]);
    // 0x2e1f88: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2e1f88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2e1f8c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2e1f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2e1f90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e1f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e1f94: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2e1f94u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e1f98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1F98u;
    {
        const bool branch_taken_0x2e1f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1F98u;
        // 0x2e1f9c: 0xe7a3000c  swc1        $f3, 0xC($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1f98) {
            ctx->pc = 0x2E1FA8u;
            goto label_2e1fa8;
        }
    }
    ctx->pc = 0x2E1FA0u;
label_2e1fa0:
    // 0x2e1fa0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2e1fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2e1fa4:
    // 0x2e1fa4: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x2e1fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_2e1fa8:
    // 0x2e1fa8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2e1fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1fac: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2e1facu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1fb0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2e1fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1fb4: 0x27af0010  addiu       $t7, $sp, 0x10
    ctx->pc = 0x2e1fb4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e1fb8: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1fb8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x2e1fbc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x2e1fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e1fc0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2e1fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1fc4: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1fc4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e1fc8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2e1fc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e1fcc: 0x27ae0020  addiu       $t6, $sp, 0x20
    ctx->pc = 0x2e1fccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2e1fd0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1fd0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e1fd4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2e1fd4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e1fd8: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x2e1fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2e1fdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2e1fdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e1fe0: 0x27ad0030  addiu       $t5, $sp, 0x30
    ctx->pc = 0x2e1fe0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2e1fe4: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e1fe8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2e1fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2e1fec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2e1fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2e1ff0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2e1ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e1ff4: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x2e1ff4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x2e1ff8: 0x0  nop
    ctx->pc = 0x2e1ff8u;
    // NOP
    // 0x2e1ffc: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x2e1ffcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x2e2000: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x2e2000u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2e2004: 0x0  nop
    ctx->pc = 0x2e2004u;
    // NOP
    // 0x2e2008: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x2e2008u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x2e200c: 0x27a90040  addiu       $t1, $sp, 0x40
    ctx->pc = 0x2e200cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2e2010: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x2e2010u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2e2014: 0x0  nop
    ctx->pc = 0x2e2014u;
    // NOP
    // 0x2e2018: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2e2018u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2e201c: 0x30ac00ff  andi        $t4, $a1, 0xFF
    ctx->pc = 0x2e201cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x2e2020: 0x262a02b0  addiu       $t2, $s1, 0x2B0
    ctx->pc = 0x2e2020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 688));
    // 0x2e2024: 0x0  nop
    ctx->pc = 0x2e2024u;
    // NOP
label_2e2028:
    // 0x2e2028: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x2e2028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2e202c: 0x1eb3021  addu        $a2, $t7, $t3
    ctx->pc = 0x2e202cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
    // 0x2e2030: 0x8e2502c0  lw          $a1, 0x2C0($s1)
    ctx->pc = 0x2e2030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
    // 0x2e2034: 0x1cb3821  addu        $a3, $t6, $t3
    ctx->pc = 0x2e2034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
    // 0x2e2038: 0x46033082  mul.s       $f2, $f6, $f3
    ctx->pc = 0x2e2038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2e203c: 0x1ab4021  addu        $t0, $t5, $t3
    ctx->pc = 0x2e203cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 11)));
    // 0x2e2040: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x2e2040u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2e2044: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x2e2044u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2e2048: 0x460011e4  .word       0x460011E4                   # cvt.w.s     $f7, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2048u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[7], &tmp, sizeof(tmp)); }
    // 0x2e204c: 0x44023800  mfc1        $v0, $f7
    ctx->pc = 0x2e204cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e2050: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2050u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2e2054: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x2e2054u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e2058: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2058u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e205c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x2e205cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2e2060: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x2e2060u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2e2064: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x2e2064u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2e2068: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E2068u;
    {
        const bool branch_taken_0x2e2068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E206Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2068u;
        // 0x2e206c: 0xa1040000  sb          $a0, 0x0($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2068) {
            ctx->pc = 0x2E2090u;
            goto label_2e2090;
        }
    }
    ctx->pc = 0x2E2070u;
    // 0x2e2070: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x2e2070u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2074: 0x0  nop
    ctx->pc = 0x2e2074u;
    // NOP
    // 0x2e2078: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e2078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2e207c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2e207cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2e2080: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e2080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2e2084: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2e2084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2e2088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E2088u;
    {
        const bool branch_taken_0x2e2088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2088u;
        // 0x2e208c: 0xa1220000  sb          $v0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2088) {
            ctx->pc = 0x2E2094u;
            goto label_2e2094;
        }
    }
    ctx->pc = 0x2E2090u;
label_2e2090:
    // 0x2e2090: 0xa12c0000  sb          $t4, 0x0($t1)
    ctx->pc = 0x2e2090u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 12));
label_2e2094:
    // 0x2e2094: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x2e2094u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x2e2098: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2e2098u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x2e209c: 0x29620004  slti        $v0, $t3, 0x4
    ctx->pc = 0x2e209cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e20a0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2E20A0u;
    {
        const bool branch_taken_0x2e20a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20A0u;
        // 0x2e20a4: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20a0) {
            ctx->pc = 0x2E2028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e2028;
        }
    }
    ctx->pc = 0x2E20A8u;
    // 0x2e20a8: 0xc056c3c  jal         func_15B0F0
    ctx->pc = 0x2E20A8u;
    SET_GPR_U32(ctx, 31, 0x2E20B0u);
    ctx->pc = 0x2E20ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E20A8u;
    // 0x2e20ac: 0x24040180  addiu       $a0, $zero, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B0F0u, 0x2E20A8u, 0x2E20B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E20B0u;
label_2e20b0:
    // 0x2e20b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e20b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20b4: 0x12400116  beqz        $s2, . + 4 + (0x116 << 2)
    ctx->pc = 0x2E20B4u;
    {
        const bool branch_taken_0x2e20b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E20B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E20B4u;
        // 0x2e20b8: 0x3c025000  lui         $v0, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e20b4) {
            ctx->pc = 0x2E2510u;
            goto label_2e2510;
        }
    }
    ctx->pc = 0x2E20BCu;
    // 0x2e20bc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2e20bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2e20c0: 0x34630017  ori         $v1, $v1, 0x17
    ctx->pc = 0x2e20c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23);
    // 0x2e20c4: 0xfe430000  sd          $v1, 0x0($s2)
    ctx->pc = 0x2e20c4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 0), GPR_U64(ctx, 3));
    // 0x2e20c8: 0x34420017  ori         $v0, $v0, 0x17
    ctx->pc = 0x2e20c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x2e20cc: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x2e20ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x2e20d0: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x2e20d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x2e20d4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x2e20d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x2e20d8: 0x34028172  ori         $v0, $zero, 0x8172
    ctx->pc = 0x2e20d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33138);
    // 0x2e20dc: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2e20dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2e20e0: 0x34420006  ori         $v0, $v0, 0x6
    ctx->pc = 0x2e20e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x2e20e4: 0xac60b7a0  sw          $zero, -0x4860($v1)
    ctx->pc = 0x2e20e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948768), GPR_U32(ctx, 0));
    // 0x2e20e8: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x2e20e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2e20ec: 0xfe420010  sd          $v0, 0x10($s2)
    ctx->pc = 0x2e20ecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 16), GPR_U64(ctx, 2));
    // 0x2e20f0: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2e20f0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e20f4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e20f8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2e20f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2e20fc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2e20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x2e2100: 0x8e230110  lw          $v1, 0x110($s1)
    ctx->pc = 0x2e2100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 272)));
    // 0x2e2104: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e2104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e2108: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2e2108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2e210c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E210Cu;
    {
        const bool branch_taken_0x2e210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E210Cu;
        // 0x2e2110: 0x26500020  addiu       $s0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e210c) {
            ctx->pc = 0x2E2128u;
            goto label_2e2128;
        }
    }
    ctx->pc = 0x2E2114u;
    // 0x2e2114: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e2114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e2118: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e2118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e211c: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2e211cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e2120: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2120u;
    {
        const bool branch_taken_0x2e2120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2120u;
        // 0x2e2124: 0x24050070  addiu       $a1, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2120) {
            ctx->pc = 0x2E2140u;
            goto label_2e2140;
        }
    }
    ctx->pc = 0x2E2128u;
label_2e2128:
    // 0x2e2128: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e2128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2e212c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2e212cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e2130: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x2e2130u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e2134: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x2e2134u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x2e2138: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x2e2138u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2e213c: 0x34a50070  ori         $a1, $a1, 0x70
    ctx->pc = 0x2e213cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)112);
label_2e2140:
    // 0x2e2140: 0x2406004c  addiu       $a2, $zero, 0x4C
    ctx->pc = 0x2e2140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e2144: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x2e2144u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e2148: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e2148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e214c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x2e214cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e2150: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e2150u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e2154: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e2154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e2158: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e2158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e215c: 0xfe420020  sd          $v0, 0x20($s2)
    ctx->pc = 0x2e215cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 32), GPR_U64(ctx, 2));
    // 0x2e2160: 0xfe060008  sd          $a2, 0x8($s0)
    ctx->pc = 0x2e2160u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 6));
    // 0x2e2164: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x2e2164u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2e2168: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2e2168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e216c: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x2e216cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x2e2170: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2e2170u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2e2174: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2e2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2e2178: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2e2178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x2e217c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E217Cu;
    {
        const bool branch_taken_0x2e217c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E2180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E217Cu;
        // 0x2e2180: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e217c) {
            ctx->pc = 0x2E2194u;
            goto label_2e2194;
        }
    }
    ctx->pc = 0x2E2184u;
    // 0x2e2184: 0x82230101  lb          $v1, 0x101($s1)
    ctx->pc = 0x2e2184u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 257)));
    // 0x2e2188: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e2188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e218c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E218Cu;
    {
        const bool branch_taken_0x2e218c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E218Cu;
        // 0x2e2190: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e218c) {
            ctx->pc = 0x2E21A4u;
            goto label_2e21a4;
        }
    }
    ctx->pc = 0x2E2194u;
label_2e2194:
    // 0x2e2194: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x2e2194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x2e2198: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2e2198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
    // 0x2e219c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E219Cu;
    {
        const bool branch_taken_0x2e219c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E21A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E219Cu;
        // 0x2e21a0: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e219c) {
            ctx->pc = 0x2E21ACu;
            goto label_2e21ac;
        }
    }
    ctx->pc = 0x2E21A4u;
label_2e21a4:
    // 0x2e21a4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x2e21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x2e21a8: 0x3442000d  ori         $v0, $v0, 0xD
    ctx->pc = 0x2e21a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13);
label_2e21ac:
    // 0x2e21ac: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e21acu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e21b0: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2e21b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x2e21b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e21b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e21b8: 0x8e22011c  lw          $v0, 0x11C($s1)
    ctx->pc = 0x2e21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 284)));
    // 0x2e21bc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2e21bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2e21c0: 0x3c153a00  lui         $s5, 0x3A00
    ctx->pc = 0x2e21c0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)14848 << 16));
    // 0x2e21c4: 0x36b500f8  ori         $s5, $s5, 0xF8
    ctx->pc = 0x2e21c4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)248);
    // 0x2e21c8: 0x2416004e  addiu       $s6, $zero, 0x4E
    ctx->pc = 0x2e21c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x2e21cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e21ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2e21d0: 0xfe160008  sd          $s6, 0x8($s0)
    ctx->pc = 0x2e21d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 22));
    // 0x2e21d4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e21d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e21d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e21d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e21dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e21dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e21e0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x2e21e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x2e21e4: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e21e4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e21e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e21e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e21ec: 0xc0c00ac  jal         func_3002B0
    ctx->pc = 0x2E21ECu;
    SET_GPR_U32(ctx, 31, 0x2E21F4u);
    ctx->pc = 0x2E21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E21ECu;
    // 0x2e21f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3002B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3002B0u, 0x2E21ECu, 0x2E21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E21F4u;
label_2e21f4:
    // 0x2e21f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e21f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e21f8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x2e21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x2e21fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e21fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2200: 0xc0544da  jal         func_151368
    ctx->pc = 0x2E2200u;
    SET_GPR_U32(ctx, 31, 0x2E2208u);
    ctx->pc = 0x2E2204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2200u;
    // 0x2e2204: 0x244464a0  addiu       $a0, $v0, 0x64A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 25760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151368u, 0x2E2200u, 0x2E2208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2208u;
label_2e2208:
    // 0x2e2208: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2e2208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e220c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e220cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e2210: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x2e2210u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x2e2214: 0x8ee3b7a0  lw          $v1, -0x4860($s7)
    ctx->pc = 0x2e2214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948768)));
    // 0x2e2218: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2218u;
    {
        const bool branch_taken_0x2e2218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2218u;
        // 0x2e221c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2218) {
            ctx->pc = 0x2E222Cu;
            goto label_2e222c;
        }
    }
    ctx->pc = 0x2E2220u;
    // 0x2e2220: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2e2220u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2224: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2e2224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2e2228: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2e2228u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2e222c:
    // 0x2e222c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e222cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e2230: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2e2230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2e2234: 0x3442800c  ori         $v0, $v0, 0x800C
    ctx->pc = 0x2e2234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32780);
    // 0x2e2238: 0x240d000e  addiu       $t5, $zero, 0xE
    ctx->pc = 0x2e2238u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e223c: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e223cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e2240: 0x3c070062  lui         $a3, 0x62
    ctx->pc = 0x2e2240u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)98 << 16));
    // 0x2e2244: 0xae0d0008  sw          $t5, 0x8($s0)
    ctx->pc = 0x2e2244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 13));
    // 0x2e2248: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2e2248u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e224c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2e224cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2e2250: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x2e2250u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2254: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e2254u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2258: 0x27c8b500  addiu       $t0, $fp, -0x4B00
    ctx->pc = 0x2e2258u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 4294948096));
    // 0x2e225c: 0xc4e0b7a8  lwc1        $f0, -0x4858($a3)
    ctx->pc = 0x2e225cu;
    { uint32_t bits = FAST_READ32(0x61B7A8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2260: 0x240c0005  addiu       $t4, $zero, 0x5
    ctx->pc = 0x2e2260u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e2264: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x2e2264u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x2e2268: 0x24e9b7a8  addiu       $t1, $a3, -0x4858
    ctx->pc = 0x2e2268u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 4294948776));
    // 0x2e226c: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x2e226cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2e2270: 0x4600c002  mul.s       $f0, $f24, $f0
    ctx->pc = 0x2e2270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2e2274: 0x4615c0c0  add.s       $f3, $f24, $f21
    ctx->pc = 0x2e2274u;
    ctx->f[3] = FPU_ADD_S(ctx->f[24], ctx->f[21]);
    // 0x2e2278: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2e2278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e227c: 0x4616b880  add.s       $f2, $f23, $f22
    ctx->pc = 0x2e227cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[22]);
    // 0x2e2280: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2e2280u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2e2284: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e2284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2288: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x2e2288u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e228c: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x2e228cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2290: 0x93a40030  lbu         $a0, 0x30($sp)
    ctx->pc = 0x2e2290u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e2294: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2e2294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2e2298: 0x93a50040  lbu         $a1, 0x40($sp)
    ctx->pc = 0x2e2298u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e229c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e229cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e22a0: 0x9ce6b7a8  lwu         $a2, -0x4858($a3)
    ctx->pc = 0x2e22a0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 7), 4294948776)));
    // 0x2e22a4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e22a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e22a8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e22a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e22ac: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2e22acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2e22b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e22b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e22b4: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2e22b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2e22b8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e22b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e22bc: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x2e22bcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
    // 0x2e22c0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e22c0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e22c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e22c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e22c8: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x2e22c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x2e22cc: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x2e22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2e22d0: 0x8fc3b500  lw          $v1, -0x4B00($fp)
    ctx->pc = 0x2e22d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294948096)));
    // 0x2e22d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e22d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e22d8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e22d8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e22dc: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x2e22dcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x2e22e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e22e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e22e4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e22e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e22e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e22e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e22ec: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2e22ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2e22f0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e22f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e22f4: 0xc5200004  lwc1        $f0, 0x4($t1)
    ctx->pc = 0x2e22f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e22f8: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x2e22f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x2e22fc: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x2e22fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x2e2300: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2e2300u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e2304: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2e2304u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e2308: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2e2308u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2e230c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e230cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2310: 0x93a30021  lbu         $v1, 0x21($sp)
    ctx->pc = 0x2e2310u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x2e2314: 0x93a20011  lbu         $v0, 0x11($sp)
    ctx->pc = 0x2e2314u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x2e2318: 0x93a40031  lbu         $a0, 0x31($sp)
    ctx->pc = 0x2e2318u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x2e231c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2e231cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2e2320: 0x93a50041  lbu         $a1, 0x41($sp)
    ctx->pc = 0x2e2320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 65)));
    // 0x2e2324: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e2328: 0x9d230004  lwu         $v1, 0x4($t1)
    ctx->pc = 0x2e2328u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x2e232c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e232cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e2330: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e2330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e2334: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2e2334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2e2338: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e2338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e233c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e233cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e2340: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e2344: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x2e2344u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
    // 0x2e2348: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e2348u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e234c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e234cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2350: 0x8d040014  lw          $a0, 0x14($t0)
    ctx->pc = 0x2e2350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x2e2354: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x2e2354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x2e2358: 0x8d030010  lw          $v1, 0x10($t0)
    ctx->pc = 0x2e2358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x2e235c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e235cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e2360: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e2360u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e2364: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e2364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e2368: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e2368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e236c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e236cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e2370: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2e2370u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2e2374: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x2e2374u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x2e2378: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e2378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e237c: 0xc5200008  lwc1        $f0, 0x8($t1)
    ctx->pc = 0x2e237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2380: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x2e2380u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x2e2384: 0x4600c042  mul.s       $f1, $f24, $f0
    ctx->pc = 0x2e2384u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
    // 0x2e2388: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2e2388u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e238c: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x2e238cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2e2390: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x2e2390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e2394: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e2394u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2398: 0x93a30022  lbu         $v1, 0x22($sp)
    ctx->pc = 0x2e2398u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x2e239c: 0x93a20012  lbu         $v0, 0x12($sp)
    ctx->pc = 0x2e239cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x2e23a0: 0x93a40032  lbu         $a0, 0x32($sp)
    ctx->pc = 0x2e23a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 50)));
    // 0x2e23a4: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2e23a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2e23a8: 0x93a50042  lbu         $a1, 0x42($sp)
    ctx->pc = 0x2e23a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 66)));
    // 0x2e23ac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e23acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e23b0: 0x9d230008  lwu         $v1, 0x8($t1)
    ctx->pc = 0x2e23b0u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x2e23b4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e23b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e23b8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e23b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e23bc: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2e23bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2e23c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e23c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e23c4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2e23c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e23c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e23c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e23cc: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x2e23ccu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
    // 0x2e23d0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e23d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e23d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e23d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e23d8: 0x8d040024  lw          $a0, 0x24($t0)
    ctx->pc = 0x2e23d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x2e23dc: 0x8d020028  lw          $v0, 0x28($t0)
    ctx->pc = 0x2e23dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x2e23e0: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x2e23e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x2e23e4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e23e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e23e8: 0x2113b  dsra        $v0, $v0, 4
    ctx->pc = 0x2e23e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 4);
    // 0x2e23ec: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x2e23ecu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x2e23f0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e23f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2e23f4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2e23f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2e23f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e23f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e23fc: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x2e23fcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x2e2400: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e2400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2404: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x2e2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e2408: 0xfe0a0008  sd          $t2, 0x8($s0)
    ctx->pc = 0x2e2408u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 10));
    // 0x2e240c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x2e240cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2e2410: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2e2410u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2e2414: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x2e2414u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2e2418: 0xe6030000  swc1        $f3, 0x0($s0)
    ctx->pc = 0x2e2418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2e241c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e241cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2420: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x2e2420u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x2e2424: 0x93a20013  lbu         $v0, 0x13($sp)
    ctx->pc = 0x2e2424u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x2e2428: 0x93a40033  lbu         $a0, 0x33($sp)
    ctx->pc = 0x2e2428u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 51)));
    // 0x2e242c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2e242cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2e2430: 0x93a50043  lbu         $a1, 0x43($sp)
    ctx->pc = 0x2e2430u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 67)));
    // 0x2e2434: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e2438: 0x9d26000c  lwu         $a2, 0xC($t1)
    ctx->pc = 0x2e2438u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x2e243c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2e243cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2e2440: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e2440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e2444: 0x52e38  dsll        $a1, $a1, 24
    ctx->pc = 0x2e2444u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 24);
    // 0x2e2448: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e2448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2e244c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2e244cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2e2450: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2e2450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x2e2454: 0xfe0b0008  sd          $t3, 0x8($s0)
    ctx->pc = 0x2e2454u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 11));
    // 0x2e2458: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e2458u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e245c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e245cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e2460: 0x8d040038  lw          $a0, 0x38($t0)
    ctx->pc = 0x2e2460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x2e2464: 0x8d030034  lw          $v1, 0x34($t0)
    ctx->pc = 0x2e2464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x2e2468: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x2e2468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x2e246c: 0x4213b  dsra        $a0, $a0, 4
    ctx->pc = 0x2e246cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> 4);
    // 0x2e2470: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2e2470u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2e2474: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x2e2474u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e2478: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2e2478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2e247c: 0xfe0c0008  sd          $t4, 0x8($s0)
    ctx->pc = 0x2e247cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 12));
    // 0x2e2480: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2e2480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2e2484: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e2484u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e2488: 0x8ee3b7a0  lw          $v1, -0x4860($s7)
    ctx->pc = 0x2e2488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294948768)));
    // 0x2e248c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E248Cu;
    {
        const bool branch_taken_0x2e248c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E248Cu;
        // 0x2e2490: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e248c) {
            ctx->pc = 0x2E24A0u;
            goto label_2e24a0;
        }
    }
    ctx->pc = 0x2E2494u;
    // 0x2e2494: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2e2494u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e2498: 0x3042fffe  andi        $v0, $v0, 0xFFFE
    ctx->pc = 0x2e2498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65534);
    // 0x2e249c: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x2e249cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
label_2e24a0:
    // 0x2e24a0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2e24a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2e24a4: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x2e24a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x2e24a8: 0x34428002  ori         $v0, $v0, 0x8002
    ctx->pc = 0x2e24a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
    // 0x2e24ac: 0xae0d0008  sw          $t5, 0x8($s0)
    ctx->pc = 0x2e24acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 13));
    // 0x2e24b0: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x2e24b0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x2e24b4: 0x3c0a003c  lui         $t2, 0x3C
    ctx->pc = 0x2e24b4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)60 << 16));
    // 0x2e24b8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2e24b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2e24bc: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x2e24bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x2e24c0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e24c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e24c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x2e24c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2e24c8: 0xfe150000  sd          $s5, 0x0($s0)
    ctx->pc = 0x2e24c8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 21));
    // 0x2e24cc: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x2e24ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x2e24d0: 0xfe160008  sd          $s6, 0x8($s0)
    ctx->pc = 0x2e24d0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 22));
    // 0x2e24d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e24d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24d8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2e24d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e24dc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e24dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24e0: 0x8d431180  lw          $v1, 0x1180($t2)
    ctx->pc = 0x2e24e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x2e24e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e24e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24e8: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x2e24e8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x2e24ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e24ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e24f0: 0x103402a  slt         $t0, $t0, $v1
    ctx->pc = 0x2e24f0u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e24f4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x2e24f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x2e24f8: 0x68100b  movn        $v0, $v1, $t0
    ctx->pc = 0x2e24f8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x2e24fc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2e24fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x2e2500: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2e2500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2e2504: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2e2504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x2e2508: 0xc0bfdd2  jal         func_2FF748
    ctx->pc = 0x2E2508u;
    SET_GPR_U32(ctx, 31, 0x2E2510u);
    ctx->pc = 0x2E250Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2508u;
    // 0x2e250c: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FF748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FF748u, 0x2E2508u, 0x2E2510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E2510u;
label_2e2510:
    // 0x2e2510: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x2e2510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e2514:
    // 0x2e2514: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x2e2514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e2518:
    // 0x2e2518: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x2e2518u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e251c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2e251cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2e2520: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x2e2520u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e2524: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x2e2524u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e2528: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2e2528u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e252c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e252cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e2530: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x2e2530u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e2534: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e2534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e2538: 0xc7b80120  lwc1        $f24, 0x120($sp)
    ctx->pc = 0x2e2538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2e253c: 0xc7b70118  lwc1        $f23, 0x118($sp)
    ctx->pc = 0x2e253cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e2540: 0xc7b60110  lwc1        $f22, 0x110($sp)
    ctx->pc = 0x2e2540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e2544: 0xc7b50108  lwc1        $f21, 0x108($sp)
    ctx->pc = 0x2e2544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e2548: 0xc7b40100  lwc1        $f20, 0x100($sp)
    ctx->pc = 0x2e2548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e254c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E254Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E254Cu;
        // 0x2e2550: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E254Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2554u;
    // 0x2e2554: 0x0  nop
    ctx->pc = 0x2e2554u;
    // NOP
    ctx->pc = 0x2e2558u;
}
